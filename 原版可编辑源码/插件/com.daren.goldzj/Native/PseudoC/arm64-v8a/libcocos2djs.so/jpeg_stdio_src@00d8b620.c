
void jpeg_stdio_src(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x50);
    *(long *)(param_1 + 0x28) = lVar1;
    uVar2 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x1000);
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    puVar3 = *(undefined8 **)(param_1 + 0x28);
  }
  puVar3[2] = FUN_00d8b6c8;
  puVar3[3] = FUN_00d8b6d8;
  puVar3[4] = FUN_00d8b778;
  puVar3[5] = jpeg_resync_to_restart;
  puVar3[6] = FUN_00d8b7e4;
  puVar3[7] = param_2;
  *puVar3 = 0;
  puVar3[1] = 0;
  return;
}

