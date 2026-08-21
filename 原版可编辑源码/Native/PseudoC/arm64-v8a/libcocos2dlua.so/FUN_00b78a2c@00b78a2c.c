
uint FUN_00b78a2c(void *param_1,void *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  uint uVar9;
  size_t __n;
  
  __n = (size_t)param_3;
  iVar4 = memcmp(param_1,param_2,__n);
  if (0 < iVar4) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: memcmp(min, max, length) <= 0","crypto/x509v3/v3_addr.c",0x157);
  }
  if (param_3 < 1) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    do {
      if (*(char *)((long)param_1 + lVar7) != *(char *)((long)param_2 + lVar7)) break;
      lVar7 = lVar7 + 1;
    } while (lVar7 < (long)__n);
  }
  do {
    iVar4 = param_3;
    sVar8 = __n - 1;
    if (((long)__n < 1) || (*(char *)((long)param_1 + sVar8) != '\0')) break;
    param_3 = iVar4 + -1;
    __n = sVar8;
  } while (*(char *)((long)param_2 + sVar8) == -1);
  iVar6 = (int)lVar7;
  if (iVar6 < iVar4 + -1) {
    uVar5 = 0xffffffff;
  }
  else if (iVar6 < iVar4) {
    bVar1 = *(byte *)((long)param_1 + (long)iVar6);
    bVar2 = *(byte *)((long)param_2 + (long)iVar6);
    uVar5 = 0xffffffff;
    bVar3 = bVar2 ^ bVar1;
    uVar9 = 7;
    switch(bVar3) {
    case 1:
      break;
    case 2:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x10:
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
      goto switchD_00b78b0c_caseD_2;
    case 3:
      uVar9 = 6;
      break;
    case 7:
      uVar9 = 5;
      break;
    case 0xf:
      uVar9 = 4;
      break;
    case 0x1f:
      uVar9 = 3;
      break;
    default:
      if (bVar3 == 0x3f) {
        uVar9 = 2;
      }
      else {
        if (bVar3 != 0x7f) {
          return 0xffffffff;
        }
        uVar9 = 1;
      }
    }
    uVar5 = 0xffffffff;
    if (((bVar1 & bVar3) == 0) && ((bVar2 & bVar3) == bVar3)) {
      uVar5 = uVar9 | iVar6 << 3;
    }
  }
  else {
    uVar5 = iVar6 << 3;
  }
switchD_00b78b0c_caseD_2:
  return uVar5;
}

