#ifndef PLAYLIST_LIST_CONTROLLER_H_
#define PLAYLIST_LIST_CONTROLLER_H_

#include "PlaylistListView.h"
#include "PlaylistModel.h"

#include <memory>
#include <vector>

#include <QObject>

class PlaylistListController : public QObject
{
    Q_OBJECT
public:
    PlaylistListController(std::vector<std::shared_ptr<PlaylistModel>> model,
                           PlaylistListView *view);
    ~PlaylistListController();

    void ShowView();

    void HideView();

    std::shared_ptr<PlaylistModel> GetCurrentPlaylist() const;

signals:
    void OnAddPlaylistEvent();
    void OnCloseEvent();

private:
    void m_OnAddPlaylistEvent();
    void m_OnRemovePlaylistEvent();
    void m_OnEditPlaylistEvent();
    void m_OnPlayPlaylistEvent();
    void m_InsertPlaylists();
    std::vector<std::shared_ptr<PlaylistModel>> m_model;
    PlaylistListView *m_view;
    std::shared_ptr<PlaylistModel> m_currentPlaylist;
};

#endif
