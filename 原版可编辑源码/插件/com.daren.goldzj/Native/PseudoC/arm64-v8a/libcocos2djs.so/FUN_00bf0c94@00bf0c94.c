
void FUN_00bf0c94(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bf0adc();
  if ((iVar1 == 0) && (iVar1 = uv__pthread_sigmask(2,param_1,0), iVar1 == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

