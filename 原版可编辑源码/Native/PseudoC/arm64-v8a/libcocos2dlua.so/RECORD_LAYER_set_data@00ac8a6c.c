
undefined8 RECORD_LAYER_set_data(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0x1a8) = param_3;
  if (((param_3 != 0) && (*(undefined4 *)((long)param_1 + 0xc) = 0xf0, param_1[3] == 0)) &&
     (uVar1 = ssl3_setup_read_buffer(*param_1), (int)uVar1 == 0)) {
    return uVar1;
  }
  param_1[0x1a7] = param_1[3];
  SSL3_BUFFER_set_data(param_1 + 3,param_2,param_3);
  return 1;
}

