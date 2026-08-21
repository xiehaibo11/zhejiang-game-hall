
undefined8 FUN_0137a8e0(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x26;
  ulong in_stack_00000000;
  ulong in_stack_00000008;
  
  if (&stack0xffffffffffffffd0 <= *(undefined1 **)(unaff_x26 + 0x60)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2048));
  }
  if ((((((in_stack_00000000 & 1) != 0) && ((in_stack_00000008 & 1) != 0)) &&
       (lVar5 = unaff_x26 + (ulong)*(uint *)(in_stack_00000008 - 1), *(short *)(lVar5 + 7) == 0x439)
       ) && ((bVar2 = *(byte *)(lVar5 + 9), (bVar2 & 0xc0) == 0xc0 ||
             ((*(uint *)(unaff_x26 + (ulong)*(uint *)(in_stack_00000008 + 0xb) + 0x1b) & 0x1f) - 0xd
              < 4)))) && ((bVar2 & 1) == 0)) {
    lVar5 = unaff_x26 + (ulong)*(uint *)(in_stack_00000008 + 0x1b);
    if (*(int *)(lVar5 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
      lVar5 = unaff_x26 + (ulong)*(uint *)(lVar5 + 0xf);
    }
    else if ((int)lVar5 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) goto LAB_0137aa34;
    uVar1 = *(uint *)(in_stack_00000000 - 1);
    while( true ) {
      lVar4 = unaff_x26 + (ulong)uVar1;
      if ((*(ushort *)(lVar4 + 7) < 0x411) &&
         ((*(ushort *)(lVar4 + 7) == 0xa9 || ((*(byte *)(lVar4 + 9) & 0x24) != 0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2258));
      }
      lVar4 = unaff_x26 + (ulong)*(uint *)(lVar4 + 0xf);
      iVar3 = (int)lVar4;
      if (iVar3 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
        return *(undefined8 *)(unaff_x26 + 0xc0);
      }
      if (iVar3 == (int)lVar5) break;
      uVar1 = *(uint *)(lVar4 + -1);
    }
    return *(undefined8 *)(unaff_x26 + 0xb8);
  }
LAB_0137aa34:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2010));
}

