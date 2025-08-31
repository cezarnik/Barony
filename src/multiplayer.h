#ifdef BARONY_SUPER_MULTIPLAYER
#define MAXPLAYERS 8
#else
#define MAXPLAYERS 4
#endif

namespace NMultiplayer {

    void markPlayerConnectedLocally(int playerNum);

    void markPlayerConnectedRemotely(int playerNum);
    bool isPlayerConnectedLocally(int playerNum);

////////////////////////////////////////////////////////////////////////////////
// TODO(cezarnik): implement these functions.
    void disconnectPlayer(int playerNum);

    bool isPlayerDisconnected(int playerNum);
}