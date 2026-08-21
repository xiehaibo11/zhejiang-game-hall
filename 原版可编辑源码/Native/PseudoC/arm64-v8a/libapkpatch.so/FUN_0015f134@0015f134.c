
void FUN_0015f134(ulong param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
                 undefined8 param_6)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long local_70;
  long local_68;
  byte *pbVar10;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
LAB_0015f254:
    __cxa_begin_catch(param_6);
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  uVar8 = param_3 & 0xf;
  uVar5 = 0;
  uVar6 = 0;
  pbVar10 = (byte *)(param_2 + ~param_1);
  do {
    do {
      pbVar9 = pbVar10 + 1;
      bVar1 = *pbVar10;
      uVar7 = ((ulong)bVar1 & 0x7f) << (uVar5 & 0x3f) | uVar6;
      uVar5 = uVar5 + 7;
      uVar6 = uVar7;
      pbVar10 = pbVar9;
    } while ((char)bVar1 < '\0');
    if (uVar7 == 0) break;
    if ((0xc < (uint)uVar8) || ((0x1c1dU >> uVar8 & 1) == 0)) {
      FUN_0015ed84(1,param_6);
      goto LAB_0015f254;
    }
    local_70 = param_2 + *(long *)(&DAT_00120570 + uVar8 * 8) * uVar7;
    plVar3 = (long *)FUN_0015efc0(&local_70,param_3 & 0xffffffff);
    local_70 = param_5;
    uVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,param_4,&local_70);
    uVar5 = 0;
    uVar6 = 0;
  } while ((uVar4 & 1) == 0);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7 == 0);
}

