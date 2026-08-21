
/* v8::internal::wasm::AsyncCompileJob::CompileTask::RunInternal() */

void __thiscall v8::internal::wasm::AsyncCompileJob::CompileTask::RunInternal(CompileTask *this)

{
  bool bVar1;
  AsyncCompileJob *pAVar2;
  
  pAVar2 = *(AsyncCompileJob **)(this + 0x28);
  if (pAVar2 != (AsyncCompileJob *)0x0) {
    if (this[0x30] == (CompileTask)0x0) {
      bVar1 = false;
    }
    else {
      *(undefined8 *)(pAVar2 + 0x118) = 0;
      pAVar2 = *(AsyncCompileJob **)(this + 0x28);
      bVar1 = this[0x30] != (CompileTask)0x0;
    }
    CompileStep::Run(*(CompileStep **)(pAVar2 + 0x68),pAVar2,bVar1);
    *(undefined8 *)(this + 0x28) = 0;
  }
  return;
}

