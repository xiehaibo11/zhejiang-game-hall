
/* WARNING: Removing unreachable block (ram,0x00afefb4) */
/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00afedd4(long *******param_1,long *param_2,char *param_3,ulong *param_4,undefined4 param_5,
            undefined8 param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *******ppppppplVar6;
  long ******pppppplVar7;
  ASN1_VALUE *local_68;
  char local_5c [4];
  char *local_58;
  long *******local_50;
  char *local_48;
  
  if (param_1 == (long *******)0x0) {
    return 0;
  }
  local_58 = (char *)*param_2;
  uVar5 = (uint)*param_4;
  uVar4 = uVar5 & 0xc0;
  ppppppplVar6 = param_1;
  if ((uVar5 >> 0xc & 1) != 0) {
    ppppppplVar6 = (long *******)&local_50;
    local_50 = param_1;
  }
  local_48 = param_3;
  if ((*param_4 & 6) == 0) {
    if ((uVar5 >> 3 & 1) == 0) {
      iVar2 = FUN_00afda44(ppppppplVar6,&local_58,param_3,param_4[4],0xffffffff,0,param_5,param_6);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      if (iVar2 != 0) goto LAB_00aff110;
      iVar2 = 0x3a;
      iVar3 = 0x261;
    }
    else {
      iVar2 = FUN_00afda44(ppppppplVar6,&local_58,param_3,param_4[4],(int)param_4[1],uVar4,param_5,
                           param_6);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      if (iVar2 != 0) {
LAB_00aff110:
        *param_2 = (long)local_58;
        return 1;
      }
      iVar2 = 0x3a;
      iVar3 = 600;
    }
  }
  else {
    if ((uVar5 >> 3 & 1) == 0) {
      uVar4 = 0;
      uVar5 = uVar5 >> 1 & 1 | 0x10;
    }
    else {
      uVar5 = (uint)param_4[1];
    }
    iVar2 = FUN_00afeba0(&local_48,0,0,local_5c,0,&local_58,param_3,uVar5,uVar4,(char)param_5,
                         param_6);
    if (iVar2 == -1) {
      return 0xffffffff;
    }
    if (iVar2 == 0) {
      iVar2 = 0x3a;
      iVar3 = 0x218;
    }
    else {
      pppppplVar7 = *ppppppplVar6;
      if (pppppplVar7 == (long ******)0x0) {
        pppppplVar7 = (long ******)OPENSSL_sk_new_null();
        *ppppppplVar6 = pppppplVar7;
      }
      else {
        iVar2 = OPENSSL_sk_num(pppppplVar7);
        while (0 < iVar2) {
          local_68 = (ASN1_VALUE *)OPENSSL_sk_pop(pppppplVar7);
          ASN1_item_ex_free(&local_68,(ASN1_ITEM *)param_4[4]);
          iVar2 = OPENSSL_sk_num(pppppplVar7);
        }
        pppppplVar7 = *ppppppplVar6;
      }
      if (pppppplVar7 != (long ******)0x0) {
        do {
          pcVar1 = local_58;
          if ((long)local_48 < 1) goto LAB_00aff0d8;
          if (((local_48 != (char *)0x1) && (*local_58 == '\0')) && (local_58[1] == '\0')) {
            local_58 = local_58 + 2;
            if (local_5c[0] != '\0') {
              local_48 = local_48 + -2;
              local_5c[0] = '\0';
              iVar2 = 6;
              goto LAB_00aff0d0;
            }
            ERR_put_error(0xd,0x83,0x9f,"crypto/asn1/tasn_dec.c",0x237);
            goto LAB_00afeff0;
          }
          local_68 = (ASN1_VALUE *)0x0;
          iVar2 = FUN_00afda44(&local_68,&local_58,local_48,param_4[4],0xffffffff,0,0,param_6);
          if (iVar2 == 0) {
            iVar2 = 0x3a;
            iVar3 = 0x242;
            goto LAB_00afefdc;
          }
          local_48 = pcVar1 + ((long)local_48 - (long)local_58);
          iVar2 = OPENSSL_sk_push(*ppppppplVar6,local_68);
        } while (iVar2 != 0);
        iVar2 = 0x41;
        iVar3 = 0x249;
LAB_00afefdc:
        ERR_put_error(0xd,0x83,iVar2,"crypto/asn1/tasn_dec.c",iVar3);
        ASN1_item_free(local_68,(ASN1_ITEM *)param_4[4]);
LAB_00afeff0:
        iVar2 = 4;
LAB_00aff0d0:
        if (iVar2 == 6) {
LAB_00aff0d8:
          if (local_5c[0] != '\0') {
            iVar2 = 0x89;
            iVar3 = 0x24f;
            goto LAB_00aff0f8;
          }
        }
        else if (iVar2 != 0) {
          return 0;
        }
        goto LAB_00aff110;
      }
      iVar2 = 0x41;
      iVar3 = 0x22b;
    }
  }
LAB_00aff0f8:
  ERR_put_error(0xd,0x83,iVar2,"crypto/asn1/tasn_dec.c",iVar3);
  return 0;
}

