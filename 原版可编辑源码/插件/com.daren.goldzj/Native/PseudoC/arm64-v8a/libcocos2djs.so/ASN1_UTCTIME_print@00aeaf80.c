
int ASN1_UTCTIME_print(BIO *fp,ASN1_UTCTIME *a)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  
  iVar4 = a->length;
  if (9 < iVar4) {
    pbVar7 = a->data;
    if (((((*pbVar7 - 0x30 < 10) && (pbVar7[1] - 0x30 < 10)) && (pbVar7[2] - 0x30 < 10)) &&
        ((((pbVar7[3] - 0x30 < 10 && (pbVar7[4] - 0x30 < 10)) &&
          ((pbVar7[5] - 0x30 < 10 && ((pbVar7[6] - 0x30 < 10 && (pbVar7[7] - 0x30 < 10)))))) &&
         (pbVar7[8] - 0x30 < 10)))) && (pbVar7[9] - 0x30 < 10)) {
      uVar2 = (uint)pbVar7[1] + (uint)*pbVar7 * 10;
                    /* try { // try from 00aeb048 to 00beb04f has its CatchHandler @ 00aeb088 */
                    /* try { // try from 00aeb050 to 00beb09b has its CatchHandler @ 00aeaf48 */
      uVar3 = ((uint)pbVar7[3] + (uint)pbVar7[2] * 10) - 0x211;
      iVar5 = -0x1ac;
      if (0x241 < uVar2) {
        iVar5 = -0x210;
      }
      if (uVar3 < 0xc) {
                    /* catch() { ... } // from try @ 00aeb048 with catch @ 00aeb088 */
                    /* try { // try from 00aeb09c to 00beb18b has its CatchHandler @ 00aeb09c
                       catch() { ... } // from try @ 00aeb09c with catch @ 00aeb09c
                       catch() { ... } // from try @ 00aeb194 with catch @ 00aeb09c */
        if (((iVar4 < 0xc) || (9 < pbVar7[10] - 0x30)) || (9 < pbVar7[0xb] - 0x30)) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulong)(((uint)pbVar7[0xb] + (uint)pbVar7[10] * 10) - 0x210);
        }
        pcVar1 = " GMT";
        if (pbVar7[(long)iVar4 + -1] != 0x5a) {
          pcVar1 = "";
        }
        iVar4 = BIO_printf(fp,"%s %2d %02d:%02d:%02d %d%s",
                           *(undefined8 *)(_asn1_mon + (long)(int)uVar3 * 8),
                           (ulong)(((uint)pbVar7[5] + (uint)pbVar7[4] * 10) - 0x210),
                           (ulong)(((uint)pbVar7[7] + (uint)pbVar7[6] * 10) - 0x210),
                           (ulong)(((uint)pbVar7[9] + (uint)pbVar7[8] * 10) - 0x210),uVar6,
                           (ulong)(uVar2 + iVar5 + 0x76c),pcVar1);
        return (uint)(0 < iVar4);
      }
    }
  }
  BIO_write(fp,"Bad time value",0xe);
  return 0;
}

