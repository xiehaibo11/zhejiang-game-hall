
int ENGINE_set_DH(ENGINE *e,DH_METHOD *dh_meth)

{
  *(DH_METHOD **)(e + 0x20) = dh_meth;
  return 1;
}

