
void jinit_input_controller(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x30);
  *(undefined8 **)(param_1 + 0x260) = puVar1;
  *puVar1 = FUN_010e8164;
  puVar1[3] = FUN_010e8980;
  puVar1[4] = 0;
  puVar1[2] = FUN_010e8720;
  puVar1[1] = FUN_010e86c8;
  *(undefined4 *)(puVar1 + 5) = 1;
  return;
}

