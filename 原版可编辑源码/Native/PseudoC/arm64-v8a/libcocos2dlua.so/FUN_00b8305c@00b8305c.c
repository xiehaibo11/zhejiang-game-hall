
void FUN_00b8305c(X509 *param_1)

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
  
                    /* catch() { ... } // from try @ 00b82fbc with catch @ 00b8305c */
                    /* catch() { ... } // from try @ 00b82f64 with catch @ 00b83070 */
                    /* catch() { ... } // from try @ 00b82ed8 with catch @ 00b83074 */
  if (((ulong)param_1[1].sig_alg & 0x100) == 0) {
                    /* catch() { ... } // from try @ 00b82e74 with catch @ 00b8307c */
    type = EVP_sha1();
                    /* catch() { ... } // from try @ 00b82f5c with catch @ 00b83084
                       catch() { ... } // from try @ 00b82fb0 with catch @ 00b83084 */
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
                    /* catch() { ... } // from try @ 00b82ddc with catch @ 00b83128 */
      *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 1;
    }
    a_01 = X509_get_ext_d2i(param_1,0x297,(int *)0x0,(int *)0x0);
    if (a_01 != (PROXY_CERT_INFO_EXTENSION *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b83270 with catch @ 00b83148
                       catch(type#1 @ 00000000) { ... } // from try @ 00b832f4 with catch @ 00b83148
                       catch(type#1 @ 00000000) { ... } // from try @ 00b83304 with catch @ 00b83148
                        */
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
                    /* try { // try from 00b8319c to 00c8319f has its CatchHandler @ 00b832b0 */
      PROXY_CERT_INFO_EXTENSION_free(a_01);
      *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x400;
    }
                    /* try { // try from 00b831b4 to 00c831bb has its CatchHandler @ 00b832cc */
                    /* try { // try from 00b831bc to 00c831cb has its CatchHandler @ 00b832bc */
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
                    /* try { // try from 00b831f4 to 00c831ff has its CatchHandler @ 00b832d0 */
        }
      }
                    /* try { // try from 00b83200 to 00c8321f has its CatchHandler @ 00b832b8 */
      *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 2;
      ASN1_BIT_STRING_free(pAVar9);
    }
    *(undefined4 *)&param_1[1].signature = 0;
    pvVar10 = X509_get_ext_d2i(param_1,0x7e,(int *)0x0,(int *)0x0);
    if (pvVar10 != (void *)0x0) {
      *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 4;
                    /* try { // try from 00b8323c to 00c8324f has its CatchHandler @ 00b832d0 */
      local_38 = 0;
      iVar4 = OPENSSL_sk_num(pvVar10);
      iVar3 = local_38;
      if (0 < iVar4) {
        iVar3 = 0;
        do {
          pAVar11 = (ASN1_OBJECT *)OPENSSL_sk_value(pvVar10,iVar3);
          iVar4 = OBJ_obj2nid(pAVar11);
                    /* try { // try from 00b8326c to 00c8326f has its CatchHandler @ 00b832ac */
                    /* try { // try from 00b83270 to 00c832ef has its CatchHandler @ 00b83148 */
          uVar15 = 1;
          switch(iVar4) {
          case 0x81:
            break;
          case 0x82:
            uVar15 = 2;
            break;
          case 0x83:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8326c with catch @ 00b832ac
                        */
            uVar15 = 8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8319c with catch @ 00b832b0
                        */
            break;
          case 0x84:
            uVar15 = 4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b83200 with catch @ 00b832b8
                        */
            break;
          case 0x85:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b831bc with catch @ 00b832bc
                        */
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
            goto switchD_00b83280_caseD_86;
          case 0x89:
          case 0x8b:
            uVar15 = 0x10;
            break;
          case 0xb4:
            uVar15 = 0x20;
            break;
          default:
            if (iVar4 == 0x129) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b831b4 with catch @ 00b832cc
                        */
              uVar15 = 0x80;
            }
            else {
              if (iVar4 != 0x38e) goto switchD_00b83280_caseD_86;
              uVar15 = 0x100;
            }
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b831f4 with catch @ 00b832d0
                       catch(type#1 @ 00000000) { ... } // from try @ 00b8323c with catch @ 00b832d0
                        */
          *(uint *)&param_1[1].signature = *(uint *)&param_1[1].signature | uVar15;
switchD_00b83280_caseD_86:
          iVar3 = iVar3 + 1;
          iVar4 = OPENSSL_sk_num(pvVar10);
        } while (iVar3 < iVar4);
      }
                    /* try { // try from 00b832f4 to 00c832ff has its CatchHandler @ 00b83148 */
      local_38 = iVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b832f0 with catch @ 00b832fc
                        */
                    /* try { // try from 00b83300 to 00c83303 has its CatchHandler @ 00b8330c */
      OPENSSL_sk_pop_free(pvVar10,ASN1_OBJECT_free);
    }
                    /* try { // try from 00b83304 to 00c8330f has its CatchHandler @ 00b83148 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b83300 with catch @ 00b8330c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b83360 with catch @ 00b83310
                        */
    pAVar9 = X509_get_ext_d2i(param_1,0x47,(int *)0x0,(int *)0x0);
    if (pAVar9 != (ASN1_STRING *)0x0) {
      if (pAVar9->length < 1) {
        uVar15 = 0;
      }
      else {
        uVar15 = (uint)*pAVar9->data;
      }
                    /* try { // try from 00b83338 to 00c8335f has its CatchHandler @ 00b834e8 */
      uVar1 = *(uint *)&param_1[1].sig_alg;
      *(uint *)((long)&param_1[1].signature + 4) = uVar15;
      *(uint *)&param_1[1].sig_alg = uVar1 | 8;
      ASN1_BIT_STRING_free(pAVar9);
    }
    pvVar10 = X509_get_ext_d2i(param_1,0x52,(int *)0x0,(int *)0x0);
                    /* try { // try from 00b83360 to 00c83483 has its CatchHandler @ 00b83310 */
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
                    /* try { // try from 00b83484 to 00c8348b has its CatchHandler @ 00b834e8 */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b83338 with catch @ 00b834e8
                       catch(type#1 @ 00000000) { ... } // from try @ 00b83484 with catch @ 00b834e8
                        */
              piVar16 = (int *)OPENSSL_sk_value(puVar14[2],iVar4);
              if (*piVar16 == 4) {
                pXVar13 = *(X509_NAME **)(piVar16 + 2);
                if (pXVar13 != (X509_NAME *)0x0) goto LAB_00b83524;
                break;
              }
              iVar4 = iVar4 + 1;
              iVar5 = OPENSSL_sk_num(puVar14[2]);
            } while (iVar4 < iVar5);
          }
          pXVar13 = X509_get_issuer_name(param_1);
LAB_00b83524:
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
             (pvVar10 = OBJ_bsearch_(&local_34,&DAT_013f1038,0xd,4,(cmp *)&DAT_00b84604),
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

