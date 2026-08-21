
long FUN_00e3013c(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int local_54;
  
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar10 = (ulong)param_3;
  local_54 = 0;
  if (uVar10 <= param_2) {
    lVar4 = FUN_00e13bcc(uVar9,8,0,uVar10,0,&local_54);
    if (local_54 != 0) {
      return 0;
    }
    uVar11 = 0;
    do {
      while( true ) {
        if (param_3 <= uVar11) {
          return lVar4;
        }
        uVar3 = FUN_00e1d94c(param_1);
        uVar2 = uVar3 & 0x3f;
        if ((uVar3 >> 7 & 1) != 0) break;
        uVar12 = (ulong)uVar11;
        lVar1 = lVar4 + uVar12 * 8;
        lVar13 = 0;
        if (((uVar3 & 0xff) >> 6 & 1) == 0) {
          do {
            uVar5 = FUN_00e1d94c(param_1);
            *(ulong *)(lVar1 + lVar13 * 8) =
                 -(uVar5 >> 7 & 1) & 0xffffffffff000000 | (uVar5 & 0xff) << 0x10;
            lVar6 = lVar13 + 1;
            if (uVar10 <= uVar12 + lVar13 + 1) break;
            uVar3 = (uint)lVar13;
            lVar13 = lVar6;
          } while (uVar3 < uVar2);
        }
        else {
          do {
            uVar5 = FUN_00e1d970(param_1);
            *(ulong *)(lVar1 + lVar13 * 8) =
                 -(uVar5 >> 0xf & 1) & 0xffffffff00000000 | (uVar5 & 0xffff) << 0x10;
            lVar6 = lVar13 + 1;
            if (uVar10 <= uVar12 + lVar13 + 1) break;
            uVar3 = (uint)lVar13;
            lVar13 = lVar6;
          } while (uVar3 < uVar2);
        }
        uVar11 = uVar11 + (uint)lVar6;
        if ((uint)lVar6 <= uVar2) goto LAB_00e302d4;
      }
      uVar12 = (ulong)uVar11;
      uVar7 = (ulong)~(uVar3 & 0xff) | 0xffffffffffffffc0;
      uVar5 = uVar12 - uVar10;
      if (uVar12 - uVar10 <= uVar7) {
        uVar5 = uVar7;
      }
      memset((void *)(lVar4 + (ulong)uVar11 * 8),0,uVar5 * -8);
      uVar5 = -uVar5;
      if (uVar5 < 2) {
        uVar8 = 0;
LAB_00e302ac:
        do {
          uVar12 = uVar12 + 1;
          uVar11 = (uint)uVar8;
          uVar8 = (ulong)(uVar11 + 1);
          if (uVar10 <= uVar12) break;
        } while (uVar11 < uVar2);
      }
      else {
        uVar8 = uVar5 & 0x7e;
        uVar12 = uVar8 + uVar12;
        uVar7 = uVar8;
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
        if (uVar8 != uVar5) goto LAB_00e302ac;
      }
      uVar11 = (uint)uVar12;
    } while (uVar2 < (uint)uVar8);
LAB_00e302d4:
    FUN_00e139fc(uVar9,lVar4);
  }
  return 0;
}

