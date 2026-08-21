
undefined8
FUN_011f7164(long param_1,uint param_2,long param_3,uint param_4,uint param_5,int *param_6,
            undefined1 *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar9 = 0;
  uVar2 = param_4 & 0x1fff;
  uVar11 = param_2 & 0xffff;
LAB_011f7184:
  uVar6 = uVar11 - 1;
  uVar1 = uVar9;
  do {
    uVar9 = uVar1;
    uVar11 = uVar9 + (uVar6 - uVar9 >> 1);
    uVar1 = uVar11 + 1;
    while( true ) {
      uVar10 = uVar6;
      if ((uVar6 == uVar9) ||
         ((uVar3 = *(uint *)(param_1 + (long)(int)(uVar11 * 2) * 4) & 0x3fffffff, uVar3 <= uVar2 &&
          ((uVar10 = uVar11, uVar1 == (param_2 & 0xffff) ||
           (uVar2 < (*(uint *)(param_1 + (long)(int)(uVar1 * 2) * 4) & 0x3fffffff)))))))
      goto LAB_011f7200;
      if (uVar3 < uVar2) break;
      if (uVar2 < uVar3) {
        uVar10 = uVar9;
        if (uVar11 == 0) {
LAB_011f7200:
          uVar9 = *(uint *)(param_1 + (long)(int)(uVar10 << 1) * 4);
          uVar11 = uVar9 & 0x3fffffff;
          iVar8 = uVar2 - uVar11;
          if ((iVar8 != 0) &&
             (((uint)(uVar11 <= uVar2 && iVar8 != 0) & (uVar9 & 0x40000000) >> 0x1e) == 0)) {
            return 0;
          }
          uVar11 = *(uint *)(param_1 + (ulong)(uVar10 << 1 | 1) * 4);
          if (uVar11 == 0) {
            return 0;
          }
          if ((uVar11 & 3) == 0) {
            iVar8 = param_4 + ((int)uVar11 >> 2);
          }
          else {
            if ((uVar11 & 3) == 1) {
              if (param_7 != (undefined1 *)0x0) {
                *param_7 = 0;
              }
              iVar4 = *(int *)(param_3 + (long)((int)uVar11 >> 2) * 0xc);
              if (iVar4 == -1) {
                return 0;
              }
              lVar5 = (long)((ulong)uVar11 << 0x20) >> 0x22;
              *param_6 = iVar8 + iVar4;
              iVar4 = *(int *)(param_3 + lVar5 * 0xc + 4);
              if (iVar4 == -1) {
                return 1;
              }
              param_6[1] = iVar8 + iVar4;
              iVar4 = *(int *)(param_3 + lVar5 * 0xc + 8);
              if (iVar4 == -1) {
                return 2;
              }
              param_6[2] = iVar8 + iVar4;
              return 3;
            }
            if (param_7 != (undefined1 *)0x0) {
              *param_7 = 0;
            }
            if ((uVar11 & 0xfffffffc) != 4) {
              return 0;
            }
            if ((param_5 == 0) || (uVar7 = unibrow::Letter::Is(param_5), (uVar7 & 1) == 0)) {
              iVar8 = 0x3c2;
            }
            else {
              iVar8 = 0x3c3;
            }
          }
          *param_6 = iVar8;
          return 1;
        }
        goto LAB_011f7184;
      }
    }
  } while( true );
}

