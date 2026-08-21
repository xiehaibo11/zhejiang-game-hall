
bool FUN_00a156a4(void)

{
  int iVar1;
  
  if (DAT_01d1b768 == -1) {
    iVar1 = socket(10,2,0);
    if (iVar1 == -1) {
      DAT_01d1b768 = 0;
    }
    else {
      DAT_01d1b768 = 1;
      FUN_00a104c4(0,iVar1);
    }
  }
  return 0 < DAT_01d1b768;
}

