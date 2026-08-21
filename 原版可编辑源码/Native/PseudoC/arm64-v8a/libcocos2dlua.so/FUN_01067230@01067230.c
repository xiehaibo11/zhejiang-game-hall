
undefined8 FUN_01067230(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_2 + 0x90) = 0x6f75746c;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_2 + 0xe8) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 200) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(uint *)(param_2 + 0xe8) = (uint)uVar1 & 0xfffffffe;
  *(undefined8 *)(param_2 + 0xe0) = uVar3;
  *(undefined8 *)(param_2 + 0xd8) = uVar2;
  return 0;
}

