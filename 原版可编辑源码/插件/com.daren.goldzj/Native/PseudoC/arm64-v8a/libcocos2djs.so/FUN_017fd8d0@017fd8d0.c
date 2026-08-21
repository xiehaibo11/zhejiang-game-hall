
byte * FUN_017fd8d0(long *param_1,long *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,uint param_7)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  char *__ptr;
  long *plVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  char *pcVar12;
  ulong uVar13;
  ulong __size;
  long local_e0;
  char local_cc [100];
  long local_68;
  
  lVar2 = tpidr_el0;
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  local_68 = *(long *)(lVar2 + 0x28);
  if (__size < 0x65) {
    __ptr = (char *)0x0;
    pcVar1 = local_cc;
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
  if (param_3 == param_4) {
    local_e0 = 0;
  }
  else {
    local_e0 = 0;
    pbVar11 = param_3;
    pcVar12 = pcVar1;
    do {
      if ((*pbVar11 & 1) == 0) {
        if (*pbVar11 >> 1 != 0) goto LAB_017fd974;
LAB_017fd984:
        __size = __size - 1;
        local_e0 = local_e0 + 1;
        *pcVar12 = '\x02';
      }
      else {
        if (*(long *)(pbVar11 + 8) == 0) goto LAB_017fd984;
LAB_017fd974:
        *pcVar12 = '\x01';
      }
      pbVar11 = pbVar11 + 0x18;
      pcVar12 = pcVar12 + 1;
    } while (param_4 != pbVar11);
  }
  uVar13 = 0;
  do {
    plVar8 = (long *)*param_1;
    if (plVar8 == (long *)0x0) {
LAB_017fda80:
      plVar8 = (long *)0x0;
      bVar5 = true;
      if (param_2 == (long *)0x0) goto LAB_017fda0c;
LAB_017fda88:
      if ((int *)param_2[3] == (int *)param_2[4]) {
        iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
        plVar8 = (long *)*param_1;
      }
      else {
        iVar7 = *(int *)param_2[3];
      }
      bVar4 = iVar7 == -1;
      plVar3 = (long *)0x0;
      if (!bVar4) {
        plVar3 = param_2;
      }
    }
    else {
      if ((int *)plVar8[3] == (int *)plVar8[4]) {
        iVar7 = (**(code **)(*plVar8 + 0x48))();
      }
      else {
        iVar7 = *(int *)plVar8[3];
      }
      if (iVar7 == -1) {
        *param_1 = 0;
        goto LAB_017fda80;
      }
      plVar8 = (long *)*param_1;
      bVar5 = plVar8 == (long *)0x0;
      if (param_2 != (long *)0x0) goto LAB_017fda88;
LAB_017fda0c:
      bVar4 = true;
      plVar3 = param_2;
    }
    param_2 = plVar3;
    if ((__size == 0) || (!(bool)(bVar5 ^ bVar4))) break;
    if ((int *)plVar8[3] == (int *)plVar8[4]) {
      iVar7 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      iVar7 = *(int *)plVar8[3];
    }
    if ((param_7 & 1) == 0) {
      iVar7 = (**(code **)(*param_5 + 0x38))(param_5,iVar7);
    }
    uVar13 = uVar13 + 1;
    if (param_3 != param_4) {
      bVar5 = false;
      pcVar12 = pcVar1;
      pbVar11 = param_3;
      do {
        if (*pcVar12 == '\x01') {
          if ((*pbVar11 & 1) == 0) {
            pbVar9 = pbVar11 + 4;
          }
          else {
            pbVar9 = *(byte **)(pbVar11 + 0x10);
          }
          iVar6 = *(int *)(pbVar9 + uVar13 * 4 + -4);
          if ((param_7 & 1) == 0) {
            iVar6 = (**(code **)(*param_5 + 0x38))();
          }
          if (iVar7 == iVar6) {
            if ((*pbVar11 & 1) == 0) {
              uVar10 = (ulong)(*pbVar11 >> 1);
            }
            else {
              uVar10 = *(ulong *)(pbVar11 + 8);
            }
            if (uVar10 == uVar13) {
              *pcVar12 = '\x02';
              __size = __size - 1;
              local_e0 = local_e0 + 1;
            }
            bVar5 = true;
          }
          else {
            __size = __size - 1;
            *pcVar12 = '\0';
          }
        }
        pbVar11 = pbVar11 + 0x18;
        pcVar12 = pcVar12 + 1;
      } while (param_4 != pbVar11);
      if (bVar5) {
        plVar8 = (long *)*param_1;
        if (plVar8[3] == plVar8[4]) {
          (**(code **)(*plVar8 + 0x50))();
        }
        else {
          plVar8[3] = plVar8[3] + 4;
        }
        pbVar11 = param_3;
        pcVar12 = pcVar1;
        if (1 < local_e0 + __size) {
          do {
            if (*pcVar12 == '\x02') {
              if ((*pbVar11 & 1) == 0) {
                uVar10 = (ulong)(*pbVar11 >> 1);
              }
              else {
                uVar10 = *(ulong *)(pbVar11 + 8);
              }
              if (uVar10 != uVar13) {
                local_e0 = local_e0 + -1;
                *pcVar12 = '\0';
              }
            }
            pbVar11 = pbVar11 + 0x18;
            pcVar12 = pcVar12 + 1;
          } while (param_4 != pbVar11);
        }
      }
    }
  } while( true );
  if (plVar8 == (long *)0x0) {
LAB_017fdc6c:
    bVar5 = true;
    if (param_2 == (long *)0x0) goto LAB_017fdc5c;
LAB_017fdc74:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar7 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar7 = *(int *)param_2[3];
    }
    if (bVar5 != (iVar7 == -1)) goto joined_r0x017fdcc0;
  }
  else {
    if ((int *)plVar8[3] == (int *)plVar8[4]) {
      iVar7 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      iVar7 = *(int *)plVar8[3];
    }
    if (iVar7 == -1) {
      *param_1 = 0;
      goto LAB_017fdc6c;
    }
    bVar5 = *param_1 == 0;
    if (param_2 != (long *)0x0) goto LAB_017fdc74;
LAB_017fdc5c:
    if (!bVar5) goto joined_r0x017fdcc0;
  }
  *param_6 = *param_6 | 2;
joined_r0x017fdcc0:
  for (; param_3 != param_4; param_3 = param_3 + 0x18) {
    if (*pcVar1 == '\x02') goto joined_r0x017fdcec;
    pcVar1 = pcVar1 + 1;
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x017fdcec:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

