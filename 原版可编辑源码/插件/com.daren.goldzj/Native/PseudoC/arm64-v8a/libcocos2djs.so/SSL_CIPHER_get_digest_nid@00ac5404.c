
undefined4 SSL_CIPHER_get_digest_nid(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  uVar2 = 0;
  if (iVar1 < 0x80) {
    lVar3 = 0;
    switch(iVar1) {
    case 0:
      lVar3 = 9;
      break;
    case 1:
      break;
    case 2:
      lVar3 = 1;
      break;
    default:
      goto switchD_00ac5434_caseD_3;
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
    }
  }
  else if (iVar1 == 0x80) {
    lVar3 = 6;
  }
  else if (iVar1 == 0x100) {
    lVar3 = 7;
  }
  else {
    if (iVar1 != 0x200) {
      return 0;
    }
    lVar3 = 8;
  }
  uVar2 = (&DAT_018a3c80)[lVar3 * 2];
switchD_00ac5434_caseD_3:
  return uVar2;
}

