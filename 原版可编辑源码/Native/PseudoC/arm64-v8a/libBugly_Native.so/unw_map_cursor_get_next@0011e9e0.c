
undefined8 unw_map_cursor_get_next(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *puVar1;
    param_2[1] = puVar1[1];
    *param_2 = uVar2;
    uVar2 = puVar1[2];
    param_2[3] = puVar1[3];
    param_2[2] = uVar2;
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(puVar1 + 4);
    param_2[4] = puVar1[5];
    *(undefined8 *)(param_1 + 8) = puVar1[0xf];
    return 1;
  }
  return 0;
}

