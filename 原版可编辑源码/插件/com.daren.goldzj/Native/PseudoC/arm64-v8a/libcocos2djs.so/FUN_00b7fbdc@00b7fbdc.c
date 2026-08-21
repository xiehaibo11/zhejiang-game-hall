
undefined8 FUN_00b7fbdc(char *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  byte *local_40;
  byte local_34 [4];
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar1 = strtoul(param_1,(char **)&local_40,10);
  if (((local_40 != (byte *)0x0) && (*local_40 != 0)) && (param_1 + param_2 < local_40)) {
    return 0;
  }
  if ((long)uVar1 < 0) {
    ERR_put_error(0xd,0xb6,0xbb,"crypto/asn1/asn1_gen.c",0x168);
    return 0;
  }
  *param_3 = (int)uVar1;
  if ((local_40 == (byte *)0x0) || (param_2 + (int)param_1 == (int)local_40)) {
switchD_00b7fc74_caseD_43:
    uVar2 = 0x80;
  }
  else {
    local_34[0] = *local_40;
    uVar2 = 0x40;
    switch(local_34[0]) {
    case 0x41:
      break;
    default:
      local_34[1] = 0;
      ERR_put_error(0xd,0xb6,0xba,"crypto/asn1/asn1_gen.c",0x187);
      ERR_add_error_data(2,"Char=",local_34);
      return 0;
    case 0x43:
      goto switchD_00b7fc74_caseD_43;
    case 0x50:
      uVar2 = 0xc0;
      break;
    case 0x55:
      uVar2 = 0;
    }
  }
  *param_4 = uVar2;
  return 1;
}

