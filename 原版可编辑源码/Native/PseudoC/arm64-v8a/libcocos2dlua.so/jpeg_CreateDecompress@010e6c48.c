
void jpeg_CreateDecompress(long *param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  param_1[1] = 0;
  if (param_2 != 0x5a) {
    puVar1 = (undefined8 *)*param_1;
    puVar1[5] = 0x5a0000000d;
    *(int *)(puVar1 + 6) = param_2;
    (*(code *)*puVar1)(param_1);
  }
  if (param_3 != 0x298) {
    puVar1 = (undefined8 *)*param_1;
    puVar1[5] = 0x29800000016;
    *(int *)(puVar1 + 6) = (int)param_3;
    (*(code *)*puVar1)(param_1);
  }
  lVar2 = *param_1;
  lVar3 = param_1[3];
  memset(param_1 + 1,0,0x290);
  *param_1 = lVar2;
  param_1[3] = lVar3;
  *(undefined4 *)(param_1 + 4) = 1;
  jinit_memory_mgr(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0x33] = 0;
  memset(param_1 + 0x19,0,0x60);
  jinit_marker_reader(param_1);
  jinit_input_controller(param_1);
  *(undefined4 *)((long)param_1 + 0x24) = 200;
  return;
}

