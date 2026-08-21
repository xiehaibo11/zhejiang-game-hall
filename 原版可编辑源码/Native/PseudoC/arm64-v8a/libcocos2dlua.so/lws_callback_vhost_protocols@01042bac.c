
undefined8
lws_callback_vhost_protocols(long param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x228);
  if (0 < *(int *)(lVar2 + 0x1dc)) {
    lVar3 = 0;
    lVar4 = 8;
    do {
      iVar1 = (**(code **)(*(long *)(lVar2 + 0x188) + lVar4))
                        (param_1,param_2,0,param_3,(long)param_4);
      if (iVar1 != 0) {
        return 1;
      }
      lVar2 = *(long *)(param_1 + 0x228);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x38;
    } while (lVar3 < *(int *)(lVar2 + 0x1dc));
  }
  return 0;
}

