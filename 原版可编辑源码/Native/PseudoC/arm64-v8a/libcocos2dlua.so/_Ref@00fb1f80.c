
/* cocos2d::Ref::~Ref() */

void __thiscall cocos2d::Ref::~Ref(Ref *this)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
                    /* catch() { ... } // from try @ 00fb1ef0 with catch @ 00fb1f98 */
  *(undefined ***)this = &PTR__Ref_017236f0;
  puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
  plVar3 = (long *)*puVar2;
                    /* catch() { ... } // from try @ 00fb1ee0 with catch @ 00fb1fa8 */
  if (plVar3 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00fb1f10 with catch @ 00fb1fac */
    if (*(int *)(this + 0x10) == 0) {
      iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (iVar1 == 2) {
        (**(code **)(*plVar3 + 0x48))(plVar3,this);
      }
    }
    else {
      (**(code **)(*plVar3 + 0x48))(plVar3,this);
    }
  }
  operator_delete(this);
  return;
}

