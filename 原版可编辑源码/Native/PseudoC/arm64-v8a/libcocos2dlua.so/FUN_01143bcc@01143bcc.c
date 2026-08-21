
void FUN_01143bcc(void *param_1)

{
  long lVar1;
  
  if (param_1 != (void *)0x0) {
    lVar1 = WebPGetWorkerInterface();
    (**(code **)(lVar1 + 0x28))((long)param_1 + 0x98);
    FUN_01160094(*(undefined8 *)((long)param_1 + 0xb90));
    *(undefined8 *)((long)param_1 + 0xb90) = 0;
    WebPSafeFree(*(void **)((long)param_1 + 0xb48));
    *(undefined4 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x28) = 0;
    *(undefined8 *)((long)param_1 + 0x20) = 0;
    *(undefined8 *)((long)param_1 + 0x38) = 0;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    *(undefined8 *)((long)param_1 + 0x18) = 0;
    *(undefined8 *)((long)param_1 + 0x10) = 0;
    *(undefined8 *)((long)param_1 + 0xb50) = 0;
    *(undefined8 *)((long)param_1 + 0xb48) = 0;
    WebPSafeFree(param_1);
    return;
  }
  return;
}

