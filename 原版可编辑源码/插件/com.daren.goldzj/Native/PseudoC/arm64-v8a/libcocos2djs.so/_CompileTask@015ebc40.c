
/* non-virtual thunk to v8::internal::wasm::AsyncCompileJob::CompileTask::~CompileTask() */

void __thiscall v8::internal::wasm::AsyncCompileJob::CompileTask::~CompileTask(CompileTask *this)

{
  *(undefined ***)(this + -0x20) = &PTR__CompileTask_01cc9d78;
  *(undefined **)this = &DAT_01cc9da8;
  if ((*(long *)(this + 8) != 0) && (this[0x10] != (CompileTask)0x0)) {
    *(undefined8 *)(*(long *)(this + 8) + 0x118) = 0;
  }
  Cancelable::~Cancelable((Cancelable *)(this + -0x20));
  return;
}

