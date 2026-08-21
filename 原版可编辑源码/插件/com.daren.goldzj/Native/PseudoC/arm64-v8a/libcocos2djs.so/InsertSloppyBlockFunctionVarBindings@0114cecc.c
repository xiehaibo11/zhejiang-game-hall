
/* v8::internal::Parser::InsertSloppyBlockFunctionVarBindings(v8::internal::DeclarationScope*) */

void __thiscall
v8::internal::Parser::InsertSloppyBlockFunctionVarBindings(Parser *this,DeclarationScope *param_1)

{
  if ((param_1[0x80] == (DeclarationScope)0x1) && (*(long *)(param_1 + 8) == *(long *)(this + 8))) {
    return;
  }
  DeclarationScope::HoistSloppyBlockFunctions(param_1,(AstNodeFactory *)(this + 0x68));
  return;
}

