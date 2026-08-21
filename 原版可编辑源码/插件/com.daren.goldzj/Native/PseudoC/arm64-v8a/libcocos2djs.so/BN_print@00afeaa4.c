
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
  
                    /* try { // try from 00afeaa4 to 00bfeaab has its CatchHandler @ 00afeaec */
                    /* try { // try from 00afeaac to 00bfeae7 has its CatchHandler @ 00afea04 */
                    /* try { // try from 00afeae8 to 00bfeaeb has its CatchHandler @ 00afeaec */
                    /* catch() { ... } // from try @ 00afeaa4 with catch @ 00afeaec
                       catch() { ... } // from try @ 00afeae8 with catch @ 00afeaec
                       try { // try from 00afeaec to 00bfeaff has its CatchHandler @ 00afea04 */
  if (((a->neg == 0) || (iVar4 = BIO_write(fp,&DAT_019b5d6c,1), iVar4 == 1)) &&
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
          if (iVar4 != 1) goto LAB_00afee7c;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x38 & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00afee7c;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x34 & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00afee7c;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x30 & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00afee7c;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x2c & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00afee7c;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x28 & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00afee7c;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00afed94 with catch @ 00afec68
                       catch(type#1 @ 00000000) { ... } // from try @ 00afee18 with catch @ 00afec68
                       catch(type#1 @ 00000000) { ... } // from try @ 00afee28 with catch @ 00afec68
                        */
        uVar7 = uVar6 >> 0x24 & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
          if (iVar4 != 1) goto LAB_00afee7c;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar7 = uVar6 >> 0x20 & 0xf;
        if ((int)uVar7 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar7,1);
                    /* try { // try from 00afecbc to 00bfecbf has its CatchHandler @ 00afedd4 */
          if (iVar4 != 1) goto LAB_00afee7c;
          bVar3 = true;
          uVar6 = a->d[lVar8 + -1];
        }
        uVar5 = (uint)uVar6;
        uVar6 = uVar6 >> 0x1c & 0xf;
                    /* try { // try from 00afecd8 to 00bfecdf has its CatchHandler @ 00afedf0 */
        if ((int)uVar6 != 0 || bVar3) {
                    /* try { // try from 00afece0 to 00bfecef has its CatchHandler @ 00afede0 */
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_00afee7c;
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        uVar2 = uVar5 >> 0x18 & 0xf;
        if (uVar2 != 0 || bVar3) {
                    /* try { // try from 00afed18 to 00bfed23 has its CatchHandler @ 00afedf4 */
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar2,1);
                    /* try { // try from 00afed24 to 00bfed43 has its CatchHandler @ 00afeddc */
          if (iVar4 != 1) goto LAB_00afee7c;
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        uVar2 = uVar5 >> 0x14 & 0xf;
        if (uVar2 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar2,1);
          if (iVar4 != 1) goto LAB_00afee7c;
                    /* try { // try from 00afed60 to 00bfed73 has its CatchHandler @ 00afedf4 */
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        uVar2 = uVar5 >> 0x10 & 0xf;
        if (uVar2 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar2,1);
          if (iVar4 != 1) goto LAB_00afee7c;
                    /* try { // try from 00afed90 to 00bfed93 has its CatchHandler @ 00afedd0 */
                    /* try { // try from 00afed94 to 00bfee13 has its CatchHandler @ 00afec68 */
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        uVar2 = uVar5 >> 0xc & 0xf;
        if (uVar2 != 0 || bVar3) {
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar2,1);
          if (iVar4 != 1) goto LAB_00afee7c;
          bVar3 = true;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00afed90 with catch @ 00afedd0
                        */
          uVar5 = (uint)a->d[lVar8 + -1];
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00afecbc with catch @ 00afedd4
                        */
        uVar2 = uVar5 >> 8 & 0xf;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00afed24 with catch @ 00afeddc
                        */
        if (uVar2 != 0 || bVar3) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00afece0 with catch @ 00afede0
                        */
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar2,1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00afecd8 with catch @ 00afedf0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00afed18 with catch @ 00afedf4
                       catch(type#1 @ 00000000) { ... } // from try @ 00afed60 with catch @ 00afedf4
                        */
          if (iVar4 != 1) goto LAB_00afee7c;
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        uVar2 = uVar5 >> 4 & 0xf;
        if (uVar2 != 0 || bVar3) {
                    /* try { // try from 00afee14 to 00bfee17 has its CatchHandler @ 00afee20 */
                    /* try { // try from 00afee18 to 00bfee23 has its CatchHandler @ 00afec68 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00afee14 with catch @ 00afee20
                        */
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + uVar2,1);
                    /* try { // try from 00afee24 to 00bfee27 has its CatchHandler @ 00afee30 */
                    /* try { // try from 00afee28 to 00bfee33 has its CatchHandler @ 00afec68 */
          if (iVar4 != 1) goto LAB_00afee7c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00afee24 with catch @ 00afee30
                        */
          bVar3 = true;
          uVar5 = (uint)a->d[lVar8 + -1];
        }
        if ((uVar5 & 0xf) != 0 || bVar3) {
          bVar3 = true;
          iVar4 = BIO_write(fp,"0123456789ABCDEF" + (uVar5 & 0xf),1);
                    /* try { // try from 00afee60 to 00bfeedb has its CatchHandler @ 00afee60
                       catch() { ... } // from try @ 00afee60 with catch @ 00afee60
                       catch() { ... } // from try @ 00afef18 with catch @ 00afee60
                       catch() { ... } // from try @ 00afef54 with catch @ 00afee60 */
          if (iVar4 != 1) goto LAB_00afee7c;
        }
        iVar4 = 1;
        bVar1 = 1 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar1);
    }
  }
  else {
LAB_00afee7c:
    iVar4 = 0;
  }
  return iVar4;
}

