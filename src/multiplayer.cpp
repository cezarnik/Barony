#include "multiplayer.h"
#include <cstdlib>
#include <exception>

namespace NMultiplayer {

namespace {
    bool client_is_local[MAXPLAYERS] = { true };
}

void markPlayerConnectedLocally(int playerNum) {
    client_is_local[playerNum] = true;
}

void markPlayerConnectedRemotely(int playerNum) {
    client_is_local[playerNum] = false;
}

bool isPlayerConnectedLocally(int playerNum) {
    return client_is_local[playerNum];
}

////////////////////////////////////////////////////////////////////////////////

void disconnectPlayer(int playerNum){
    std::abort();
}

bool isPlayerDisconnected(int playerNum){
    std::abort();
}


}