
/* cocos2d::ui::EditBoxImplCommon::editBoxEditingDidBegin() */

void __thiscall cocos2d::ui::EditBoxImplCommon::editBoxEditingDidBegin(EditBoxImplCommon *this)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 local_c8 [2];
  int *local_c0;
  int local_b8 [18];
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
                    /* try { // try from 00def2a8 to 00eef2af has its CatchHandler @ 00def2b0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00def2a8 with catch @ 00def2b0
                        */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)EditBox::getDelegate(*(EditBox **)(this + 0x10));
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(this + 0x10));
  }
  lVar4 = *(long *)(this + 0x10);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x5cc) != 0)) {
    local_b8[0] = *(int *)(lVar4 + 0x5cc);
    local_70 = lVar4;
    __strncpy_chk2((ulong)local_b8 | 4,"began",0x40,0x40,6);
    uStack_50 = 0;
    local_58 = 0;
    uStack_60 = 0;
    local_68 = 0;
    uStack_30 = 0;
    local_38 = 0;
    uStack_40 = 0;
    local_48 = 0;
    local_c8[0] = 9;
    local_c0 = local_b8;
    puVar3 = (undefined8 *)ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar3 + 0x78))((long *)*puVar3,local_c8);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

