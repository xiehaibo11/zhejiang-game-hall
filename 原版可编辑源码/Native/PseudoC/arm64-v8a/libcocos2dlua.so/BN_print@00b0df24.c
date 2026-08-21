
int BN_print(void *fp,BIGNUM *a)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (((a->neg == 0) || (iVar4 = BIO_write(fp,"-",1), iVar4 == 1)) &&
     ((iVar4 = BN_is_zero(a), iVar4 == 0 || (iVar4 = BIO_write(fp,"0",1), iVar4 == 1)))) {
    if (a->top < 1) {
      iVar4 = 1;
    }
    else {
      bVar3 = false;
      lVar8 = (long)a->top;
      do {
        uVar6 = a->d[lVar8 + -1];
        if (bVar3 || (uint)(uVar6 >> 0x3c) != 0) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + (uVar6 >> 0x3c),1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x38 & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x34 & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x30 & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x2c & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x28 & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x24 & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x20 & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar5 = (uint)uVar6;
        uVar6 = uVar6 >> 0x1c & 0xf;
        if ((int)uVar6 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        uVar2 = uVar5 >> 0x18 & 0xf;
        if (uVar2 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar2,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        uVar2 = uVar5 >> 0x14 & 0xf;
        if (uVar2 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar2,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        uVar2 = uVar5 >> 0x10 & 0xf;
        if (uVar2 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar2,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        uVar2 = uVar5 >> 0xc & 0xf;
        if (uVar2 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar2,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        uVar2 = uVar5 >> 8 & 0xf;
        if (uVar2 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar2,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        uVar2 = uVar5 >> 4 & 0xf;
        if (uVar2 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar2,1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        if ((uVar5 & 0xf) != 0 || bVar3) {
          bVar3 = true;
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + (uVar5 & 0xf),1);
          if (iVar4 != 1) goto LAB_00b0e2fc;
        }
        iVar4 = 1;
        bVar1 = 1 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar1);
    }
  }
  else {
LAB_00b0e2fc:
    iVar4 = 0;
  }
  return iVar4;
}

