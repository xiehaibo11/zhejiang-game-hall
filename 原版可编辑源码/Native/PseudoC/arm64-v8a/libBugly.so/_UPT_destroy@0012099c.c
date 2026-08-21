
void _UPT_destroy(void *param_1)

{
  *(undefined8 *)((long)param_1 + 8) = 0;
  *(undefined8 *)((long)param_1 + 0x10) = 0;
  *(undefined8 *)((long)param_1 + 0x18) = 0;
  *(undefined8 *)((long)param_1 + 0x20) = 0;
  *(undefined8 *)((long)param_1 + 0x28) = 0;
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  *(undefined8 *)((long)param_1 + 0x38) = 0;
  *(undefined8 *)((long)param_1 + 0x40) = 0;
  *(undefined8 *)((long)param_1 + 0x48) = 0;
  *(undefined8 *)((long)param_1 + 0x50) = 0;
  *(undefined8 *)((long)param_1 + 0x58) = 0;
  *(undefined8 *)((long)param_1 + 0x60) = 0;
  *(undefined8 *)((long)param_1 + 0x68) = 0;
  *(undefined8 *)((long)param_1 + 0x70) = 0;
  *(undefined8 *)((long)param_1 + 0x78) = 0;
  *(undefined8 *)((long)param_1 + 0x80) = 0;
  *(undefined8 *)((long)param_1 + 0x88) = 0;
  *(undefined8 *)((long)param_1 + 0x90) = 0;
  *(undefined8 *)((long)param_1 + 0x98) = 0;
  *(undefined8 *)((long)param_1 + 0xa0) = 0;
  free(param_1);
  return;
}

