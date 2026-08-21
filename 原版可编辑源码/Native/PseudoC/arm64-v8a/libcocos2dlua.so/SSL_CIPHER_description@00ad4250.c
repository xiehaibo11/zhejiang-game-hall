
/* WARNING: Type propagation algorithm not settling */

char * SSL_CIPHER_description(SSL_CIPHER *param_1,char *buf,int size)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  if (buf == (char *)0x0) {
    size = 0x80;
    buf = CRYPTO_malloc(0x80,"ssl/ssl_ciph.c",0x5ff);
    if (buf == (char *)0x0) {
      return (char *)0x0;
    }
  }
  else if (size < 0x80) {
    return (char *)0x0;
  }
  iVar1 = *(int *)((long)&param_1->id + 4);
  iVar3 = (int)param_1->algorithm_mkey;
  iVar2 = *(int *)((long)&param_1->algorithm_mkey + 4);
  iVar4 = (int)param_1->algorithm_auth;
  uVar5 = ssl_protocol_to_string(*(undefined4 *)((long)&param_1->algorithm_auth + 4));
  pcVar6 = "RSA";
  switch(iVar1) {
  case 1:
    break;
  case 2:
    pcVar6 = "DH";
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
switchD_00ad42e4_caseD_3:
    pcVar6 = "unknown";
    break;
  case 4:
    pcVar6 = "ECDH";
    break;
  case 8:
    pcVar6 = "PSK";
    break;
  case 0x10:
    pcVar6 = "GOST";
    break;
  case 0x20:
    pcVar6 = "SRP";
    break;
  case 0x40:
    pcVar6 = "RSAPSK";
    break;
  default:
    if (iVar1 == 0x80) {
      pcVar6 = "ECDHEPSK";
    }
    else {
      if (iVar1 != 0x100) goto switchD_00ad42e4_caseD_3;
      pcVar6 = "DHEPSK";
    }
  }
  pcVar7 = "RSA";
  switch(iVar3) {
  case 2:
    pcVar7 = "DSS";
  case 1:
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
switchD_00ad4384_caseD_3:
    pcVar7 = "unknown";
    break;
  case 4:
    pcVar7 = "None";
    break;
  case 8:
    pcVar7 = "ECDSA";
    break;
  case 0x10:
    pcVar7 = "PSK";
    break;
  case 0x20:
    pcVar7 = "GOST01";
    break;
  case 0x40:
    pcVar7 = "SRP";
    break;
  default:
    if (iVar3 != 0xa0) goto switchD_00ad4384_caseD_3;
    pcVar7 = "GOST12";
  }
  if (0x3ff < iVar2) {
    if (iVar2 < 0x8000) {
      if (iVar2 < 0x1000) {
        if (iVar2 == 0x400) {
LAB_00ad454c:
          pcVar8 = "GOST89(256)";
          goto switchD_00ad43c4_caseD_1;
        }
        if (iVar2 != 0x800) goto switchD_00ad43c4_caseD_3;
                    /* try { // try from 00ad4514 to 00bd458f has its CatchHandler @ 00ad4514
                       catch() { ... } // from try @ 00ad4514 with catch @ 00ad4514
                       catch() { ... } // from try @ 00ad45b0 with catch @ 00ad4514 */
        pcVar8 = "SEED(128)";
      }
      else if (iVar2 == 0x1000) {
                    /* catch() { ... } // from try @ 00ad4590 with catch @ 00ad4628 */
        pcVar8 = "AESGCM(128)";
      }
      else if (iVar2 == 0x2000) {
        pcVar8 = "AESGCM(256)";
      }
      else {
        if (iVar2 != 0x4000) goto switchD_00ad43c4_caseD_3;
        pcVar8 = "AESCCM(128)";
      }
    }
    else if (iVar2 < 0x20000) {
      if (iVar2 == 0x8000) {
                    /* try { // try from 00ad46fc to 00bd47ab has its CatchHandler @ 00ad4660 */
        pcVar8 = "AESCCM(256)";
      }
      else {
        if (iVar2 != 0x10000) goto switchD_00ad43c4_caseD_3;
        pcVar8 = "AESCCM8(128)";
      }
    }
    else if (iVar2 == 0x20000) {
      pcVar8 = "AESCCM8(256)";
    }
    else {
      if (iVar2 == 0x40000) goto LAB_00ad454c;
      if (iVar2 != 0x80000) goto switchD_00ad43c4_caseD_3;
      pcVar8 = "CHACHA20/POLY1305(256)";
    }
    goto joined_r0x00ad4458;
  }
  if (0x7f < iVar2) {
    if (iVar2 == 0x80) {
                    /* try { // try from 00ad4660 to 00bd46db has its CatchHandler @ 00ad4660
                       catch() { ... } // from try @ 00ad4660 with catch @ 00ad4660
                       catch() { ... } // from try @ 00ad46fc with catch @ 00ad4660 */
      pcVar8 = "AES(256)";
    }
    else if (iVar2 == 0x100) {
      pcVar8 = "Camellia(128)";
    }
    else {
      if (iVar2 != 0x200) goto switchD_00ad43c4_caseD_3;
      pcVar8 = "Camellia(256)";
    }
    goto joined_r0x00ad4458;
  }
  pcVar8 = "DES(56)";
  switch(iVar2) {
  case 1:
switchD_00ad43c4_caseD_1:
    if (0x7f < iVar4) goto LAB_00ad4684;
    goto LAB_00ad455c;
  case 2:
    pcVar8 = "3DES(168)";
    break;
  default:
switchD_00ad43c4_caseD_3:
    pcVar8 = "unknown";
    break;
  case 4:
    pcVar8 = "RC4(128)";
    break;
  case 8:
    pcVar8 = "RC2(128)";
    break;
  case 0x10:
    pcVar8 = "IDEA(128)";
    break;
  case 0x20:
    pcVar8 = "None";
    break;
  case 0x40:
    pcVar8 = "AES(128)";
  }
joined_r0x00ad4458:
  if (iVar4 < 0x80) {
LAB_00ad455c:
    pcVar9 = "MD5";
    switch(iVar4) {
    case 1:
      break;
    case 2:
      pcVar9 = "SHA1";
      break;
    default:
switchD_00ad4580_caseD_3:
      pcVar9 = "unknown";
      break;
    case 4:
                    /* try { // try from 00ad4590 to 00bd45af has its CatchHandler @ 00ad4628 */
      pcVar9 = "GOST94";
      break;
    case 8:
switchD_00ad4580_caseD_8:
      pcVar9 = "GOST89";
      break;
    case 0x10:
      pcVar9 = "SHA256";
      break;
    case 0x20:
      pcVar9 = "SHA384";
                    /* try { // try from 00ad45b0 to 00bd465f has its CatchHandler @ 00ad4514 */
      break;
    case 0x40:
      pcVar9 = "AEAD";
    }
  }
  else {
LAB_00ad4684:
    if (iVar4 != 0x80) {
      if (iVar4 == 0x100) goto switchD_00ad4580_caseD_8;
      if (iVar4 != 0x200) goto switchD_00ad4580_caseD_3;
    }
    pcVar9 = "GOST2012";
  }
  BIO_snprintf(buf,(long)size,"%-23s %s Kx=%-8s Au=%-4s Enc=%-9s Mac=%-4s\n",param_1->name,uVar5,
               pcVar6,pcVar7,pcVar8,pcVar9);
                    /* try { // try from 00ad46dc to 00bd46fb has its CatchHandler @ 00ad4774 */
  return buf;
}

