
/* WARNING: Removing unreachable block (ram,0x00aeee14) */

undefined8 FUN_00aeecb8(BUF_MEM *param_1,long *param_2,uchar *param_3,ulong param_4,int param_5)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int line;
  uchar *local_80;
  uchar *local_78;
  uchar *local_70;
  int iStack_68;
  int iStack_64;
  
  local_80 = (uchar *)*param_2;
  if ((param_1 == (BUF_MEM *)0x0) && ((param_4 & 1) == 0)) {
    *param_2 = (long)(local_80 + (long)param_3);
    return 1;
  }
  if (0 < (long)param_3) {
    if (param_5 < 5) {
      do {
        puVar1 = local_80;
        if (((param_3 != (uchar *)0x1) && (*local_80 == '\0')) && (local_80[1] == '\0'))
        goto LAB_00aeefc4;
        local_78 = local_80;
        uVar4 = ASN1_get_object(&local_78,(long *)&local_70,&iStack_64,&iStack_68,(long)param_3);
        puVar2 = local_78;
        if ((uVar4 >> 7 & 1) != 0) {
          ERR_put_error(0xd,0x68,0x66,"crypto/asn1/tasn_dec.c",0x44c);
LAB_00aeef40:
          iVar7 = 0x6a;
          iVar5 = 0x3a;
          line = 999;
          goto LAB_00aeefec;
        }
                    /* try { // try from 00aeee60 to 00beee97 has its CatchHandler @ 00af05f8 */
        if ((uVar4 & 1) != 0) {
          local_70 = puVar1 + ((long)param_3 - (long)local_78);
        }
        puVar3 = local_70;
        local_80 = local_78;
                    /* try { // try from 00aeef38 to 00beef3f has its CatchHandler @ 00af04fc */
        if ((uVar4 & 0x20) == 0) {
          if (local_70 != (uchar *)0x0) {
            if (param_1 != (BUF_MEM *)0x0) {
              iVar7 = (int)param_1->length;
              iVar5 = BUF_MEM_grow_clean(param_1,(size_t)(local_70 + iVar7));
              if (iVar5 == 0) goto LAB_00aeefa8;
              memcpy(param_1->data + iVar7,puVar2,(size_t)puVar3);
            }
            local_80 = puVar2 + (long)puVar3;
          }
        }
        else {
          uVar6 = FUN_00aeecb8(param_1,&local_80,local_70,uVar4 & 1,param_5 + 1);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
        }
        param_3 = puVar1 + ((long)param_3 - (long)local_80);
      } while (0 < (long)param_3);
    }
    else {
      do {
        puVar1 = local_80;
        if (((param_3 != (uchar *)0x1) && (*local_80 == '\0')) && (local_80[1] == '\0'))
        goto LAB_00aeefc4;
        local_78 = local_80;
        uVar4 = ASN1_get_object(&local_78,(long *)&local_70,&iStack_64,&iStack_68,(long)param_3);
        puVar2 = local_78;
        if ((uVar4 >> 7 & 1) != 0) {
          ERR_put_error(0xd,0x68,0x66,"crypto/asn1/tasn_dec.c",0x44c);
          goto LAB_00aeef40;
        }
        if ((uVar4 & 1) != 0) {
          local_70 = puVar1 + ((long)param_3 - (long)local_78);
        }
        puVar3 = local_70;
        local_80 = local_78;
        if ((uVar4 & 0x20) != 0) {
          iVar7 = 0x6a;
          iVar5 = 0xc5;
          line = 0x3ee;
          goto LAB_00aeefec;
        }
        if (local_70 != (uchar *)0x0) {
          if (param_1 != (BUF_MEM *)0x0) {
            iVar7 = (int)param_1->length;
            iVar5 = BUF_MEM_grow_clean(param_1,(size_t)(local_70 + iVar7));
            if (iVar5 == 0) goto LAB_00aeefa8;
            memcpy(param_1->data + iVar7,puVar2,(size_t)puVar3);
          }
          local_80 = puVar2 + (long)puVar3;
        }
        param_3 = puVar1 + ((long)param_3 - (long)local_80);
                    /* try { // try from 00aeeddc to 00beedf3 has its CatchHandler @ 00af0568 */
      } while (0 < (long)param_3);
    }
  }
  if ((param_4 & 1) == 0) goto LAB_00aeef64;
  iVar7 = 0x6a;
  iVar5 = 0x89;
  line = 0x3f8;
LAB_00aeefec:
  ERR_put_error(0xd,iVar7,iVar5,"crypto/asn1/tasn_dec.c",line);
  return 0;
LAB_00aeefc4:
  local_80 = local_80 + 2;
  if ((param_4 & 1) != 0) {
LAB_00aeef64:
    *param_2 = (long)local_80;
    return 1;
  }
  iVar7 = 0x6a;
  iVar5 = 0x9f;
  line = 0x3de;
  goto LAB_00aeefec;
LAB_00aeefa8:
  iVar7 = 0x8c;
  iVar5 = 0x41;
  line = 0x405;
  goto LAB_00aeefec;
}

