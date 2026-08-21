
/* WARNING: Type propagation algorithm not settling */

int OBJ_create_objects(BIO *in)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *ln;
  byte *sn;
  uint uVar5;
  byte *pbVar6;
  byte abStack_251 [513];
  
  iVar3 = BIO_gets(in,(char *)(abStack_251 + 1),0x200);
  if (iVar3 < 1) {
    return 0;
  }
  ln = (byte *)0x0;
  iVar4 = 0;
LAB_00b48304:
  abStack_251[iVar3] = 0;
  bVar1 = abStack_251[1];
  iVar3 = isalnum((uint)abStack_251[1]);
  sn = abStack_251 + 1;
  pbVar6 = abStack_251 + 1;
  pbVar2 = abStack_251 + 1;
  if (iVar3 == 0) {
    return iVar4;
  }
  while ((bVar1 == 0x2e || (pbVar6 = pbVar2, bVar1 - 0x30 < 10))) {
    sn = pbVar6 + 1;
    bVar1 = *sn;
    pbVar6 = sn;
    pbVar2 = sn;
  }
  if (bVar1 != 0) {
    *sn = 0;
    do {
      sn = sn + 1;
      bVar1 = *sn;
      uVar5 = (uint)bVar1;
      iVar3 = isspace((uint)bVar1);
    } while (iVar3 != 0);
    pbVar6 = sn;
    if (bVar1 != 0) {
LAB_00b48378:
      iVar3 = isspace(uVar5);
      if (iVar3 == 0) goto code_r0x00b48384;
      *pbVar6 = 0;
      do {
        pbVar6 = pbVar6 + 1;
        bVar1 = *pbVar6;
        iVar3 = isspace((uint)bVar1);
      } while (iVar3 != 0);
      ln = (byte *)0x0;
      if (bVar1 != 0) {
        ln = pbVar6;
      }
      goto joined_r0x00b48394;
    }
  }
  sn = (byte *)0x0;
  if (abStack_251[1] == 0) {
    return iVar4;
  }
  goto LAB_00b483d0;
code_r0x00b48384:
  uVar5 = (uint)pbVar6[1];
  pbVar6 = pbVar6 + 1;
  if (uVar5 == 0) goto code_r0x00b4838c;
  goto LAB_00b48378;
code_r0x00b4838c:
  ln = (byte *)0x0;
joined_r0x00b48394:
  if (abStack_251[1] == 0) {
    return iVar4;
  }
LAB_00b483d0:
  iVar3 = OBJ_create((char *)(abStack_251 + 1),(char *)sn,(char *)ln);
  if (iVar3 == 0) {
    return iVar4;
  }
  iVar4 = iVar4 + 1;
  iVar3 = BIO_gets(in,(char *)(abStack_251 + 1),0x200);
  if (iVar3 < 1) {
    return iVar4;
  }
  goto LAB_00b48304;
}

