
void FUN_00bdc370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_md_data();
  BLAKE2b_Update(uVar1,param_2,param_3);
  return;
}

