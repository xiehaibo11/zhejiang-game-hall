
void uv_close(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 1;
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    FUN_011a2314(param_1);
    break;
  case 2:
    FUN_011a4d04(param_1);
    break;
  case 3:
    FUN_011ade44(param_1);
    break;
  case 4:
    FUN_011ae9ac(param_1);
    break;
  case 6:
    FUN_011a4efc(param_1);
    break;
  case 7:
    FUN_011a54ec(param_1);
    break;
  case 8:
    FUN_011a5f24(param_1);
    break;
  case 9:
    FUN_011a4b0c(param_1);
    break;
  case 10:
    FUN_011a6c0c(param_1);
    break;
  case 0xc:
    thunk_FUN_011a97d8(param_1);
    break;
  case 0xd:
    uv_timer_stop(param_1);
    break;
  case 0xe:
    FUN_011a97d8(param_1);
    break;
  case 0xf:
    FUN_011aaaec(param_1);
    break;
  case 0x10:
    FUN_011a7578(param_1);
    return;
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x168);
  *(long *)(*(long *)(param_1 + 8) + 0x168) = param_1;
  return;
}

