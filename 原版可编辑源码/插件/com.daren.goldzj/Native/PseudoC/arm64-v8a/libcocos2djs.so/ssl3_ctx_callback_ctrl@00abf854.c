
undefined8 ssl3_ctx_callback_ctrl(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  switch(param_2) {
  case 6:
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x120) + 0x10);
    break;
  default:
    goto switchD_00abf874_caseD_7;
  case 0x35:
    puVar2 = (undefined8 *)(param_1 + 0x1c0);
    break;
  case 0x3f:
    puVar2 = (undefined8 *)(param_1 + 0x228);
    break;
  case 0x48:
    puVar2 = (undefined8 *)(param_1 + 0x220);
    break;
  case 0x4b:
    *(ulong *)(param_1 + 0x2c0) = *(ulong *)(param_1 + 0x2c0) | 0x20;
    puVar2 = (undefined8 *)(param_1 + 0x250);
    break;
  case 0x4c:
    *(ulong *)(param_1 + 0x2c0) = *(ulong *)(param_1 + 0x2c0) | 0x20;
    puVar2 = (undefined8 *)(param_1 + 600);
    break;
  case 0x4d:
    *(ulong *)(param_1 + 0x2c0) = *(ulong *)(param_1 + 0x2c0) | 0x20;
    puVar2 = (undefined8 *)(param_1 + 0x260);
    break;
  case 0x4f:
    puVar2 = (undefined8 *)(param_1 + 0x330);
  }
  *puVar2 = param_3;
  uVar1 = 1;
switchD_00abf874_caseD_7:
  return uVar1;
}

