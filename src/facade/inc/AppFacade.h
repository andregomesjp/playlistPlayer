#ifndef APP_FACADE_H_
#define APP_FACADE_H_

#include <QObject>
#include <memory>

#include "PlaylistListView.h"
#include "PlaylistModel.h"
#include "PlaylistListController.h"

class AppFacade : public QObject
{
    Q_OBJECT
public:
    AppFacade();
    ~AppFacade();
    void OnAddNewPlaylistEvent();
private:
    void m_InitializeListView();
    void m_InitializeListController();
    void m_OnListViewCloseEvent();

    std::vector<std::shared_ptr<PlaylistModel>> m_playlistModelList;
    std::unique_ptr<PlaylistListController> m_listViewController;
    PlaylistListView *m_listView;
};

#endif
