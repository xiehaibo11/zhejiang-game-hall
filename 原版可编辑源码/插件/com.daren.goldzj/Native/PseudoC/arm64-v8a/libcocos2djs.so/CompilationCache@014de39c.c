
/* v8::internal::CompilationCache::CompilationCache(v8::internal::Isolate*) */

void __thiscall
v8::internal::CompilationCache::CompilationCache(CompilationCache *this,Isolate *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *(Isolate **)this = param_1;
  *(Isolate **)(this + 8) = param_1;
  *(undefined4 *)(this + 0x10) = 1;
  puVar1 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    puVar1 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar1 == (undefined8 *)0x0) goto LAB_014de530;
  }
  *puVar1 = 0;
  *(Isolate **)(this + 0x20) = param_1;
  *(undefined8 **)(this + 0x18) = puVar1;
  *(undefined4 *)(this + 0x28) = 1;
  puVar1 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    puVar1 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar1 == (undefined8 *)0x0) goto LAB_014de530;
  }
  *puVar1 = 0;
  *(Isolate **)(this + 0x38) = param_1;
  *(undefined8 **)(this + 0x30) = puVar1;
  *(undefined4 *)(this + 0x40) = 1;
  puVar1 = operator_new__(8,(nothrow_t *)&std::nothrow);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    puVar1 = operator_new__(8,(nothrow_t *)&std::nothrow);
    if (puVar1 == (undefined8 *)0x0) goto LAB_014de530;
  }
  *puVar1 = 0;
  *(Isolate **)(this + 0x50) = param_1;
  *(undefined8 **)(this + 0x48) = puVar1;
  *(undefined4 *)(this + 0x58) = 2;
  puVar1 = operator_new__(0x10,(nothrow_t *)&std::nothrow);
  if (puVar1 == (undefined8 *)0x0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    puVar1 = operator_new__(0x10,(nothrow_t *)&std::nothrow);
    if (puVar1 == (undefined8 *)0x0) {
LAB_014de530:
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 **)(this + 0x60) = puVar1;
  this[0x88] = (CompilationCache)0x1;
  *(CompilationCache **)(this + 0x80) = this + 0x50;
  *(CompilationCache **)(this + 0x78) = this + 0x38;
  *(CompilationCache **)(this + 0x70) = this + 0x20;
  *(CompilationCache **)(this + 0x68) = this + 8;
  return;
}

