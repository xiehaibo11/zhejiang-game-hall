
undefined8 FUN_00c136a0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  long *plVar6;
  
  plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  plVar6[2] = param_1;
  uVar3 = FUN_00c132c0(param_1,plVar6,0);
  uVar4 = (ulong)uVar3;
  while( true ) {
    puVar1 = (uint *)(*plVar6 + uVar4 * 0x18);
    uVar2 = *(uint *)(*plVar6 + uVar4 * 0x18);
    if (uVar2 >> 0x1c != 8) break;
    uVar4 = (ulong)(ushort)uVar2;
  }
  puVar5 = (ulong *)FUN_00c29a84(param_1,2);
  uVar2 = *puVar1;
  *(ulong **)(param_1 + 0x28) = puVar5 + 1;
  if (((uVar2 >> 0x1c & 0xfffffffd) != 0) && (uVar2 >> 0x1c != 5)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb458(param_1,1,0xb83);
  }
  if (((int)((long)*puVar5 >> 0x2f) != -0xb) ||
     (*(ushort *)((*puVar5 & 0x7fffffffffff) + 10) != uVar3)) {
    uVar4 = FUN_00c1a314(plVar6[2],(ulong)puVar1[1] + 0x10);
    *(undefined1 *)(uVar4 + 9) = 10;
    *(short *)(uVar4 + 10) = (short)uVar3;
    FUN_00c22594(plVar6,puVar1,uVar4 + 0x10,puVar5,1);
    *puVar5 = uVar4 | 0xfffa800000000000;
    if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)
       ) {
      FUN_00c19f80(param_1);
    }
  }
  return 1;
}

