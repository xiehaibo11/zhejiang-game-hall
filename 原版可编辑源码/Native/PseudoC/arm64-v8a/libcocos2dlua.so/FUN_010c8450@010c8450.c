
ulong FUN_010c8450(undefined8 *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_2;
  if (param_3 == 3) {
    param_3 = *(int *)(param_1 + 8);
  }
  if (param_3 == 0) {
    iVar1 = *(int *)(**(long **)*param_1 + 0x510);
    iVar2 = png_gamma_significant(iVar1);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 8) = 4;
      goto switchD_010c8508_caseD_4;
    }
                    /* try { // try from 010c84c8 to 011c857f has its CatchHandler @ 010c84c8
                       catch() { ... } // from try @ 010c84c8 with catch @ 010c84c8
                       catch() { ... } // from try @ 010c85fc with catch @ 010c84c8
                       catch() { ... } // from try @ 010c8874 with catch @ 010c84c8
                       catch() { ... } // from try @ 010c88f8 with catch @ 010c84c8
                       catch() { ... } // from try @ 010c89f0 with catch @ 010c84c8
                       catch() { ... } // from try @ 010c8a68 with catch @ 010c84c8
                       catch() { ... } // from try @ 010c8bb4 with catch @ 010c84c8
                       catch() { ... } // from try @ 010c8d44 with catch @ 010c84c8
                       catch() { ... } // from try @ 010c8d6c with catch @ 010c84c8 */
    if ((99999 < iVar1) ||
       ((iVar1 != 0 && (iVar2 = png_gamma_significant((iVar1 * 0xb + 2) / 5), iVar2 != 0)))) {
      *(undefined4 *)(param_1 + 8) = 3;
      uVar3 = png_reciprocal(iVar1);
      param_3 = *(int *)(param_1 + 8);
      *(undefined4 *)((long)param_1 + 0x44) = uVar3;
      goto LAB_010c84ec;
    }
    *(undefined4 *)(param_1 + 8) = 1;
switchD_010c8508_caseD_1:
    uVar5 = (ulong)(ushort)(&png_sRGB_table)[uVar5];
  }
  else {
LAB_010c84ec:
    switch(param_3) {
    case 1:
      goto switchD_010c8508_caseD_1;
    case 2:
      break;
    case 3:
      uVar4 = png_gamma_16bit_correct(param_2 * 0x101,*(undefined4 *)((long)param_1 + 0x44));
      uVar5 = (ulong)(uVar4 & 0xffff);
      break;
    case 4:
switchD_010c8508_caseD_4:
      uVar5 = (ulong)(param_2 * 0x101);
      break;
    default:
                    /* WARNING: Subroutine does not return */
      png_error(**(undefined8 **)*param_1,"unexpected encoding (internal error)");
    }
  }
  return uVar5;
}

