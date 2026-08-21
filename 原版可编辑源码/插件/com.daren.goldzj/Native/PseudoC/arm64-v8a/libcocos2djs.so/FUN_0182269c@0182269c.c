
byte * FUN_0182269c(long *param_1,int *param_2,byte *param_3,byte *param_4,long *param_5,
                   uint *param_6,ulong param_7)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *__ptr;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  byte *pbVar9;
  char *pcVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
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
    pcVar12 = __ptr;
    if (__ptr != (char *)0x0) goto LAB_0182271c;
    std::__throw_bad_alloc();
  }
  __ptr = (char *)0x0;
  pcVar12 = local_d4;
LAB_0182271c:
  lVar13 = 0;
  pcVar10 = pcVar12;
  for (pbVar9 = param_3; pbVar9 != param_4; pbVar9 = pbVar9 + 0x18) {
    if ((*pbVar9 & 1) == 0) {
      if (*pbVar9 >> 1 != 0) goto LAB_0182274c;
LAB_0182275c:
      __size = __size - 1;
      lVar13 = lVar13 + 1;
      *pcVar10 = '\x02';
    }
    else {
      if (*(long *)(pbVar9 + 8) == 0) goto LAB_0182275c;
LAB_0182274c:
      *pcVar10 = '\x01';
    }
    pcVar10 = pcVar10 + 1;
  }
  piVar7 = (int *)*param_1;
  if ((__size != 0) && (piVar7 != param_2)) {
    uVar11 = 0;
    do {
      iVar4 = *piVar7;
      if ((uVar6 & 1) == 0) {
        iVar4 = (**(code **)(*param_5 + 0x38))(param_5,iVar4);
        uVar6 = param_7 & 0xffffffff;
      }
      uVar1 = uVar11 + 1;
      if (param_3 != param_4) {
        bVar3 = false;
        pcVar10 = pcVar12;
        pbVar9 = param_3;
        do {
          if (*pcVar10 == '\x01') {
            if ((*pbVar9 & 1) == 0) {
              iVar5 = *(int *)(pbVar9 + uVar11 * 4 + 4);
            }
            else {
              iVar5 = *(int *)(*(long *)(pbVar9 + 0x10) + uVar11 * 4);
            }
            if ((uVar6 & 1) == 0) {
              iVar5 = (**(code **)(*param_5 + 0x38))(param_5);
              uVar6 = param_7 & 0xffffffff;
            }
            if (iVar4 == iVar5) {
              if ((*pbVar9 & 1) == 0) {
                uVar8 = (ulong)(*pbVar9 >> 1);
              }
              else {
                uVar8 = *(ulong *)(pbVar9 + 8);
              }
              if (uVar8 == uVar1) {
                *pcVar10 = '\x02';
                __size = __size - 1;
                lVar13 = lVar13 + 1;
              }
              bVar3 = true;
            }
            else {
              __size = __size - 1;
              *pcVar10 = '\0';
            }
          }
          pbVar9 = pbVar9 + 0x18;
          pcVar10 = pcVar10 + 1;
        } while (param_4 != pbVar9);
        if ((bVar3) &&
           (*param_1 = *param_1 + 4, pbVar9 = param_3, pcVar10 = pcVar12, 1 < lVar13 + __size)) {
          do {
            if (*pcVar10 == '\x02') {
              if ((*pbVar9 & 1) == 0) {
                uVar11 = (ulong)(*pbVar9 >> 1);
              }
              else {
                uVar11 = *(ulong *)(pbVar9 + 8);
              }
              if (uVar11 != uVar1) {
                lVar13 = lVar13 + -1;
                *pcVar10 = '\0';
              }
            }
            pbVar9 = pbVar9 + 0x18;
            pcVar10 = pcVar10 + 1;
          } while (param_4 != pbVar9);
        }
      }
      piVar7 = (int *)*param_1;
    } while ((__size != 0) && (uVar11 = uVar1, piVar7 != param_2));
  }
  if (piVar7 == param_2) {
    *param_6 = *param_6 | 2;
  }
  do {
    if (param_3 == param_4) {
      *param_6 = *param_6 | 4;
      param_3 = param_4;
      if (__ptr != (char *)0x0) {
LAB_01822970:
        free(__ptr);
      }
LAB_01822974:
      if (*(long *)(lVar2 + 0x28) == local_70) {
        return param_3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*pcVar12 == '\x02') {
      if (__ptr == (char *)0x0) goto LAB_01822974;
      goto LAB_01822970;
    }
    param_3 = param_3 + 0x18;
    pcVar12 = pcVar12 + 1;
  } while( true );
}

