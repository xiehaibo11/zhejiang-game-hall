
/* v8::internal::DeclarationScope::DeclareSloppyBlockFunction(v8::internal::SloppyBlockFunctionStatement*)
    */

void __thiscall
v8::internal::DeclarationScope::DeclareSloppyBlockFunction
          (DeclarationScope *this,SloppyBlockFunctionStatement *param_1)

{
  **(undefined8 **)(this + 0xa8) = param_1;
  *(SloppyBlockFunctionStatement **)(this + 0xa8) = param_1 + 0x18;
  return;
}

