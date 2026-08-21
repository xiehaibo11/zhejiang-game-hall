
undefined8 FUN_010f2b78(long param_1,long *param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  
                    /* try { // try from 010f2b84 to 011f2b8f has its CatchHandler @ 010f2cec */
  lVar9 = *(long *)(param_1 + 0x230);
  if (*(int *)(param_1 + 0x13c) != 0) {
    iVar3 = *(int *)(lVar9 + 0x60);
    if (iVar3 == 0) {
      FUN_010f3290(param_1,*(undefined4 *)(lVar9 + 100));
      iVar3 = *(int *)(param_1 + 0x13c);
      *(int *)(lVar9 + 0x60) = iVar3;
      *(uint *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1U & 7;
    }
    *(int *)(lVar9 + 0x60) = iVar3 + -1;
  }
  uVar4 = *(uint *)(param_1 + 0x1d0);
  lVar5 = *(long *)(param_1 + 0x1e0);
  lVar11 = *param_2;
                    /* try { // try from 010f2bec to 011f2bf3 has its CatchHandler @ 010f2cd4 */
  lVar8 = (long)*(int *)(*(long *)(param_1 + 0x178) + 0x18);
  lVar6 = 0;
                    /* try { // try from 010f2bf4 to 011f2d03 has its CatchHandler @ 010f29cc */
  lVar7 = (long)(int)uVar4 << 0x20;
  do {
    sVar2 = *(short *)(lVar11 + (long)*(int *)(lVar5 + (long)(int)uVar4 * 4 + lVar6 * 4) * 2);
    if (sVar2 < 0) {
      iVar3 = -(int)sVar2 >> (*(uint *)(param_1 + 0x1d8) & 0x1f);
    }
    else {
      iVar3 = (int)sVar2 >> (*(uint *)(param_1 + 0x1d8) & 0x1f);
    }
    if (iVar3 != 0) {
      iVar3 = (int)((ulong)uVar4 + lVar6);
      if (iVar3 < 1) {
        uVar13 = (ulong)uVar4 + lVar6 & 0xffffffff;
      }
      else {
        uVar12 = lVar7 >> 0x20;
        do {
          sVar2 = *(short *)(lVar11 + (long)*(int *)(lVar5 + uVar12 * 4) * 2);
          if (sVar2 < 0) {
            iVar14 = -(int)sVar2 >> (*(uint *)(param_1 + 0x1d4) & 0x1f);
          }
          else {
            iVar14 = (int)sVar2 >> (*(uint *)(param_1 + 0x1d4) & 0x1f);
          }
          uVar13 = uVar12;
        } while ((iVar14 == 0) &&
                (uVar13 = uVar12 - 1, bVar1 = 0 < (long)uVar12, uVar12 = uVar13,
                uVar13 != 0 && bVar1));
      }
      goto LAB_010f2c98;
    }
    lVar6 = lVar6 + -1;
    lVar7 = lVar7 + -0x100000000;
  } while (uVar4 + (int)lVar6 != 0);
  iVar3 = 0;
  uVar13 = 0;
LAB_010f2c98:
  iVar14 = *(int *)(param_1 + 0x1cc) + -1;
  if (*(int *)(param_1 + 0x1cc) <= iVar3) {
LAB_010f2cbc:
    lVar7 = *(long *)(lVar9 + lVar8 * 8 + 0xe8) + (long)iVar14 + (long)iVar14 * 2;
    if ((int)uVar13 <= iVar14) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f2bec with catch @ 010f2cd4
                        */
      FUN_010f3408(param_1,lVar7,0);
    }
    piVar10 = (int *)(lVar5 + 4 + (long)iVar14 * 4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f2b84 with catch @ 010f2cec
                        */
    lVar7 = lVar7 + 1;
    do {
      iVar14 = iVar14 + 1;
      sVar2 = *(short *)(lVar11 + (long)*piVar10 * 2);
      lVar6 = lVar9 + 0x168;
      if (sVar2 < 0) {
        uVar4 = -(int)sVar2 >> (*(uint *)(param_1 + 0x1d8) & 0x1f);
        if (uVar4 != 0) {
          if (uVar4 != 1) goto LAB_010f2d8c;
                    /* try { // try from 010f2d50 to 011f2d57 has its CatchHandler @ 010f2ecc */
          FUN_010f3408(param_1,lVar7,1);
          uVar4 = 1;
                    /* try { // try from 010f2d58 to 011f2ecf has its CatchHandler @ 010f2d04 */
          goto LAB_010f2d98;
        }
      }
      else {
        uVar4 = (int)sVar2 >> (*(uint *)(param_1 + 0x1d8) & 0x1f);
        if (uVar4 != 0) goto LAB_010f2d64;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f2a20 with catch @ 010f2d00
                        */
      FUN_010f3408(param_1,lVar7,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010f2d58 with catch @ 010f2d04
                        */
      piVar10 = piVar10 + 1;
      lVar7 = lVar7 + 3;
    } while( true );
  }
LAB_010f2dac:
  if (iVar14 < (int)uVar4) {
    FUN_010f3408(param_1,*(long *)(lVar9 + lVar8 * 8 + 0xe8) + (long)(iVar14 * 3),1);
  }
  return 1;
LAB_010f2d64:
  if (uVar4 == 1) {
    FUN_010f3408(param_1,lVar7,1);
    uVar4 = 0;
  }
  else {
LAB_010f2d8c:
    uVar4 = uVar4 & 1;
    lVar6 = lVar7 + 1;
  }
LAB_010f2d98:
  FUN_010f3408(param_1,lVar6,uVar4);
  if (iVar3 <= iVar14) goto code_r0x010f2da4;
  goto LAB_010f2cbc;
code_r0x010f2da4:
  uVar4 = *(uint *)(param_1 + 0x1d0);
  goto LAB_010f2dac;
}

