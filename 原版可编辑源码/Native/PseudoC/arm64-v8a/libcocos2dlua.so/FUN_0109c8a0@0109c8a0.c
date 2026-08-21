
void FUN_0109c8a0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(ulong *)(param_1 + 0x30) < 0xffffffff) {
    uVar2 = *(ulong *)(param_1 + 0x40);
    if (uVar2 < *(ulong *)(param_1 + 0x48)) {
      lVar4 = *(long *)(param_1 + 0x18) + uVar2 * 0xc + 0x1b;
      uVar3 = *(ulong *)(param_1 + 0x30) + 1;
      do {
        uVar5 = (ulong)*(byte *)(lVar4 + -0xb) << 0x18 | (ulong)*(byte *)(lVar4 + -10) << 0x10 |
                (ulong)*(byte *)(lVar4 + -9) << 8 | (ulong)*(byte *)(lVar4 + -8);
        if (uVar5 <= uVar3) {
          uVar5 = uVar3;
        }
        if ((uVar5 <= ((ulong)*(byte *)(lVar4 + -7) << 0x18 | (ulong)*(byte *)(lVar4 + -6) << 0x10 |
                       (ulong)*(byte *)(lVar4 + -5) << 8 | (ulong)*(byte *)(lVar4 + -4))) &&
           (uVar1 = (*(uint *)(lVar4 + -3) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar4 + -3) & 0xff00ff) << 8, uVar1 = uVar1 >> 0x10 | uVar1 << 0x10,
           uVar1 != 0)) {
          *(ulong *)(param_1 + 0x30) = uVar5;
          *(uint *)(param_1 + 0x38) = uVar1;
          *(ulong *)(param_1 + 0x40) = uVar2;
          return;
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0xc;
        uVar3 = uVar5;
      } while (uVar2 < *(ulong *)(param_1 + 0x48));
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

