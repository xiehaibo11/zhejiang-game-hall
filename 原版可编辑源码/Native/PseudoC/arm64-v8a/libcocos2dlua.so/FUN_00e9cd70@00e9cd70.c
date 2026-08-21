
void FUN_00e9cd70(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 local_38;
  undefined8 **ppuStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x18);
  plVar2 = *(long **)(lVar5 + 0xb0);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(lVar5 + 0x70) == 0) goto LAB_00e9cdbc;
    pcVar6 = *(code **)(lVar5 + 0x78);
    uVar7 = *(ulong *)(lVar5 + 0x80) & 1;
    if (uVar7 == 0 && pcVar6 == (code *)0x0) goto LAB_00e9cdbc;
    plVar2 = (long *)(*(long *)(lVar5 + 0x70) + ((long)*(ulong *)(lVar5 + 0x80) >> 1));
    if (uVar7 != 0) {
      pcVar6 = *(code **)(pcVar6 + *plVar2);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    pppuVar3 = *(undefined8 ****)(param_1 + 8);
  }
  else {
    local_38 = *(undefined8 *)(param_1 + 0x10);
    puVar4 = &local_38;
    pcVar6 = *(code **)(*plVar2 + 0x30);
    pppuVar3 = &ppuStack_30;
    ppuStack_30 = *(undefined8 ****)(param_1 + 8);
  }
  (*pcVar6)(plVar2,pppuVar3,puVar4);
LAB_00e9cdbc:
  cocos2d::Ref::release(*(Ref **)(param_1 + 0x10));
  cocos2d::Ref::release(*(Ref **)(param_1 + 0x18));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

