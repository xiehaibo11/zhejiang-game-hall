
void png_set_bKGD(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    *(undefined2 *)(param_2 + 0xd2) = *(undefined2 *)(param_3 + 1);
    uVar1 = *param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x20;
    *(undefined8 *)(param_2 + 0xca) = uVar1;
  }
  return;
}

