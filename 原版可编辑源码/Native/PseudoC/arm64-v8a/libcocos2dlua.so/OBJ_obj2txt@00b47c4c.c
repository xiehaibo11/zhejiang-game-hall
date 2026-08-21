
int OBJ_obj2txt(char *buf,int buf_len,ASN1_OBJECT *a,int no_name)

{
  uchar uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  size_t sVar7;
  char cVar8;
  ulong uVar9;
  char *pcVar10;
  BIGNUM *a_00;
  int iVar11;
  uchar *puVar12;
  uchar *puVar13;
  int iVar14;
  ulong w;
  long lVar15;
  int iVar16;
  char acStack_98 [16];
  uint local_88;
  undefined4 local_70 [2];
  char *local_68;
  
  if ((buf != (char *)0x0) && (0 < buf_len)) {
    *buf = '\0';
  }
  if ((a == (ASN1_OBJECT *)0x0) || (a->data == (uchar *)0x0)) {
    return 0;
  }
  if ((no_name != 0) || (uVar5 = OBJ_obj2nid(a), uVar5 == 0)) goto LAB_00b47c98;
  if (uVar5 < 0x425) {
    if (*(int *)(&DAT_016b3c48 + (long)(int)uVar5 * 0x28) == 0) {
      ERR_put_error(8,0x66,0x65,"crypto/objects/obj_dat.c",0x119);
      goto joined_r0x00b47fb0;
    }
    pcVar6 = (&PTR_s_undefined_016b3c40)[(long)(int)uVar5 * 5];
    if (pcVar6 == (char *)0x0) goto joined_r0x00b47fb0;
LAB_00b48040:
    if (buf != (char *)0x0) {
      OPENSSL_strlcpy(buf,pcVar6,(long)buf_len);
    }
    sVar7 = strlen(pcVar6);
    iVar11 = (int)sVar7;
  }
  else {
    if (DAT_01784a28 != 0) {
      local_68 = acStack_98;
      local_70[0] = 3;
      local_88 = uVar5;
      lVar15 = OPENSSL_LH_retrieve(DAT_01784a28,local_70);
      if (lVar15 == 0) {
        ERR_put_error(8,0x66,0x65,"crypto/objects/obj_dat.c",0x127);
      }
      else {
        pcVar6 = *(char **)(*(long *)(lVar15 + 8) + 8);
        if (pcVar6 != (char *)0x0) goto LAB_00b48040;
      }
    }
joined_r0x00b47fb0:
    if (uVar5 < 0x425) {
      if (*(int *)(&DAT_016b3c48 + (long)(int)uVar5 * 0x28) == 0) {
        iVar11 = 0xfe;
LAB_00b480b8:
        ERR_put_error(8,0x68,0x65,"crypto/objects/obj_dat.c",iVar11);
      }
      else {
        pcVar6 = (&PTR_s_UNDEF_016b3c38)[(long)(int)uVar5 * 5];
joined_r0x00b47fe8:
        if (pcVar6 != (char *)0x0) goto LAB_00b48040;
      }
    }
    else if (DAT_01784a28 != 0) {
      local_68 = acStack_98;
      local_70[0] = 3;
      local_88 = uVar5;
      lVar15 = OPENSSL_LH_retrieve(DAT_01784a28,local_70);
      if (lVar15 == 0) {
        iVar11 = 0x10c;
        goto LAB_00b480b8;
      }
      pcVar6 = (char *)**(undefined8 **)(lVar15 + 8);
      goto joined_r0x00b47fe8;
    }
LAB_00b47c98:
    iVar16 = a->length;
    if (iVar16 < 1) {
      iVar11 = 0;
      a_00 = (BIGNUM *)0x0;
LAB_00b47f48:
      BN_free(a_00);
    }
    else {
      puVar12 = a->data;
      a_00 = (BIGNUM *)0x0;
      iVar11 = 0;
      bVar2 = true;
LAB_00b47cb4:
      bVar3 = false;
      w = 0;
      while( true ) {
        uVar1 = *puVar12;
        uVar9 = (ulong)(char)uVar1;
        iVar16 = iVar16 + -1;
        if ((iVar16 == 0) && ((char)uVar1 < 0)) break;
        uVar5 = (uint)(int)(char)uVar1 >> 0x1f;
        puVar12 = puVar12 + 1;
LAB_00b47cd4:
        if (bVar3) {
          iVar4 = BN_add_word(a_00,uVar9 & 0x7f);
          if (iVar4 == 0) break;
        }
        else {
          w = w | uVar9 & 0x7f;
        }
        if (uVar5 == 0) {
          if (bVar2) {
            if (w < 0x50) {
              iVar4 = (int)(w / 0x28);
              w = w - ((long)((ulong)(uint)(iVar4 * 5) << 0x23) >> 0x20);
joined_r0x00b47db0:
              cVar8 = (char)iVar4;
            }
            else {
              if (bVar3) {
                iVar4 = BN_sub_word(a_00,0x50);
                if (iVar4 != 0) {
                  iVar4 = 2;
                  goto joined_r0x00b47db0;
                }
                break;
              }
              cVar8 = '\x02';
              w = w - 0x50;
            }
            if ((1 < buf_len) && (buf != (char *)0x0)) {
              buf[1] = '\0';
              *buf = cVar8 + '0';
              buf_len = buf_len + -1;
              buf = buf + 1;
            }
            iVar11 = iVar11 + 1;
          }
          if (bVar3) {
            pcVar6 = BN_bn2dec(a_00);
            if (pcVar6 == (char *)0x0) break;
            sVar7 = strlen(pcVar6);
            iVar4 = (int)sVar7;
            if (buf != (char *)0x0) {
              pcVar10 = buf;
              if (1 < buf_len) {
                pcVar10 = buf + 1;
                buf[0] = '.';
                buf[1] = '\0';
                buf_len = buf_len + -1;
              }
              lVar15 = (long)buf_len;
              OPENSSL_strlcpy(pcVar10,pcVar6,lVar15);
              if (buf_len < iVar4) {
                buf_len = 0;
                buf = pcVar10 + lVar15;
              }
              else {
                buf = pcVar10 + iVar4;
                buf_len = buf_len - iVar4;
              }
            }
            iVar11 = iVar11 + iVar4 + 1;
            CRYPTO_free(pcVar6);
          }
          else {
            BIO_snprintf(acStack_98,0x25,".%lu",w);
            sVar7 = strlen(acStack_98);
            iVar14 = (int)sVar7;
            iVar4 = buf_len;
            if ((0 < buf_len) && (buf != (char *)0x0)) {
              OPENSSL_strlcpy(buf,acStack_98,(long)buf_len);
              iVar4 = buf_len - iVar14;
              if (buf_len < iVar14) {
                iVar4 = 0;
                buf = buf + buf_len;
              }
              else {
                buf = buf + iVar14;
              }
            }
            iVar11 = iVar11 + iVar14;
            buf_len = iVar4;
          }
          bVar2 = false;
          if (iVar16 < 1) goto LAB_00b47f48;
          goto LAB_00b47cb4;
        }
        if ((bVar3) || (w >> 0x39 == 0)) {
          if (bVar3) goto LAB_00b47d48;
          puVar13 = puVar12 + 1;
          uVar1 = *puVar12;
          uVar9 = (ulong)(char)uVar1;
          w = w << 7;
          iVar16 = iVar16 + -1;
          uVar5 = (uint)(int)(char)uVar1 >> 0x1f;
          puVar12 = puVar13;
          if ((iVar16 == 0) && ((char)uVar1 < 0)) break;
          goto LAB_00b47cd4;
        }
        if (((a_00 == (BIGNUM *)0x0) && (a_00 = BN_new(), a_00 == (BIGNUM *)0x0)) ||
           (iVar4 = BN_set_word(a_00,w), iVar4 == 0)) break;
        bVar3 = true;
LAB_00b47d48:
        iVar4 = BN_lshift(a_00,a_00,7);
        if (iVar4 == 0) break;
      }
      BN_free(a_00);
      iVar11 = -1;
    }
  }
  return iVar11;
}

