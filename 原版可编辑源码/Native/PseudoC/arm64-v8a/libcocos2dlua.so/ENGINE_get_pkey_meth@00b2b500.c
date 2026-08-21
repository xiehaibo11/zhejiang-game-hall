
EVP_PKEY_METHOD * ENGINE_get_pkey_meth(ENGINE *e,int nid)

{
  int iVar1;
  EVP_PKEY_METHOD *local_18;
  
  if ((*(code **)(e + 0x48) == (code *)0x0) ||
     (iVar1 = (**(code **)(e + 0x48))(e,&local_18,0,nid), iVar1 == 0)) {
    ERR_put_error(0x26,0xc0,0x65,"crypto/engine/tb_pkmeth.c",0x4c);
    local_18 = (EVP_PKEY_METHOD *)0x0;
  }
  return local_18;
}

