
void FUN_00b73bdc(X509 *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  EVP_MD *type;
  long lVar6;
  BASIC_CONSTRAINTS *a;
  ASN1_INTEGER *a_00;
  X509_CERT_AUX *pXVar7;
  PROXY_CERT_INFO_EXTENSION *a_01;
  X509_CINF *pXVar8;
  ASN1_STRING *pAVar9;
  void *pvVar10;
  ASN1_OBJECT *pAVar11;
  char *pcVar12;
  X509_NAME *pXVar13;
  X509_NAME *b;
  undefined8 *puVar14;
  X509_EXTENSION *ex;
  uint uVar15;
  int *piVar16;
  byte *pbVar17;
  int local_38;
  int local_34;
  
  if (((ulong)param_1[1].sig_alg & 0x100) == 0) {
    type = EVP_sha1();
    X509_digest(param_1,type,(uchar *)&param_1[1].ex_xkusage,(uint *)0x0);
    lVar6 = X509_get_version(param_1);
    if (lVar6 == 0) {
      *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x40;
    }
    a = X509_get_ext_d2i(param_1,0x57,(int *)0x0,(int *)0x0);
    if (a != (BASIC_CONSTRAINTS *)0x0) {
      iVar3 = a->ca;
      if (iVar3 != 0) {
        *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x10;
      }
      a_00 = a->pathlen;
      if (a_00 == (ASN1_INTEGER *)0x0) {
        pXVar7 = (X509_CERT_AUX *)0xffffffffffffffff;
      }
      else if ((a_00->type == 0x102) || (iVar3 == 0)) {
        pXVar7 = (X509_CERT_AUX *)0x0;
        *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x80;
      }
      else {
        pXVar7 = (X509_CERT_AUX *)ASN1_INTEGER_get(a_00);
      }
      param_1->aux = pXVar7;
      BASIC_CONSTRAINTS_free(a);
      *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 1;
    }
    a_01 = X509_get_ext_d2i(param_1,0x297,(int *)0x0,(int *)0x0);
    if (a_01 != (PROXY_CERT_INFO_EXTENSION *)0x0) {
      if ((((*(byte *)&param_1[1].sig_alg >> 4 & 1) != 0) ||
          (iVar3 = X509_get_ext_by_NID(param_1,0x55,-1), -1 < iVar3)) ||
         (iVar3 = X509_get_ext_by_NID(param_1,0x56,-1), -1 < iVar3)) {
        *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x80;
      }
      if (a_01->pcPathLengthConstraint == (ASN1_INTEGER *)0x0) {
        pXVar8 = (X509_CINF *)0xffffffffffffffff;
      }
      else {
        pXVar8 = (X509_CINF *)ASN1_INTEGER_get(a_01->pcPathLengthConstraint);
      }
      param_1[1].cert_info = pXVar8;
      PROXY_CERT_INFO_EXTENSION_free(a_01);
      *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x400;
    }
    pAVar9 = X509_get_ext_d2i(param_1,0x53,(int *)0x0,(int *)0x0);
    if (pAVar9 != (ASN1_STRING *)0x0) {
      iVar3 = pAVar9->length;
      if (iVar3 < 1) {
        *(undefined4 *)((long)&param_1[1].sig_alg + 4) = 0;
      }
      else {
        pbVar17 = pAVar9->data;
        bVar2 = *pbVar17;
        *(uint *)((long)&param_1[1].sig_alg + 4) = (uint)bVar2;
        if (iVar3 != 1) {
          *(uint *)((long)&param_1[1].sig_alg + 4) = (uint)CONCAT11(pbVar17[1],bVar2);
        }
      }
      *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 2;
      ASN1_BIT_STRING_free(pAVar9);
    }
    *(undefined4 *)&param_1[1].signature = 0;
    pvVar10 = X509_get_ext_d2i(param_1,0x7e,(int *)0x0,(int *)0x0);
    if (pvVar10 != (void *)0x0) {
      *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 4;
      local_38 = 0;
      iVar4 = OPENSSL_sk_num(pvVar10);
      iVar3 = local_38;
      if (0 < iVar4) {
        iVar3 = 0;
        do {
          pAVar11 = (ASN1_OBJECT *)OPENSSL_sk_value(pvVar10,iVar3);
          iVar4 = OBJ_obj2nid(pAVar11);
          uVar15 = 1;
          switch(iVar4) {
          case 0x81:
            break;
          case 0x82:
            uVar15 = 2;
            break;
          case 0x83:
            uVar15 = 8;
            break;
          case 0x84:
            uVar15 = 4;
            break;
          case 0x85:
            uVar15 = 0x40;
            break;
          case 0x86:
          case 0x87:
          case 0x88:
          case 0x8a:
          case 0x8c:
          case 0x8d:
          case 0x8e:
          case 0x8f:
          case 0x90:
          case 0x91:
          case 0x92:
          case 0x93:
          case 0x94:
          case 0x95:
          case 0x96:
          case 0x97:
          case 0x98:
          case 0x99:
          case 0x9a:
          case 0x9b:
          case 0x9c:
          case 0x9d:
          case 0x9e:
          case 0x9f:
          case 0xa0:
          case 0xa1:
          case 0xa2:
          case 0xa3:
          case 0xa4:
          case 0xa5:
          case 0xa6:
          case 0xa7:
          case 0xa8:
          case 0xa9:
          case 0xaa:
          case 0xab:
          case 0xac:
          case 0xad:
          case 0xae:
          case 0xaf:
          case 0xb0:
          case 0xb1:
          case 0xb2:
          case 0xb3:
            goto switchD_00b73e00_caseD_86;
          case 0x89:
          case 0x8b:
            uVar15 = 0x10;
            break;
          case 0xb4:
            uVar15 = 0x20;
            break;
          default:
            if (iVar4 == 0x129) {
              uVar15 = 0x80;
            }
            else {
              if (iVar4 != 0x38e) goto switchD_00b73e00_caseD_86;
              uVar15 = 0x100;
            }
          }
          *(uint *)&param_1[1].signature = *(uint *)&param_1[1].signature | uVar15;
switchD_00b73e00_caseD_86:
          iVar3 = iVar3 + 1;
          iVar4 = OPENSSL_sk_num(pvVar10);
        } while (iVar3 < iVar4);
      }
      local_38 = iVar3;
      OPENSSL_sk_pop_free(pvVar10,ASN1_OBJECT_free);
    }
    pAVar9 = X509_get_ext_d2i(param_1,0x47,(int *)0x0,(int *)0x0);
    if (pAVar9 != (ASN1_STRING *)0x0) {
      if (pAVar9->length < 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = (uint)*pAVar9->data;
      }
      uVar1 = *(uint *)&param_1[1].sig_alg;
      *(uint *)((long)&param_1[1].signature + 4) = uVar15;
      *(uint *)&param_1[1].sig_alg = uVar1 | 8;
      ASN1_BIT_STRING_free(pAVar9);
    }
    pvVar10 = X509_get_ext_d2i(param_1,0x52,(int *)0x0,(int *)0x0);
    *(void **)&param_1[1].valid = pvVar10;
    pcVar12 = X509_get_ext_d2i(param_1,0x5a,(int *)0x0,(int *)0x0);
    param_1[1].name = pcVar12;
    pXVar13 = X509_get_subject_name(param_1);
    b = X509_get_issuer_name(param_1);
    iVar3 = X509_NAME_cmp(pXVar13,b);
    if (iVar3 == 0) {
      *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x20;
      iVar3 = X509_check_akid(param_1,(AUTHORITY_KEYID *)param_1[1].name);
      if ((iVar3 == 0) &&
         (((*(uint *)&param_1[1].sig_alg >> 1 & 1) == 0 ||
          ((*(byte *)((long)&param_1[1].sig_alg + 4) >> 2 & 1) != 0)))) {
        *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x2000;
      }
    }
    pvVar10 = X509_get_ext_d2i(param_1,0x55,(int *)0x0,(int *)0x0);
    param_1[1].ex_pathlen = (long)pvVar10;
    pvVar10 = X509_get_ext_d2i(param_1,0x29a,&local_38,(int *)0x0);
    param_1[1].ex_pcpathlen = (long)pvVar10;
    if ((pvVar10 == (void *)0x0) && (local_38 != -1)) {
      *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x80;
    }
    pvVar10 = X509_get_ext_d2i(param_1,0x67,(int *)0x0,(int *)0x0);
    *(void **)&param_1[1].ex_data.dummy = pvVar10;
    iVar3 = OPENSSL_sk_num();
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        puVar14 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)&param_1[1].ex_data.dummy,iVar3);
        piVar16 = (int *)puVar14[1];
        if (piVar16 == (int *)0x0) {
          *(undefined4 *)(puVar14 + 3) = 0x807f;
          piVar16 = (int *)*puVar14;
        }
        else {
          iVar4 = *piVar16;
          if (iVar4 < 1) {
            uVar15 = *(uint *)(puVar14 + 3);
          }
          else {
            pbVar17 = *(byte **)(piVar16 + 2);
            bVar2 = *pbVar17;
            uVar15 = (uint)bVar2;
            *(uint *)(puVar14 + 3) = (uint)bVar2;
            if (iVar4 != 1) {
              uVar15 = (uint)CONCAT11(pbVar17[1],bVar2);
              *(uint *)(puVar14 + 3) = uVar15;
            }
          }
          *(uint *)(puVar14 + 3) = uVar15 & 0x807f;
          piVar16 = (int *)*puVar14;
        }
        if ((piVar16 != (int *)0x0) && (*piVar16 == 1)) {
          iVar4 = OPENSSL_sk_num(puVar14[2]);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              piVar16 = (int *)OPENSSL_sk_value(puVar14[2],iVar4);
              if (*piVar16 == 4) {
                pXVar13 = *(X509_NAME **)(piVar16 + 2);
                if (pXVar13 != (X509_NAME *)0x0) goto LAB_00b740a4;
                break;
              }
              iVar4 = iVar4 + 1;
              iVar5 = OPENSSL_sk_num(puVar14[2]);
            } while (iVar4 < iVar5);
          }
          pXVar13 = X509_get_issuer_name(param_1);
LAB_00b740a4:
          DIST_POINT_set_dpname((DIST_POINT_NAME *)*puVar14,pXVar13);
        }
        iVar3 = iVar3 + 1;
        iVar4 = OPENSSL_sk_num(*(undefined8 *)&param_1[1].ex_data.dummy);
      } while (iVar3 < iVar4);
    }
    pvVar10 = X509_get_ext_d2i(param_1,0x122,(int *)0x0,(int *)0x0);
    param_1[1].ex_flags = (ulong)pvVar10;
    pvVar10 = X509_get_ext_d2i(param_1,0x123,(int *)0x0,(int *)0x0);
    param_1[1].ex_kusage = (ulong)pvVar10;
    local_38 = 0;
    iVar3 = X509_get_ext_count(param_1);
    if (0 < iVar3) {
      do {
        ex = X509_get_ext(param_1,local_38);
        pAVar11 = X509_EXTENSION_get_object(ex);
        iVar3 = OBJ_obj2nid(pAVar11);
        if (iVar3 == 0x359) {
          *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x1000;
        }
        iVar3 = X509_EXTENSION_get_critical(ex);
        if (iVar3 != 0) {
          pAVar11 = X509_EXTENSION_get_object(ex);
          local_34 = OBJ_obj2nid(pAVar11);
          if ((local_34 == 0) ||
             (pvVar10 = OBJ_bsearch_(&local_34,&DAT_018c0a40,0xd,4,(cmp *)&LAB_00b75184),
             pvVar10 == (void *)0x0)) {
            *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x200;
            break;
          }
        }
        iVar3 = local_38 + 1;
        local_38 = iVar3;
        iVar4 = X509_get_ext_count(param_1);
      } while (iVar3 < iVar4);
    }
    *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x100;
  }
  return;
}

