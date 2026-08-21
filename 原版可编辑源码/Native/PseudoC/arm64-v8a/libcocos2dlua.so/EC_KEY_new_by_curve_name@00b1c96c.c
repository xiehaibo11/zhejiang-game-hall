
EC_KEY * EC_KEY_new_by_curve_name(int nid)

{
  int iVar1;
  EC_KEY *key;
  EC_GROUP *pEVar2;
  
  key = (EC_KEY *)EC_KEY_new_method(0);
  if (key != (EC_KEY *)0x0) {
    pEVar2 = EC_GROUP_new_by_curve_name(nid);
    *(EC_GROUP **)(key + 0x18) = pEVar2;
    if ((pEVar2 == (EC_GROUP *)0x0) ||
       ((*(code **)(*(long *)key + 0x28) != (code *)0x0 &&
        (iVar1 = (**(code **)(*(long *)key + 0x28))(key,pEVar2), iVar1 == 0)))) {
      EC_KEY_free(key);
      key = (EC_KEY *)0x0;
    }
  }
  return key;
}

