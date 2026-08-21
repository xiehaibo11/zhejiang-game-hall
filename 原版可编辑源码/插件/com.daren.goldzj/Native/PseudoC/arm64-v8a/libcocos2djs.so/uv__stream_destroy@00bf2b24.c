
void uv__stream_destroy(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x10) + 8) =
         *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x18);
    (**(code **)(*(long *)(param_1 + 0x78) + 0x40))(*(long *)(param_1 + 0x78),0xffffff83);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  uv__stream_flush_write_queue(param_1,0xffffff83);
  FUN_00bf2190(param_1);
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 != 0) {
    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x80) + 0x10) + 8) =
         *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x18);
    (**(code **)(*(long *)(param_1 + 0x80) + 0x48))(*(long *)(param_1 + 0x80),0xffffff83);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}

