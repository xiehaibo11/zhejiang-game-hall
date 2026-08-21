
byte * FUN_01202764(long *param_1,int *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,ulong param_7)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *__ptr;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  byte *pbVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  ulong __size;
  char local_d4 [100];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  __size = ((long)param_4 - (long)param_3 >> 3) * -0x5555555555555555;
  uVar7 = param_7;
  if (100 < __size) {
    __ptr = malloc(__size);
    uVar7 = param_7 & 0xffffffff;
    pcVar13 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_012027e4;
    std::__throw_bad_alloc();
  }
  __ptr = (char *)0x0;
  pcVar13 = local_d4;
LAB_012027e4:
  lVar14 = 0;
  if (param_3 != param_4) {
    bVar2 = *param_3;
    pbVar10 = param_3;
    pcVar11 = pcVar13;
    if ((bVar2 & 1) == 0) goto LAB_01202834;
LAB_01202840:
    if (*(long *)(pbVar10 + 8) == 0) goto LAB_01202810;
    do {
      *pcVar11 = '\x01';
      while( true ) {
        pbVar10 = pbVar10 + 0x18;
        pcVar11 = pcVar11 + 1;
        if (param_4 == pbVar10) goto LAB_01202850;
        bVar2 = *pbVar10;
        if ((bVar2 & 1) != 0) goto LAB_01202840;
LAB_01202834:
        if (bVar2 >> 1 != 0) break;
LAB_01202810:
        __size = __size - 1;
        lVar14 = lVar14 + 1;
        *pcVar11 = '\x02';
      }
    } while( true );
  }
LAB_01202850:
  piVar8 = (int *)*param_1;
  if ((__size != 0) && (piVar8 != param_2)) {
    uVar12 = 0;
    do {
      iVar5 = *piVar8;
      if ((uVar7 & 1) == 0) {
        iVar5 = (**(code **)(*param_5 + 0x38))(param_5,iVar5);
        uVar7 = param_7 & 0xffffffff;
      }
      uVar1 = uVar12 + 1;
      if (param_3 != param_4) {
        bVar4 = false;
        pcVar11 = pcVar13;
        pbVar10 = param_3;
        do {
          if (*pcVar11 == '\x01') {
            if ((*pbVar10 & 1) == 0) {
              iVar6 = *(int *)(pbVar10 + uVar12 * 4 + 4);
            }
            else {
              iVar6 = *(int *)(*(long *)(pbVar10 + 0x10) + uVar12 * 4);
            }
            if ((uVar7 & 1) == 0) {
              iVar6 = (**(code **)(*param_5 + 0x38))(param_5);
              uVar7 = param_7 & 0xffffffff;
            }
            if (iVar5 == iVar6) {
              if ((*pbVar10 & 1) == 0) {
                uVar9 = (ulong)(*pbVar10 >> 1);
              }
              else {
                uVar9 = *(ulong *)(pbVar10 + 8);
              }
              if (uVar9 == uVar1) {
                *pcVar11 = '\x02';
                __size = __size - 1;
                lVar14 = lVar14 + 1;
                bVar4 = true;
              }
              else {
                bVar4 = true;
              }
            }
            else {
              __size = __size - 1;
              *pcVar11 = '\0';
            }
          }
          pbVar10 = pbVar10 + 0x18;
          pcVar11 = pcVar11 + 1;
        } while (param_4 != pbVar10);
        if ((bVar4) &&
           (*param_1 = *param_1 + 4, pbVar10 = param_3, pcVar11 = pcVar13, 1 < lVar14 + __size)) {
          do {
            if (*pcVar11 == '\x02') {
              if ((*pbVar10 & 1) == 0) {
                uVar12 = (ulong)(*pbVar10 >> 1);
              }
              else {
                uVar12 = *(ulong *)(pbVar10 + 8);
              }
              if (uVar12 != uVar1) {
                lVar14 = lVar14 + -1;
                *pcVar11 = '\0';
              }
            }
            pbVar10 = pbVar10 + 0x18;
            pcVar11 = pcVar11 + 1;
          } while (param_4 != pbVar10);
        }
      }
      piVar8 = (int *)*param_1;
    } while ((__size != 0) && (uVar12 = uVar1, piVar8 != param_2));
  }
  if (piVar8 == param_2) {
    *param_6 = *param_6 | 2;
  }
  for (; param_3 != param_4; param_3 = param_3 + 0x18) {
    if (*pcVar13 == '\x02') goto joined_r0x01202a4c;
    pcVar13 = pcVar13 + 1;
  }
  *param_6 = *param_6 | 4;
  param_3 = param_4;
joined_r0x01202a4c:
  if (__ptr != (char *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}

