
#ifndef PLAYLIST_LIST_VIEW_H_
#define PLAYLIST_LIST_VIEW_H_

#include <QWidget>
#include <QObject>
#include <QLineEdit>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QHBoxLayout>

#include "PlaylistModel.h"

class PlaylistListView : public QWidget
{
    Q_OBJECT

public:
    PlaylistListView(QWidget *parent = 0);

    ~PlaylistListView();

    QString GetNewPlaylistName() const;

    void AddNewPlaylist(const QString &playlist);

    void RemovePlaylist();

    int GetNewPlaylistId() const;

signals:
    void OnAddPlaylistEvent();

    void OnEditPlaylistEvent();

    void OnRemovePlaylistEvent();

    void OnPlayPlaylistEvent();

    void OnCloseEvent();

private:
    void m_CreateAddPlaylistLayout();
    void m_CreateMainLayout();
    void m_CreateButtonBoxLayout();
    void m_ConnectEvents();

    QGridLayout *m_addPlaylistLayout;
    QVBoxLayout *m_verticalLayout;
    QHBoxLayout *m_buttonBoxLayout;
    QTableWidget *m_playlistTable;
    QLabel *m_playlistNameLabel;
    QLineEdit *m_playlistNameEdit;
    QPushButton *m_addPlaylistButton;
    QPushButton *m_delPlaylistButton;
    QPushButton *m_closeButton;
    QPushButton *m_playPlaylistButton;
    QPushButton *m_editPlaylistButton;
};

#endif  // PlaylistListView.h
