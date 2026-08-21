
int OBJ_create(char *oid,char *sn,char *ln)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ASN1_OBJECT *o;
  undefined **ppuVar6;
  int iVar7;
  uint *puVar8;
  undefined4 local_98 [2];
  char **local_90;
  char *local_88;
  char *local_80;
  
  local_88 = sn;
  if (DAT_01d3aca8 == 0) {
LAB_00b3a010:
    pcVar2 = local_88;
    iVar4 = 0;
    iVar3 = 0;
    puVar8 = (uint *)0x0;
    iVar1 = 0x41c;
    do {
      iVar7 = iVar1;
      if (iVar7 <= iVar4) {
        if (iVar3 != 0) goto LAB_00b3a0b4;
        break;
      }
      iVar1 = iVar7 + iVar4;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar8 = (uint *)(&DAT_018b3ac4 + (long)iVar1 * 4);
      iVar3 = strcmp(pcVar2,(&PTR_s_UNDEF_01c78ce8)[(ulong)*puVar8 * 5]);
    } while ((iVar3 < 0) || (iVar4 = iVar1 + 1, iVar1 = iVar7, iVar3 != 0));
    if (puVar8 != (uint *)0x0) {
      ppuVar6 = &PTR_s_UNDEF_01c78ce8 + (ulong)*puVar8 * 5;
      goto LAB_00b3a09c;
    }
LAB_00b3a0b4:
    local_80 = ln;
    if (DAT_01d3aca8 == 0) {
LAB_00b3a0ec:
      pcVar2 = local_80;
      iVar4 = 0;
      iVar3 = 0;
      puVar8 = (uint *)0x0;
      iVar1 = 0x41c;
      do {
        iVar7 = iVar1;
        if (iVar7 <= iVar4) {
          if (iVar3 != 0) goto LAB_00b3a19c;
          break;
        }
        iVar1 = iVar7 + iVar4;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar8 = (uint *)(&DAT_018b2a54 + (long)iVar1 * 4);
        iVar3 = strcmp(pcVar2,(&PTR_s_undefined_019b2fcb_0x53_01c78cf0)[(ulong)*puVar8 * 5]);
      } while ((iVar3 < 0) || (iVar4 = iVar1 + 1, iVar1 = iVar7, iVar3 != 0));
      if (puVar8 != (uint *)0x0) {
        ppuVar6 = &PTR_s_UNDEF_01c78ce8 + (ulong)*puVar8 * 5;
        goto LAB_00b3a16c;
      }
    }
    else {
      local_90 = &local_88;
      local_98[0] = 2;
      lVar5 = OPENSSL_LH_retrieve(DAT_01d3aca8,local_98);
      if (lVar5 == 0) goto LAB_00b3a0ec;
      ppuVar6 = *(undefined ***)(lVar5 + 8);
LAB_00b3a16c:
      if (*(int *)(ppuVar6 + 2) != 0) goto LAB_00b3a178;
    }
LAB_00b3a19c:
    o = OBJ_txt2obj(oid,1);
    iVar4 = OBJ_obj2nid(o);
    if (iVar4 == 0) {
      iVar4 = DAT_01d2083c + 1;
      o->nid = DAT_01d2083c;
      DAT_01d2083c = iVar4;
      o->sn = sn;
      o->ln = (char **)ln;
      iVar4 = OBJ_add_object(o);
      o->sn = (char *)0x0;
      o->ln = (char **)0x0;
    }
    else {
      ERR_put_error(8,100,0x66,"crypto/objects/obj_dat.c",0x2ba);
      iVar4 = 0;
    }
    ASN1_OBJECT_free(o);
  }
  else {
    local_90 = &local_88;
    local_98[0] = 1;
    lVar5 = OPENSSL_LH_retrieve(DAT_01d3aca8,local_98);
    if (lVar5 == 0) goto LAB_00b3a010;
    ppuVar6 = *(undefined ***)(lVar5 + 8);
LAB_00b3a09c:
    if (*(int *)(ppuVar6 + 2) == 0) goto LAB_00b3a0b4;
LAB_00b3a178:
    ERR_put_error(8,100,0x66,"crypto/objects/obj_dat.c",0x2b1);
    iVar4 = 0;
  }
  return iVar4;
}

