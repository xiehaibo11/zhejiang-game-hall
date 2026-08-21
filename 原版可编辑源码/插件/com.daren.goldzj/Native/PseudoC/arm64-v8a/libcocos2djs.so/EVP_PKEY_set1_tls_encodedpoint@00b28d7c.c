
bool EVP_PKEY_set1_tls_encodedpoint(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  code *pcVar2;
  
  if (param_3 >> 0x1f != 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x10) + 0xb0);
    if (pcVar2 != (code *)0x0) {
      iVar1 = (*pcVar2)(param_1,9,(long)(int)param_3,param_2);
      return 0 < iVar1;
    }
    return false;
  }
  return false;
}

