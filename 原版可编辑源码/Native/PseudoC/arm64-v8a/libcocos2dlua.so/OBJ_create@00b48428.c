
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
  if (DAT_01784a28 == 0) {
LAB_00b48490:
    pcVar2 = local_88;
    iVar4 = 0;
    iVar3 = 0;
    puVar8 = (uint *)0x0;
    iVar1 = 0x41c;
    do {
      iVar7 = iVar1;
      if (iVar7 <= iVar4) {
        if (iVar3 != 0) goto LAB_00b48534;
        break;
      }
      iVar1 = iVar7 + iVar4;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar8 = (uint *)(&DAT_013e4094 + (long)iVar1 * 4);
      iVar3 = strcmp(pcVar2,(&PTR_s_UNDEF_016b3c38)[(ulong)*puVar8 * 5]);
    } while ((iVar3 < 0) || (iVar4 = iVar1 + 1, iVar1 = iVar7, iVar3 != 0));
    if (puVar8 != (uint *)0x0) {
      ppuVar6 = &PTR_s_UNDEF_016b3c38 + (ulong)*puVar8 * 5;
      goto LAB_00b4851c;
    }
LAB_00b48534:
    local_80 = ln;
    if (DAT_01784a28 == 0) {
LAB_00b4856c:
      pcVar2 = local_80;
      iVar4 = 0;
      iVar3 = 0;
      puVar8 = (uint *)0x0;
      iVar1 = 0x41c;
      do {
        iVar7 = iVar1;
        if (iVar7 <= iVar4) {
          if (iVar3 != 0) goto LAB_00b4861c;
          break;
        }
        iVar1 = iVar7 + iVar4;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar8 = (uint *)(&DAT_013e3024 + (long)iVar1 * 4);
        iVar3 = strcmp(pcVar2,(&PTR_s_undefined_016b3c40)[(ulong)*puVar8 * 5]);
      } while ((iVar3 < 0) || (iVar4 = iVar1 + 1, iVar1 = iVar7, iVar3 != 0));
      if (puVar8 != (uint *)0x0) {
        ppuVar6 = &PTR_s_UNDEF_016b3c38 + (ulong)*puVar8 * 5;
        goto LAB_00b485ec;
      }
    }
    else {
      local_90 = &local_88;
      local_98[0] = 2;
      lVar5 = OPENSSL_LH_retrieve(DAT_01784a28,local_98);
      if (lVar5 == 0) goto LAB_00b4856c;
      ppuVar6 = *(undefined ***)(lVar5 + 8);
LAB_00b485ec:
      if (*(int *)(ppuVar6 + 2) != 0) goto LAB_00b485f8;
    }
LAB_00b4861c:
    o = OBJ_txt2obj(oid,1);
    iVar4 = OBJ_obj2nid(o);
    if (iVar4 == 0) {
      iVar4 = DAT_0176ea8c + 1;
      o->nid = DAT_0176ea8c;
      DAT_0176ea8c = iVar4;
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
    lVar5 = OPENSSL_LH_retrieve(DAT_01784a28,local_98);
    if (lVar5 == 0) goto LAB_00b48490;
    ppuVar6 = *(undefined ***)(lVar5 + 8);
LAB_00b4851c:
    if (*(int *)(ppuVar6 + 2) == 0) goto LAB_00b48534;
LAB_00b485f8:
    ERR_put_error(8,100,0x66,"crypto/objects/obj_dat.c",0x2b1);
    iVar4 = 0;
  }
  return iVar4;
}

