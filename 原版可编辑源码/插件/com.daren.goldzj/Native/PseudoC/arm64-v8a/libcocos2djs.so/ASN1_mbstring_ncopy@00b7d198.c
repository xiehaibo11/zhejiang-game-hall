
int ASN1_mbstring_ncopy(ASN1_STRING **out,uchar *in,int len,int inform,ulong mask,long minsize,
                       long maxsize)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  uint type;
  ASN1_STRING *a;
  undefined *puVar7;
  byte *pbVar8;
  uchar *puVar9;
  ulong uVar10;
  int iVar11;
  ulong local_90 [4];
  uchar *local_70;
  ulong local_68;
  
  uVar6 = (ulong)(uint)len;
  local_68 = mask;
  if (len == -1) {
    uVar6 = strlen((char *)in);
  }
  if (mask == 0) {
    local_68 = 0x2806;
  }
  iVar11 = (int)uVar6;
  iVar3 = iVar11;
  switch(inform) {
  case 0x1000:
    if (iVar11 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar10 = uVar6 & 0xffffffff;
      puVar9 = in;
      do {
        iVar2 = UTF8_getc(puVar9,(int)uVar10,local_90);
        if (iVar2 < 0) {
          iVar3 = 0x86;
          iVar11 = 0x57;
          goto LAB_00b7d408;
        }
        uVar5 = (int)uVar10 - iVar2;
        uVar10 = (ulong)uVar5;
        puVar9 = puVar9 + iVar2;
        iVar3 = iVar3 + 1;
      } while (uVar5 != 0);
    }
    break;
  case 0x1001:
    break;
  case 0x1002:
    if ((uVar6 & 1) != 0) {
      iVar3 = 0x81;
      iVar11 = 0x43;
      goto LAB_00b7d408;
    }
    iVar3 = iVar11 >> 1;
    break;
  default:
    iVar3 = 0xa0;
    iVar11 = 0x61;
    goto LAB_00b7d408;
  case 0x1004:
    if ((uVar6 & 3) != 0) {
      iVar3 = 0x85;
      iVar11 = 0x4c;
      goto LAB_00b7d408;
    }
    iVar3 = iVar11 >> 2;
  }
  if ((0 < minsize) && (iVar3 < minsize)) {
    ERR_put_error(0xd,0x7a,0x98,"crypto/asn1/a_mbstr.c",0x66);
    BIO_snprintf((char *)local_90,0x20,"%ld",minsize);
    pcVar4 = "minsize=";
LAB_00b7d370:
    ERR_add_error_data(2,pcVar4,local_90);
    return -1;
  }
  if ((0 < maxsize) && (maxsize < iVar3)) {
    ERR_put_error(0xd,0x7a,0x97,"crypto/asn1/a_mbstr.c",0x6d);
    BIO_snprintf((char *)local_90,0x20,"%ld",maxsize);
    pcVar4 = "maxsize=";
    goto LAB_00b7d370;
  }
  iVar2 = FUN_00b7d72c(in,uVar6 & 0xffffffff,inform,&LAB_00b7d86c,&local_68);
  if (iVar2 < 0) {
    iVar3 = 0x7c;
    iVar11 = 0x75;
    goto LAB_00b7d408;
  }
  uVar5 = (uint)local_68;
  if ((local_68 & 1) == 0) {
    if ((uVar5 >> 1 & 1) == 0) {
      if ((uVar5 >> 4 & 1) == 0) {
        if ((uVar5 >> 2 & 1) == 0) {
          if ((uVar5 >> 0xb & 1) == 0) {
            type = (uVar5 & 0x100) >> 4 | 0xc;
            uVar5 = (uVar5 & 0x100) >> 6 | 0x1000;
          }
          else {
            uVar5 = 0x1002;
            type = 0x1e;
          }
          goto joined_r0x00b7d4a8;
        }
        type = 0x14;
      }
      else {
        type = 0x16;
      }
      uVar5 = 0x1001;
    }
    else {
      uVar5 = 0x1001;
      type = 0x13;
    }
  }
  else {
    uVar5 = 0x1001;
    type = 0x12;
  }
joined_r0x00b7d4a8:
  if (out == (ASN1_STRING **)0x0) {
    return type;
  }
  a = *out;
  if (a == (ASN1_STRING *)0x0) {
    a = ASN1_STRING_type_new(type);
    if (a == (ASN1_STRING *)0x0) {
      iVar3 = 0x41;
      iVar11 = 0x9a;
      goto LAB_00b7d408;
    }
    bVar1 = true;
    *out = a;
  }
  else {
    CRYPTO_free(a->data);
    bVar1 = false;
    a->data = (uchar *)0x0;
    a->length = 0;
    a->type = type;
  }
  if (uVar5 == inform) {
    iVar3 = ASN1_STRING_set(a,in,iVar11);
    if (iVar3 != 0) {
      return type;
    }
    iVar3 = 0x41;
    iVar11 = 0xa2;
  }
  else {
    puVar7 = (undefined *)0x0;
    iVar2 = 0;
    switch(uVar5 & 7) {
    case 0:
      if (iVar11 == 0) {
        iVar2 = 0;
      }
      else if (inform == 0x1001) {
        iVar2 = 0;
        uVar10 = uVar6 & 0xffffffff;
        pbVar8 = in;
        do {
          local_90[0] = (ulong)*pbVar8;
          uVar5 = (int)uVar10 - 1;
          uVar10 = (ulong)uVar5;
          iVar3 = UTF8_putc((uchar *)0x0,-1,local_90[0]);
          iVar2 = iVar3 + iVar2;
          pbVar8 = pbVar8 + 1;
        } while (uVar5 != 0);
      }
      else if (inform == 0x1004) {
        iVar2 = 0;
        uVar10 = uVar6 & 0xffffffff;
        pbVar8 = in;
        do {
          uVar5 = (int)uVar10 - 4;
          uVar10 = (ulong)uVar5;
          local_90[0] = (ulong)*pbVar8 << 0x18 | (ulong)pbVar8[1] << 0x10 | (ulong)pbVar8[2] << 8 |
                        (ulong)pbVar8[3];
          iVar3 = UTF8_putc((uchar *)0x0,-1,local_90[0]);
          iVar2 = iVar3 + iVar2;
          pbVar8 = pbVar8 + 4;
        } while (uVar5 != 0);
      }
      else if (inform == 0x1002) {
        iVar2 = 0;
        uVar10 = uVar6 & 0xffffffff;
        puVar9 = in;
        do {
          uVar5 = (int)uVar10 - 2;
          uVar10 = (ulong)uVar5;
          local_90[0] = (ulong)CONCAT11(*puVar9,puVar9[1]);
          iVar3 = UTF8_putc((uchar *)0x0,-1,local_90[0]);
          iVar2 = iVar3 + iVar2;
          puVar9 = puVar9 + 2;
        } while (uVar5 != 0);
      }
      else {
        iVar2 = 0;
        uVar10 = uVar6 & 0xffffffff;
        puVar9 = in;
        do {
          iVar3 = UTF8_getc(puVar9,(int)uVar10,local_90);
          if (iVar3 < 0) break;
          uVar5 = (int)uVar10 - iVar3;
          uVar10 = (ulong)uVar5;
          puVar9 = puVar9 + iVar3;
          iVar3 = UTF8_putc((uchar *)0x0,-1,local_90[0]);
          iVar2 = iVar3 + iVar2;
        } while (uVar5 != 0);
      }
      puVar7 = &UNK_00b7d9cc;
      break;
    case 1:
      puVar7 = &UNK_00b7d958;
      iVar2 = iVar3;
      break;
    case 2:
      puVar7 = &UNK_00b7d974;
      iVar2 = iVar3 << 1;
      break;
    case 4:
      puVar7 = &LAB_00b7d998;
      iVar2 = iVar3 << 2;
    }
    local_70 = CRYPTO_malloc(iVar2 + 1,"crypto/asn1/a_mbstr.c",0xbf);
    if (local_70 != (uchar *)0x0) {
      a->length = iVar2;
      a->data = local_70;
      local_70[iVar2] = '\0';
      FUN_00b7d72c(in,uVar6 & 0xffffffff,inform,puVar7,&local_70);
      return type;
    }
    if (bVar1) {
      ASN1_STRING_free(a);
    }
    iVar3 = 0x41;
    iVar11 = 0xc2;
  }
LAB_00b7d408:
  ERR_put_error(0xd,0x7a,iVar3,"crypto/asn1/a_mbstr.c",iVar11);
  return -1;
}

