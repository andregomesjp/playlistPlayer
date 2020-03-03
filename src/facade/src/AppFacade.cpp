#include "AppFacade.h"

AppFacade::AppFacade():
    m_listViewController(nullptr),
    m_listView(nullptr)
{
    std::shared_ptr<PlaylistModel> playlistModel =
        std::make_shared<PlaylistModel>("", 0);
    m_playlistModelList.emplace_back(playlistModel);
    m_InitializeListView();
    m_InitializeListController();
    m_listViewController->ShowView();
}

void AppFacade::m_InitializeListView()
{
    m_listView = new PlaylistListView();
}

void AppFacade::m_InitializeListController()
{
    m_listViewController = std::unique_ptr<PlaylistListController>(
        new PlaylistListController(m_playlistModelList, m_listView));
    connect(m_listViewController.get(), &PlaylistListController::OnAddPlaylistEvent, this,
            &AppFacade::OnAddNewPlaylistEvent);
}

AppFacade::~AppFacade()
{
}

void AppFacade::OnAddNewPlaylistEvent()
{
}
