
/* v8::platform::DefaultPlatform::DefaultPlatform(v8::platform::IdleTaskSupport,
   std::__ndk1::unique_ptr<v8::TracingController, std::__ndk1::default_delete<v8::TracingController>
   >) */

void __thiscall
v8::platform::DefaultPlatform::DefaultPlatform
          (DefaultPlatform *this,undefined4 param_2,undefined8 *param_3)

{
  PageAllocator *this_00;
  TracingController *this_01;
  long *plVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__DefaultPlatform_01c98060;
  base::Mutex::Mutex((Mutex *)(this + 8));
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = param_2;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(DefaultPlatform **)(this + 0x48) = this + 0x50;
  uVar2 = *param_3;
  *param_3 = 0;
  *(undefined8 *)(this + 0x60) = uVar2;
  this_00 = operator_new(0x18);
  base::PageAllocator::PageAllocator(this_00);
  *(PageAllocator **)(this + 0x68) = this_00;
  *(undefined8 *)(this + 0x70) = 0;
  if (*(long *)(this + 0x60) == 0) {
    this_01 = operator_new(0x50);
    tracing::TracingController::TracingController(this_01);
    tracing::TracingController::Initialize(this_01,(TraceBuffer *)0x0);
    plVar1 = *(long **)(this + 0x60);
    *(TracingController **)(this + 0x60) = this_01;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Jumptable with 0 entries at 0x00e9e0b8 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))();
      return;
    }
  }
  return;
}

