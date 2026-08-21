
undefined8 FUN_00c14938(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  long lVar6;
  
  lVar3 = FUN_00c1450c();
  puVar4 = (ulong *)FUN_00c29a84(param_1,2);
  uVar2 = *(ushort *)(lVar3 + 10);
  plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  lVar6 = *plVar5;
  plVar5[2] = param_1;
  for (uVar1 = *(uint *)(lVar6 + (ulong)uVar2 * 0x18); uVar1 >> 0x1c == 8;
      uVar1 = *(uint *)(lVar6 + (ulong)(ushort)uVar1 * 0x18)) {
  }
  if ((1 < (uVar1 >> 0x1c) - 1) && ((uVar1 & 0xfc000000) != 0x30000000)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb458(param_1,1,0xb83);
  }
  FUN_00c20f88(param_1,lVar3,*puVar4 & 0x7fffffffffff,(long)*puVar4 >> 0x2f);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x20) + 8;
  return 1;
}

