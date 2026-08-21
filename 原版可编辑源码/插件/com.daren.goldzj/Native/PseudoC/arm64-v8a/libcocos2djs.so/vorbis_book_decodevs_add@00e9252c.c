
undefined8
vorbis_book_decodevs_add
          (long param_1,int *param_2,undefined8 param_3,int param_4,undefined4 param_5)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  
  if (0 < *(long *)(param_1 + 0x48)) {
    lVar7 = *(long *)(param_1 + 0x50);
    if (lVar7 == 0) {
      return 0xffffffffffffffff;
    }
    uVar2 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar2 = (long)param_4 / *(long *)(param_1 + 0x20);
    }
    if (0 < (int)uVar2) {
      iVar8 = 0;
      do {
        iVar3 = FUN_00e92604(param_1,param_3,lVar7,param_5);
        if (iVar3 != 0) {
          return 0xffffffffffffffff;
        }
        lVar4 = *(long *)(param_1 + 0x20);
        if (0 < lVar4) {
          lVar5 = 0;
          piVar6 = param_2;
          do {
            lVar1 = lVar5 * 4;
            lVar5 = lVar5 + 1;
            *piVar6 = *piVar6 + *(int *)(lVar7 + lVar1);
            piVar6 = (int *)((long)piVar6 +
                            (-(uVar2 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar2 & 0xffffffff) << 2))
            ;
          } while (lVar5 < lVar4);
        }
        iVar8 = iVar8 + 1;
        param_2 = param_2 + 1;
      } while (iVar8 < (int)uVar2);
    }
  }
  return 0;
}

