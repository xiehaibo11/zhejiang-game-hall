
undefined8 policy_cache_find_data(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  local_38 = param_2;
  iVar1 = OPENSSL_sk_find(*(undefined8 *)(param_1 + 8),auStack_40);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),iVar1);
  }
  return uVar2;
}

