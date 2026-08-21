
undefined4 FUN_00c141b0(long param_1)

{
  ulong *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  uint local_c;
  undefined8 local_8;
  
  local_c = 0;
  puVar4 = *(ulong **)(param_1 + 0x20);
  puVar6 = *(ulong **)(param_1 + 0x28);
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x168);
  puVar1 = puVar4 + 1;
  *(long *)(lVar8 + 0x10) = param_1;
  if ((puVar1 < puVar6) && (uVar7 = *puVar4, (int)((long)uVar7 >> 0x2f) == -0xb)) {
    uVar5 = FUN_00c21030(lVar8,uVar7 & 0x7fffffffffff,puVar1,&local_8,&local_c);
    if ((local_c & 1) == 0) {
      iVar2 = FUN_00c2147c(lVar8,uVar5,*(long *)(param_1 + 0x28) + -8,local_8);
      if ((iVar2 != 0) &&
         (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <=
          *(ulong *)(*(long *)(param_1 + 0x10) + 0x20))) {
        FUN_00c19f80(param_1);
      }
      return 1;
    }
    uVar3 = FUN_00c13f74(param_1,lVar8,uVar5,0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,1,10);
}

