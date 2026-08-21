
void tls1_clear(int *param_1)

{
  int iVar1;
  
  ssl3_clear();
  iVar1 = 0x303;
  if (**(int **)(param_1 + 2) != 0x10000) {
    iVar1 = **(int **)(param_1 + 2);
  }
  *param_1 = iVar1;
                    /* try { // try from 00aea0b8 to 00bea0cb has its CatchHandler @ 00aea0dc */
  return;
}

