
undefined8 FUN_00c2c514(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  
  lVar2 = FUN_00c29dd4(param_1,1);
  bVar4 = false;
  uVar3 = *(long *)(param_1 + 0x20) + 8;
  if (uVar3 < *(ulong *)(param_1 + 0x28)) {
    bVar4 = (uint)((long)*(undefined8 *)(*(long *)(param_1 + 0x20) + 8) >> 0x2f) < 0xfffffffe;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(lVar5 + 0xa0) = param_1;
  *(undefined8 *)(lVar5 + 0x88) = *(undefined8 *)(lVar5 + 0x98);
  *(ulong *)(param_1 + 0x28) = uVar3;
  if ((*(char *)(lVar2 + 10) == '\0') &&
     (iVar1 = FUN_00c20c48(param_1,*(long *)(lVar2 + 0x20) + -0x68,FUN_00c2c0ac,lVar5 + 0x88,bVar4),
     iVar1 == 0)) {
    lVar2 = *(long *)(param_1 + 0x28);
    uVar3 = FUN_00bfba1c(param_1,*(undefined8 *)(lVar5 + 0x98),
                         (int)*(undefined8 *)(lVar5 + 0x88) - (int)*(undefined8 *)(lVar5 + 0x98));
    *(ulong *)(lVar2 + -8) = uVar3 | 0xfffd800000000000;
    if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)
       ) {
      FUN_00c19f80(param_1);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0x64e);
}

