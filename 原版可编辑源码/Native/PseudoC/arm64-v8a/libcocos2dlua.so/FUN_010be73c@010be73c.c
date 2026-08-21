
void FUN_010be73c(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 auStack_134 [24];
  undefined1 auStack_11c [204];
  
                    /* try { // try from 010be73c to 011be73f has its CatchHandler @ 010be758 */
                    /* try { // try from 010be740 to 011bea47 has its CatchHandler @ 010bda7c */
                    /* catch() { ... } // from try @ 010bde44 with catch @ 010be754 */
                    /* catch() { ... } // from try @ 010be73c with catch @ 010be758 */
  lVar4 = tpidr_el0;
  lVar9 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 010be648 with catch @ 010be770 */
  if (param_2 != 0) {
                    /* catch() { ... } // from try @ 010be5bc with catch @ 010be784 */
    *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
  }
                    /* catch() { ... } // from try @ 010be54c with catch @ 010be78c */
  lVar5 = png_safecat(auStack_11c,0xc4,0,"profile \'");
                    /* catch() { ... } // from try @ 010bdec0 with catch @ 010be7a4 */
                    /* catch() { ... } // from try @ 010bddb8 with catch @ 010be7b0 */
                    /* catch() { ... } // from try @ 010bdcb0 with catch @ 010be7b4 */
  uVar6 = png_safecat(auStack_11c,lVar5 + 0x4f,lVar5,param_3);
                    /* catch() { ... } // from try @ 010bdf48 with catch @ 010be7bc
                       catch() { ... } // from try @ 010be6b0 with catch @ 010be7bc */
                    /* catch() { ... } // from try @ 010bdd38 with catch @ 010be7c8
                       catch() { ... } // from try @ 010be4c0 with catch @ 010be7c8 */
                    /* catch() { ... } // from try @ 010be688 with catch @ 010be7d0 */
  lVar5 = png_safecat(auStack_11c,0xc4,uVar6,&DAT_01473311);
                    /* catch() { ... } // from try @ 010be594 with catch @ 010be7d4 */
                    /* catch() { ... } // from try @ 010be498 with catch @ 010be7d8 */
                    /* catch() { ... } // from try @ 010be2f4 with catch @ 010be7dc */
  uVar10 = param_4 >> 0x18;
                    /* catch() { ... } // from try @ 010be148 with catch @ 010be7e4 */
                    /* catch() { ... } // from try @ 010bdfc0 with catch @ 010be7e8 */
                    /* catch() { ... } // from try @ 010bdb7c with catch @ 010be7ec */
                    /* catch() { ... } // from try @ 010bdbd4 with catch @ 010be7f0 */
                    /* catch() { ... } // from try @ 010bdaf4 with catch @ 010be7f8 */
                    /* catch() { ... } // from try @ 010bdbb0 with catch @ 010be800 */
                    /* catch() { ... } // from try @ 010be40c with catch @ 010be818 */
                    /* catch() { ... } // from try @ 010be3e8 with catch @ 010be81c */
                    /* catch() { ... } // from try @ 010be250 with catch @ 010be824 */
                    /* catch() { ... } // from try @ 010be228 with catch @ 010be83c */
                    /* catch() { ... } // from try @ 010be0bc with catch @ 010be840 */
                    /* catch() { ... } // from try @ 010be098 with catch @ 010be844 */
                    /* catch() { ... } // from try @ 010be448 with catch @ 010be84c */
                    /* catch() { ... } // from try @ 010be2a4 with catch @ 010be850 */
                    /* catch() { ... } // from try @ 010be0f8 with catch @ 010be854 */
                    /* catch() { ... } // from try @ 010bdf70 with catch @ 010be858 */
                    /* catch() { ... } // from try @ 010bde6c with catch @ 010be860 */
                    /* catch() { ... } // from try @ 010bdd60 with catch @ 010be864 */
                    /* catch() { ... } // from try @ 010be3a0 with catch @ 010be868 */
                    /* catch() { ... } // from try @ 010be204 with catch @ 010be86c */
                    /* catch() { ... } // from try @ 010be068 with catch @ 010be87c */
                    /* catch() { ... } // from try @ 010be360 with catch @ 010be880 */
  if ((((((uVar10 & 0xffffffffdf) - 0x41 < 0x1a) || (uVar10 == 0x20)) || (uVar10 - 0x30 < 10)) &&
      (((((param_4 >> 0x10 & 0xdf) - 0x41 < 0x1a ||
         (uVar10 = param_4 >> 0x10 & 0xff, uVar10 == 0x20)) || (uVar10 - 0x30 < 10)) &&
       ((((param_4 >> 8 & 0xdf) - 0x41 < 0x1a || (uVar10 = param_4 >> 8 & 0xff, uVar10 == 0x20)) ||
        (uVar10 - 0x30 < 10)))))) &&
     ((((param_4 & 0xdf) - 0x41 < 0x1a || ((param_4 & 0xff) == 0x20)) ||
      ((param_4 & 0xff) - 0x30 < 10)))) {
    uVar3 = (uint)(param_4 >> 0x18) & 0xff;
    auStack_11c[lVar5] = 0x27;
    auStack_11c[lVar5 + 5] = 0x27;
    auStack_11c[lVar5 + 6] = 0x3a;
    uVar11 = (uint)param_4;
    if (0x5e < uVar3 - 0x20) {
      uVar3 = 0x3f;
    }
                    /* catch() { ... } // from try @ 010be028 with catch @ 010be964 */
    auStack_11c[lVar5 + 1] = (char)uVar3;
    uVar1 = (undefined1)(param_4 >> 0x10);
    if (0x5e < (uVar11 >> 0x10 & 0xff) - 0x20) {
      uVar1 = 0x3f;
    }
    uVar2 = (undefined1)(param_4 >> 8);
    if (0x5e < (uVar11 >> 8 & 0xff) - 0x20) {
      uVar2 = 0x3f;
    }
    auStack_11c[lVar5 + 2] = uVar1;
    auStack_11c[lVar5 + 3] = uVar2;
    if (0x5e < (uVar11 & 0xff) - 0x20) {
      uVar11 = 0x3f;
    }
    lVar7 = lVar5 + 8;
    auStack_11c[lVar5 + 4] = (char)uVar11;
    auStack_11c[lVar5 + 7] = 0x20;
  }
  else {
    uVar6 = png_format_number(auStack_134,auStack_11c,3,param_4);
    uVar6 = png_safecat(auStack_11c,0xc4,lVar5,uVar6);
    lVar7 = png_safecat(auStack_11c,0xc4,uVar6,"h: ");
  }
  png_safecat(auStack_11c,0xc4,lVar7,param_5);
  uVar8 = 1;
  if (param_2 != 0) {
    uVar8 = 2;
  }
                    /* catch() { ... } // from try @ 010be1c4 with catch @ 010be8fc */
  png_chunk_report(param_1,auStack_11c,uVar8);
  if (*(long *)(lVar4 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

