
/* v8::internal::Log::CreateOutputHandle(char const*) */

code * v8::internal::Log::CreateOutputHandle(char *param_1)

{
  int iVar1;
  code *pcVar2;
  
  if ((((((((((((FLAG_log_api == '\0' && FLAG_log == '\0') && FLAG_log_code == '\0') &&
              FLAG_log_handles == '\0') && FLAG_log_suspect == '\0') && FLAG_ll_prof == '\0') &&
           FLAG_perf_basic_prof == '\0') && FLAG_perf_prof == '\0') && FLAG_log_source_code == '\0')
        && FLAG_log_internal_timer_events == '\0') && FLAG_prof_cpp == '\0') &&
      FLAG_trace_ic == '\0') && FLAG_log_function_events == '\0') {
    pcVar2 = (code *)0x0;
  }
  else {
    iVar1 = strcmp(param_1,"-");
    if (iVar1 != 0) {
      iVar1 = strcmp(param_1,"&");
      if (iVar1 != 0) {
        pcVar2 = (code *)base::OS::FOpen(param_1,"w");
        return pcVar2;
      }
      pcVar2 = (code *)base::OS::OpenTemporaryFile();
      return pcVar2;
    }
    pcVar2 = waitpid;
  }
  return pcVar2;
}

