
/* v8::internal::compiler::Typer::~Typer() */

void __thiscall v8::internal::compiler::Typer::~Typer(Typer *this)

{
  Graph::RemoveDecorator(*(Graph **)(this + 8),*(GraphDecorator **)(this + 0x10));
  return;
}

