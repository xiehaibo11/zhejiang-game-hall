
undefined8 unw_map_cursor_get_next(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    uVar6 = *puVar2;
    uVar5 = puVar2[1];
    uVar4 = puVar2[2];
    uVar3 = puVar2[3];
    uVar1 = *(undefined4 *)(puVar2 + 4);
    param_2[4] = puVar2[5];
    *param_2 = uVar6;
    param_2[1] = uVar5;
    param_2[2] = uVar4;
    param_2[3] = uVar3;
    *(undefined4 *)(param_2 + 5) = uVar1;
    *(undefined8 *)(param_1 + 8) = puVar2[0xf];
    return 1;
  }
  return 0;
}

