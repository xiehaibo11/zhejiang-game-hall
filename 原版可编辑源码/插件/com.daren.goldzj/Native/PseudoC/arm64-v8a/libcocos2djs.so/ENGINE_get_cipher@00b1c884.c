
EVP_CIPHER * ENGINE_get_cipher(ENGINE *e,int nid)

{
  int iVar1;
  EVP_CIPHER *local_18;
  
  if ((*(code **)(e + 0x38) == (code *)0x0) ||
     (iVar1 = (**(code **)(e + 0x38))(e,&local_18,0,nid), iVar1 == 0)) {
    ERR_put_error(0x26,0xb9,0x92,"crypto/engine/tb_cipher.c",0x4a);
    local_18 = (EVP_CIPHER *)0x0;
  }
  return local_18;
}

