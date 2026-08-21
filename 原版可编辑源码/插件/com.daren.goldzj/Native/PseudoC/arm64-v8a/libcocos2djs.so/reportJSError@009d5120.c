
/* BuglyJSAgent::reportJSError(char const*, char const*, char const*) */

void BuglyJSAgent::reportJSError(char *param_1,char *param_2,char *param_3)

{
  CrashReport::reportException(5,"JSError",param_2,param_3);
  return;
}

