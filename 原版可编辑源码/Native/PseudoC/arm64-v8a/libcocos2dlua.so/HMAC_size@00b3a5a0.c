
long HMAC_size(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = EVP_MD_size((EVP_MD *)*param_1);
  return (long)iVar1;
}

