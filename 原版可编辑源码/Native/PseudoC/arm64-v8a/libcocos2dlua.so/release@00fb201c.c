
/* cocos2d::Ref::release() */

void __thiscall cocos2d::Ref::release(Ref *this)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  iVar1 = *(int *)(this + 8);
  *(int *)(this + 8) = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
  plVar3 = (long *)*puVar2;
  if ((plVar3 != (long *)0x0) && (iVar1 = (**(code **)(*plVar3 + 0x10))(plVar3), iVar1 == 2)) {
    (**(code **)(*plVar3 + 0xb0))(plVar3,this);
  }
                    /* WARNING: Could not recover jumptable at 0x00fb2094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 8))(this);
  return;
}

