
undefined4 XXH32_digest(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = XXH32_intermediateDigest();
  free(param_1);
  return uVar1;
}

