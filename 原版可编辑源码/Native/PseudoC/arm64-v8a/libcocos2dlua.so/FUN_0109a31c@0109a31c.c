
int FUN_0109a31c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  uVar6 = *(uint *)(*(long *)(param_1 + 0x18) + 0x200c);
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  if (uVar6 != 0) {
    lVar7 = *(long *)(param_1 + 0x18) + 0x201b;
    uVar4 = *param_2 + 1;
    do {
      uVar5 = (*(uint *)(lVar7 + -0xb) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar7 + -0xb) & 0xff00ff) << 8;
      uVar1 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar2 = (*(uint *)(lVar7 + -7) & 0xff00ff00) >> 8 | (*(uint *)(lVar7 + -7) & 0xff00ff) << 8;
      uVar5 = uVar1;
      if (uVar1 <= uVar4) {
        uVar5 = uVar4;
      }
      if ((uVar5 <= (uVar2 >> 0x10 | uVar2 << 0x10)) &&
         (uVar4 = (*(uint *)(lVar7 + -3) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar7 + -3) & 0xff00ff) << 8,
         iVar3 = (uVar4 >> 0x10 | uVar4 << 0x10) + (uVar5 - uVar1), iVar3 != 0)) goto LAB_0109a384;
      uVar6 = uVar6 - 1;
      lVar7 = lVar7 + 0xc;
      uVar4 = uVar5;
    } while (uVar6 != 0);
  }
  iVar3 = 0;
  uVar5 = 0;
LAB_0109a384:
  *param_2 = uVar5;
  return iVar3;
}

