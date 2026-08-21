
void FUN_01446ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  bVar2 = *(byte *)(unaff_x20 + unaff_x19 + 3);
  iVar3 = ((int)unaff_x19 + -1) * 2;
  lVar1 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x20 + 7) +
                          (ulong)*(ushort *)(unaff_x20 + unaff_x19 + 1) * 4 + 7);
  if ((bVar2 & 1) != 0) {
    *(int *)(unaff_x29 + -0x20) = iVar3;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2548));
  }
  if ((bVar2 >> 1 & 1) == 0) {
    *(int *)(unaff_x29 + -0x20) = iVar3;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2538),param_3,lVar1,2,unaff_x29,bVar2,
                 *(undefined8 *)(unaff_x29 + -8),param_1,lVar1);
  }
  *(int *)(unaff_x29 + -0x20) = iVar3;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2540));
}

