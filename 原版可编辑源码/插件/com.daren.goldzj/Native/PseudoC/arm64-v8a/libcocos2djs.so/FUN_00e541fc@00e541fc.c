
int FUN_00e541fc(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *(uint *)(*(long *)(param_1 + 0x18) + 0x200c);
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  if (uVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x18) + 0x201b;
    do {
      uVar2 = (*(uint *)(lVar5 + -0xb) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar5 + -0xb) & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      if (param_2 < uVar2) {
        return 0;
      }
      uVar3 = (*(uint *)(lVar5 + -7) & 0xff00ff00) >> 8 | (*(uint *)(lVar5 + -7) & 0xff00ff) << 8;
      if (param_2 <= (uVar3 >> 0x10 | uVar3 << 0x10)) {
        param_2 = param_2 - uVar2;
        uVar4 = (*(uint *)(lVar5 + -3) & 0xff00ff00) >> 8 | (*(uint *)(lVar5 + -3) & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        iVar1 = 0;
        if (uVar4 <= ~param_2) {
          iVar1 = uVar4 + param_2;
        }
        return iVar1;
      }
      uVar4 = uVar4 - 1;
      lVar5 = lVar5 + 0xc;
    } while (uVar4 != 0);
  }
  return 0;
}

