
/* v8::internal::compiler::JSGenericLowering::JSGenericLowering(v8::internal::compiler::JSGraph*,
   v8::internal::compiler::AdvancedReducer::Editor*, v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::JSGenericLowering::JSGenericLowering
          (JSGenericLowering *this,JSGraph *param_1,Editor *param_2,JSHeapBroker *param_3)

{
  *(JSGraph **)(this + 0x10) = param_1;
  *(JSHeapBroker **)(this + 0x18) = param_3;
  *(undefined ***)this = &PTR__JSGenericLowering_01ccda18;
  *(Editor **)(this + 8) = param_2;
  return;
}

