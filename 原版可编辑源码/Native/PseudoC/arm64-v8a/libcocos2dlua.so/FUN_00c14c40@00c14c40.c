
void FUN_00c14c40(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  uint uVar9;
  
  puVar6 = *(ulong **)(param_1 + 0x20);
  plVar4 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  puVar8 = *(ulong **)(param_1 + 0x28);
  plVar4[2] = param_1;
  if ((puVar8 <= puVar6) || (uVar7 = *puVar6, (int)((long)uVar7 >> 0x2f) != -0xb)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb554(param_1,1,10);
  }
  uVar2 = *(ushort *)((uVar7 & 0x7fffffffffff) + 10);
  uVar3 = uVar2;
  while( true ) {
    uVar1 = *(uint *)(*plVar4 + (ulong)uVar3 * 0x18);
    if (uVar1 >> 0x1c != 8) break;
    uVar3 = (ushort)uVar1;
  }
  uVar9 = uVar1 & 0xffff;
  if (uVar1 >> 0x1c != 2) {
    uVar9 = (uint)uVar2;
  }
  lVar5 = FUN_00c0ed6c(plVar4,uVar9,param_2);
  if (lVar5 != 0) {
    FUN_00c1cda4(param_1,lVar5);
    return;
  }
  lVar5 = FUN_00c0ee70(param_1,uVar9,0);
                    /* WARNING: Subroutine does not return */
  FUN_00bfb308(param_1,0xda9,lVar5 + 0x18,
               *(long *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8 + 0x170) + 0x18);
}

