
undefined8
FUN_00aede14(long param_1,long *param_2,undefined8 param_3,uint *param_4,undefined8 param_5,
            undefined8 param_6)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  int line;
  char local_50 [4];
  char local_4c [4];
  char *local_48;
  char *local_38;
  
  if (param_1 == 0) {
    return 0;
  }
  local_48 = (char *)*param_2;
  if ((*param_4 >> 4 & 1) == 0) {
    uVar3 = FUN_00aee954(param_1,param_2,param_3,param_4,param_5,param_6);
    return uVar3;
  }
  uVar3 = FUN_00aee720(&local_38,0,0,local_4c,local_50,&local_48,param_3,param_4[2],*param_4 & 0xc0,
                       (char)param_5,param_6);
  pcVar1 = local_48;
  if ((int)uVar3 == -1) {
    return uVar3;
  }
  if ((int)uVar3 == 0) {
    iVar2 = 0x3a;
    line = 0x1c0;
  }
  else if (local_50[0] == '\0') {
    iVar2 = 0x78;
    line = 0x1c6;
  }
  else {
    iVar2 = FUN_00aee954(param_1,&local_48,local_38,param_4,0,param_6);
    if (iVar2 == 0) {
      iVar2 = 0x3a;
      line = 0x1cc;
    }
    else {
      local_38 = pcVar1 + ((long)local_38 - (long)local_48);
      if (local_4c[0] == '\0') {
        if (local_38 == (char *)0x0) goto LAB_00aedfc4;
        iVar2 = 0x77;
        line = 0x1dd;
      }
      else {
        if (((1 < (long)local_38) && (*local_48 == '\0')) && (local_48[1] == '\0')) {
          local_48 = local_48 + 2;
LAB_00aedfc4:
          *param_2 = (long)local_48;
          return 1;
        }
        iVar2 = 0x89;
        line = 0x1d4;
      }
    }
  }
  ERR_put_error(0xd,0x84,iVar2,"crypto/asn1/tasn_dec.c",line);
  return 0;
}

