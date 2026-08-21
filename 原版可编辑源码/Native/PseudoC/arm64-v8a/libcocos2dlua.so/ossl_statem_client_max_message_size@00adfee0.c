
undefined8 ossl_statem_client_max_message_size(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 20000;
  switch(param_1[0x17]) {
  case 2:
    return 0x102;
  case 3:
    goto switchD_00adff08_caseD_3;
  case 4:
    return *(undefined8 *)(param_1 + 0x7e);
  case 5:
    return 0x4000;
  case 6:
    return 0x19000;
  case 7:
    return *(undefined8 *)(param_1 + 0x7e);
  default:
    uVar1 = 0;
switchD_00adff08_caseD_3:
    return uVar1;
  case 9:
    return 0x4000;
  case 10:
    uVar1 = 3;
    if (*param_1 != 0x100) {
      uVar1 = 1;
    }
    return uVar1;
  case 0xb:
    return 0x40;
  }
}

