
EC_GROUP *
EC_GROUP_new_curve_GF2m(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  EC_METHOD *meth;
  EC_GROUP *group;
  
  meth = (EC_METHOD *)EC_GF2m_simple_method();
  group = EC_GROUP_new(meth);
  if ((group != (EC_GROUP *)0x0) &&
     (iVar1 = EC_GROUP_set_curve_GF2m(group,param_1,param_2,param_3,param_4), iVar1 == 0)) {
    EC_GROUP_clear_free(group);
    group = (EC_GROUP *)0x0;
  }
  return group;
}

