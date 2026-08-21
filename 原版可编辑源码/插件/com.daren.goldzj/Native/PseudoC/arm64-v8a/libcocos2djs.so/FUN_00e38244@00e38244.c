
undefined8 FUN_00e38244(long param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar6 = *(long *)(param_1 + 0x318);
  if (lVar6 == 0) {
    uVar2 = 6;
  }
  else {
    uVar3 = *(uint *)(lVar6 + 0x40);
    if (uVar3 != 0) {
      lVar7 = 0;
      uVar8 = 0;
LAB_00e38280:
      do {
        lVar4 = *(long *)(lVar6 + 0x38);
        if (*(int *)(lVar4 + lVar7) == param_3) {
          lVar1 = lVar4 + lVar7;
          lVar5 = *(long *)(lVar1 + 8);
          if (lVar5 <= param_2) {
            if (*(long *)(lVar1 + 0x18) < param_2) {
              *param_4 = *(long *)(lVar4 + lVar7 + 0x20);
              uVar8 = uVar8 + 1;
              lVar7 = lVar7 + 0x28;
              if (uVar3 <= uVar8) break;
            }
            else {
              lVar4 = lVar4 + lVar7;
              lVar1 = FT_MulDiv(param_2 - lVar5,*(long *)(lVar4 + 0x20) - *(long *)(lVar4 + 0x10),
                                *(long *)(lVar1 + 0x18) - lVar5);
              *param_4 = *(long *)(lVar4 + 0x10) + lVar1;
              uVar3 = *(uint *)(lVar6 + 0x40);
              uVar8 = uVar8 + 1;
              lVar7 = lVar7 + 0x28;
              if (uVar3 <= uVar8) break;
            }
            goto LAB_00e38280;
          }
          *param_4 = *(long *)(lVar1 + 0x10);
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x28;
      } while (uVar8 < uVar3);
    }
    uVar2 = 0;
  }
  return uVar2;
}

