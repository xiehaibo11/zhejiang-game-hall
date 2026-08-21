
/* v8::internal::compiler::SourcePositionTable::RemoveDecorator() */

void __thiscall
v8::internal::compiler::SourcePositionTable::RemoveDecorator(SourcePositionTable *this)

{
  Graph::RemoveDecorator(*(Graph **)this,*(GraphDecorator **)(this + 8));
  *(undefined8 *)(this + 8) = 0;
  return;
}

