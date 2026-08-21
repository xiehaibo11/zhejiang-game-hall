
long OBJ_length(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = (long)*(int *)(param_1 + 0x14);
  }
  return lVar1;
}

