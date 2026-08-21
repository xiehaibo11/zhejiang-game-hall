
int EC_KEY_set_group(EC_KEY *key,EC_GROUP *group)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *pEVar3;
  
  if ((*(code **)(*(long *)key + 0x28) == (code *)0x0) ||
     (iVar1 = (**(code **)(*(long *)key + 0x28))(key,group), uVar2 = 0, iVar1 != 0)) {
    EC_GROUP_free(*(EC_GROUP **)(key + 0x18));
    pEVar3 = EC_GROUP_dup(group);
    *(EC_GROUP **)(key + 0x18) = pEVar3;
    uVar2 = (uint)(pEVar3 != (EC_GROUP *)0x0);
  }
  return uVar2;
}

