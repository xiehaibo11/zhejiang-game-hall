
/* v8::internal::MemoryReducer::TimerTask::TimerTask(v8::internal::MemoryReducer*) */

void __thiscall
v8::internal::MemoryReducer::TimerTask::TimerTask(TimerTask *this,MemoryReducer *param_1)

{
  CancelableTask::CancelableTask((CancelableTask *)this,(Isolate *)(*(long *)param_1 + -0x8850));
  *(undefined ***)this = &PTR__CancelableTask_01ca9108;
  *(undefined **)(this + 0x20) = &DAT_01ca9138;
  *(MemoryReducer **)(this + 0x28) = param_1;
  return;
}

