
/* v8::platform::DefaultPlatform::SetTracingController(std::__ndk1::unique_ptr<v8::TracingController,
   std::__ndk1::default_delete<v8::TracingController> >) */

void __thiscall
v8::platform::DefaultPlatform::SetTracingController(DefaultPlatform *this,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  plVar1 = *(long **)(this + 0x60);
  *(undefined8 *)(this + 0x60) = uVar2;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e9dff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

