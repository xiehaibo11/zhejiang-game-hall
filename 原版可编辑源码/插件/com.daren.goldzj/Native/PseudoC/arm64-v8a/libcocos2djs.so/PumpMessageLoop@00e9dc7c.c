
/* v8::platform::PumpMessageLoop(v8::Platform*, v8::Isolate*, v8::platform::MessageLoopBehavior) */

void v8::platform::PumpMessageLoop(DefaultPlatform *param_1,undefined8 param_2,uint param_3)

{
  DefaultPlatform::PumpMessageLoop(param_1,param_2,param_3 & 1);
  return;
}

