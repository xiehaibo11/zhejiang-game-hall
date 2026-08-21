
undefined4 SSL_CIPHER_get_cipher_nid(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    uVar2 = 0;
    if (iVar1 < 0x400) {
      if (iVar1 < 0x80) {
        lVar3 = 0;
        switch(iVar1) {
        case 1:
          break;
        case 2:
          lVar3 = 1;
          break;
        default:
          goto switchD_00ad4ab0_caseD_3;
        case 4:
          lVar3 = 2;
          break;
        case 8:
          lVar3 = 3;
          break;
        case 0x10:
          lVar3 = 4;
          break;
        case 0x20:
          lVar3 = 5;
          break;
        case 0x40:
          lVar3 = 6;
        }
      }
      else if (iVar1 == 0x80) {
        lVar3 = 7;
      }
      else if (iVar1 == 0x100) {
        lVar3 = 8;
      }
      else {
        if (iVar1 != 0x200) {
          return 0;
        }
        lVar3 = 9;
      }
    }
    else if (iVar1 < 0x8000) {
      if (iVar1 < 0x1000) {
        if (iVar1 == 0x400) {
          lVar3 = 10;
        }
        else {
          if (iVar1 != 0x800) {
            return 0;
          }
          lVar3 = 0xb;
        }
      }
      else if (iVar1 == 0x1000) {
        lVar3 = 0xc;
      }
      else if (iVar1 == 0x2000) {
        lVar3 = 0xd;
      }
      else {
        if (iVar1 != 0x4000) {
          return 0;
        }
        lVar3 = 0xe;
      }
    }
    else if (iVar1 < 0x20000) {
      if (iVar1 == 0x8000) {
        lVar3 = 0xf;
      }
      else {
        if (iVar1 != 0x10000) {
          return 0;
        }
        lVar3 = 0x10;
      }
    }
    else if (iVar1 == 0x20000) {
      lVar3 = 0x11;
    }
    else if (iVar1 == 0x40000) {
      lVar3 = 0x12;
    }
    else {
      if (iVar1 != 0x80000) {
        return 0;
      }
      lVar3 = 0x13;
    }
    uVar2 = (&DAT_013d20a4)[lVar3 * 2];
  }
switchD_00ad4ab0_caseD_3:
  return uVar2;
}

