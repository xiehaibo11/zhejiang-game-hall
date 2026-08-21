
int FUN_01056890(long param_1,long param_2,int param_3)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  long local_60;
  int local_58;
  
  puVar1 = (uint *)(param_1 + 0x106);
  local_60 = param_2;
  local_58 = param_3;
  while( true ) {
    if (*(char *)(param_1 + 0x2fc) == '\0') {
      iVar3 = 0;
    }
    else {
      uVar6 = 0;
      iVar4 = 0;
      do {
        lVar2 = param_1 + uVar6 * 8;
        pcVar7 = *(code **)(*(long *)(lVar2 + 0x290) + 8);
        uVar5 = lws_get_context(param_1);
        iVar3 = (*pcVar7)(uVar5,*(undefined8 *)(lVar2 + 0x290),param_1,0xc,
                          *(undefined8 *)(lVar2 + 0x2a0),&local_60,0);
        if (iVar3 < 0) {
          return -1;
        }
        uVar6 = uVar6 + 1;
        if (iVar3 <= iVar4) {
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
      } while (uVar6 < *(byte *)(param_1 + 0x2fc));
      if (iVar3 < 0) {
        return -1;
      }
    }
    if (local_60 != param_2) {
      *puVar1 = *puVar1 & 0xffffffdf;
    }
    if (local_58 != 0) {
      iVar4 = FUN_01046810(param_1);
      if (iVar4 < 0) {
        return -1;
      }
      if ((*(byte *)puVar1 & 0x20) != 0) {
        param_3 = iVar4;
      }
    }
    if (iVar3 == 0) break;
    local_60 = 0;
    local_58 = 0;
    iVar4 = lws_send_pipe_choked(param_1);
    if ((iVar4 != 0) || (*(int *)(param_1 + 0x2e8) != 0)) {
      lws_callback_on_writable(param_1);
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x20000000;
      return param_3;
    }
  }
  return param_3;
}

