
void OCSP_set_max_response_length(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x19000;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  *(long *)(param_1 + 0x30) = lVar1;
  return;
}

