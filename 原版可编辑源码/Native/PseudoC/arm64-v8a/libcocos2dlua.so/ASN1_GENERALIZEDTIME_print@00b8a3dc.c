
int ASN1_GENERALIZEDTIME_print(BIO *fp,ASN1_GENERALIZEDTIME *a)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  long lVar8;
  
  iVar3 = a->length;
  if (iVar3 < 0xc) {
LAB_00b8a4cc:
    BIO_write(fp,"Bad time value",0xe);
    return 0;
  }
  pbVar6 = a->data;
  if (((((((9 < *pbVar6 - 0x30) || (9 < pbVar6[1] - 0x30)) || (9 < pbVar6[2] - 0x30)) ||
        ((9 < pbVar6[3] - 0x30 || (9 < pbVar6[4] - 0x30)))) ||
       ((9 < pbVar6[5] - 0x30 || ((9 < pbVar6[6] - 0x30 || (9 < pbVar6[7] - 0x30)))))) ||
      (9 < pbVar6[8] - 0x30)) ||
     ((((9 < pbVar6[9] - 0x30 || (9 < pbVar6[10] - 0x30)) || (9 < pbVar6[0xb] - 0x30)) ||
      (uVar2 = ((uint)pbVar6[5] + (uint)pbVar6[4] * 10) - 0x211, 0xb < uVar2)))) goto LAB_00b8a4cc;
  if (((iVar3 < 0xe) || (9 < pbVar6[0xc] - 0x30)) || (9 < pbVar6[0xd] - 0x30)) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulong)(((uint)pbVar6[0xd] + (uint)pbVar6[0xc] * 10) - 0x210);
    if ((0xe < iVar3) && (pbVar7 = pbVar6 + 0xe, *pbVar7 == 0x2e)) {
      if (iVar3 < 0x10) {
        uVar5 = 1;
      }
      else {
        lVar8 = 0xf;
        do {
          if (9 < pbVar6[lVar8] - 0x30) break;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar3);
        uVar5 = (ulong)((int)lVar8 - 0xe);
      }
      goto LAB_00b8a5b4;
    }
  }
  pbVar7 = (byte *)0x0;
  uVar5 = 0;
LAB_00b8a5b4:
  pcVar1 = " GMT";
  if (pbVar6[(long)iVar3 + -1] != 0x5a) {
    pcVar1 = "";
  }
  iVar3 = BIO_printf(fp,"%s %2d %02d:%02d:%02d%.*s %d%s",
                     *(undefined8 *)(_asn1_mon + (long)(int)uVar2 * 8),
                     (ulong)(((uint)pbVar6[7] + (uint)pbVar6[6] * 10) - 0x210),
                     (ulong)(((uint)pbVar6[9] + (uint)pbVar6[8] * 10) - 0x210),
                     (ulong)(((uint)pbVar6[0xb] + (uint)pbVar6[10] * 10) - 0x210),uVar4,uVar5,pbVar7
                     ,(uint)pbVar6[1] * 100 + (uint)*pbVar6 * 1000 + (uint)pbVar6[2] * 10 +
                      (uint)pbVar6[3] + -0xd050,pcVar1);
  return (uint)(0 < iVar3);
}

