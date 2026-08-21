
int FUN_00ac6c8c(BIO *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  
                    /* try { // try from 00ac6c98 to 00bc6d27 has its CatchHandler @ 00ac6ba4 */
  sVar2 = strlen(param_2);
  iVar1 = BIO_write(param_1,param_2,(int)sVar2);
  return iVar1;
}

