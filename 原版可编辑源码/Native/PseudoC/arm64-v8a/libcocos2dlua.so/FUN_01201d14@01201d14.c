
byte * FUN_01201d14(long *param_1,byte *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,ulong param_7)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  char *__ptr;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  ulong __size;
  char local_d4 [100];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  uVar6 = param_7;
  if (100 < __size) {
    __ptr = malloc(__size);
    uVar6 = param_7 & 0xffffffff;
    pcVar11 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_01201d94;
    std::__throw_bad_alloc();
  }
  __ptr = (char *)0x0;
  pcVar11 = local_d4;
LAB_01201d94:
  lVar12 = 0;
  if (param_3 != param_4) {
    bVar4 = *param_3;
    pbVar7 = param_3;
    pcVar9 = pcVar11;
    if ((bVar4 & 1) == 0) goto LAB_01201de4;
LAB_01201df0:
    if (*(long *)(pbVar7 + 8) == 0) goto LAB_01201dc0;
    do {
      *pcVar9 = '\x01';
      while( true ) {
        pbVar7 = pbVar7 + 0x18;
        pcVar9 = pcVar9 + 1;
        if (param_4 == pbVar7) goto LAB_01201e00;
        bVar4 = *pbVar7;
        if ((bVar4 & 1) != 0) goto LAB_01201df0;
LAB_01201de4:
        if (bVar4 >> 1 != 0) break;
LAB_01201dc0:
        __size = __size - 1;
        lVar12 = lVar12 + 1;
        *pcVar9 = '\x02';
      }
    } while( true );
  }
LAB_01201e00:
  pbVar7 = (byte *)*param_1;
  if ((__size != 0) && (pbVar7 != param_2)) {
    uVar10 = 0;
    do {
      bVar4 = *pbVar7;
      if ((uVar6 & 1) == 0) {
        bVar4 = (**(code **)(*param_5 + 0x18))(param_5,bVar4);
        uVar6 = param_7 & 0xffffffff;
      }
      uVar1 = uVar10 + 1;
      if (param_3 != param_4) {
        bVar3 = false;
        pcVar9 = pcVar11;
        pbVar7 = param_3;
        do {
          if (*pcVar9 == '\x01') {
            if ((*pbVar7 & 1) == 0) {
              bVar5 = pbVar7[uVar10 + 1];
            }
            else {
              bVar5 = *(byte *)(*(long *)(pbVar7 + 0x10) + uVar10);
            }
            if ((uVar6 & 1) == 0) {
              bVar5 = (**(code **)(*param_5 + 0x18))(param_5);
              uVar6 = param_7 & 0xffffffff;
            }
            if (bVar4 == bVar5) {
              if ((*pbVar7 & 1) == 0) {
                uVar8 = (ulong)(*pbVar7 >> 1);
              }
              else {
                uVar8 = *(ulong *)(pbVar7 + 8);
              }
              if (uVar8 == uVar1) {
                *pcVar9 = '\x02';
                __size = __size - 1;
                lVar12 = lVar12 + 1;
                bVar3 = true;
              }
              else {
                bVar3 = true;
              }
            }
            else {
              __size = __size - 1;
              *pcVar9 = '\0';
            }
          }
          pbVar7 = pbVar7 + 0x18;
          pcVar9 = pcVar9 + 1;
        } while (param_4 != pbVar7);
        if ((bVar3) &&
           (*param_1 = *param_1 + 1, pbVar7 = param_3, pcVar9 = pcVar11, 1 < lVar12 + __size)) {
          do {
            if (*pcVar9 == '\x02') {
              if ((*pbVar7 & 1) == 0) {
                uVar10 = (ulong)(*pbVar7 >> 1);
              }
              else {
                uVar10 = *(ulong *)(pbVar7 + 8);
              }
              if (uVar10 != uVar1) {
                lVar12 = lVar12 + -1;
                *pcVar9 = '\0';
              }
            }
            pbVar7 = pbVar7 + 0x18;
            pcVar9 = pcVar9 + 1;
          } while (param_4 != pbVar7);
        }
      }
      pbVar7 = (byte *)*param_1;
    } while ((__size != 0) && (uVar10 = uVar1, pbVar7 != param_2));
  }
  if (pbVar7 == param_2) {
    *param_6 = *param_6 | 2;
  }
  for (; param_3 != param_4; param_3 = param_3 + 0x18) {
    if (*pcVar11 == '\x02') goto joined_r0x01202000;
    pcVar11 = pcVar11 + 1;
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x01202000:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}

