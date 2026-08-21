
/* v8::internal::compiler::SimplifiedOperatorReducer::SimplifiedOperatorReducer(v8::internal::compiler::AdvancedReducer::Editor*,
   v8::internal::compiler::JSGraph*, v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::SimplifiedOperatorReducer::SimplifiedOperatorReducer
          (SimplifiedOperatorReducer *this,Editor *param_1,JSGraph *param_2,JSHeapBroker *param_3)

{
  *(JSGraph **)(this + 0x10) = param_2;
  *(JSHeapBroker **)(this + 0x18) = param_3;
  *(undefined ***)this = &PTR__SimplifiedOperatorReducer_01cbea00;
  *(Editor **)(this + 8) = param_1;
  return;
}

