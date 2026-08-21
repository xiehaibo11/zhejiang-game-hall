
__sighandler_t bsd_signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  if (bsd_signal_func == (code *)0x0) {
    bsd_signal_func = (code *)dlsym(0,"bsd_signal");
    if (bsd_signal_func == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      __android_log_assert(&DAT_013c996e,"bsd_signal_wrapper","bsd_signal symbol not found!");
    }
  }
                    /* WARNING: Could not recover jumptable at 0x007cc594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = (__sighandler_t)(*bsd_signal_func)(__sig,__handler);
  return p_Var1;
}

