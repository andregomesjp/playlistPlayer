#include "PlaylistModel.h"

PlaylistModel::PlaylistModel(const QString &name):
    m_name(name)
{
}

QString PlaylistModel::GetName() const
{
    return m_name;
}

PlaylistModel::~PlaylistModel()
{
}
