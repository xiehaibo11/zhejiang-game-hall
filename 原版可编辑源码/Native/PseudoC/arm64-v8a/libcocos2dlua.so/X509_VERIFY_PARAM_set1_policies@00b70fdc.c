
int X509_VERIFY_PARAM_set1_policies(X509_VERIFY_PARAM *param,stack_st_ASN1_OBJECT *policies)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00b70e18 with catch @ 00b70fdc */
  if (param != (X509_VERIFY_PARAM *)0x0) {
    iVar1 = FUN_00b717b4(param->policies,
                         &PTR_lua_cocos2dx_physics_PhysicsBody_isRotationEnabled_01768000);
    return iVar1;
  }
  return 0;
}

