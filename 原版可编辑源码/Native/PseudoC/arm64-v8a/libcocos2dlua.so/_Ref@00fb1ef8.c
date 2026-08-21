
/* cocos2d::Ref::~Ref() */

void __thiscall cocos2d::Ref::~Ref(Ref *this)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
                    /* try { // try from 00fb1f10 to 010b1f1b has its CatchHandler @ 00fb1fac */
  *(undefined ***)this = &PTR__Ref_017236f0;
  puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
                    /* try { // try from 00fb1f1c to 010b1ff3 has its CatchHandler @ 00fb1de0 */
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
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
  return;
}

