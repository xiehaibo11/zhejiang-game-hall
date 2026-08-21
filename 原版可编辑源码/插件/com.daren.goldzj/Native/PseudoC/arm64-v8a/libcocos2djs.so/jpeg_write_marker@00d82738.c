
void jpeg_write_marker(long *param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (((int)param_1[0x2b] != 0) || (2 < iVar1 - 0x65U)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x15;
    *(int *)((long)puVar2 + 0x2c) = iVar1;
    (*(code *)*puVar2)(param_1);
  }
  (**(code **)(param_1[0x42] + 0x28))(param_1,param_2,param_4);
  if (param_4 != 0) {
    pcVar3 = *(code **)(param_1[0x42] + 0x30);
    do {
      param_4 = param_4 + -1;
      (*pcVar3)(param_1,*param_3);
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return;
}

