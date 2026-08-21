
long FUN_0134a300(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long unaff_x26;
  double dVar6;
  
  lVar3 = *(long *)(unaff_x26 + 0xf38);
  uVar2 = ((uint)(*(int *)(lVar3 + 3) >> 1) >> 1) - 1;
  if ((param_1 & 1) != 0) {
    dVar6 = *(double *)(param_1 + 3);
    iVar5 = (int)dVar6;
    if ((dVar6 != (double)iVar5) || (((iVar5 == 0 && ((long)dVar6 < 0)) || (SCARRY4(iVar5,iVar5)))))
    {
      lVar4 = (ulong)(((*(uint *)(param_1 + 3) ^ *(uint *)(param_1 + 7)) & uVar2) * 2) * 4;
      uVar1 = unaff_x26 + (ulong)*(uint *)(lVar3 + lVar4 + 7);
      if (((((uVar1 & 1) != 0) && (*(int *)(uVar1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)))
          && (*(uint *)(param_1 + 3) == *(uint *)(uVar1 + 3))) &&
         (*(uint *)(param_1 + 7) == *(uint *)(uVar1 + 7))) {
        return unaff_x26 + (ulong)*(uint *)(lVar3 + lVar4 + 0xb);
      }
      goto LAB_0134a44c;
    }
    param_1 = (ulong)(iVar5 * 2);
  }
  lVar4 = (ulong)((uVar2 & (int)param_1 >> 1) * 2) * 4;
  if (*(int *)(lVar3 + lVar4 + 7) == (int)param_1) {
    return unaff_x26 + (ulong)*(uint *)(lVar3 + lVar4 + 0xb);
  }
LAB_0134a44c:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2178));
}

