
void ssl_set_masks(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  
  lVar6 = *(long *)(param_1 + 0x148);
  if (lVar6 != 0) {
    lVar9 = *(long *)(param_1 + 0x90);
    if ((*(long *)(lVar6 + 8) == 0) && (*(long *)(lVar6 + 0x10) == 0)) {
      bVar4 = *(int *)(lVar6 + 0x18) != 0;
    }
    else {
      bVar4 = true;
    }
    if (*(long *)(lVar6 + 0x110) == 0) {
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      bVar3 = *(long *)(lVar6 + 0x118) != 0;
      uVar7 = 0;
      if (bVar3) {
        uVar7 = 0x80;
      }
      uVar8 = 0;
      if (bVar3) {
        uVar8 = 0x10;
      }
    }
    uVar10 = *(uint *)(lVar9 + 0x310) & 1;
    if ((*(long *)(lVar6 + 0xe8) != 0) && (*(long *)(lVar6 + 0xf0) != 0)) {
      uVar7 = 0x80;
      uVar8 = 0x10;
    }
    if ((*(long *)(lVar6 + 0xc0) != 0) && (*(long *)(lVar6 + 200) != 0)) {
      uVar8 = 0x10;
      uVar7 = uVar7 | 0x20;
    }
    uVar8 = uVar8 | uVar10;
    uVar2 = uVar8 | 2;
    if (!bVar4) {
      uVar2 = uVar8;
    }
    uVar7 = (uint)((*(uint *)(lVar9 + 0x314) & 2) != 0 || uVar10 != 0) |
            *(uint *)(lVar9 + 0x318) & 2 | uVar7;
                    /* try { // try from 00ac9440 to 00bc9483 has its CatchHandler @ 00ac9440
                       catch() { ... } // from try @ 00ac9440 with catch @ 00ac9440
                       catch() { ... } // from try @ 00ac9504 with catch @ 00ac9440 */
    uVar10 = uVar7 | 4;
    uVar8 = uVar10;
    if ((*(uint *)(lVar9 + 0x31c) & 1) != 0) {
      uVar5 = X509_get_key_usage(*(undefined8 *)(lVar6 + 0x98));
      pbVar1 = (byte *)(lVar9 + 0x31c);
      lVar9 = *(long *)(param_1 + 0x90);
      uVar8 = uVar7 | 0xc;
      if (((uint)(uVar5 >> 7) & 0x1ffffff & (*pbVar1 & 2) >> 1) == 0) {
        uVar8 = uVar10;
      }
    }
                    /* try { // try from 00ac9484 to 00bc94d7 has its CatchHandler @ 00ac956c */
    *(uint *)(lVar9 + 0x32c) = uVar2 | (uVar2 & 1) << 6 | (uVar2 & 2) << 7 | 0x8c;
    *(uint *)(lVar9 + 0x330) = uVar8 | 0x10;
  }
  return;
}

