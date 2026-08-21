
void FUN_00c063d4(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_2 + 0xa8);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  *(ulong *)(lVar4 + 0x20) = *(long *)(lVar4 + 0x20) + (ulong)uVar1 * -8;
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 0x18),uVar2,(ulong)uVar1 * 8,0);
  uVar1 = *(uint *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  *(ulong *)(lVar4 + 0x20) = *(long *)(lVar4 + 0x20) + (ulong)uVar1 * -0x18;
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 0x18),uVar2,(ulong)uVar1 * 0x18,0);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = (ulong)(uint)((int)*(undefined8 *)(param_2 + 0x48) - (int)uVar2);
  *(ulong *)(lVar4 + 0x20) = *(long *)(lVar4 + 0x20) - uVar3;
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 0x18),uVar2,uVar3,0);
  return;
}

