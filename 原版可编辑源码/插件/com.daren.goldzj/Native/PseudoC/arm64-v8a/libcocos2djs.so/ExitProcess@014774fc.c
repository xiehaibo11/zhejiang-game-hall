
/* v8::base::OS::ExitProcess(int) */

void v8::base::OS::ExitProcess(int param_1)

{
  fflush((FILE *)waitpid);
  fflush((FILE *)__cxa_thread_atexit_impl);
                    /* WARNING: Subroutine does not return */
  _exit(param_1);
}

