
int SMIME_crlf_copy(BIO *in,BIO *out,int flags)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  BIO_METHOD *type;
  BIO *b;
  BIO *b_00;
  byte *pbVar6;
  int iVar7;
  byte abStack_461 [1025];
  
  type = BIO_f_buffer();
  b = BIO_new(type);
  iVar5 = 0;
  if (b != (BIO *)0x0) {
    b_00 = BIO_push(b,out);
    if (((uint)flags >> 7 & 1) == 0) {
      if ((flags & 1U) != 0) {
        BIO_printf(b_00,"Content-Type: text/plain\r\n\r\n");
      }
      iVar5 = BIO_gets(in,(char *)(abStack_461 + 1),0x400);
      if (0 < iVar5) {
        iVar7 = 0;
        do {
          if (((uint)flags >> 0x13 & 1) == 0) {
            do {
              bVar4 = false;
              pbVar6 = abStack_461 + iVar5;
              do {
                if (*pbVar6 == 10) {
                  bVar4 = true;
                }
                else if (*pbVar6 != 0xd) break;
                iVar3 = iVar5 + -1;
                pbVar6 = pbVar6 + -1;
                bVar1 = 0 < iVar5;
                iVar5 = iVar3;
              } while (iVar3 != 0 && bVar1);
              if (iVar5 != 0) goto LAB_00be76d4;
              if (bVar4) {
                BIO_write(b_00,&DAT_013ecf75,2);
              }
              iVar5 = BIO_gets(in,(char *)(abStack_461 + 1),0x400);
              if (iVar5 < 1) goto LAB_00be7790;
            } while( true );
          }
          bVar4 = false;
          pbVar6 = abStack_461 + iVar5;
          do {
            bVar2 = *pbVar6;
            if (bVar2 == 10) {
              bVar4 = true;
            }
            else if ((bVar2 != 0xd) && (!bVar4 || 0x20 < bVar2)) break;
            iVar3 = iVar5 + -1;
            pbVar6 = pbVar6 + -1;
            bVar1 = 0 < iVar5;
            iVar5 = iVar3;
          } while (iVar3 != 0 && bVar1);
          if (iVar5 == 0) {
            iVar7 = iVar7 + 1;
          }
          else {
LAB_00be76d4:
            if (((uint)flags >> 0x13 & 1) != 0) {
              if (iVar7 < 1) {
                iVar7 = 0;
              }
              else {
                do {
                  BIO_write(b_00,&DAT_013ecf75,2);
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
            }
            BIO_write(b_00,abStack_461 + 1,iVar5);
            if (bVar4) {
              BIO_write(b_00,&DAT_013ecf75,2);
            }
          }
          iVar5 = BIO_gets(in,(char *)(abStack_461 + 1),0x400);
        } while (0 < iVar5);
      }
    }
    else {
      iVar5 = BIO_read(in,abStack_461 + 1,0x400);
      while (0 < iVar5) {
        BIO_write(b_00,abStack_461 + 1,iVar5);
        iVar5 = BIO_read(in,abStack_461 + 1,0x400);
      }
    }
LAB_00be7790:
    BIO_ctrl(b_00,0xb,0,(void *)0x0);
    BIO_pop(b_00);
    BIO_free(b);
    iVar5 = 1;
  }
  return iVar5;
}

