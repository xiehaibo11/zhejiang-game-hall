
void png_set_sBIT(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_2 + 0xb4) = *(undefined1 *)(param_3 + 1);
    uVar1 = *param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
    *(undefined4 *)(param_2 + 0xb0) = uVar1;
  }
  return;
}

