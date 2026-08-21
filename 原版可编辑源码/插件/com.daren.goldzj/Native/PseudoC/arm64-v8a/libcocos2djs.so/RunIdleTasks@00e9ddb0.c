
/* v8::platform::RunIdleTasks(v8::Platform*, v8::Isolate*, double) */

void v8::platform::RunIdleTasks(Platform *param_1,Isolate *param_2,double param_3)

{
  DefaultPlatform::RunIdleTasks((DefaultPlatform *)param_1,param_2,param_3);
  return;
}

