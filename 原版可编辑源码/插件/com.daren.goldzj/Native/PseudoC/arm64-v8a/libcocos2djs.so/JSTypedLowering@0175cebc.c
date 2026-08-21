
/* v8::internal::compiler::JSTypedLowering::JSTypedLowering(v8::internal::compiler::AdvancedReducer::Editor*,
   v8::internal::compiler::JSGraph*, v8::internal::compiler::JSHeapBroker*, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::JSTypedLowering::JSTypedLowering
          (JSTypedLowering *this,Editor *param_1,JSGraph *param_2,JSHeapBroker *param_3,
          Zone *param_4)

{
  undefined8 uVar1;
  
  *(JSGraph **)(this + 0x10) = param_2;
  *(JSHeapBroker **)(this + 0x18) = param_3;
  *(undefined ***)this = &PTR__Reducer_01cd0018;
  *(Editor **)(this + 8) = param_1;
  uVar1 = Type::HeapConstant(param_3,*(long *)(param_2 + 0x168) + 200,**(undefined8 **)param_2);
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = Type::Union(0x47f2001,uVar1,*(undefined8 *)**(undefined8 **)(this + 0x10));
  uVar1 = Type::Union(0x800381,uVar1,*(undefined8 *)**(undefined8 **)(this + 0x10));
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = TypeCache::Get();
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}

