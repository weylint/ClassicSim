#ifndef TESTOVERPOWER_H
#define TESTOVERPOWER_H

#include "TestSpellWarrior.h"

class TestOverpower: public TestSpellWarrior {
public:
    TestOverpower(EquipmentDb *equipment_db);

    void test_all();

    Overpower* overpower();

    void test_name_correct();
    void test_has_5_second_cooldown();
    void test_incurs_global_cooldown_on_use();
    void test_costs_5_rage();
    void test_hit_dmg();
    void test_crit_dmg_0_of_2_impale();
    void test_crit_dmg_1_of_2_impale();
    void test_crit_dmg_2_of_2_impale();
    void test_overpower_hit_removes_buff();
    void test_overpower_crit_removes_buff();
    void test_overpower_miss_removes_buff();

    void when_overpower_is_performed();
    void when_overpower_buff_is_applied();

    void then_overpower_is_inactive();
private:
};

#endif // TESTOVERPOWER_H
