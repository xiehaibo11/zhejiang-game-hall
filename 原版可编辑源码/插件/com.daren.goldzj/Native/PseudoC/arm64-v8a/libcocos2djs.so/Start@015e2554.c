
/* v8::internal::wasm::AsyncCompileJob::Start() */

void __thiscall v8::internal::wasm::AsyncCompileJob::Start(AsyncCompileJob *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)this + 0x9520);
  puVar1 = operator_new(0x10);
  *puVar1 = &PTR__CompileStep_01cc9b88;
  puVar1[1] = uVar3;
  plVar2 = *(long **)(this + 0x68);
  *(undefined8 **)(this + 0x68) = puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  StartBackgroundTask(this);
  return;
}

