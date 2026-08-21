
ulong FUN_00b894c4(BIO *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  BUF_MEM *str;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  int iStack_78;
  int local_74;
  ulong local_70;
  uchar *local_68;
  
  str = BUF_MEM_new();
  if (str == (BUF_MEM *)0x0) {
    ERR_put_error(0xd,0x6b,0x41,"crypto/asn1/a_d2i_fp.c",0x6f);
  }
  else {
    ERR_clear_error();
    iVar9 = 0;
    uVar7 = 0;
    uVar10 = 0;
    do {
      while( true ) {
        while( true ) {
          uVar11 = uVar10 - uVar7;
          if (uVar11 < 9) {
            uVar8 = 8 - uVar11;
            if ((CARRY8(uVar8,uVar10)) ||
               (iVar4 = BUF_MEM_grow_clean(str,uVar8 + uVar10), iVar4 == 0)) {
              iVar9 = 0x41;
              iVar4 = 0x79;
              goto LAB_00b896c0;
            }
            iVar4 = BIO_read(param_1,str->data + uVar10,(int)uVar8);
            if ((uVar11 == 0) && (iVar4 < 0)) {
              iVar9 = 0x8e;
              iVar4 = 0x7e;
              goto LAB_00b896c0;
            }
            if ((0 < iVar4) &&
               (bVar3 = CARRY8(uVar10,(long)iVar4), uVar10 = uVar10 + (long)iVar4, bVar3)) {
              iVar9 = 0x9b;
              iVar4 = 0x83;
              goto LAB_00b896c0;
            }
          }
          pcVar6 = str->data;
          local_68 = (uchar *)(pcVar6 + uVar7);
          uVar5 = ASN1_get_object(&local_68,(long *)&local_70,&local_74,&iStack_78,uVar10 - uVar7);
          if ((uVar5 >> 7 & 1) != 0) {
            uVar11 = ERR_peek_error();
            if ((uVar11 & 0xfff) != 0x9b) goto LAB_00b896c4;
            ERR_clear_error();
          }
          uVar7 = uVar7 + (long)((int)local_68 - (int)(pcVar6 + uVar7));
          if ((uVar5 & 1) == 0) break;
          if (iVar9 == -1) {
                    /* try { // try from 00b897cc to 00c899e7 has its CatchHandler @ 00b897cc
                       catch() { ... } // from try @ 00b897cc with catch @ 00b897cc
                       catch() { ... } // from try @ 00b89a0c with catch @ 00b897cc */
            iVar9 = 0x7b;
            iVar4 = 0x9d;
            goto LAB_00b896c0;
          }
          iVar9 = iVar9 + 1;
        }
        if (((iVar9 != 0) && (local_70 == 0)) && (local_74 == 0)) break;
        uVar11 = local_70 - (uVar10 - uVar7);
        if (uVar10 - uVar7 <= local_70 && uVar11 != 0) {
          if ((uVar11 >> 0x1f != 0) || (CARRY8(uVar11,uVar10))) {
            iVar9 = 0x9b;
            iVar4 = 0xb2;
            goto LAB_00b896c0;
          }
          if (uVar11 != 0) {
            uVar8 = 0x4000;
            do {
              uVar1 = uVar8;
              if (uVar11 <= uVar8) {
                uVar1 = uVar11;
              }
              iVar4 = BUF_MEM_grow_clean(str,uVar1 + uVar10);
              uVar2 = uVar1;
              if (iVar4 == 0) {
                iVar9 = 0x41;
                iVar4 = 0xbf;
                goto LAB_00b896c0;
              }
              for (; uVar2 != 0; uVar2 = uVar2 - (long)iVar4) {
                iVar4 = BIO_read(param_1,str->data + uVar10,(int)uVar2);
                if (iVar4 < 1) {
                  iVar9 = 0x8e;
                  iVar4 = 199;
                  goto LAB_00b896c0;
                }
                uVar10 = uVar10 + (long)iVar4;
              }
              uVar11 = uVar11 - uVar1;
              uVar8 = uVar8 << (uVar8 < 0x3fffffff);
            } while (uVar11 != 0);
          }
        }
        bVar3 = CARRY8(local_70,uVar7);
        uVar7 = local_70 + uVar7;
        if (bVar3) {
          iVar9 = 0x9b;
          iVar4 = 0xd6;
          goto LAB_00b896c0;
        }
        if (iVar9 == 0) goto LAB_00b8972c;
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
LAB_00b8972c:
    if (uVar7 >> 0x1f == 0) {
      *param_2 = str;
      goto LAB_00b896d0;
    }
    iVar9 = 0x9b;
    iVar4 = 0xe2;
LAB_00b896c0:
    ERR_put_error(0xd,0x6b,iVar9,"crypto/asn1/a_d2i_fp.c",iVar4);
LAB_00b896c4:
    BUF_MEM_free(str);
  }
  uVar7 = 0xffffffff;
LAB_00b896d0:
  return uVar7 & 0xffffffff;
}

