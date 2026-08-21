
undefined8 FUN_01140bbc(long param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if ((*(int *)(param_1 + 0xb68) < 1) || (*(int *)(param_1 + 0xb5c) < *(int *)(param_1 + 0x1a4))) {
    uVar5 = 0;
    iVar1 = *(int *)(param_1 + 200);
  }
  else {
    uVar5 = (uint)(*(int *)(param_1 + 0xb5c) <= *(int *)(param_1 + 0x1ac));
    iVar1 = *(int *)(param_1 + 200);
  }
  if (iVar1 != 0) {
    lVar2 = WebPGetWorkerInterface();
    uVar3 = (**(code **)(lVar2 + 0x10))(param_1 + 0x98);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      memcpy((void *)(param_1 + 0xf8),param_2,0xa0);
      *(uint *)(param_1 + 0xe0) = uVar5;
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xcc);
      *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xb5c);
      if (*(int *)(param_1 + 200) == 2) {
        uVar4 = *(undefined8 *)(param_1 + 0xf0);
        *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0xb60);
        *(undefined8 *)(param_1 + 0xb60) = uVar4;
      }
      else {
        FUN_01140d04(param_1,param_1 + 0xd8);
      }
      if (uVar5 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xb18);
        *(undefined8 *)(param_1 + 0xb18) = uVar4;
      }
      lVar2 = WebPGetWorkerInterface();
      (**(code **)(lVar2 + 0x18))(param_1 + 0x98);
      uVar4 = 1;
      iVar1 = 0;
      if (*(int *)(param_1 + 0xcc) + 1 != *(int *)(param_1 + 0xd0)) {
        iVar1 = *(int *)(param_1 + 0xcc) + 1;
      }
      *(int *)(param_1 + 0xcc) = iVar1;
    }
    return uVar4;
  }
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xb5c);
  *(uint *)(param_1 + 0xe0) = uVar5;
  FUN_01140d04(param_1,param_1 + 0xd8);
  uVar4 = FUN_011415d8(param_1,param_2);
  return uVar4;
}

