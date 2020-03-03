#include "PlaylistListController.h"

PlaylistListController::PlaylistListController(std::vector<std::shared_ptr<PlaylistModel>> model,
    PlaylistListView *view):
    m_model(model),
    m_view(view)
{
    connect(m_view, &PlaylistListView::OnAddPlaylistEvent, this,
            &PlaylistListController::m_OnAddPlaylistEvent);
    connect(m_view, &PlaylistListView::OnRemovePlaylistEvent, this,
            &PlaylistListController::m_OnRemovePlaylistEvent);
    connect(m_view, &PlaylistListView::OnEditPlaylistEvent, this,
            &PlaylistListController::m_OnEditPlaylistEvent);
    connect(m_view, &PlaylistListView::OnPlayPlaylistEvent, this,
            &PlaylistListController::m_OnPlayPlaylistEvent);
    connect(m_view, &PlaylistListView::OnCloseEvent, this,
            &PlaylistListController::OnCloseEvent);
}

PlaylistListController::~PlaylistListController()
{
}

void PlaylistListController::ShowView()
{
    m_view->show();
}

void PlaylistListController::HideView()
{
    m_view->hide();
}

void PlaylistListController::m_OnRemovePlaylistEvent()
{

}

void PlaylistListController::m_OnEditPlaylistEvent()
{

}

void PlaylistListController::m_OnPlayPlaylistEvent()
{
    return;
}

void PlaylistListController::m_OnAddPlaylistEvent()
{
    QString newPlaylistName = m_view->GetNewPlaylistName();
    int newPlaylistId = m_view->GetNewPlaylistId();

    std::shared_ptr<PlaylistModel> newPlaylist =
        std::make_shared<PlaylistModel>(newPlaylistName, newPlaylistId);
    m_currentPlaylist = newPlaylist;
    emit OnAddPlaylistEvent();
}

void PlaylistListController::m_InsertPlaylists()
{
    for (auto playlist : m_model)
    {
        if (m_view)
        {
            m_view->AddNewPlaylist(playlist->GetName());
        }
    }
}

std::shared_ptr<PlaylistModel> PlaylistListController::GetCurrentPlaylist() const
{
    return m_currentPlaylist;
}
