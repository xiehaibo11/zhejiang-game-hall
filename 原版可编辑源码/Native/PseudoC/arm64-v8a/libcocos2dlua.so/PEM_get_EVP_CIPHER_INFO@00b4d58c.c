
int PEM_get_EVP_CIPHER_INFO(char *header,EVP_CIPHER_INFO *cipher)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  EVP_CIPHER *cipher_00;
  int line;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  ulong uVar10;
  
  cipher->cipher = (EVP_CIPHER *)0x0;
  if (header == (char *)0x0) {
    return 1;
  }
  if (*header == '\0') {
    return 1;
  }
  if (*header == '\n') {
    return 1;
  }
  iVar4 = strncmp(header,"Proc-Type:",10);
  if (iVar4 != 0) {
    iVar4 = 0x6b;
    iVar5 = 0x6b;
    line = 0x1df;
    goto LAB_00b4d5f4;
  }
  sVar6 = strspn(header + 10," \t");
  pcVar1 = header + 10 + sVar6;
  if ((*pcVar1 != '4') || (pcVar8 = pcVar1 + 2, pcVar1[1] != ',')) {
    return 0;
  }
  sVar6 = strspn(pcVar8," \t");
  iVar4 = strncmp(pcVar8 + sVar6,"ENCRYPTED",9);
  if (iVar4 == 0) {
    pcVar1 = pcVar8 + sVar6 + 9;
    sVar6 = strspn(pcVar1," \t\r\n");
    if (sVar6 != 0) {
      sVar6 = strspn(pcVar1," \t\r");
      pcVar1 = pcVar1 + sVar6;
      if (*pcVar1 == '\n') {
        iVar4 = strncmp(pcVar1 + 1,"DEK-Info:",9);
        if (iVar4 == 0) {
          sVar6 = strspn(pcVar1 + 10," \t");
          pcVar1 = pcVar1 + 10 + sVar6;
          sVar6 = strcspn(pcVar1," \t,");
          pcVar8 = pcVar1 + sVar6;
          cVar2 = *pcVar8;
          *pcVar8 = '\0';
          cipher_00 = EVP_get_cipherbyname(pcVar1);
          cipher->cipher = cipher_00;
          *pcVar8 = cVar2;
          sVar6 = strspn(pcVar8," \t");
          if (cipher_00 == (EVP_CIPHER *)0x0) {
            iVar4 = 0x6b;
            iVar5 = 0x72;
            line = 0x20e;
          }
          else {
            pcVar8 = pcVar8 + sVar6;
            iVar4 = EVP_CIPHER_iv_length(cipher_00);
            if (iVar4 < 1) {
              if ((iVar4 == 0) && (*pcVar8 == ',')) {
                iVar4 = 0x6b;
                iVar5 = 0x82;
                line = 0x216;
                goto LAB_00b4d5f4;
              }
            }
            else {
              cVar2 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              if (cVar2 != ',') {
                iVar4 = 0x6b;
                iVar5 = 0x81;
                line = 0x213;
                goto LAB_00b4d5f4;
              }
            }
            iVar4 = EVP_CIPHER_iv_length(cipher_00);
            if (iVar4 < 1) {
              return 1;
            }
            memset(cipher->iv,0,(ulong)(iVar4 - 1) + 1);
            uVar9 = 0;
            uVar10 = 0;
            while (iVar5 = OPENSSL_hexchar2int(pcVar8[uVar10]), -1 < iVar5) {
              uVar7 = uVar10 >> 1 & 0x7fffffff;
              uVar3 = ~uVar9;
              uVar10 = uVar10 + 1;
              uVar9 = uVar9 + 4;
              cipher->iv[uVar7] = (byte)(iVar5 << (ulong)(uVar3 & 4)) | cipher->iv[uVar7];
              if (iVar4 * 2 <= (int)uVar10) {
                return 1;
              }
            }
            iVar4 = 0x65;
            iVar5 = 0x67;
            line = 0x22c;
          }
        }
        else {
          iVar4 = 0x6b;
          iVar5 = 0x69;
          line = 0x1fb;
        }
      }
      else {
        iVar4 = 0x6b;
        iVar5 = 0x70;
        line = 0x1f2;
      }
      goto LAB_00b4d5f4;
    }
  }
  iVar4 = 0x6b;
  iVar5 = 0x6a;
  line = 0x1ec;
LAB_00b4d5f4:
  ERR_put_error(9,iVar4,iVar5,"crypto/pem/pem_lib.c",line);
  return 0;
}

