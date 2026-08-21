
/* v8::internal::compiler::CompilationDependencies::CompilationDependencies(v8::internal::compiler::JSHeapBroker*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::CompilationDependencies::CompilationDependencies
          (CompilationDependencies *this,JSHeapBroker *param_1,Zone *param_2)

{
  *(Zone **)this = param_2;
  *(JSHeapBroker **)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(Zone **)(this + 0x18) = param_2;
  return;
}

