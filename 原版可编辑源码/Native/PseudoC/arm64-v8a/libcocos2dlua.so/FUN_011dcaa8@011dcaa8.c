
byte * FUN_011dcaa8(long *param_1,long *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,uint param_7)

{
  ulong uVar1;
  char *pcVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *__ptr;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  char *pcVar13;
  ulong uVar14;
  long *plVar15;
  ulong __size;
  long *plVar16;
  long local_f0;
  char local_d4 [100];
  long local_70;
  
  lVar5 = tpidr_el0;
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  local_70 = *(long *)(lVar5 + 0x28);
  if (__size < 0x65) {
    __ptr = (char *)0x0;
    pcVar2 = local_d4;
  }
  else {
    __ptr = malloc(__size);
    pcVar2 = __ptr;
    if (__ptr == (char *)0x0) {
      std::__throw_bad_alloc();
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
  }
  if (param_3 != param_4) {
    local_f0 = 0;
    bVar4 = *param_3;
    pbVar12 = param_3;
    pcVar13 = pcVar2;
    if ((bVar4 & 1) != 0) goto LAB_011dcb68;
LAB_011dcb44:
    if (bVar4 >> 1 == 0) goto LAB_011dcb70;
    do {
      *pcVar13 = '\x01';
      while( true ) {
        pbVar12 = pbVar12 + 0x18;
        pcVar13 = pcVar13 + 1;
        if (param_4 == pbVar12) goto LAB_011dcb94;
        bVar4 = *pbVar12;
        if ((bVar4 & 1) == 0) goto LAB_011dcb44;
LAB_011dcb68:
        if (*(long *)(pbVar12 + 8) != 0) break;
LAB_011dcb70:
        __size = __size - 1;
        local_f0 = local_f0 + 1;
        *pcVar13 = '\x02';
      }
    } while( true );
  }
  local_f0 = 0;
LAB_011dcb94:
  uVar1 = 0;
  while( true ) {
    uVar14 = uVar1;
    plVar16 = (long *)*param_1;
    if ((plVar16 != (long *)0x0) && (plVar16[3] == plVar16[4])) {
      iVar9 = (**(code **)(*plVar16 + 0x48))(plVar16);
      if (iVar9 == -1) {
        plVar16 = (long *)0x0;
        *param_1 = 0;
      }
      else {
        plVar16 = (long *)*param_1;
      }
    }
    plVar15 = plVar16;
    if ((param_2 != (long *)0x0) && (param_2[3] == param_2[4])) {
      iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar3 = (long *)0x0;
      if (iVar9 != -1) {
        plVar3 = param_2;
      }
      plVar15 = (long *)*param_1;
      param_2 = plVar3;
    }
    if ((__size == 0) || ((plVar16 == (long *)0x0) == (param_2 == (long *)0x0))) break;
    if ((byte *)plVar15[3] == (byte *)plVar15[4]) {
      uVar7 = (**(code **)(*plVar15 + 0x48))(plVar15);
    }
    else {
      uVar7 = (uint)*(byte *)plVar15[3];
    }
    if ((param_7 & 1) == 0) {
      uVar7 = (**(code **)(*param_5 + 0x18))(param_5,uVar7);
    }
    uVar1 = uVar14 + 1;
    if (param_3 != param_4) {
      bVar6 = false;
      pcVar13 = pcVar2;
      pbVar12 = param_3;
      do {
        if (*pcVar13 == '\x01') {
          if ((*pbVar12 & 1) == 0) {
            pbVar10 = pbVar12 + 1;
          }
          else {
            pbVar10 = *(byte **)(pbVar12 + 0x10);
          }
          uVar8 = (uint)pbVar10[uVar14];
          if ((param_7 & 1) == 0) {
            uVar8 = (**(code **)(*param_5 + 0x18))(param_5);
          }
          if ((uVar7 & 0xff) == (uVar8 & 0xff)) {
            if ((*pbVar12 & 1) == 0) {
              uVar11 = (ulong)(*pbVar12 >> 1);
            }
            else {
              uVar11 = *(ulong *)(pbVar12 + 8);
            }
            if (uVar11 == uVar1) {
              *pcVar13 = '\x02';
              __size = __size - 1;
              local_f0 = local_f0 + 1;
            }
            bVar6 = true;
          }
          else {
            __size = __size - 1;
            *pcVar13 = '\0';
          }
        }
        pbVar12 = pbVar12 + 0x18;
        pcVar13 = pcVar13 + 1;
      } while (param_4 != pbVar12);
      if (bVar6) {
        plVar16 = (long *)*param_1;
        if (plVar16[3] == plVar16[4]) {
          (**(code **)(*plVar16 + 0x50))();
        }
        else {
          plVar16[3] = plVar16[3] + 1;
        }
        pbVar12 = param_3;
        pcVar13 = pcVar2;
        if (1 < local_f0 + __size) {
          do {
            if (*pcVar13 == '\x02') {
              if ((*pbVar12 & 1) == 0) {
                uVar14 = (ulong)(*pbVar12 >> 1);
              }
              else {
                uVar14 = *(ulong *)(pbVar12 + 8);
              }
              if (uVar14 != uVar1) {
                local_f0 = local_f0 + -1;
                *pcVar13 = '\0';
              }
            }
            pbVar12 = pbVar12 + 0x18;
            pcVar13 = pcVar13 + 1;
          } while (param_4 != pbVar12);
        }
      }
    }
  }
  if ((plVar15 == (long *)0x0) || (plVar15[3] != plVar15[4])) {
joined_r0x011dce1c:
    if (param_2 == (long *)0x0) goto LAB_011dcf10;
LAB_011dce20:
    if ((param_2[3] == param_2[4]) && (iVar9 = (**(code **)(*param_2 + 0x48))(param_2), iVar9 == -1)
       ) goto LAB_011dcf10;
    if (plVar15 == (long *)0x0) goto joined_r0x011dce5c;
  }
  else {
    iVar9 = (**(code **)(*plVar15 + 0x48))(plVar15);
    if (iVar9 == -1) {
      plVar15 = (long *)0x0;
      *param_1 = 0;
      goto joined_r0x011dce1c;
    }
    plVar15 = (long *)*param_1;
    if (param_2 != (long *)0x0) goto LAB_011dce20;
LAB_011dcf10:
    if (plVar15 != (long *)0x0) goto joined_r0x011dce5c;
  }
  *param_6 = *param_6 | 2;
joined_r0x011dce5c:
  for (; param_3 != param_4; param_3 = param_3 + 0x18) {
    if (*pcVar2 == '\x02') goto joined_r0x011dce88;
    pcVar2 = pcVar2 + 1;
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x011dce88:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

