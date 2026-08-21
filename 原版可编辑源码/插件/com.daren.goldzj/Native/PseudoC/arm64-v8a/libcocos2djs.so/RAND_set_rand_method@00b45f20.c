
int RAND_set_rand_method(RAND_METHOD *meth)

{
  ENGINE_finish(DAT_01d3acc0);
  DAT_01d3acc0 = (ENGINE *)0x0;
  DAT_01d3acc8 = meth;
  return 1;
}

