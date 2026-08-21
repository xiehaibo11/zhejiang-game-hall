
bool PKCS12_mac_present(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}

