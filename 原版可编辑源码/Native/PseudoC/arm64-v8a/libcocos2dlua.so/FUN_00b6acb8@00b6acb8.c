
int FUN_00b6acb8(undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int *local_288;
  undefined1 auStack_280 [24];
  undefined8 auStack_268 [26];
  undefined1 auStack_198 [72];
  undefined8 local_150 [32];
  int local_50 [2];
  undefined1 *local_48;
  undefined8 local_38;
  
  if (param_2 == 2) {
    local_48 = auStack_280;
    puVar3 = auStack_268;
  }
  else {
    if (param_2 != 1) {
      return -1;
    }
    local_48 = auStack_198;
    puVar3 = local_150;
  }
  *puVar3 = param_3;
  local_50[0] = param_2;
  iVar1 = OPENSSL_sk_find(param_1,local_50);
  if ((param_4 != (int *)0x0) && (-1 < iVar1)) {
    local_288 = local_50;
    *param_4 = 1;
    iVar4 = iVar1;
    while( true ) {
      iVar4 = iVar4 + 1;
      iVar2 = OPENSSL_sk_num(param_1);
      if (iVar2 <= iVar4) break;
      local_38 = OPENSSL_sk_value(param_1,iVar4);
      iVar2 = FUN_00b6a290(&local_38,&local_288);
      if (iVar2 != 0) {
        return iVar1;
      }
      *param_4 = *param_4 + 1;
    }
  }
  return iVar1;
}

