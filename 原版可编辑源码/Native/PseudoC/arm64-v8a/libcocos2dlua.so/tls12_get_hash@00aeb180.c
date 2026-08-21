
undefined8 tls12_get_hash(byte param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 < 0xed) {
    lVar3 = 1;
    switch(param_1) {
    case 1:
      iVar1 = FIPS_mode();
      if (iVar1 != 0) {
        return 0;
      }
      lVar3 = 0;
      break;
    case 2:
      break;
    case 3:
      lVar3 = 2;
      break;
    case 4:
      lVar3 = 3;
      break;
    case 5:
      lVar3 = 4;
      break;
    case 6:
      lVar3 = 5;
      break;
    default:
      goto switchD_00aeb1ac_default;
    }
  }
  else if (param_1 == 0xed) {
    lVar3 = 6;
  }
  else if (param_1 == 0xee) {
    lVar3 = 7;
  }
  else {
    if (param_1 != 0xef) {
      return 0;
    }
    lVar3 = 8;
  }
  if (lVar3 != 0xfffffffffec2c78) {
    uVar2 = ssl_md((&DAT_013d3888)[lVar3 * 4]);
    return uVar2;
  }
switchD_00aeb1ac_default:
  return 0;
}

