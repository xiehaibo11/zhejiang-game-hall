
uint FUN_00af98e0(code *param_1,undefined8 param_2,X509_NAME *param_3,uint param_4,ulong param_5)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  X509_NAME_ENTRY *ne;
  ASN1_OBJECT *o;
  ASN1_STRING *pAVar13;
  char *__s;
  size_t sVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined *puVar20;
  undefined *puVar21;
  char acStack_b0 [80];
  
  uVar15 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
  if (0 < (int)param_4) {
    iVar18 = 0;
    do {
      iVar6 = (*param_1)(param_2," ",1);
      if (iVar6 == 0) {
        return 0xffffffff;
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < (int)uVar15);
  }
  iVar6 = 3;
  iVar18 = 1;
  puVar20 = &DAT_013d9044;
  puVar21 = &DAT_013c61e6;
  uVar17 = uVar15;
  switch((param_5 & 0xf0000) - 0x10000 >> 0x10) {
  case 0:
    uVar17 = 0;
    iVar18 = 1;
    puVar20 = &DAT_0145fc2f;
    puVar21 = &DAT_013ecf7a;
    iVar6 = 1;
    break;
  case 1:
    uVar17 = 0;
    iVar6 = 3;
    iVar18 = 2;
    puVar20 = &DAT_013d9044;
    puVar21 = &DAT_01458dec;
    break;
  case 2:
    uVar17 = 0;
    iVar6 = 3;
    iVar18 = 2;
    puVar20 = &DAT_013d9044;
    puVar21 = &DAT_013c3ea7;
    break;
  case 3:
    break;
  default:
    return 0xffffffff;
  }
  pcVar2 = "=";
  if ((param_5 & 0x800000) != 0) {
    pcVar2 = " = ";
  }
  iVar7 = X509_NAME_entry_count(param_3);
  if (0 < iVar7) {
    uVar16 = (uint)param_5;
    uVar1 = uVar16 & 0x600000;
    iVar19 = 0;
    iVar9 = -1;
    uVar4 = (uVar16 & 0x800000) >> 0x16 | 1;
    do {
      iVar8 = iVar19;
      if ((param_5 & 0x100000) != 0) {
        iVar8 = (iVar7 + -1) - iVar19;
      }
      ne = X509_NAME_get_entry(param_3,iVar8);
      if (iVar9 != -1) {
        iVar8 = X509_NAME_ENTRY_set(ne);
        if (iVar9 == iVar8) {
          iVar9 = (*param_1)(param_2,puVar20,iVar6);
          if (iVar9 == 0) {
            return 0xffffffff;
          }
          uVar15 = uVar15 + iVar6;
        }
        else {
          iVar9 = (*param_1)(param_2,puVar21,iVar18);
          if (iVar9 == 0) {
            return 0xffffffff;
          }
          if (uVar17 != 0) {
            iVar9 = 0;
            do {
              iVar8 = (*param_1)(param_2," ",1);
              if (iVar8 == 0) {
                return 0xffffffff;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)uVar17);
          }
          uVar15 = iVar18 + uVar17 + uVar15;
        }
      }
      iVar9 = X509_NAME_ENTRY_set(ne);
      o = X509_NAME_ENTRY_get_object(ne);
      pAVar13 = X509_NAME_ENTRY_get_data(ne);
      iVar8 = OBJ_obj2nid(o);
      if (uVar1 != 0x600000) {
        if ((uVar1 == 0x400000) || (iVar8 == 0)) {
          __s = acStack_b0;
          OBJ_obj2txt(acStack_b0,0x50,o,1);
          iVar12 = 0;
        }
        else if (uVar1 == 0x200000) {
          __s = OBJ_nid2ln(iVar8);
          iVar12 = 0x19;
        }
        else if ((param_5 & 0x600000) == 0) {
          __s = OBJ_nid2sn(iVar8);
          iVar12 = 10;
        }
        else {
          iVar12 = 0;
          __s = "";
        }
        sVar14 = strlen(__s);
        iVar10 = (*param_1)(param_2,__s,sVar14 & 0xffffffff);
        if (iVar10 == 0) {
          return 0xffffffff;
        }
        iVar10 = (int)sVar14;
        if (((uVar16 >> 0x19 & 1) != 0) && (iVar5 = iVar12 - iVar10, iVar5 != 0 && iVar10 <= iVar12)
           ) {
          if (0 < iVar5) {
            iVar12 = 0;
            do {
              iVar11 = (*param_1)(param_2," ",1);
              if (iVar11 == 0) {
                return 0xffffffff;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar5);
          }
          uVar15 = iVar5 + uVar15;
        }
        iVar12 = (*param_1)(param_2,pcVar2,uVar4);
        if (iVar12 == 0) {
          return 0xffffffff;
        }
        uVar15 = uVar4 + iVar10 + uVar15;
      }
      uVar3 = 0;
      if (iVar8 == 0 && (param_5 & 0x1000000) != 0) {
        uVar3 = 0x80;
      }
      iVar8 = FUN_00af9dd0(param_1,param_2,uVar3 | param_5,pAVar13);
      if (iVar8 < 0) {
        return 0xffffffff;
      }
      iVar19 = iVar19 + 1;
      uVar15 = iVar8 + uVar15;
    } while (iVar19 < iVar7);
  }
  return uVar15;
}

