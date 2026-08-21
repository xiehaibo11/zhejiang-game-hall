
undefined8 FUN_00a4acc8(long *param_1,uint param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  uVar1 = 1;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    param_1[5] = 0;
    *(uint *)(param_1 + 4) = param_2;
    lVar2 = (*(code *)PTR_malloc_017699f8)
                      (-(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3);
    *param_1 = lVar2;
    if (lVar2 == 0) {
LAB_00a4ade4:
      *(undefined4 *)(param_1 + 4) = 0;
      uVar1 = 1;
    }
    else {
      if (0 < (int)param_2) {
        lVar2 = -2;
        lVar5 = -8;
        do {
          uVar1 = FUN_00a4a970(FUN_00a4ae00);
          *(undefined8 *)(*param_1 + lVar5 + 8) = uVar1;
          lVar3 = *param_1;
          if (*(long *)(lVar3 + lVar5 + 8) == 0) {
            iVar4 = (int)lVar2;
            if (iVar4 != -2) {
              FUN_00a4ab10(*(undefined8 *)(lVar3 + lVar5),0);
              *(undefined8 *)(*param_1 + lVar5) = 0;
              while (iVar4 != -1) {
                lVar5 = lVar2 * 8;
                FUN_00a4ab10(*(undefined8 *)(*param_1 + lVar5),0);
                lVar2 = lVar2 + -1;
                *(undefined8 *)(*param_1 + lVar5) = 0;
                iVar4 = (int)lVar2;
              }
              lVar3 = *param_1;
            }
            (*(code *)PTR_free_01769a00)(lVar3);
            *param_1 = 0;
            goto LAB_00a4ade4;
          }
          lVar3 = lVar2 + 3;
          lVar2 = lVar2 + 1;
          lVar5 = lVar5 + 8;
        } while (lVar3 < (int)param_2);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

