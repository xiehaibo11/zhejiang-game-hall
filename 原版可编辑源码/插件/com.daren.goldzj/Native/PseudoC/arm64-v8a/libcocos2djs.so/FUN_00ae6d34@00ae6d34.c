
bool FUN_00ae6d34(long param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  EC_KEY *key;
  long lVar3;
  
  iVar2 = EC_curve_nist2nid(param_2);
                    /* try { // try from 00ae6d54 to 00be6d5b has its CatchHandler @ 00ae6db4 */
  if ((iVar2 != 0) || (iVar2 = OBJ_sn2nid(param_2), bVar1 = false, iVar2 != 0)) {
    key = EC_KEY_new_by_curve_name(iVar2);
    bVar1 = false;
    if (key != (EC_KEY *)0x0) {
      if (*(SSL_CTX **)(param_1 + 0x18) == (SSL_CTX *)0x0) {
        if (*(SSL **)(param_1 + 0x20) == (SSL *)0x0) {
          iVar2 = 1;
        }
        else {
          lVar3 = SSL_ctrl(*(SSL **)(param_1 + 0x20),4,0,key);
          iVar2 = (int)lVar3;
        }
      }
      else {
        lVar3 = SSL_CTX_ctrl(*(SSL_CTX **)(param_1 + 0x18),4,0,key);
        iVar2 = (int)lVar3;
      }
      EC_KEY_free(key);
      bVar1 = 0 < iVar2;
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae6d54 with catch @ 00ae6db4
                        */
  return bVar1;
}

