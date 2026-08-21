
undefined8 FUN_00e86ba8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_2 + 0x90) = 0x6f75746c;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0xe8) = uVar1;
  *(undefined8 *)(param_2 + 0xe0) = uVar3;
  *(undefined8 *)(param_2 + 0xd8) = uVar2;
  *(undefined8 *)(param_2 + 0xd0) = uVar5;
  *(undefined8 *)(param_2 + 200) = uVar4;
  *(uint *)(param_2 + 0xe8) = (uint)uVar1 & 0xfffffffe;
  return 0;
}

