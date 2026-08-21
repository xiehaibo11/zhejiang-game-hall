
void jinit_marker_writer(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x40);
  *(undefined8 **)(param_1 + 0x210) = puVar1;
  puVar1[4] = FUN_00d8534c;
  puVar1[5] = FUN_00d855c8;
  puVar1[6] = FUN_00d85760;
  puVar1[1] = FUN_00d83b0c;
  *puVar1 = FUN_00d82f78;
  puVar1[3] = FUN_00d85288;
  puVar1[2] = FUN_00d8471c;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}

