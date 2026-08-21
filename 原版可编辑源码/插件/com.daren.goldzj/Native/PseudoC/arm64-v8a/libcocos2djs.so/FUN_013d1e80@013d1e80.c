
ulong FUN_013d1e80(undefined8 param_1,int param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long unaff_x26;
  
  if ((int)param_1 == (int)*(undefined8 *)(unaff_x26 + 0xa0) ||
      (int)param_1 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
    uVar1 = *(ulong *)(unaff_x26 + 200);
  }
  else {
    uVar1 = FUN_013c0ba0(param_1,unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x157))
    ;
    if (((uVar1 & 1) == 0) ||
       ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar1 - 1) + 9) >> 1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    iVar2 = (int)*(undefined8 *)(unaff_x26 + 0xb0);
    iVar3 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
    if (param_2 == iVar3 || param_2 == iVar2) {
      uVar1 = FUN_0133fcc0(0,uVar1,0);
    }
    else if (param_3 == iVar3 || param_3 == iVar2) {
      uVar1 = FUN_0133fcc0(1,uVar1,1);
    }
    else {
      uVar1 = FUN_0133fcc0(2,uVar1,2);
    }
    if (((uVar1 & 1) == 0) || (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar1 - 1) + 7))) {
      uVar1 = FUN_013e8ae0();
    }
  }
  return uVar1;
}

