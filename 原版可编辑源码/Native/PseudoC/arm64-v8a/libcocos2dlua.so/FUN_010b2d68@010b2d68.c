
uint FUN_010b2d68(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x3c);
  if (((*(char *)(param_1 + 0x20) == '\0') &&
      (uVar6 = *(uint *)(param_1 + 0x18), (int)uVar6 < *(int *)(param_1 + 0x1c))) &&
     (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x44))) {
LAB_010b2e48:
    *(uint *)(param_1 + 0x18) = uVar6 + uVar7;
    param_1 = param_1 + ((int)uVar6 >> 3);
    iVar5 = -(uVar6 & 7);
    uVar2 = iVar5 + 8;
    uVar7 = uVar7 - uVar2;
    uVar3 = uVar7 - 8;
    uVar6 = (uint)(*(byte *)(param_1 + 8) >> (ulong)(uVar6 & 7));
    if (uVar7 < 8) {
      pbVar1 = (byte *)(param_1 + 9);
      uVar3 = uVar7;
    }
    else {
      pbVar1 = (byte *)(param_1 + 10);
      uVar6 = (uint)*(byte *)(param_1 + 9) << (ulong)(uVar2 & 0x1f) | uVar6;
      uVar2 = iVar5 + 0x10;
    }
    if (uVar3 != 0) {
      uVar6 = ((1 << (ulong)(uVar3 & 0x1f)) + 0xffU & (uint)*pbVar1) << (ulong)(uVar2 & 0x1f) |
              uVar6;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x44) <= *(uint *)(param_1 + 0x40)) {
      uVar7 = uVar7 + 1;
      *(uint *)(param_1 + 0x3c) = uVar7;
      if (uVar7 < *(uint *)(param_1 + 0x30)) {
        iVar5 = (int)(1L << ((ulong)uVar7 & 0x3f)) + -0x100;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x38) + 1;
      }
      *(int *)(param_1 + 0x44) = iVar5;
    }
    if (*(char *)(param_1 + 0x20) != '\0') {
      uVar7 = 9;
      *(undefined4 *)(param_1 + 0x3c) = 9;
      *(undefined4 *)(param_1 + 0x44) = 0x100;
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    if (*(int *)(param_1 + 4) == 0) {
      uVar4 = FT_Stream_TryRead(*(undefined8 *)(param_1 + 200),param_1 + 8,uVar7);
      uVar6 = 0;
      *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + uVar4;
      *(uint *)(param_1 + 4) = (uint)(uVar4 < *(uint *)(param_1 + 0x3c));
                    /* try { // try from 010b2e40 to 011b2e43 has its CatchHandler @ 010b2ef4 */
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(uint *)(param_1 + 0x1c) = ((int)uVar4 << 3 | 1U) - *(uint *)(param_1 + 0x3c);
                    /* try { // try from 010b2e44 to 011b2ef7 has its CatchHandler @ 010b2d44 */
      if (uVar4 != 0) goto LAB_010b2e48;
    }
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

