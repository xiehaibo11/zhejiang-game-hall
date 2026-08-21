
int ENGINE_set_DSA(ENGINE *e,DSA_METHOD *dsa_meth)

{
  *(DSA_METHOD **)(e + 0x18) = dsa_meth;
  return 1;
}

