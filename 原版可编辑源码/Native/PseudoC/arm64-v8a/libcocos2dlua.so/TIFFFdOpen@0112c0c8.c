
void TIFFFdOpen(int param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = TIFFClientOpen(param_2,param_3,(long)param_1,read,write,lseek,close,FUN_0112c154,
                         FUN_0112c180,FUN_0112c200);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = param_1;
  }
  return;
}

