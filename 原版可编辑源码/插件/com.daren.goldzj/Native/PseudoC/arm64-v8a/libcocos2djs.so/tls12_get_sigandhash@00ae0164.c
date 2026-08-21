
undefined8 tls12_get_sigandhash(undefined1 *param_1,EVP_PKEY *param_2,EVP_MD *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_3 == (EVP_MD *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = EVP_MD_type(param_3);
    if (iVar2 < 0x329) {
      switch(iVar2) {
      case 0x2a0:
        lVar5 = 3;
        break;
      case 0x2a1:
        lVar5 = 4;
        break;
      case 0x2a2:
        lVar5 = 5;
        break;
      case 0x2a3:
        lVar5 = 2;
        break;
      default:
        if (iVar2 == 4) {
          lVar5 = 0;
        }
        else {
          if (iVar2 != 0x40) {
            return 0;
          }
          lVar5 = 1;
        }
      }
    }
    else if (iVar2 == 0x329) {
      lVar5 = 6;
    }
    else if (iVar2 == 0x3d6) {
      lVar5 = 7;
    }
    else {
      if (iVar2 != 0x3d7) {
        return 0;
      }
      lVar5 = 8;
    }
    iVar2 = EVP_PKEY_id(param_2);
    if (iVar2 < 0x32b) {
      if (iVar2 == 6) {
        lVar4 = 0;
      }
      else if (iVar2 == 0x74) {
        lVar4 = 1;
      }
      else {
        if (iVar2 != 0x198) {
          return 0;
        }
        lVar4 = 2;
      }
    }
    else if (iVar2 == 0x32b) {
      lVar4 = 3;
    }
    else if (iVar2 == 0x3d3) {
      lVar4 = 4;
    }
    else {
      if (iVar2 != 0x3d4) {
        return 0;
      }
      lVar4 = 5;
    }
    uVar1 = (&DAT_018a53a0)[lVar4 * 2];
    uVar3 = 1;
    *param_1 = (char)(&DAT_018a5358)[lVar5 * 2];
    param_1[1] = (char)uVar1;
  }
  return uVar3;
}

