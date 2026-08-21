
byte * FUN_017f9fb8(long *param_1,long *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,uint param_7)

{
  ulong uVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *__ptr;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  ulong __size;
  long *plVar15;
  long local_f0;
  char local_d4 [100];
  long local_70;
  
  lVar4 = tpidr_el0;
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  local_70 = *(long *)(lVar4 + 0x28);
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
  if (param_3 == param_4) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    pbVar11 = param_3;
    pcVar12 = pcVar2;
    do {
      if ((*pbVar11 & 1) == 0) {
        if (*pbVar11 >> 1 != 0) goto LAB_017fa05c;
LAB_017fa06c:
        __size = __size - 1;
        local_f0 = local_f0 + 1;
        *pcVar12 = '\x02';
      }
      else {
        if (*(long *)(pbVar11 + 8) == 0) goto LAB_017fa06c;
LAB_017fa05c:
        *pcVar12 = '\x01';
      }
      pbVar11 = pbVar11 + 0x18;
      pcVar12 = pcVar12 + 1;
    } while (param_4 != pbVar11);
  }
  uVar1 = 0;
  while( true ) {
    uVar13 = uVar1;
    plVar15 = (long *)*param_1;
    if ((plVar15 != (long *)0x0) && (plVar15[3] == plVar15[4])) {
      iVar8 = (**(code **)(*plVar15 + 0x48))(plVar15);
      if (iVar8 == -1) {
        plVar15 = (long *)0x0;
        *param_1 = 0;
      }
      else {
        plVar15 = (long *)*param_1;
      }
    }
    plVar14 = plVar15;
    if ((param_2 != (long *)0x0) && (param_2[3] == param_2[4])) {
      iVar8 = (**(code **)(*param_2 + 0x48))(param_2);
      plVar3 = (long *)0x0;
      if (iVar8 != -1) {
        plVar3 = param_2;
      }
      plVar14 = (long *)*param_1;
      param_2 = plVar3;
    }
    if ((__size == 0) || ((plVar15 == (long *)0x0) == (param_2 == (long *)0x0))) break;
    if ((byte *)plVar14[3] == (byte *)plVar14[4]) {
      uVar6 = (**(code **)(*plVar14 + 0x48))(plVar14);
    }
    else {
      uVar6 = (uint)*(byte *)plVar14[3];
    }
    if ((param_7 & 1) == 0) {
      uVar6 = (**(code **)(*param_5 + 0x18))(param_5,uVar6);
    }
    uVar1 = uVar13 + 1;
    if (param_3 != param_4) {
      bVar5 = false;
      pcVar12 = pcVar2;
      pbVar11 = param_3;
      do {
        if (*pcVar12 == '\x01') {
          if ((*pbVar11 & 1) == 0) {
            pbVar9 = pbVar11 + 1;
          }
          else {
            pbVar9 = *(byte **)(pbVar11 + 0x10);
          }
          uVar7 = (uint)pbVar9[uVar13];
          if ((param_7 & 1) == 0) {
            uVar7 = (**(code **)(*param_5 + 0x18))(param_5);
          }
          if ((uVar6 & 0xff) == (uVar7 & 0xff)) {
            if ((*pbVar11 & 1) == 0) {
              uVar10 = (ulong)(*pbVar11 >> 1);
            }
            else {
              uVar10 = *(ulong *)(pbVar11 + 8);
            }
            if (uVar10 == uVar1) {
              *pcVar12 = '\x02';
              __size = __size - 1;
              local_f0 = local_f0 + 1;
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
        plVar15 = (long *)*param_1;
        if (plVar15[3] == plVar15[4]) {
          (**(code **)(*plVar15 + 0x50))();
        }
        else {
          plVar15[3] = plVar15[3] + 1;
        }
        pbVar11 = param_3;
        pcVar12 = pcVar2;
        if (1 < local_f0 + __size) {
          do {
            if (*pcVar12 == '\x02') {
              if ((*pbVar11 & 1) == 0) {
                uVar13 = (ulong)(*pbVar11 >> 1);
              }
              else {
                uVar13 = *(ulong *)(pbVar11 + 8);
              }
              if (uVar13 != uVar1) {
                local_f0 = local_f0 + -1;
                *pcVar12 = '\0';
              }
            }
            pbVar11 = pbVar11 + 0x18;
            pcVar12 = pcVar12 + 1;
          } while (param_4 != pbVar11);
        }
      }
    }
  }
  if ((plVar14 == (long *)0x0) || (plVar14[3] != plVar14[4])) {
joined_r0x017fa31c:
    if (param_2 == (long *)0x0) goto LAB_017fa410;
LAB_017fa320:
    if ((param_2[3] == param_2[4]) && (iVar8 = (**(code **)(*param_2 + 0x48))(param_2), iVar8 == -1)
       ) goto LAB_017fa410;
    if (plVar14 == (long *)0x0) goto joined_r0x017fa35c;
  }
  else {
    iVar8 = (**(code **)(*plVar14 + 0x48))(plVar14);
    if (iVar8 == -1) {
      plVar14 = (long *)0x0;
      *param_1 = 0;
      goto joined_r0x017fa31c;
    }
    plVar14 = (long *)*param_1;
    if (param_2 != (long *)0x0) goto LAB_017fa320;
LAB_017fa410:
    if (plVar14 != (long *)0x0) goto joined_r0x017fa35c;
  }
  *param_6 = *param_6 | 2;
joined_r0x017fa35c:
  for (; param_3 != param_4; param_3 = param_3 + 0x18) {
    if (*pcVar2 == '\x02') goto joined_r0x017fa388;
    pcVar2 = pcVar2 + 1;
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x017fa388:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

