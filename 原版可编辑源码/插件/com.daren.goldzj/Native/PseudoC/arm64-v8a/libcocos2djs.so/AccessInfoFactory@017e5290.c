
/* v8::internal::compiler::AccessInfoFactory::AccessInfoFactory(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::CompilationDependencies*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::AccessInfoFactory::AccessInfoFactory
          (AccessInfoFactory *this,JSHeapBroker *param_1,CompilationDependencies *param_2,
          Zone *param_3)

{
  undefined8 uVar1;
  
  *(JSHeapBroker **)this = param_1;
  *(CompilationDependencies **)(this + 8) = param_2;
  uVar1 = TypeCache::Get();
  *(undefined8 *)(this + 0x10) = uVar1;
  *(Zone **)(this + 0x18) = param_3;
  return;
}

