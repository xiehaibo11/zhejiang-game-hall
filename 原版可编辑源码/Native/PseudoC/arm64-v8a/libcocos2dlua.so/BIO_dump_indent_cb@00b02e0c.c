
int BIO_dump_indent_cb(cb *cb,void *u,char *s,int len,int indent)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined1 local_21c [132];
  char acStack_198 [20];
  char acStack_184 [292];
  
  iVar7 = 0;
  uVar15 = (ulong)(uint)len;
  if (0 < len) {
    uVar12 = (long)len;
    do {
      uVar15 = uVar12;
      if ((byte)(s[uVar12 - 1] | 0x20U) != 0x20) break;
      uVar15 = uVar12 - 1;
      iVar7 = iVar7 + 1;
      bVar1 = 1 < (long)uVar12;
      uVar12 = uVar15;
    } while (bVar1);
  }
  if (indent < 1) {
    indent = 0;
  }
  else {
    if (0x7f < indent) {
      indent = 0x80;
    }
    memset(local_21c,0x20,(long)indent);
  }
  iVar14 = indent;
  if (5 < indent) {
    iVar14 = 6;
  }
  iVar14 = (indent + 3) - iVar14;
  iVar5 = iVar14 + 3;
  if (-1 < iVar14) {
    iVar5 = iVar14;
  }
  uVar4 = 0x10 - (iVar5 >> 2);
  uVar3 = 0;
  iVar14 = (int)uVar15;
  if (uVar4 != 0) {
    uVar3 = iVar14 / (int)uVar4;
  }
  if ((int)(uVar4 * uVar3) < iVar14) {
    uVar3 = uVar3 + 1;
  }
  local_21c[indent] = 0;
  if ((int)uVar3 < 1) {
    iVar5 = 0;
  }
  else if ((int)uVar4 < 1) {
    uVar10 = 0;
    iVar5 = 0;
    uVar15 = (ulong)uVar3;
    do {
      OPENSSL_strlcpy(acStack_184,local_21c,0x121);
      BIO_snprintf(acStack_198,0x14,"%04x - ",(ulong)uVar10);
      OPENSSL_strlcat(acStack_184,acStack_198,0x121);
      OPENSSL_strlcat(acStack_184,&DAT_01408f26,0x121);
      OPENSSL_strlcat(acStack_184,&DAT_013c61e6,0x121);
      sVar8 = strlen(acStack_184);
      iVar6 = (*cb)(acStack_184,sVar8,u);
      iVar5 = iVar6 + iVar5;
      uVar15 = uVar15 - 1;
      uVar10 = uVar10 + uVar4;
    } while (uVar15 != 0);
  }
  else {
    lVar11 = 0;
    iVar5 = 0;
    lVar17 = (long)iVar14;
    lVar16 = (long)(int)uVar4;
    uVar15 = 0;
    do {
      OPENSSL_strlcpy(acStack_184,local_21c,0x121);
      BIO_snprintf(acStack_198,0x14,"%04x - ");
      OPENSSL_strlcat(acStack_184,acStack_198,0x121);
      uVar12 = 0;
      do {
        pcVar9 = "   ";
        if ((long)(lVar11 + uVar12) < lVar17) {
          uVar10 = 0x2d;
          if (uVar12 != 7) {
            uVar10 = 0x20;
          }
          BIO_snprintf(acStack_198,0x14,"%02x%c",(ulong)(byte)s[uVar12],(ulong)uVar10);
          pcVar9 = acStack_198;
        }
        OPENSSL_strlcat(acStack_184,pcVar9,0x121);
        uVar12 = uVar12 + 1;
      } while (uVar4 != uVar12);
      OPENSSL_strlcat(acStack_184,&DAT_01408f26,0x121);
      if ((long)(uVar15 * lVar16) < lVar17) {
        lVar13 = 0;
        do {
          uVar10 = (uint)(byte)s[lVar13];
          if (0x5e < uVar10 - 0x20) {
            uVar10 = 0x2e;
          }
          BIO_snprintf(acStack_198,0x14,"%c",(ulong)uVar10);
          OPENSSL_strlcat(acStack_184,acStack_198,0x121);
        } while ((lVar13 + 1 < lVar16) &&
                (lVar2 = lVar11 + lVar13, lVar13 = lVar13 + 1, lVar2 + 1 < lVar17));
      }
      OPENSSL_strlcat(acStack_184,&DAT_013c61e6,0x121);
      sVar8 = strlen(acStack_184);
      iVar6 = (*cb)(acStack_184,sVar8,u);
      s = s + lVar16;
      lVar11 = lVar11 + lVar16;
      iVar5 = iVar6 + iVar5;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar3);
  }
  if (0 < iVar7) {
    BIO_snprintf(acStack_184,0x121,"%s%04x - <SPACES/NULS>\n",local_21c,
                 (ulong)(uint)(iVar14 + iVar7));
    sVar8 = strlen(acStack_184);
    iVar7 = (*cb)(acStack_184,sVar8,u);
    iVar5 = iVar7 + iVar5;
  }
  return iVar5;
}

