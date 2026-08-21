
/* v8::internal::Parser::PrepareGeneratorVariables() */

void __thiscall v8::internal::Parser::PrepareGeneratorVariables(Parser *this)

{
  DeclarationScope *this_00;
  
  this_00 = (DeclarationScope *)Scope::AsDeclarationScope();
  DeclarationScope::DeclareGeneratorObjectVar
            (this_00,*(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xe0));
  return;
}

