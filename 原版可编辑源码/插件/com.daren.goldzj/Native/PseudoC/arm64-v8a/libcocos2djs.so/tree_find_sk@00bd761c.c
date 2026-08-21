
undefined8 tree_find_sk(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_58 [3];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  local_58[0] = auStack_40;
  local_38 = param_2;
  iVar1 = OPENSSL_sk_find(param_1,local_58);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = OPENSSL_sk_value(param_1,iVar1);
  }
  return uVar2;
}

