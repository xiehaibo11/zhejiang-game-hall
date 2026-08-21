
undefined8
FUN_00afeba0(long *param_1,int *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
            long *param_6,long param_7,int param_8,int param_9,char param_10,char *param_11)

{
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  uchar *local_78;
  uchar *local_70;
  int local_68;
  int local_64;
  
  puVar3 = (uchar *)*param_6;
  local_78 = puVar3;
  if (param_11 == (char *)0x0) {
    uVar1 = ASN1_get_object(&local_78,(long *)&local_70,&local_64,&local_68,param_7);
  }
  else if (*param_11 == '\0') {
    uVar1 = ASN1_get_object(&local_78,(long *)&local_70,&local_64,&local_68,param_7);
    *(uint *)(param_11 + 4) = uVar1;
    *(uchar **)(param_11 + 8) = local_70;
    *(int *)(param_11 + 0x14) = local_68;
    *(int *)(param_11 + 0x10) = local_64;
    *param_11 = '\x01';
    iVar2 = (int)local_78 - (int)puVar3;
    *(int *)(param_11 + 0x18) = iVar2;
    if (((uVar1 & 0x81) == 0) && (param_7 < (long)(local_70 + iVar2))) {
      ERR_put_error(0xd,0x68,0x9b,"crypto/asn1/tasn_dec.c",0x444);
      goto LAB_00afed6c;
    }
  }
  else {
    local_70 = *(uchar **)(param_11 + 8);
    uVar1 = *(uint *)(param_11 + 4);
    local_68 = *(int *)(param_11 + 0x14);
    local_64 = *(int *)(param_11 + 0x10);
    local_78 = puVar3 + *(int *)(param_11 + 0x18);
  }
  if ((uVar1 >> 7 & 1) == 0) {
    if (-1 < param_8) {
      if ((local_64 != param_8) || (local_68 != param_9)) {
        if (param_10 == '\0') {
          if (param_11 != (char *)0x0) {
            *param_11 = '\0';
          }
          ERR_put_error(0xd,0x68,0xa8,"crypto/asn1/tasn_dec.c",0x458);
          return 0;
        }
        return 0xffffffff;
      }
      if (param_11 != (char *)0x0) {
        *param_11 = '\0';
      }
    }
    if ((uVar1 & 1) != 0) {
      local_70 = puVar3 + (param_7 - (long)local_78);
    }
    if (param_4 != (byte *)0x0) {
      *param_4 = (byte)uVar1 & 1;
    }
    if (param_5 != (byte *)0x0) {
      *param_5 = (byte)uVar1 & 0x20;
    }
    if (param_1 != (long *)0x0) {
      *param_1 = (long)local_70;
    }
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = (char)local_68;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = local_64;
    }
    *param_6 = (long)local_78;
    return 1;
  }
  ERR_put_error(0xd,0x68,0x66,"crypto/asn1/tasn_dec.c",0x44c);
  if (param_11 == (char *)0x0) {
    return 0;
  }
LAB_00afed6c:
  *param_11 = '\0';
  return 0;
}

