
/* cocos2d::CallFuncN::execute() */

void __thiscall cocos2d::CallFuncN::execute(CallFuncN *this)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 local_30;
  long local_28;
  
  puVar2 = &local_30;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcVar4 = *(code **)(this + 0x60);
  uVar5 = *(ulong *)(this + 0x68) & 1;
  if (uVar5 == 0 && pcVar4 == (code *)0x0) {
    plVar3 = *(long **)(this + 0xc0);
    if (plVar3 == (long *)0x0) goto LAB_00edae88;
    local_30 = *(undefined8 *)(this + 0x38);
    pcVar4 = *(code **)(*plVar3 + 0x30);
  }
  else {
    plVar3 = (long *)(*(long *)(this + 0x58) + ((long)*(ulong *)(this + 0x68) >> 1));
    if (uVar5 != 0) {
      pcVar4 = *(code **)(pcVar4 + *plVar3);
    }
    puVar2 = *(undefined8 **)(this + 0x38);
  }
  (*pcVar4)(plVar3,puVar2);
LAB_00edae88:
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00edb148 with catch @ 00edaea4
                       catch() { ... } // from try @ 00edb1fc with catch @ 00edaea4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

