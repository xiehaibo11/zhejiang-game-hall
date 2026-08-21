
/* v8::internal::compiler::BreakOnNodeDecorator::Decorate(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::BreakOnNodeDecorator::Decorate(BreakOnNodeDecorator *this,Node *param_1)

{
  if ((*(uint *)(param_1 + 0x14) & 0xffffff) == *(uint *)(this + 8)) {
    base::OS::DebugBreak();
    return;
  }
  return;
}

