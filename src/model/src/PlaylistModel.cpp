#include "PlaylistModel.h"

PlaylistModel::PlaylistModel(const QString &name):
    m_name(name),
    m_id(-1)
{
}


PlaylistModel::PlaylistModel(const QString &name, const int &id):
    m_name(name),
    m_id(id)
{
}

QString PlaylistModel::GetName() const
{
    return m_name;
}

PlaylistModel::~PlaylistModel()
{
}

int PlaylistModel::GetId() const
{
    return m_id;
}

void PlaylistModel::SetId(const int &id)
{
    m_id = id;
}
