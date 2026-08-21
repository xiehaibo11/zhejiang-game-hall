
/* v8::internal::compiler::NodeOriginTable::AddDecorator() */

void __thiscall v8::internal::compiler::NodeOriginTable::AddDecorator(NodeOriginTable *this)

{
  Zone *this_00;
  GraphDecorator *pGVar1;
  
  this_00 = (Zone *)**(undefined8 **)this;
  pGVar1 = *(GraphDecorator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pGVar1) < 0x10) {
    pGVar1 = (GraphDecorator *)Zone::NewExpand(this_00,0x10);
  }
  else {
    *(GraphDecorator **)(this_00 + 0x10) = pGVar1 + 0x10;
  }
  *(undefined ***)pGVar1 = &PTR__GraphDecorator_01cd95f8;
  *(NodeOriginTable **)(pGVar1 + 8) = this;
  *(GraphDecorator **)(this + 8) = pGVar1;
  Graph::AddDecorator(*(Graph **)this,pGVar1);
  return;
}

