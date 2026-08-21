
byte * FUN_011dfbf8(long *param_1,long *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,uint param_7)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  char *__ptr;
  long *plVar8;
  long *plVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  char *pcVar13;
  ulong uVar14;
  ulong __size;
  long local_e0;
  char acStack_cc [100];
  long local_68;
  
  lVar3 = tpidr_el0;
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  local_68 = *(long *)(lVar3 + 0x28);
  if (__size < 0x65) {
    __ptr = (char *)0x0;
    pcVar1 = acStack_cc;
  }
  else {
    __ptr = malloc(__size);
    pcVar1 = __ptr;
    if (__ptr == (char *)0x0) {
      std::__throw_bad_alloc();
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
  }
  if (param_3 != param_4) {
    local_e0 = 0;
    bVar2 = *param_3;
    pbVar12 = param_3;
    pcVar13 = pcVar1;
    if ((bVar2 & 1) == 0) goto LAB_011dfcbc;
LAB_011dfcc8:
    if (*(long *)(pbVar12 + 8) == 0) goto LAB_011dfc98;
    do {
      *pcVar13 = '\x01';
      while( true ) {
        pbVar12 = pbVar12 + 0x18;
        pcVar13 = pcVar13 + 1;
        if (param_4 == pbVar12) goto LAB_011dfcec;
        bVar2 = *pbVar12;
        if ((bVar2 & 1) != 0) goto LAB_011dfcc8;
LAB_011dfcbc:
        if (bVar2 >> 1 != 0) break;
LAB_011dfc98:
        __size = __size - 1;
        local_e0 = local_e0 + 1;
        *pcVar13 = '\x02';
      }
    } while( true );
  }
  local_e0 = 0;
LAB_011dfcec:
  uVar14 = 0;
LAB_011dfcf4:
  plVar8 = (long *)*param_1;
  if (plVar8 != (long *)0x0) goto LAB_011dfd1c;
LAB_011dfdc0:
  plVar9 = (long *)0x0;
  bVar5 = true;
  plVar8 = param_2;
  if (param_2 == (long *)0x0) goto LAB_011dfd5c;
LAB_011dfdc8:
  if ((int *)plVar8[3] == (int *)plVar8[4]) {
    iVar7 = (**(code **)(*plVar8 + 0x48))(plVar8);
    plVar9 = (long *)*param_1;
  }
  else {
    iVar7 = *(int *)plVar8[3];
  }
  bVar4 = iVar7 == -1;
  param_2 = (long *)0x0;
  if (!bVar4) {
    param_2 = plVar8;
  }
  if (__size != 0) {
    while( true ) {
      if (!(bool)(bVar5 ^ bVar4)) goto LAB_011dff60;
      if ((int *)plVar9[3] == (int *)plVar9[4]) {
        iVar7 = (**(code **)(*plVar9 + 0x48))();
      }
      else {
        iVar7 = *(int *)plVar9[3];
      }
      if ((param_7 & 1) == 0) {
        iVar7 = (**(code **)(*param_5 + 0x38))(param_5,iVar7);
      }
      uVar14 = uVar14 + 1;
      if (param_3 != param_4) break;
      plVar8 = (long *)*param_1;
      if (plVar8 == (long *)0x0) goto LAB_011dfdc0;
LAB_011dfd1c:
      if ((int *)plVar8[3] == (int *)plVar8[4]) {
        iVar7 = (**(code **)(*plVar8 + 0x48))();
      }
      else {
        iVar7 = *(int *)plVar8[3];
      }
      if (iVar7 == -1) {
        *param_1 = 0;
        goto LAB_011dfdc0;
      }
      plVar9 = (long *)*param_1;
      bVar5 = plVar9 == (long *)0x0;
      plVar8 = param_2;
      if (param_2 != (long *)0x0) goto LAB_011dfdc8;
LAB_011dfd5c:
      bVar4 = true;
      if (__size == 0) goto LAB_011dff60;
    }
    bVar5 = false;
    pcVar13 = pcVar1;
    pbVar12 = param_3;
    do {
      if (*pcVar13 == '\x01') {
        if ((*pbVar12 & 1) == 0) {
          pbVar10 = pbVar12 + 4;
        }
        else {
          pbVar10 = *(byte **)(pbVar12 + 0x10);
        }
        iVar6 = *(int *)(pbVar10 + uVar14 * 4 + -4);
        if ((param_7 & 1) == 0) {
          iVar6 = (**(code **)(*param_5 + 0x38))();
        }
        if (iVar7 == iVar6) {
          if ((*pbVar12 & 1) == 0) {
            uVar11 = (ulong)(*pbVar12 >> 1);
          }
          else {
            uVar11 = *(ulong *)(pbVar12 + 8);
          }
          if (uVar11 == uVar14) {
            *pcVar13 = '\x02';
            __size = __size - 1;
            local_e0 = local_e0 + 1;
          }
          bVar5 = true;
        }
        else {
          __size = __size - 1;
          *pcVar13 = '\0';
        }
      }
      pbVar12 = pbVar12 + 0x18;
      pcVar13 = pcVar13 + 1;
    } while (param_4 != pbVar12);
    if (bVar5) {
      plVar8 = (long *)*param_1;
      if (plVar8[3] == plVar8[4]) {
        (**(code **)(*plVar8 + 0x50))();
      }
      else {
        plVar8[3] = plVar8[3] + 4;
      }
      pbVar12 = param_3;
      pcVar13 = pcVar1;
      if (1 < local_e0 + __size) {
        do {
          if (*pcVar13 == '\x02') {
            if ((*pbVar12 & 1) == 0) {
              uVar11 = (ulong)(*pbVar12 >> 1);
            }
            else {
              uVar11 = *(ulong *)(pbVar12 + 8);
            }
            if (uVar11 != uVar14) {
              local_e0 = local_e0 + -1;
              *pcVar13 = '\0';
            }
          }
          pbVar12 = pbVar12 + 0x18;
          pcVar13 = pcVar13 + 1;
        } while (param_4 != pbVar12);
      }
    }
    goto LAB_011dfcf4;
  }
LAB_011dff60:
  if (plVar9 == (long *)0x0) {
LAB_011dffb4:
    bVar5 = true;
    if (param_2 != (long *)0x0) goto LAB_011dffbc;
LAB_011dffa4:
    if (!bVar5) goto joined_r0x011e0008;
  }
  else {
    if ((int *)plVar9[3] == (int *)plVar9[4]) {
      iVar7 = (**(code **)(*plVar9 + 0x48))();
    }
    else {
      iVar7 = *(int *)plVar9[3];
    }
    if (iVar7 == -1) {
      *param_1 = 0;
      goto LAB_011dffb4;
    }
    bVar5 = *param_1 == 0;
    if (param_2 == (long *)0x0) goto LAB_011dffa4;
LAB_011dffbc:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    if (bVar5 != (iVar7 == -1)) goto joined_r0x011e0008;
  }
  *param_6 = *param_6 | 2;
joined_r0x011e0008:
  for (; param_3 != param_4; param_3 = param_3 + 0x18) {
    if (*pcVar1 == '\x02') goto joined_r0x011e0034;
    pcVar1 = pcVar1 + 1;
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x011e0034:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

