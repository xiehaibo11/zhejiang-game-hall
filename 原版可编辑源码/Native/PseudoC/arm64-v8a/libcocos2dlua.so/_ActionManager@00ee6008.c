
/* cocos2d::ActionManager::~ActionManager() */

void __thiscall cocos2d::ActionManager::~ActionManager(ActionManager *this)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 00ee5da8 with catch @ 00ee6014 */
  lVar3 = *(long *)(this + 0x28);
  ppuVar2 = &PTR__ActionManager_016f9880;
  *(undefined ***)this = &PTR__ActionManager_016f9880;
  if (lVar3 != 0) {
    while( true ) {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = *(long *)(lVar3 + 0x38);
      (*(code *)ppuVar2[4])(this,*puVar1);
      if (lVar3 == 0) break;
      ppuVar2 = *(undefined ***)this;
    }
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

