
/* v8::internal::DeclarationScope::AddLocal(v8::internal::Variable*) */

void __thiscall v8::internal::DeclarationScope::AddLocal(DeclarationScope *this,Variable *param_1)

{
  **(undefined8 **)(this + 0x40) = param_1;
  *(Variable **)(this + 0x40) = param_1 + 0x18;
  return;
}

