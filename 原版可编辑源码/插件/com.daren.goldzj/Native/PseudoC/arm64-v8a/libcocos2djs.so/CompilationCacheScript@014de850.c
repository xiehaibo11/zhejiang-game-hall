
/* v8::internal::CompilationCacheScript::CompilationCacheScript(v8::internal::Isolate*) */

void __thiscall
v8::internal::CompilationCacheScript::CompilationCacheScript
          (CompilationCacheScript *this,Isolate *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *(Isolate **)this = param_1;
  *(undefined4 *)(this + 8) = 1;
  puVar1 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    puVar1 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  *puVar1 = 0;
  *(undefined8 **)(this + 0x10) = puVar1;
  return;
}

