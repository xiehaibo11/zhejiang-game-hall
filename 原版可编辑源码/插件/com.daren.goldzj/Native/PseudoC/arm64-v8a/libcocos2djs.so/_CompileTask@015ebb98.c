
/* v8::internal::wasm::AsyncCompileJob::CompileTask::~CompileTask() */

void __thiscall v8::internal::wasm::AsyncCompileJob::CompileTask::~CompileTask(CompileTask *this)

{
  *(undefined ***)this = &PTR__CompileTask_01cc9d78;
  *(undefined **)(this + 0x20) = &DAT_01cc9da8;
  if ((*(long *)(this + 0x28) != 0) && (this[0x30] != (CompileTask)0x0)) {
    *(undefined8 *)(*(long *)(this + 0x28) + 0x118) = 0;
  }
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

