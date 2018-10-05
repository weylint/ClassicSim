
#include "BattleStance.h"
#include "Warrior.h"

BattleStance::BattleStance(Engine* engine, Character* pchar, CombatRoll* roll) :
    Spell("Battle Stance", engine, pchar, roll, true, 0.0, 0),
    warr(dynamic_cast<Warrior*>(pchar))
{}

bool BattleStance::is_ready_spell_specific() const {
    return !warr->in_battle_stance() && !warr->on_stance_cooldown();
}

void BattleStance::spell_effect() {
    warr->switch_to_battle_stance();
}