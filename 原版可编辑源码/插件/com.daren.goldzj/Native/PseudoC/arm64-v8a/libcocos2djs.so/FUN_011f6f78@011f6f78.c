
undefined8
FUN_011f6f78(long param_1,uint param_2,long param_3,uint param_4,uint param_5,int *param_6,
            undefined1 *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = 0;
  uVar2 = param_4 & 0x1fff;
  uVar10 = param_2 & 0xffff;
LAB_011f6f98:
  uVar5 = uVar10 - 1;
  uVar1 = uVar8;
  do {
    uVar8 = uVar1;
    uVar10 = uVar8 + (uVar5 - uVar8 >> 1);
    uVar1 = uVar10 + 1;
    while( true ) {
      uVar9 = uVar5;
      if ((uVar5 == uVar8) ||
         ((uVar3 = *(uint *)(param_1 + (long)(int)(uVar10 * 2) * 4) & 0x3fffffff, uVar3 <= uVar2 &&
          ((uVar9 = uVar10, uVar1 == (param_2 & 0xffff) ||
           (uVar2 < (*(uint *)(param_1 + (long)(int)(uVar1 * 2) * 4) & 0x3fffffff)))))))
      goto LAB_011f7014;
      if (uVar3 < uVar2) break;
      if (uVar2 < uVar3) {
        uVar9 = uVar8;
        if (uVar10 == 0) {
LAB_011f7014:
          uVar8 = *(uint *)(param_1 + (long)(int)(uVar9 << 1) * 4);
          uVar10 = uVar8 & 0x3fffffff;
          iVar7 = uVar2 - uVar10;
          if ((iVar7 != 0) &&
             (((uint)(uVar10 <= uVar2 && iVar7 != 0) & (uVar8 & 0x40000000) >> 0x1e) == 0)) {
            return 0;
          }
          uVar10 = *(uint *)(param_1 + (ulong)(uVar9 << 1 | 1) * 4);
          if (uVar10 == 0) {
            return 0;
          }
          if ((uVar10 & 3) == 0) {
            iVar7 = param_4 + ((int)uVar10 >> 2);
          }
          else if ((uVar10 & 3) == 1) {
            if (param_7 != (undefined1 *)0x0) {
              *param_7 = 0;
            }
            iVar4 = *(int *)(param_3 + (long)((int)uVar10 >> 2) * 4);
            if (iVar4 == -1) {
              return 0;
            }
            iVar7 = iVar7 + iVar4;
          }
          else {
            if (param_7 != (undefined1 *)0x0) {
              *param_7 = 0;
            }
            if ((uVar10 & 0xfffffffc) != 4) {
              return 0;
            }
            if ((param_5 == 0) || (uVar6 = unibrow::Letter::Is(param_5), (uVar6 & 1) == 0)) {
              iVar7 = 0x3c2;
            }
            else {
              iVar7 = 0x3c3;
            }
          }
          *param_6 = iVar7;
          return 1;
        }
        goto LAB_011f6f98;
      }
    }
  } while( true );
}

