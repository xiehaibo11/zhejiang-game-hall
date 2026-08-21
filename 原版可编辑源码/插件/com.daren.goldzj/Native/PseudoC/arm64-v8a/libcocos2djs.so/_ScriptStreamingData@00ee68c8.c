
/* v8::internal::ScriptStreamingData::~ScriptStreamingData() */

void __thiscall v8::internal::ScriptStreamingData::~ScriptStreamingData(ScriptStreamingData *this)

{
  long *plVar1;
  BackgroundCompileTask *this_00;
  
  this_00 = *(BackgroundCompileTask **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (this_00 != (BackgroundCompileTask *)0x0) {
    BackgroundCompileTask::~BackgroundCompileTask(this_00);
    operator_delete(this_00);
  }
  plVar1 = *(long **)this;
  *(undefined8 *)this = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ee6910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

