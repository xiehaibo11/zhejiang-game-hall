
/* v8::internal::ScriptStreamingData::Release() */

void __thiscall v8::internal::ScriptStreamingData::Release(ScriptStreamingData *this)

{
  BackgroundCompileTask *this_00;
  
  this_00 = *(BackgroundCompileTask **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (this_00 != (BackgroundCompileTask *)0x0) {
    BackgroundCompileTask::~BackgroundCompileTask(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

