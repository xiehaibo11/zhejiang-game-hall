
int RAND_set_rand_method(RAND_METHOD *meth)

{
  ENGINE_finish(DAT_01784a40);
  DAT_01784a40 = (ENGINE *)0x0;
  DAT_01784a48 = meth;
  return 1;
}

