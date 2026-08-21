
undefined8 FUN_013bb660(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long unaff_x26;
  
  iVar3 = *(int *)(param_1 + 0x1f);
  lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x27);
  do {
    while( true ) {
      uVar2 = *(undefined8 *)(unaff_x26 + 0xa0);
      if ((*(int *)(param_1 + 0x2b) == 2) || ((int)lVar4 == (int)uVar2)) {
        return uVar2;
      }
      iVar1 = *(int *)(lVar4 + 7);
      if (iVar1 != 0) break;
      if (iVar3 == -2) {
        FUN_013ba980(param_1,uVar2,*(undefined8 *)(unaff_x26 + 0xb8));
        iVar3 = *(int *)(param_1 + 0x1f);
        lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x27);
      }
      else {
LAB_013bb730:
        *(int *)(param_1 + 0x1b) = iVar1;
        FUN_01344520(unaff_x26 + (ulong)*(uint *)(lVar4 + 0xb),param_1);
        iVar3 = *(int *)(param_1 + 0x1f);
        lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x27);
      }
    }
    if (iVar3 == 0) {
      iVar3 = -2;
      *(undefined4 *)(param_1 + 0x1f) = 0xfffffffe;
    }
    if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1e90));
    }
    if (iVar3 != -2) goto LAB_013bb730;
    FUN_013bab20(param_1,unaff_x26 + (ulong)*(uint *)(lVar4 + 0xb));
    lVar4 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x27);
  } while( true );
}

