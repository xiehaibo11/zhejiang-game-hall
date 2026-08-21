
void FUN_0138bf20(ulong param_1)

{
  long lVar1;
  long lVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  long unaff_x26;
  long unaff_x27;
  
  bVar5 = (param_1 & 1) == 0;
  if (((((bVar5) || (*(int *)(*(long *)(unaff_x26 + 0xed8) + 0xb) == 0)) ||
       (lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 - 1), *(short *)(lVar1 + 7) != 0x423)) ||
      ((5 < *(byte *)(lVar1 + 10) >> 3 ||
       (*(int *)(lVar1 + 0xf) !=
        *(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
                0xe7))))) || (*(int *)(*(long *)(unaff_x26 + 0xea8) + 0xb) == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  bVar7 = true;
  if (((bVar5) || (*(int *)(*(long *)(unaff_x26 + 0xed8) + 0xb) == 0)) ||
     ((lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 - 1), *(short *)(lVar1 + 7) != 0x423 ||
      (((0xb < *(byte *)(lVar1 + 10) >> 3 ||
        (*(int *)(lVar1 + 0xf) !=
         *(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13)
                 + 0xe7))) || (*(int *)(*(long *)(unaff_x26 + 0xea8) + 0xb) == 0)))))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar8 || bVar4) {
    FUN_013728c0();
  }
  else {
    if (!bVar5) {
      if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) < 0x40) {
        if (*(int *)(*(long *)(unaff_x26 + 0xf10) + 0xb) == 2) {
          if (*(uint *)(param_1 + 7) < 0x2000001) {
            FUN_013eba60();
            return;
          }
          goto LAB_0138c1f4;
        }
        bVar7 = false;
      }
      else {
        bVar7 = false;
      }
    }
    if (!bVar7) {
      lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
      sVar3 = *(short *)(lVar1 + 7);
      if (((sVar3 == 0x412) || (sVar3 == 0x414)) &&
         ((*(int *)(param_1 + 0xf) == 0 && (*(int *)(*(long *)(unaff_x26 + 0xef8) + 0xb) == 2)))) {
        lVar1 = unaff_x26 + (ulong)*(uint *)(lVar1 + 0xf);
        lVar2 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
        if (((int)lVar1 == *(int *)(lVar2 + 0xfb)) &&
           (*(int *)(unaff_x26 + (ulong)*(uint *)(lVar1 + -1) + 0xf) == *(int *)(lVar2 + 0xf7))) {
          FUN_01390b80();
          return;
        }
      }
    }
    if (bVar5) goto LAB_0138c1f4;
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    if (*(short *)(lVar1 + 7) == 0x41d) {
      if (*(int *)(lVar1 + 0xf) !=
          *(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13)
                  + 0x10b)) goto LAB_0138c1f4;
    }
    else {
      if ((*(short *)(lVar1 + 7) != 0x416) || (*(int *)(param_1 + 0xf) != 0)) goto LAB_0138c1f4;
      lVar1 = unaff_x26 + (ulong)*(uint *)(lVar1 + 0xf);
      lVar2 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
      if (((int)lVar1 != *(int *)(lVar2 + 0x107)) ||
         (*(int *)(unaff_x26 + (ulong)*(uint *)(lVar1 + -1) + 0xf) != *(int *)(lVar2 + 0xf7)))
      goto LAB_0138c1f4;
    }
    if (*(int *)(*(long *)(unaff_x26 + 0xf08) + 0xb) != 2) {
LAB_0138c1f4:
      uVar6 = FUN_013c0ba0(param_1,*(undefined8 *)(unaff_x26 + 0xc18));
      FUN_0138b860(param_1,uVar6);
      return;
    }
    FUN_013a62a0();
  }
  return;
}

