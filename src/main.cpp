#include <iostream>
#include <string>

#include "game/Game.hpp"
#include "game/Board.hpp"
#include "game/XmlRpc.hpp"

int main(){
    Board b;
    b.place_pawn(0, Field::WHITE);
    auto fields = b.get_fields_for_gui();
    xml_rpc(fields);
}
