
byte * OPENSSL_hexstr2buf(char *param_1,long *param_2)

{
  byte bVar1;
  char *pcVar2;
  size_t sVar3;
  byte *ptr;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  
  sVar3 = strlen(param_1);
  ptr = CRYPTO_malloc((int)(sVar3 >> 1),"crypto/o_str.c",0x9f);
  if (ptr == (byte *)0x0) {
    ERR_put_error(0xf,0x76,0x41,"crypto/o_str.c",0xa0);
  }
  else {
    pbVar4 = ptr;
    pcVar2 = param_1 + 1;
    while (pcVar6 = pcVar2, bVar1 = pcVar6[-1], bVar1 != 0) {
      pcVar2 = pcVar6 + 1;
      if (bVar1 != 0x3a) {
        uVar5 = 0;
        switch(*pcVar6) {
        case '\0':
          ERR_put_error(0xf,0x76,0x67,"crypto/o_str.c",0xaa);
          CRYPTO_free(ptr);
          return (byte *)0x0;
        default:
          uVar5 = 0xffffffff;
          break;
        case '0':
          break;
        case '1':
          uVar5 = 1;
          break;
        case '2':
          uVar5 = 2;
          break;
        case '3':
          uVar5 = 3;
          break;
        case '4':
          uVar5 = 4;
          break;
        case '5':
          uVar5 = 5;
          break;
        case '6':
          uVar5 = 6;
          break;
        case '7':
          uVar5 = 7;
          break;
        case '8':
          uVar5 = 8;
          break;
        case '9':
          uVar5 = 9;
          break;
        case 'A':
        case 'a':
          uVar5 = 10;
          break;
        case 'B':
        case 'b':
          uVar5 = 0xb;
          break;
        case 'C':
        case 'c':
          uVar5 = 0xc;
          break;
        case 'D':
        case 'd':
          uVar5 = 0xd;
          break;
        case 'E':
        case 'e':
          uVar5 = 0xe;
          break;
        case 'F':
        case 'f':
          uVar5 = 0xf;
        }
        if ((0x36 < bVar1 - 0x30) ||
           ((int)(*(uint *)(&DAT_018b1a40 + (long)(char)(bVar1 - 0x30) * 4) | uVar5) < 0)) {
          CRYPTO_free(ptr);
          ERR_put_error(0xf,0x76,0x66,"crypto/o_str.c",0xb2);
          return (byte *)0x0;
        }
        *pbVar4 = (byte)uVar5 |
                  (byte)(*(uint *)(&DAT_018b1a40 + (long)(char)(bVar1 - 0x30) * 4) << 4);
        pbVar4 = pbVar4 + 1;
        pcVar2 = pcVar6 + 2;
      }
    }
    if (param_2 != (long *)0x0) {
      *param_2 = (long)pbVar4 - (long)ptr;
    }
  }
  return ptr;
}

