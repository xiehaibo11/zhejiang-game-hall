
/* v8::internal::compiler::TypeNarrowingReducer::TypeNarrowingReducer(v8::internal::compiler::AdvancedReducer::Editor*,
   v8::internal::compiler::JSGraph*, v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::TypeNarrowingReducer::TypeNarrowingReducer
          (TypeNarrowingReducer *this,Editor *param_1,JSGraph *param_2,JSHeapBroker *param_3)

{
  *(JSGraph **)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__TypeNarrowingReducer_01cc3a88;
  *(Editor **)(this + 8) = param_1;
  OperationTyper::OperationTyper
            ((OperationTyper *)(this + 0x18),param_3,(Zone *)**(undefined8 **)param_2);
  return;
}

