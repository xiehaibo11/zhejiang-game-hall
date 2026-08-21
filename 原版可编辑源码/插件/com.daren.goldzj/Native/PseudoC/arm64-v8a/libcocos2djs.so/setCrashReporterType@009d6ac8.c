
/* CrashReport::setCrashReporterType(int) */

void CrashReport::setCrashReporterType(int param_1)

{
  crashReporterType = param_1;
  __android_log_print(3,"CrashReport","Set the crash reporter type: %d");
  return;
}

