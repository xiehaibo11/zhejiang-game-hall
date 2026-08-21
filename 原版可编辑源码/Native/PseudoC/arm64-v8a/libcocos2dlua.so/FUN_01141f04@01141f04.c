
undefined4 FUN_01141f04(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 200) < 1) {
    uVar1 = 1;
    pcVar3 = *(code **)(param_2 + 0x50);
  }
  else {
    lVar2 = WebPGetWorkerInterface();
    uVar1 = (**(code **)(lVar2 + 0x10))(param_1 + 0x98);
    pcVar3 = *(code **)(param_2 + 0x50);
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_2);
  }
  return uVar1;
}

