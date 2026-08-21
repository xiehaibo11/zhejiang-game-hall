
void jinit_input_controller(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x30);
  *(undefined8 **)(param_1 + 0x260) = puVar1;
  *puVar1 = FUN_00d8bcbc;
  puVar1[3] = FUN_00d8c4d8;
  puVar1[4] = 0;
  puVar1[2] = FUN_00d8c278;
  puVar1[1] = FUN_00d8c220;
  *(undefined4 *)(puVar1 + 5) = 1;
  return;
}

