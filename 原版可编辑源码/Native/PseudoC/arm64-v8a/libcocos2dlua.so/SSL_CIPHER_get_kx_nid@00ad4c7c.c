
undefined4 SSL_CIPHER_get_kx_nid(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = 0;
  lVar3 = 0;
  switch(iVar1) {
  case 1:
    break;
  case 2:
    lVar3 = 2;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
    goto switchD_00ad4ca4_caseD_3;
  case 4:
                    /* try { // try from 00ad4cc8 to 00bd4cd3 has its CatchHandler @ 00ad4d48 */
    lVar3 = 1;
    break;
  case 8:
    lVar3 = 6;
                    /* try { // try from 00ad4cd4 to 00bd4d7f has its CatchHandler @ 00ad4c50 */
    break;
  case 0x10:
    lVar3 = 8;
    break;
  case 0x20:
    lVar3 = 7;
    break;
  case 0x40:
    lVar3 = 5;
    break;
  default:
    if (iVar1 == 0x80) {
      lVar3 = 3;
    }
    else {
      if (iVar1 != 0x100) {
        return 0;
      }
      lVar3 = 4;
    }
  }
  uVar2 = (&DAT_013d21a4)[lVar3 * 2];
switchD_00ad4ca4_caseD_3:
  return uVar2;
}

