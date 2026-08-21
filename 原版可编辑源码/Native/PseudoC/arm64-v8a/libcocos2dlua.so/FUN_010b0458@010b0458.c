
undefined8 FUN_010b0458(long *param_1,__jmp_buf_tag *param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if ((int)param_2[1].__saved_mask.__val[8] == 0) {
    iVar3 = (int)param_2[1].__saved_mask.__val[6];
    uVar5 = param_2[1].__saved_mask.__val[7];
                    /* try { // try from 010b0478 to 011b0483 has its CatchHandler @ 010b0524 */
    if (uVar5 != 0 || iVar3 != 0) {
                    /* try { // try from 010b0484 to 011b053f has its CatchHandler @ 010b0218 */
      uVar11 = param_2[1].__saved_mask.__val[4];
      puVar9 = (ulong *)(param_2[0xc].__jmpbuf[6] + *(long *)&param_2[1].__mask_was_saved * 8);
      puVar8 = (ulong *)*puVar9;
      if (param_2[1].__jmpbuf[7] <= (long)uVar11) {
        uVar11 = param_2[1].__jmpbuf[7];
      }
      while ((puVar8 != (ulong *)0x0 && ((long)*puVar8 <= (long)uVar11))) {
        if (*puVar8 == uVar11) goto LAB_010b04f0;
        puVar9 = puVar8 + 3;
        puVar8 = (ulong *)*puVar9;
      }
      uVar2 = param_2[1].__saved_mask.__val[0xb];
      if ((long)param_2[1].__saved_mask.__val[10] <= (long)uVar2) {
                    /* WARNING: Subroutine does not return */
        longjmp(param_2,1);
      }
      uVar12 = param_2[1].__saved_mask.__val[9];
      param_2[1].__saved_mask.__val[0xb] = uVar2 + 1;
      puVar8 = (ulong *)(uVar12 + uVar2 * 0x20);
      *(undefined4 *)(puVar8 + 2) = 0;
      *puVar8 = uVar11;
      puVar8[1] = 0;
      puVar8[3] = *puVar9;
      *puVar9 = (ulong)puVar8;
LAB_010b04f0:
      *(int *)(puVar8 + 2) = (int)puVar8[2] + iVar3;
      puVar8[1] = puVar8[1] + uVar5;
    }
  }
  puVar9 = param_2[1].__saved_mask.__val + 7;
  lVar1 = *param_1;
  lVar7 = param_1[1];
  uVar2 = param_2[1].__saved_mask.__val[0];
  uVar11 = param_2[1].__saved_mask.__val[1];
  *(undefined4 *)(param_2[1].__saved_mask.__val + 6) = 0;
  *puVar9 = 0;
  uVar12 = (lVar1 << 2) >> 8;
                    /* catch() { ... } // from try @ 010b0478 with catch @ 010b0524 */
  uVar6 = lVar7 << 2;
  uVar5 = uVar11;
  if ((long)uVar12 <= (long)uVar11) {
    uVar5 = uVar12;
  }
  lVar7 = ((lVar7 << 2) >> 8) - param_2[1].__saved_mask.__val[2];
  param_2[2].__jmpbuf[0] = uVar6 & 0xffffffffffffff00;
  uVar12 = uVar2 - 1;
  if ((long)uVar2 <= (long)uVar5) {
    uVar12 = uVar5;
  }
  if ((long)uVar12 <= (long)uVar11) {
    uVar11 = uVar12;
  }
  lVar10 = uVar11 - uVar2;
  if (lVar10 < 0) {
    lVar10 = -1;
  }
  param_2[1].__jmpbuf[7] = uVar12 - uVar2;
  *(long *)&param_2[1].__mask_was_saved = lVar7;
  *(undefined4 *)(param_2[1].__saved_mask.__val + 8) = 0;
  if (lVar10 != uVar12 - uVar2) {
    *(undefined4 *)(param_2[1].__saved_mask.__val + 6) = 0;
    *puVar9 = 0;
    param_2[1].__jmpbuf[7] = lVar10;
    *(long *)&param_2[1].__mask_was_saved = lVar7;
  }
                    /* try { // try from 010b0588 to 011b06cb has its CatchHandler @ 010b0588
                       catch(type#1 @ 00000000) { ... } // from try @ 010b0588 with catch @ 010b0588
                       catch(type#1 @ 00000000) { ... } // from try @ 010b0740 with catch @ 010b0588
                       catch(type#1 @ 00000000) { ... } // from try @ 010b07cc with catch @ 010b0588
                       catch(type#1 @ 00000000) { ... } // from try @ 010b084c with catch @ 010b0588
                       catch(type#1 @ 00000000) { ... } // from try @ 010b08c8 with catch @ 010b0588
                        */
  if ((uint)lVar7 < (uint)param_2[1].__saved_mask.__val[5]) {
    uVar4 = (uint)((long)param_2[1].__saved_mask.__val[4] <= lVar10);
  }
  else {
    uVar4 = 1;
  }
  *(uint *)(param_2[1].__saved_mask.__val + 8) = uVar4;
  param_2[1].__saved_mask.__val[0xe] = lVar1 << 2;
  param_2[1].__saved_mask.__val[0xf] = uVar6;
  return 0;
}

