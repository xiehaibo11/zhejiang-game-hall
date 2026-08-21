
int FUN_00ab3f44(long param_1,int param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  code *pcVar6;
  
  if (*(char *)(param_1 + 0x2fc) == '\0') {
    iVar2 = 0;
  }
  else if (param_2 == 8) {
    uVar5 = 0;
    iVar4 = 0;
    do {
      lVar1 = param_1 + uVar5 * 8;
      pcVar6 = *(code **)(*(long *)(lVar1 + 0x290) + 8);
      uVar3 = lws_get_context(param_1);
      iVar2 = (*pcVar6)(uVar3,*(undefined8 *)(lVar1 + 0x290),param_1,8,
                        *(undefined8 *)(lVar1 + 0x2a0),param_3,(long)param_4);
      if (iVar2 < 0) {
        return -1;
      }
      *(undefined8 *)(lVar1 + 0x2a0) = 0;
      uVar5 = uVar5 + 1;
      if (iVar2 <= iVar4) {
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
    } while (uVar5 < *(byte *)(param_1 + 0x2fc));
  }
  else {
    uVar5 = 0;
    iVar4 = 0;
    do {
      lVar1 = param_1 + uVar5 * 8;
      pcVar6 = *(code **)(*(long *)(lVar1 + 0x290) + 8);
      uVar3 = lws_get_context(param_1);
      iVar2 = (*pcVar6)(uVar3,*(undefined8 *)(lVar1 + 0x290),param_1,param_2,
                        *(undefined8 *)(lVar1 + 0x2a0),param_3,(long)param_4);
      if (iVar2 < 0) {
        return -1;
      }
      uVar5 = uVar5 + 1;
      if (iVar2 <= iVar4) {
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
    } while (uVar5 < *(byte *)(param_1 + 0x2fc));
  }
  return iVar2;
}

