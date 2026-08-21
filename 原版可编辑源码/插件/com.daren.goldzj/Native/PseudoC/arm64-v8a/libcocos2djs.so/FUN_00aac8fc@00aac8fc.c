
int FUN_00aac8fc(long param_1,int param_2)

{
  int iVar1;
  
  if (*(SSL **)(param_1 + 0x2b0) != (SSL *)0x0) {
    iVar1 = SSL_get_error(*(SSL **)(param_1 + 0x2b0),param_2);
    return iVar1;
  }
  return 99;
}

