
/* cocos2d::ActionManager::removeAllActions() */

void __thiscall cocos2d::ActionManager::removeAllActions(ActionManager *this)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x28);
  while (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + 8);
    lVar2 = *(long *)(lVar2 + 0x38);
    (**(code **)(*(long *)this + 0x20))(this,*puVar1);
                    /* try { // try from 00ee6bd4 to 00fe6beb has its CatchHandler @ 00ee6fc0 */
  }
  return;
}

