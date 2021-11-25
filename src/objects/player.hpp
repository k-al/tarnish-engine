
#include "visible.hpp"
#include "controllable.hpp"

class Player: public Visible, Controllable {
public:
    
    uint64_t speed; // how much space traveled per frame (multiplied by move_dir)
    uint64_t jump_speed; // how much space traveled at a jump per frame (multiplied by move_dir)
    uint64_t jump_duration; // how long (in frames) takes the jump
    
    Player ();
    
    ~Player ();
    
    static void default_action (Thing* obj, std::vector<bool> actions, iVec2 move_dir, iVec2 cursor_pos);
};