
void FUN_00c18bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  ulong uVar1;
  undefined4 in_w9;
  long in_x10;
  long lVar2;
  
  lVar2 = *(long *)(in_x10 + 0x168);
  *(undefined4 *)(lVar2 + 0xd0) = in_w9;
  *(undefined8 *)(lVar2 + 0x70) = param_9;
  *(undefined8 *)(lVar2 + 0x78) = param_10;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  *(undefined8 *)(lVar2 + 0x80) = param_11;
  *(undefined8 *)(lVar2 + 0x88) = param_12;
  *(undefined8 *)(lVar2 + 0x40) = param_3;
  *(undefined8 *)(lVar2 + 0x48) = param_4;
  *(undefined8 *)(lVar2 + 0x90) = param_13;
  *(undefined8 *)(lVar2 + 0x98) = param_14;
  *(undefined8 *)(lVar2 + 0x50) = param_5;
  *(undefined8 *)(lVar2 + 0x58) = param_6;
  *(undefined8 *)(lVar2 + 0xa0) = param_15;
  *(undefined8 *)(lVar2 + 0xa8) = param_16;
  *(undefined8 *)(lVar2 + 0x60) = param_7;
  *(undefined8 *)(lVar2 + 0x68) = param_8;
  *(BADSPACEBASE **)(lVar2 + 0xb0) = register0x00000008;
  lVar2 = FUN_00c0ffec(lVar2,&stack0xffffffffffffff30);
  uVar1 = *(ulong *)(*(long *)(lVar2 + 0x20) + -0x10);
  *(undefined4 *)(in_x10 + 0x80) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00c18c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x10 + (ulong)(byte)**(undefined4 **)((uVar1 & 0x7fffffffffff) + 0x20) * 8 + 0x2a0)
  )();
  return;
}

