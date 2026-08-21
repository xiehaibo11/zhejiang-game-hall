
/* v8::internal::compiler::TypedOptimization::TypedOptimization(v8::internal::compiler::AdvancedReducer::Editor*,
   v8::internal::compiler::CompilationDependencies*, v8::internal::compiler::JSGraph*,
   v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::TypedOptimization::TypedOptimization
          (TypedOptimization *this,Editor *param_1,CompilationDependencies *param_2,JSGraph *param_3
          ,JSHeapBroker *param_4)

{
  undefined8 uVar1;
  
  *(CompilationDependencies **)(this + 0x10) = param_2;
  *(JSGraph **)(this + 0x18) = param_3;
  *(JSHeapBroker **)(this + 0x20) = param_4;
  *(undefined ***)this = &PTR__TypedOptimization_01cc3ac0;
  *(Editor **)(this + 8) = param_1;
  uVar1 = Type::HeapConstant(param_4,*(long *)(param_3 + 0x168) + 0xb8,**(undefined8 **)param_3);
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = Type::HeapConstant(param_4,(*(undefined8 **)(this + 0x18))[0x2d] + 0xc0,
                             *(undefined8 *)**(undefined8 **)(this + 0x18));
  *(undefined8 *)(this + 0x30) = uVar1;
  uVar1 = TypeCache::Get();
  *(undefined8 *)(this + 0x38) = uVar1;
  return;
}

