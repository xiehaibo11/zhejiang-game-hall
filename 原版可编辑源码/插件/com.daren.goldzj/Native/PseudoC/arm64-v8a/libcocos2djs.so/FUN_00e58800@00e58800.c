
void FUN_00e58800(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x248);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x10);
  if (uVar2 != 0) {
    if (*(uint *)(param_1 + 0x23c) != 0) {
      uVar3 = uVar2 + (ulong)*(uint *)(param_1 + 0x23c) * 0x20;
      do {
        FUN_00e139fc(uVar1,*(undefined8 *)(uVar2 + 0x18));
        *(undefined8 *)(uVar2 + 0x18) = 0;
        uVar2 = uVar2 + 0x20;
      } while (uVar2 < uVar3);
      uVar2 = *(ulong *)(param_1 + 0x248);
    }
    FUN_00e139fc(uVar1,uVar2);
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  uVar2 = *(ulong *)(param_1 + 600);
  if (uVar2 != 0) {
    if (*(uint *)(param_1 + 0x250) != 0) {
      uVar3 = uVar2 + (ulong)*(uint *)(param_1 + 0x250) * 0x18;
      do {
        FUN_00e139fc(uVar1,*(undefined8 *)(uVar2 + 0x10));
        *(undefined8 *)(uVar2 + 0x10) = 0;
        uVar2 = uVar2 + 0x18;
      } while (uVar2 < uVar3);
      uVar2 = *(ulong *)(param_1 + 600);
    }
    FUN_00e139fc(uVar1,uVar2);
    *(undefined8 *)(param_1 + 600) = 0;
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined2 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  return;
}

