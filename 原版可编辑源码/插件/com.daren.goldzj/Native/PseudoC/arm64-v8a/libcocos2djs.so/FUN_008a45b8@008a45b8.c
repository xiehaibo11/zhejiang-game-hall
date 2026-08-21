
long * FUN_008a45b8(long *param_1,long *param_2)

{
  void *pvVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  bVar2 = *(byte *)(param_2 + 2);
  uVar8 = param_2[3];
  pvVar1 = (void *)param_2[4];
  if ((bVar2 & 1) == 0) {
    pvVar1 = (void *)((long)param_2 + 0x11);
    uVar8 = (ulong)(bVar2 >> 1);
  }
  lVar5 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_40,pvVar1,uVar8);
  param_2[1] = lVar5;
  plVar6 = (long *)FUN_008a46f8(param_1,lVar5,param_2 + 2);
  if (plVar6 != (long *)0x0) {
    uVar7 = 0;
    param_2 = plVar6;
    goto LAB_008a46c8;
  }
  uVar8 = param_1[1];
  uVar10 = param_2[1];
  uVar9 = uVar8 - 1;
  if ((uVar9 & uVar8) == 0) {
    uVar10 = uVar9 & uVar10;
  }
  else if (uVar8 <= uVar10) {
    uVar3 = 0;
    if (uVar8 != 0) {
      uVar3 = uVar10 / uVar8;
    }
    uVar10 = uVar10 - uVar3 * uVar8;
  }
  puVar11 = *(undefined8 **)(*param_1 + uVar10 * 8);
  if (puVar11 == (undefined8 *)0x0) {
    plVar12 = param_1 + 2;
    *param_2 = *plVar12;
    *plVar12 = (long)param_2;
    *(long **)(*param_1 + uVar10 * 8) = plVar12;
    if (*param_2 != 0) {
      uVar10 = *(ulong *)(*param_2 + 8);
      if ((uVar9 & uVar8) == 0) {
        uVar10 = uVar10 & uVar9;
      }
      else if (uVar8 <= uVar10) {
        uVar9 = 0;
        if (uVar8 != 0) {
          uVar9 = uVar10 / uVar8;
        }
        uVar10 = uVar10 - uVar9 * uVar8;
      }
      puVar11 = (undefined8 *)(*param_1 + uVar10 * 8);
      goto LAB_008a46b4;
    }
  }
  else {
    *param_2 = *puVar11;
LAB_008a46b4:
    *puVar11 = param_2;
  }
  uVar7 = 1;
  param_1[3] = param_1[3] + 1;
LAB_008a46c8:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar6,uVar7);
}

