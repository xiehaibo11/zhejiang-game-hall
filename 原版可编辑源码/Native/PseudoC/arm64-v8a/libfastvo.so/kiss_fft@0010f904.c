
void kiss_fft(long param_1,long param_2,long param_3)

{
  if (param_2 != param_3) {
    FUN_0010e8b4(param_3,param_2,1,1,param_1 + 8);
    FUN_0010e978(param_3,1,1,param_1 + 8,param_1,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0010e87c("In-place FFT not supported",0x1fd);
}

