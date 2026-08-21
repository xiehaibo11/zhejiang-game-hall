
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00b81fb0(BIO *param_1,undefined8 *******param_2,uint param_3,uint *param_4,byte *param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 ******ppppppuVar8;
  undefined8 local_60;
  undefined8 *******local_58;
  
  uVar2 = *param_4;
  uVar7 = (uint)*(undefined8 *)param_5;
  if ((uVar7 >> 7 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_4 + 8) + 0x30);
  }
  if ((uVar7 >> 6 & 1) == 0) {
    lVar5 = *(long *)(param_4 + 6);
  }
  else {
    lVar5 = 0;
  }
  if ((uVar2 >> 0xc & 1) != 0) {
    local_58 = param_2;
    param_2 = &local_58;
  }
  if ((uVar2 & 6) == 0) {
    uVar6 = FUN_00b817d4(param_1,param_2,param_3,*(undefined8 *)(param_4 + 8),lVar5,uVar6,0,param_5)
    ;
    return uVar6;
  }
  if (lVar5 != 0) {
    if ((uVar7 >> 2 & 1) == 0) {
      iVar3 = BIO_printf(param_1,"%*s%s:\n",(ulong)param_3,&DAT_0189703a);
    }
    else {
      pcVar1 = "SEQUENCE";
      if ((uVar2 & 2) != 0) {
        pcVar1 = "SET";
      }
      iVar3 = BIO_printf(param_1,"%*s%s OF %s {\n",(ulong)param_3,&DAT_0189703a,pcVar1,
                         *(undefined8 *)(param_4 + 6));
    }
    if (iVar3 < 1) {
      return 0;
    }
  }
  ppppppuVar8 = *param_2;
  iVar3 = OPENSSL_sk_num(ppppppuVar8);
  if (iVar3 < 1) {
    iVar3 = BIO_printf(param_1,"%*s<EMPTY>\n",(ulong)(param_3 + 2),&DAT_0189703a);
    if (iVar3 < 1) {
      return 0;
    }
  }
  else {
    iVar3 = 0;
    do {
      if ((0 < iVar3) && (iVar4 = BIO_puts(param_1,"\n"), iVar4 < 1)) {
        return 0;
      }
      local_60 = OPENSSL_sk_value(ppppppuVar8,iVar3);
      uVar6 = FUN_00b817d4(param_1,&local_60,param_3 + 2,*(undefined8 *)(param_4 + 8),0,0,1,param_5)
      ;
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      iVar3 = iVar3 + 1;
      iVar4 = OPENSSL_sk_num(ppppppuVar8);
    } while (iVar3 < iVar4);
  }
  if (((*param_5 >> 1 & 1) != 0) &&
     (iVar3 = BIO_printf(param_1,"%*s}\n",(ulong)param_3,&DAT_0189703a), iVar3 < 1)) {
    return 0;
  }
  return 1;
}

