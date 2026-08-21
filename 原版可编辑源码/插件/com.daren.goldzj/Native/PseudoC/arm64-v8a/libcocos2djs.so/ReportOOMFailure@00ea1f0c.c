
/* v8::Utils::ReportOOMFailure(v8::internal::Isolate*, char const*, bool) */

void v8::Utils::ReportOOMFailure(Isolate *param_1,char *param_2,bool param_3)

{
  char *pcVar1;
  
  if (*(code **)(param_1 + 0xb740) == (code *)0x0) {
    if (*(code **)(param_1 + 0xb738) == (code *)0x0) {
      pcVar1 = "javascript";
      if (!param_3) {
        pcVar1 = "process";
      }
      base::OS::PrintError("\n#\n# Fatal %s OOM in %s\n#\n\n",pcVar1,param_2);
                    /* WARNING: Subroutine does not return */
      base::OS::Abort();
    }
    pcVar1 = "Allocation failed - JavaScript heap out of memory";
    if (!param_3) {
      pcVar1 = "Allocation failed - process out of memory";
    }
    (**(code **)(param_1 + 0xb738))(param_2,pcVar1);
  }
  else {
    (**(code **)(param_1 + 0xb740))(param_2,param_3);
  }
  param_1[0xb6b9] = (Isolate)0x1;
  return;
}

