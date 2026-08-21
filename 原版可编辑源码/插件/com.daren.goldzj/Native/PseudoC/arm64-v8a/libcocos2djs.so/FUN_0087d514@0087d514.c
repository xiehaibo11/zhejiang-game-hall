
long FUN_0087d514(long *param_1,long *param_2)

{
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  bVar3 = *(byte *)(param_2 + 2);
  uVar1 = param_2[3];
  pvVar2 = (void *)param_2[4];
  if ((bVar3 & 1) == 0) {
    pvVar2 = (void *)((long)param_2 + 0x11);
    uVar1 = (ulong)(bVar3 >> 1);
  }
  lVar5 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_40,pvVar2,uVar1);
  param_2[1] = lVar5;
  plVar6 = (long *)FUN_0087d678(param_1,lVar5,param_2 + 2);
  uVar7 = param_1[1];
  uVar8 = param_2[1];
  uVar9 = uVar7 - 1;
  uVar1 = uVar9 & uVar7;
  if (uVar1 == 0) {
    uVar8 = uVar9 & uVar8;
  }
  else if (uVar7 <= uVar8) {
    uVar10 = 0;
    if (uVar7 != 0) {
      uVar10 = uVar8 / uVar7;
    }
    uVar8 = uVar8 - uVar10 * uVar7;
  }
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    *(long **)(*param_1 + uVar8 * 8) = plVar6;
    if (*param_2 != 0) {
      uVar8 = *(ulong *)(*param_2 + 8);
      if (uVar1 == 0) {
        uVar8 = uVar8 & uVar9;
      }
      else if (uVar7 <= uVar8) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar1 * uVar7;
      }
      *(long **)(*param_1 + uVar8 * 8) = param_2;
    }
  }
  else {
    *param_2 = *plVar6;
    *plVar6 = (long)param_2;
    if (*param_2 != 0) {
      uVar10 = *(ulong *)(*param_2 + 8);
      if (uVar1 == 0) {
        uVar10 = uVar10 & uVar9;
      }
      else if (uVar7 <= uVar10) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar10 / uVar7;
        }
        uVar10 = uVar10 - uVar1 * uVar7;
      }
      if (uVar10 != uVar8) {
        *(long **)(*param_1 + uVar10 * 8) = param_2;
      }
    }
  }
  param_1[3] = param_1[3] + 1;
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)param_2;
}

