
/* WARNING: Removing unreachable block (ram,0x00afe6fc) */

undefined4
FUN_00afe450(ASN1_OBJECT **param_1,undefined8 *param_2,undefined8 param_3,char *param_4,uint param_5
            ,undefined4 param_6,char param_7,undefined1 *param_8)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  char **ppcVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ASN1_INTEGER *pAVar8;
  int iVar9;
  char **ppcVar10;
  code *pcVar11;
  undefined4 uVar12;
  char ***a;
  ASN1_OBJECT *a_00;
  char **data;
  byte *pbVar13;
  ASN1_OBJECT *pAVar14;
  ASN1_OBJECT **ppAVar15;
  BUF_MEM local_c0;
  undefined8 uStack_a8;
  char **local_a0;
  char local_94 [4];
  char local_90 [4];
  char local_8c [4];
  byte *local_88;
  uint local_7c;
  char **local_78;
  int iStack_70;
  int iStack_6c;
  char **local_68;
  
  local_94[0] = '\0';
  local_c0.data = (char *)0x0;
  local_c0.length = 0;
  uStack_a8 = 0;
  local_c0.max = 0;
  if (param_1 == (ASN1_OBJECT **)0x0) {
    iVar6 = 0x7d;
    iVar9 = 0x27b;
    goto LAB_00afe5fc;
  }
  if (*param_4 == '\x05') {
    uVar7 = 0xffffffff;
    local_7c = param_5;
  }
  else {
    local_7c = *(uint *)(param_4 + 8);
    uVar7 = param_5;
  }
  if (local_7c == 0xfffffffc) {
    if (-1 < (int)uVar7) {
      iVar6 = 0x7f;
      iVar9 = 0x289;
      goto LAB_00afe5fc;
    }
    if (param_7 != '\0') {
      iVar6 = 0x7e;
      iVar9 = 0x28e;
      goto LAB_00afe5fc;
    }
    local_a0 = (char **)*param_2;
    iVar6 = FUN_00afeba0(0,&local_7c,&local_68,0,0,&local_a0,param_3,0xffffffff,0,0,param_8);
    if (iVar6 == 0) {
      iVar6 = 0x3a;
      iVar9 = 0x295;
      goto LAB_00afe5fc;
    }
    if ((char)local_68 != '\0') {
      local_7c = 0xfffffffd;
    }
  }
  local_a0 = (char **)*param_2;
  uVar2 = local_7c;
  uVar5 = 0;
  if (uVar7 != 0xffffffff) {
    uVar2 = uVar7;
    uVar5 = param_6;
  }
  iVar6 = FUN_00afeba0(&local_88,0,0,local_90,local_8c,&local_a0,param_3,uVar2,uVar5,param_7,param_8
                      );
  if (iVar6 == -1) {
    return 0xffffffff;
  }
  if (iVar6 == 0) {
    iVar6 = 0x3a;
    iVar9 = 0x2a4;
LAB_00afe5fc:
    ERR_put_error(0xd,0x6c,iVar6,"crypto/asn1/tasn_dec.c",iVar9);
    return 0;
  }
  if (local_7c - 0x10 < 2) {
    if (local_8c[0] == '\0') {
      iVar6 = 0x9c;
      iVar9 = 0x2b6;
      goto LAB_00afe5fc;
    }
LAB_00afe674:
    data = (char **)*param_2;
    if (local_90[0] == '\0') {
      pbVar13 = (byte *)((long)local_a0 + ((long)local_88 - (long)data));
LAB_00afe808:
      local_a0 = (char **)((long)local_a0 + (long)local_88);
      goto LAB_00afe80c;
    }
    if (0 < (long)local_88) {
      iVar6 = 1;
      ppcVar4 = local_a0;
      pbVar13 = local_88;
      do {
        while (((pbVar13 == (byte *)0x1 || (*(byte *)ppcVar4 != 0)) ||
               (*(byte *)((long)ppcVar4 + 1) != 0))) {
          local_78 = ppcVar4;
          uVar7 = ASN1_get_object((uchar **)&local_78,(long *)&local_68,&iStack_6c,&iStack_70,
                                  (long)pbVar13);
          if ((uVar7 >> 7 & 1) != 0) {
            ERR_put_error(0xd,0x68,0x66,"crypto/asn1/tasn_dec.c",0x44c);
            ERR_put_error(0xd,0xbe,0x3a,"crypto/asn1/tasn_dec.c",0x3a0);
            goto LAB_00afeb3c;
          }
          if ((uVar7 & 1) != 0) {
            local_68 = (char **)((long)ppcVar4 + ((long)pbVar13 - (long)local_78));
          }
          if ((uVar7 & 1) == 0) {
            ppcVar10 = (char **)((long)local_78 + (long)local_68);
          }
          else {
            if (iVar6 == -1) {
              ERR_put_error(0xd,0xbe,0x3a,"crypto/asn1/tasn_dec.c",0x3a5);
              goto LAB_00afeb3c;
            }
            iVar6 = iVar6 + 1;
            ppcVar10 = local_78;
          }
          pbVar13 = (byte *)((long)ppcVar4 + ((long)pbVar13 - (long)ppcVar10));
          ppcVar4 = ppcVar10;
          if ((long)pbVar13 < 1) {
            if (iVar6 == 0) {
LAB_00afe798:
              pbVar13 = (byte *)((long)ppcVar10 - (long)data);
              local_a0 = ppcVar10;
              goto LAB_00afe80c;
            }
            goto LAB_00afeaf0;
          }
        }
        iVar6 = iVar6 + -1;
        ppcVar10 = (char **)((long)ppcVar4 + 2);
        if (iVar6 == 0) goto LAB_00afe798;
        pbVar3 = pbVar13 + -2;
        bVar1 = 1 < (long)pbVar13;
        ppcVar4 = ppcVar10;
        pbVar13 = pbVar3;
      } while (pbVar3 != (byte *)0x0 && bVar1);
    }
LAB_00afeaf0:
    ERR_put_error(0xd,0xbe,0x89,"crypto/asn1/tasn_dec.c",0x3af);
    goto LAB_00afeb3c;
  }
  if (local_7c == 0xfffffffd) {
    if (param_8 != (undefined1 *)0x0) {
      *param_8 = 0;
    }
    goto LAB_00afe674;
  }
  data = local_a0;
  pbVar13 = local_88;
  if (local_8c[0] == '\0') goto LAB_00afe808;
  if ((local_7c < 0xb) && ((1 << (ulong)(local_7c & 0x1f) & 0x466U) != 0)) {
    iVar6 = 0xc3;
    iVar9 = 0x2c8;
    goto LAB_00afe5fc;
  }
  local_94[0] = '\x01';
  iVar6 = FUN_00aff138(&local_c0,&local_a0,local_88,local_90[0],0);
  pbVar13 = (byte *)local_c0.length;
  if (iVar6 == 0) goto LAB_00afeb3c;
  iVar6 = BUF_MEM_grow_clean(&local_c0,(size_t)(local_c0.length + 1));
  if (iVar6 == 0) {
    ERR_put_error(0xd,0x6c,0x41,"crypto/asn1/tasn_dec.c",0x2da);
    goto LAB_00afeb3c;
  }
  *(byte *)((long)local_c0.data + (long)pbVar13) = 0;
  data = (char **)local_c0.data;
LAB_00afe80c:
  uVar7 = local_7c;
  local_68 = data;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (pcVar11 = *(code **)(*(long *)(param_4 + 0x20) + 0x28), pcVar11 != (code *)0x0)) {
    iVar6 = (*pcVar11)(param_1,data,(ulong)pbVar13 & 0xffffffff,local_7c,local_94,param_4);
    if (iVar6 == 0) goto LAB_00afeb3c;
    goto LAB_00afead4;
  }
  if (*(long *)(param_4 + 8) == -4) {
    a_00 = *param_1;
    if (a_00 == (ASN1_OBJECT *)0x0) {
      a_00 = (ASN1_OBJECT *)ASN1_TYPE_new();
      if (a_00 == (ASN1_OBJECT *)0x0) {
        ASN1_TYPE_free((ASN1_TYPE *)0x0);
        goto LAB_00afeb3c;
      }
      *param_1 = a_00;
    }
    if (*(uint *)&a_00->sn != uVar7) {
      ASN1_TYPE_set((ASN1_TYPE *)a_00,uVar7,(void *)0x0);
    }
    a = &a_00->ln;
    ppAVar15 = param_1;
  }
  else {
    a_00 = (ASN1_OBJECT *)0x0;
    ppAVar15 = (ASN1_OBJECT **)0x0;
    a = (char ***)param_1;
  }
  iVar6 = (int)pbVar13;
  switch(uVar7) {
  case 1:
    if (iVar6 == 1) {
      *(uint *)a = (uint)*(byte *)data;
      goto LAB_00afead4;
    }
    iVar6 = 0x6a;
    iVar9 = 800;
    break;
  case 2:
  case 10:
    pAVar8 = c2i_ASN1_INTEGER((ASN1_INTEGER **)a,(uchar **)&local_68,(long)iVar6);
    if (pAVar8 != (ASN1_INTEGER *)0x0) {
      *(uint *)((long)&((ASN1_OBJECT *)*a)->sn + 4) =
           *(uint *)((long)&((ASN1_OBJECT *)*a)->sn + 4) & 0x100 | uVar7;
joined_r0x00afeac8:
      if ((uVar7 == 5) && (a_00 != (ASN1_OBJECT *)0x0)) {
        a_00->ln = (char **)0x0;
      }
      goto LAB_00afead4;
    }
    goto LAB_00afeb2c;
  case 3:
    pAVar14 = (ASN1_OBJECT *)
              c2i_ASN1_BIT_STRING((ASN1_BIT_STRING **)a,(uchar **)&local_68,(long)iVar6);
    goto joined_r0x00afe998;
  default:
switchD_00afe8bc_caseD_4:
    pAVar14 = (ASN1_OBJECT *)*a;
    if (pAVar14 == (ASN1_OBJECT *)0x0) {
      pAVar14 = (ASN1_OBJECT *)ASN1_STRING_type_new(uVar7);
      if (pAVar14 == (ASN1_OBJECT *)0x0) {
        iVar6 = 0x41;
        iVar9 = 0x356;
        break;
      }
      *a = (char **)pAVar14;
    }
    else {
      *(uint *)((long)&pAVar14->sn + 4) = uVar7;
    }
    if (local_94[0] == '\0') {
      iVar6 = ASN1_STRING_set((ASN1_STRING *)pAVar14,data,iVar6);
      if (iVar6 == 0) {
        ERR_put_error(0xd,0xcc,0x41,"crypto/asn1/tasn_dec.c",0x366);
        ASN1_STRING_free((ASN1_STRING *)pAVar14);
        *a = (char **)0x0;
        goto LAB_00afeb2c;
      }
    }
    else {
      CRYPTO_free(pAVar14->ln);
      pAVar14->ln = data;
      *(int *)&pAVar14->sn = iVar6;
      local_94[0] = '\0';
    }
    goto LAB_00afead4;
  case 5:
    if (iVar6 == 0) {
      *a = (char **)0x1;
      goto joined_r0x00afeac8;
    }
    iVar6 = 0x90;
    iVar9 = 0x318;
    break;
  case 6:
    pAVar14 = c2i_ASN1_OBJECT((ASN1_OBJECT **)a,(uchar **)&local_68,(long)iVar6);
joined_r0x00afe998:
    if (pAVar14 == (ASN1_OBJECT *)0x0) goto LAB_00afeb2c;
LAB_00afead4:
    *param_2 = local_a0;
    uVar5 = 1;
    if (local_94[0] == '\0') {
      return 1;
    }
    goto LAB_00afeb48;
  case 0x1c:
    if (((ulong)pbVar13 & 3) == 0) goto switchD_00afe8bc_caseD_4;
    iVar6 = 0xd7;
    iVar9 = 0x34f;
    break;
  case 0x1e:
    if (((ulong)pbVar13 & 1) == 0) goto switchD_00afe8bc_caseD_4;
    iVar6 = 0xd6;
    iVar9 = 0x34a;
  }
  ERR_put_error(0xd,0xcc,iVar6,"crypto/asn1/tasn_dec.c",iVar9);
LAB_00afeb2c:
  ASN1_TYPE_free((ASN1_TYPE *)a_00);
  if (ppAVar15 != (ASN1_OBJECT **)0x0) {
    *ppAVar15 = (ASN1_OBJECT *)0x0;
  }
LAB_00afeb3c:
  uVar12 = 0;
  uVar5 = 0;
  if (local_94[0] != '\0') {
LAB_00afeb48:
    uVar12 = uVar5;
    CRYPTO_free(local_c0.data);
  }
  return uVar12;
}

