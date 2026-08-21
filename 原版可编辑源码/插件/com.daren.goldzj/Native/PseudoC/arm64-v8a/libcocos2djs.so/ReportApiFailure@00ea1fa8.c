
/* v8::Utils::ReportApiFailure(char const*, char const*) */

void v8::Utils::ReportApiFailure(char *param_1,char *param_2)

{
  long lVar1;
  
  lVar1 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar1 + 0xb738))(param_1,param_2);
      *(undefined1 *)(lVar1 + 0xb6b9) = 1;
      return;
    }
  }
  base::OS::PrintError("\n#\n# Fatal error in %s\n# %s\n#\n\n",param_1,param_2);
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

