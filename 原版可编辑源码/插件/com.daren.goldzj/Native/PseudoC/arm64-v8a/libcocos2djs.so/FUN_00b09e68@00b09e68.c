
undefined4 FUN_00b09e68(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  EC_GROUP *pEVar3;
  EC_KEY *key;
  
  pEVar3 = EC_KEY_get0_group(*(EC_KEY **)(param_2 + 0x20));
                    /* try { // try from 00b09e84 to 00c09f17 has its CatchHandler @ 00b09f94 */
  pEVar3 = EC_GROUP_dup(pEVar3);
  uVar2 = 0;
  if (pEVar3 != (EC_GROUP *)0x0) {
    key = *(EC_KEY **)(param_1 + 0x20);
    if (key == (EC_KEY *)0x0) {
      key = EC_KEY_new();
      *(EC_KEY **)(param_1 + 0x20) = key;
      if (key == (EC_KEY *)0x0) {
        return 0;
      }
    }
    iVar1 = EC_KEY_set_group(key,pEVar3);
    uVar2 = 0;
    if (iVar1 != 0) {
      EC_GROUP_free(pEVar3);
      uVar2 = 1;
    }
  }
  return uVar2;
}

