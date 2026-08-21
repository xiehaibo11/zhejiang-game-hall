
int inflateInit2_(long param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  
  if (param_3 == (char *)0x0) {
    iVar1 = -6;
  }
  else {
    iVar1 = -6;
    if ((param_4 == 0x70) && (*param_3 == '1')) {
      if (param_1 == 0) {
        iVar1 = -2;
      }
      else {
        pcVar2 = *(code **)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (pcVar2 == (code *)0x0) {
          pcVar2 = FUN_0117dcf4;
          *(code **)(param_1 + 0x40) = FUN_0117dcf4;
          *(undefined8 *)(param_1 + 0x50) = 0;
          lVar3 = *(long *)(param_1 + 0x48);
        }
        else {
          lVar3 = *(long *)(param_1 + 0x48);
        }
        if (lVar3 == 0) {
          *(code **)(param_1 + 0x48) = FUN_0117dcfc;
        }
        lVar3 = (*pcVar2)(*(undefined8 *)(param_1 + 0x50),1,0x1bf0);
        if (lVar3 == 0) {
          iVar1 = -4;
        }
        else {
          *(long *)(param_1 + 0x38) = lVar3;
          *(undefined8 *)(lVar3 + 0x40) = 0;
          iVar1 = inflateReset2(param_1,param_2);
          if (iVar1 != 0) {
            (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),lVar3);
            *(undefined8 *)(param_1 + 0x38) = 0;
          }
        }
      }
    }
  }
  return iVar1;
}

