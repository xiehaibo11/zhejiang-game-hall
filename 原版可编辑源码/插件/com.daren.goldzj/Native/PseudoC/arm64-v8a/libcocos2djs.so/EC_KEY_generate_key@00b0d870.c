
int EC_KEY_generate_key(EC_KEY *key)

{
  int iVar1;
  int line;
  
  if ((key == (EC_KEY *)0x0) || (*(long *)(key + 0x18) == 0)) {
    iVar1 = 0x43;
    line = 0xb7;
  }
  else {
    if (*(code **)(*(long *)key + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b0d894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(*(long *)key + 0x40))();
      return iVar1;
    }
    iVar1 = 0x98;
    line = 0xbc;
  }
  ERR_put_error(0x10,0xb3,iVar1,"crypto/ec/ec_key.c",line);
  return 0;
}

