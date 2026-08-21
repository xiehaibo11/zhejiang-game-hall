
/* v8::internal::compiler::WasmGraphBuilder::AddBytecodePositionDecorator(v8::internal::compiler::NodeOriginTable*,
   v8::internal::wasm::Decoder*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::AddBytecodePositionDecorator
          (WasmGraphBuilder *this,NodeOriginTable *param_1,Decoder *param_2)

{
  Zone *this_00;
  GraphDecorator *pGVar1;
  
  this_00 = *(Zone **)**(undefined8 **)(this + 8);
  pGVar1 = *(GraphDecorator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pGVar1) < 0x18) {
    pGVar1 = (GraphDecorator *)Zone::NewExpand(this_00,0x18);
  }
  else {
    *(GraphDecorator **)(this_00 + 0x10) = pGVar1 + 0x18;
  }
  *(Decoder **)(pGVar1 + 0x10) = param_2;
  *(undefined ***)pGVar1 = &PTR__GraphDecorator_01cc3b90;
  *(NodeOriginTable **)(pGVar1 + 8) = param_1;
  *(GraphDecorator **)(this + 0x70) = pGVar1;
  Graph::AddDecorator((Graph *)**(undefined8 **)(this + 8),pGVar1);
  return;
}

