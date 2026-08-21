
void FUN_01448860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  sVar1 = *(short *)(unaff_x20 + unaff_x19 + 1);
  lVar3 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar3 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar3 = *(long *)(unaff_x26 + 0xa0);
  }
  iVar2 = ((int)unaff_x19 + -1) * 2;
  *(int *)(unaff_x29 + -0x20) = iVar2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21c8),param_3,unaff_x29,param_1,lVar3,
               *(undefined8 *)(unaff_x29 + -8),iVar2,lVar3,param_1,sVar1 * 2,0);
}

