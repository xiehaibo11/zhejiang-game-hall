
/* v8::internal::Parser::SetAsmModule() */

void __thiscall v8::internal::Parser::SetAsmModule(Parser *this)

{
  DeclarationScope *this_00;
  
  *(int *)(this + 0x310) = *(int *)(this + 0x310) + 1;
  this_00 = (DeclarationScope *)Scope::AsDeclarationScope();
  DeclarationScope::set_is_asm_module(this_00);
  *(uint *)(*(long *)(this + 0x138) + 8) = *(uint *)(*(long *)(this + 0x138) + 8) | 0x8000;
  return;
}

