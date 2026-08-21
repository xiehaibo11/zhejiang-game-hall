
undefined8 FUN_01099a90(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  *(long *)(param_1 + 0x18) = param_2;
  uVar1 = *(undefined1 *)(param_2 + 6);
  uVar2 = *(undefined1 *)(param_2 + 7);
  *(undefined8 *)(param_1 + 0x28) = 0xffffffff;
  *(uint *)(param_1 + 0x30) = (uint)(ushort)(CONCAT11(uVar1,uVar2) >> 1);
  return 0;
}

