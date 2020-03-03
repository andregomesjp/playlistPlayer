#ifndef PLAYLIST_MODEL_H_
#define PLAYLIST_MODEL_H_

#include <memory>
#include <vector>

#include <QString>

class PlaylistModel
{
public:
    explicit PlaylistModel(const QString &name);
    PlaylistModel(const QString &name, const int &id);
    virtual ~PlaylistModel();

    QString GetName() const;
    int GetId() const;
    void SetId(const int &id);
private:
    QString m_name;
    int m_id;
};

#endif // PLAYLIST_H_
