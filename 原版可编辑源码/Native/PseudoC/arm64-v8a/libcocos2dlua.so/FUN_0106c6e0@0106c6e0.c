
int FUN_0106c6e0(uint *param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  long unaff_x25;
  undefined1 *unaff_x26;
  long unaff_x27;
  uint *unaff_x28;
  long unaff_x29;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  uint *in_stack_00000030;
  long *in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  
  do {
    uVar7 = *unaff_x28;
                    /* try { // try from 0106c6e4 to 0116c707 has its CatchHandler @ 0106c834 */
    uVar2 = *param_1;
    *(undefined4 *)(unaff_x29 + -0x54) = 0;
    if (uVar2 < uVar7 + 3) {
      uVar9 = *in_stack_00000010;
      uVar8 = uVar2;
      do {
        uVar8 = uVar8 + (uVar8 >> 1) + 0x10;
      } while (uVar8 < uVar7 + 3);
                    /* try { // try from 0106c724 to 0116c737 has its CatchHandler @ 0106c818 */
      lVar6 = ft_mem_realloc(uVar9,0x10,uVar2,uVar8,*in_stack_00000038,unaff_x29 + -0x54);
      *in_stack_00000038 = lVar6;
                    /* try { // try from 0106c73c to 0116c773 has its CatchHandler @ 0106c830 */
      iVar3 = *(int *)(unaff_x29 + -0x54);
      if (iVar3 == 0) {
        lVar6 = ft_mem_realloc(uVar9,1,uVar2,uVar8,*in_stack_00000018,unaff_x29 + -0x54);
        *in_stack_00000018 = lVar6;
        iVar3 = *(int *)(unaff_x29 + -0x54);
        if (iVar3 == 0) {
                    /* try { // try from 0106c774 to 0116c8cf has its CatchHandler @ 0106c610 */
          *in_stack_00000030 = uVar8;
          uVar7 = *unaff_x28;
          unaff_x20 = in_stack_00000008;
          goto LAB_0106c790;
        }
      }
      *unaff_x26 = 0;
      goto LAB_0106c80c;
    }
    lVar6 = *in_stack_00000018;
LAB_0106c790:
    unaff_x27 = unaff_x27 - unaff_x25;
    plVar1 = (long *)(*in_stack_00000038 + (ulong)uVar7 * 0x10);
    plVar1[1] = in_stack_00000058;
    *plVar1 = in_stack_00000050;
    plVar1[3] = in_stack_00000048;
    plVar1[2] = in_stack_00000040;
    plVar1[5] = in_stack_00000068;
    plVar1[4] = in_stack_00000060;
    *(undefined2 *)(lVar6 + (ulong)uVar7) = 0x202;
    *(undefined1 *)((undefined2 *)(lVar6 + (ulong)uVar7) + 1) = 1;
    *unaff_x28 = *unaff_x28 + 3;
    *unaff_x26 = 0;
    in_stack_00000078 = in_stack_00000068;
    in_stack_00000070 = in_stack_00000060;
    if (unaff_x27 == 0) {
      iVar3 = 0;
LAB_0106c80c:
      *unaff_x26 = 0;
                    /* catch() { ... } // from try @ 0106c724 with catch @ 0106c818 */
                    /* catch() { ... } // from try @ 0106c6cc with catch @ 0106c81c */
                    /* catch() { ... } // from try @ 0106c67c with catch @ 0106c820 */
      return iVar3;
    }
    unaff_x25 = unaff_x27;
    if (unaff_x27 < -0x59ffff) {
      unaff_x25 = -0x5a0000;
    }
    if (0x59ffff < unaff_x25) {
      unaff_x25 = 0x5a0000;
    }
    lVar6 = unaff_x25 + unaff_x21;
    lVar5 = -unaff_x25;
    if (-1 < unaff_x25) {
      lVar5 = unaff_x25;
    }
    FT_Vector_From_Polar(&stack0x00000060,in_stack_00000028,lVar6);
    in_stack_00000060 = in_stack_00000060 + *(long *)(unaff_x20 + 0x10);
    in_stack_00000068 = in_stack_00000068 + *(long *)(unaff_x20 + 0x18);
    lVar4 = FT_Sin(lVar5 >> 1);
    lVar5 = FT_Cos(lVar5 >> 1);
    uVar9 = FT_MulDiv(in_stack_00000028,lVar4 << 2,lVar5 * 3 + 0x30000);
    FT_Vector_From_Polar(&stack0x00000050,uVar9,unaff_x21 + in_stack_00000020);
    in_stack_00000050 = in_stack_00000050 + in_stack_00000070;
    in_stack_00000058 = in_stack_00000058 + in_stack_00000078;
    FT_Vector_From_Polar(&stack0x00000040,uVar9,lVar6 - in_stack_00000020);
    in_stack_00000040 = in_stack_00000040 + in_stack_00000060;
    in_stack_00000048 = in_stack_00000048 + in_stack_00000068;
    param_1 = in_stack_00000030;
    unaff_x21 = lVar6;
  } while( true );
}

