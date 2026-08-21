
ulong EVP_PKEY_get1_tls_encodedpoint(long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  pcVar2 = *(code **)(*(long *)(param_1 + 0x10) + 0xb0);
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1,10,0,param_2);
    return (long)iVar1 & ((long)iVar1 >> 0x3f ^ 0xffffffffffffffffU);
  }
  return 0;
}

