
undefined8
vorbis_book_decodevv_add
          (long param_1,long param_2,long param_3,int param_4,undefined8 param_5,int param_6,
          undefined4 param_7)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  if (0 < *(long *)(param_1 + 0x48)) {
    lVar9 = *(long *)(param_1 + 0x50);
    if (lVar9 == 0) {
      return 0xffffffffffffffff;
    }
    if (0 < param_6) {
      iVar10 = 0;
      lVar2 = param_3 + param_6;
      do {
        iVar4 = FUN_00e92604(param_1,param_5,lVar9,param_7);
        if (iVar4 != 0) {
          return 0xffffffffffffffff;
        }
        lVar5 = *(long *)(param_1 + 0x20);
        if (0 < lVar5) {
          lVar6 = 0;
          iVar4 = iVar10;
          do {
            lVar7 = *(long *)(param_2 + (long)iVar4 * 8);
            lVar8 = param_3 * 4;
            lVar1 = lVar6 * 4;
            lVar6 = lVar6 + 1;
            bVar3 = iVar4 + 1 == param_4;
            if (bVar3) {
              param_3 = param_3 + 1;
            }
            iVar10 = 0;
            if (!bVar3) {
              iVar10 = iVar4 + 1;
            }
            *(int *)(lVar7 + lVar8) = *(int *)(lVar7 + lVar8) + *(int *)(lVar9 + lVar1);
            iVar4 = iVar10;
          } while (lVar6 < lVar5);
        }
      } while (param_3 < lVar2);
    }
  }
  return 0;
}

