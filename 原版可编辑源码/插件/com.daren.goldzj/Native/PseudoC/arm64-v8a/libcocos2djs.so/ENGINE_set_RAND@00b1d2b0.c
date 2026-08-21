
int ENGINE_set_RAND(ENGINE *e,RAND_METHOD *rand_meth)

{
  *(RAND_METHOD **)(e + 0x30) = rand_meth;
  return 1;
}

