
/* cocos2d::ActionManager::resumeTargets(cocos2d::Vector<cocos2d::Node*> const&) */

void __thiscall cocos2d::ActionManager::resumeTargets(ActionManager *this,Vector *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
                    /* try { // try from 00ee6618 to 00fe6627 has its CatchHandler @ 00ee670c */
                    /* try { // try from 00ee6628 to 00fe677b has its CatchHandler @ 00ee640c */
  for (puVar2 = *(undefined8 **)param_1; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)this + 0x70))(this,*puVar2);
  }
  return;
}

