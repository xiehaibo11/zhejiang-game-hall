
/* v8::internal::compiler::Typer::Typer(v8::internal::compiler::JSHeapBroker*,
   v8::base::Flags<v8::internal::compiler::Typer::Flag, int>, v8::internal::compiler::Graph*,
   v8::internal::TickCounter*) */

void __thiscall
v8::internal::compiler::Typer::Typer
          (Typer *this,JSHeapBroker *param_1,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  Zone *this_00;
  GraphDecorator *pGVar2;
  
  *(undefined4 *)this = param_3;
  *(undefined8 *)(this + 8) = param_4;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = TypeCache::Get();
  *(undefined8 *)(this + 0x18) = uVar1;
  *(JSHeapBroker **)(this + 0x20) = param_1;
  OperationTyper::OperationTyper
            ((OperationTyper *)(this + 0x28),param_1,(Zone *)**(undefined8 **)(this + 8));
  *(undefined8 *)(this + 0x98) = param_5;
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(this + 0x58);
  this_00 = (Zone *)**(undefined8 **)(this + 8);
  pGVar2 = *(GraphDecorator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pGVar2) < 0x10) {
    pGVar2 = (GraphDecorator *)Zone::NewExpand(this_00,0x10);
  }
  else {
    *(GraphDecorator **)(this_00 + 0x10) = pGVar2 + 0x10;
  }
  *(undefined ***)pGVar2 = &PTR__GraphDecorator_01cc3af8;
  *(Typer **)(pGVar2 + 8) = this;
  *(GraphDecorator **)(this + 0x10) = pGVar2;
  Graph::AddDecorator(*(Graph **)(this + 8),pGVar2);
  return;
}

