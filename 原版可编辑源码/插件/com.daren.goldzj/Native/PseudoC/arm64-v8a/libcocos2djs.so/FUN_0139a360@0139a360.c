
undefined8 FUN_0139a360(ulong param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long unaff_x26;
  
  if ((((((param_1 & 1) != 0) && ((param_2 & 1) != 0)) &&
       (lVar3 = unaff_x26 + (ulong)*(uint *)(param_2 - 1), *(short *)(lVar3 + 7) == 0x439)) &&
      ((bVar2 = *(byte *)(lVar3 + 9), (bVar2 & 0xc0) == 0xc0 ||
       ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd < 4)))) &&
     ((bVar2 & 1) == 0)) {
    lVar3 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b);
    if (*(int *)(lVar3 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
      lVar3 = unaff_x26 + (ulong)*(uint *)(lVar3 + 0xf);
    }
    else if ((int)lVar3 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) goto LAB_0139a518;
    uVar1 = *(uint *)(param_1 - 1);
    while( true ) {
      lVar5 = unaff_x26 + (ulong)uVar1;
      if ((*(ushort *)(lVar5 + 7) < 0x411) &&
         ((*(ushort *)(lVar5 + 7) == 0xa9 || ((*(byte *)(lVar5 + 9) & 0x24) != 0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2258));
      }
      lVar5 = unaff_x26 + (ulong)*(uint *)(lVar5 + 0xf);
      iVar4 = (int)lVar5;
      if (iVar4 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
        return *(undefined8 *)(unaff_x26 + 0xc0);
      }
      if (iVar4 == (int)lVar3) break;
      uVar1 = *(uint *)(lVar5 + -1);
    }
    return *(undefined8 *)(unaff_x26 + 0xb8);
  }
LAB_0139a518:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2010));
}

