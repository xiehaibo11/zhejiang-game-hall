
undefined8 FUN_00c140dc(long param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  uint local_c;
  undefined8 local_8;
  
  local_c = 0;
  puVar3 = *(ulong **)(param_1 + 0x20);
  puVar1 = *(ulong **)(param_1 + 0x28);
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x168);
  *(long *)(lVar4 + 0x10) = param_1;
  if ((puVar1 <= puVar3 + 2) || ((int)((long)*puVar3 >> 0x2f) != -0xb)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb554(param_1,1,10);
  }
  uVar2 = FUN_00c21030(lVar4,*puVar3 & 0x7fffffffffff,puVar3 + 1,&local_8,&local_c);
  if ((local_c & 1) == 0) {
    FUN_00c21568(lVar4,uVar2,local_8,puVar3 + 2);
    return 0;
  }
  if ((local_c >> 0x19 & 1) == 0) {
    uVar2 = FUN_00c13f74(param_1,lVar4,uVar2,1);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0xdc5);
}

