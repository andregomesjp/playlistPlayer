#ifndef PLAYLIST_MODEL_H_
#define PLAYLIST_MODEL_H_

#include <memory>
#include <vector>

#include <QString>

class PlaylistModel
{
public:
    explicit PlaylistModel(const QString &name);
    virtual ~PlaylistModel();

    QString GetName() const;
private:
    QString m_name;
};

#endif // PLAYLIST_H_
