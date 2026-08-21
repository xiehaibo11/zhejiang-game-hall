
undefined8 FUN_00c2d7b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long local_220;
  ulong local_218;
  long local_210;
  undefined4 local_208;
  undefined4 local_204;
  
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
  uVar2 = *(ulong *)(uVar6 + 0x30) & 0x7fffffffffff;
  uVar5 = *(ulong *)(uVar6 + 0x38);
  lVar1 = uVar2 + 0x18;
  uVar4 = lVar1 + (ulong)*(uint *)(uVar6 + 0x40);
  local_218 = lVar1 + (ulong)*(uint *)(uVar2 + 0x10);
  local_220 = lVar1;
  local_210 = param_1;
  if (uVar4 <= local_218) {
    do {
      local_204 = 0;
      local_208 = 0;
      uVar2 = FUN_00c2cc0c(&local_220,uVar4,(uVar5 & 0x7fffffffffff) + 0x18);
      if (uVar2 != 0) {
        iVar7 = (int)uVar2 - (int)lVar1;
        if (uVar2 == uVar4) {
          iVar7 = iVar7 + 1;
        }
        *(int *)(uVar6 + 0x40) = iVar7;
        uVar3 = FUN_00c2ca54(&local_220,uVar4,uVar2);
        return uVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= local_218);
  }
  return 0;
}

