
int FUN_0109a2ac(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + 0x200c);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (uVar3 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x18) + 0x201b;
  while( true ) {
    uVar1 = (*(uint *)(lVar4 + -0xb) & 0xff00ff00) >> 8 | (*(uint *)(lVar4 + -0xb) & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    if (param_2 < uVar1) {
      return 0;
    }
    uVar2 = (*(uint *)(lVar4 + -7) & 0xff00ff00) >> 8 | (*(uint *)(lVar4 + -7) & 0xff00ff) << 8;
    if (param_2 <= (uVar2 >> 0x10 | uVar2 << 0x10)) break;
    uVar3 = uVar3 - 1;
    lVar4 = lVar4 + 0xc;
    if (uVar3 == 0) {
      return 0;
    }
  }
  uVar3 = (*(uint *)(lVar4 + -3) & 0xff00ff00) >> 8 | (*(uint *)(lVar4 + -3) & 0xff00ff) << 8;
  return (param_2 - uVar1) + (uVar3 >> 0x10 | uVar3 << 0x10);
}

