
undefined8 ssl3_callback_ctrl(long param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  if (param_2 == 0x4f) {
    puVar1 = (undefined8 *)(param_1 + 0x398);
  }
  else if (param_2 == 0x38) {
    puVar1 = (undefined8 *)(param_1 + 0x218);
  }
  else {
    if (param_2 != 6) {
      return 0;
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x148) + 0x10);
  }
  *puVar1 = param_3;
  return 0;
}

