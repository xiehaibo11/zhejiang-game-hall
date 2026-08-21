
ASN1_OBJECT * OBJ_txt2obj(char *s,int no_name)

{
  uint uVar1;
  char *__s1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  ASN1_OBJECT *pAVar6;
  long lVar7;
  undefined **ppuVar8;
  uint *puVar9;
  int iVar10;
  uchar *local_98;
  char *local_90;
  uint local_88;
  uchar *local_70;
  uchar **local_68;
  
  if (no_name == 0) {
    local_98 = (uchar *)s;
    if (DAT_01d3aca8 == 0) {
LAB_00b393b4:
      puVar5 = local_98;
      iVar2 = 0;
      iVar4 = 0;
      puVar9 = (uint *)0x0;
      iVar3 = 0x41c;
      do {
        iVar10 = iVar3;
        if (iVar10 <= iVar2) {
          if (iVar4 != 0) goto LAB_00b39440;
          break;
        }
        iVar3 = iVar10 + iVar2;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar9 = (uint *)(&DAT_018b3ac4 + (long)iVar3 * 4);
        iVar4 = strcmp((char *)puVar5,(&PTR_s_UNDEF_01c78ce8)[(ulong)*puVar9 * 5]);
      } while ((iVar4 < 0) || (iVar2 = iVar3 + 1, iVar3 = iVar10, iVar4 != 0));
      if (puVar9 != (uint *)0x0) {
        ppuVar8 = &PTR_s_UNDEF_01c78ce8 + (ulong)*puVar9 * 5;
        goto LAB_00b39434;
      }
LAB_00b39440:
      local_90 = s;
      if (DAT_01d3aca8 == 0) {
LAB_00b39478:
        __s1 = local_90;
        iVar2 = 0;
        iVar4 = 0;
        puVar9 = (uint *)0x0;
        iVar3 = 0x41c;
        do {
          iVar10 = iVar3;
          if (iVar10 <= iVar2) {
            if (iVar4 != 0) goto LAB_00b392c4;
            break;
          }
          iVar3 = iVar10 + iVar2;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar9 = (uint *)(&DAT_018b2a54 + (long)iVar3 * 4);
          iVar4 = strcmp(__s1,(&PTR_s_undefined_019b2fcb_0x53_01c78cf0)[(ulong)*puVar9 * 5]);
        } while ((iVar4 < 0) || (iVar2 = iVar3 + 1, iVar3 = iVar10, iVar4 != 0));
        if (puVar9 == (uint *)0x0) goto LAB_00b392c4;
        ppuVar8 = &PTR_s_UNDEF_01c78ce8 + (ulong)*puVar9 * 5;
      }
      else {
        local_68 = &local_98;
        local_70 = (uchar *)CONCAT44(local_70._4_4_,2);
        lVar7 = OPENSSL_LH_retrieve(DAT_01d3aca8,&local_70);
        if (lVar7 == 0) goto LAB_00b39478;
        ppuVar8 = *(undefined ***)(lVar7 + 8);
      }
      uVar1 = *(uint *)(ppuVar8 + 2);
      if (uVar1 == 0) goto LAB_00b392c4;
    }
    else {
      local_68 = &local_98;
      local_70 = (uchar *)CONCAT44(local_70._4_4_,1);
      lVar7 = OPENSSL_LH_retrieve(DAT_01d3aca8,&local_70);
      if (lVar7 == 0) goto LAB_00b393b4;
      ppuVar8 = *(undefined ***)(lVar7 + 8);
LAB_00b39434:
      uVar1 = *(uint *)(ppuVar8 + 2);
      if (uVar1 == 0) goto LAB_00b39440;
    }
    if (uVar1 < 0x425) {
      if (*(int *)(&DAT_01c78cf8 + (long)(int)uVar1 * 0x28) != 0) {
        return (ASN1_OBJECT *)(&PTR_s_UNDEF_01c78ce8 + (long)(int)uVar1 * 5);
      }
      iVar2 = 0xe3;
    }
    else {
      if (DAT_01d3aca8 == 0) {
        return (ASN1_OBJECT *)0x0;
      }
      local_68 = &local_98;
      local_70 = (uchar *)CONCAT44(local_70._4_4_,3);
      local_88 = uVar1;
      lVar7 = OPENSSL_LH_retrieve(DAT_01d3aca8,&local_70);
      if (lVar7 != 0) {
        return *(ASN1_OBJECT **)(lVar7 + 8);
      }
      iVar2 = 0xf1;
    }
    ERR_put_error(8,0x67,0x65,"crypto/objects/obj_dat.c",iVar2);
  }
  else {
LAB_00b392c4:
    iVar2 = a2d_ASN1_OBJECT((uchar *)0x0,0,s,-1);
    if ((0 < iVar2) && (iVar3 = ASN1_object_size(0,iVar2,6), -1 < iVar3)) {
      puVar5 = CRYPTO_malloc(iVar3,"crypto/objects/obj_dat.c",0x17b);
      if (puVar5 != (uchar *)0x0) {
        local_98 = puVar5;
        ASN1_put_object(&local_98,0,iVar2,6,0);
        a2d_ASN1_OBJECT(local_98,iVar2,s,-1);
        local_70 = puVar5;
        pAVar6 = d2i_ASN1_OBJECT((ASN1_OBJECT **)0x0,&local_70,(long)iVar3);
        CRYPTO_free(puVar5);
        return pAVar6;
      }
    }
  }
  return (ASN1_OBJECT *)0x0;
}

