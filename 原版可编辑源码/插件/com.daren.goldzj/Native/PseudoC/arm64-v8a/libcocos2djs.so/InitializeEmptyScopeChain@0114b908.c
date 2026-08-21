
/* v8::internal::Parser::InitializeEmptyScopeChain(v8::internal::ParseInfo*) */

void __thiscall v8::internal::Parser::InitializeEmptyScopeChain(Parser *this,ParseInfo *param_1)

{
  Zone *this_00;
  DeclarationScope *this_01;
  
  this_00 = *(Zone **)(this + 0xb8);
  this_01 = *(DeclarationScope **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0xe0) {
    this_01 = (DeclarationScope *)Zone::NewExpand(this_00,0xe0);
  }
  else {
    *(DeclarationScope **)(this_00 + 0x10) = this_01 + 0xe0;
  }
  DeclarationScope::DeclarationScope
            (this_01,*(Zone **)(this + 0xb8),*(AstValueFactory **)(this + 0x60));
  *(DeclarationScope **)(param_1 + 0x18) = this_01;
  *(DeclarationScope **)(this + 8) = this_01;
  if (((byte)param_1[0xb] >> 6 & 1) != 0) {
    *(ushort *)(this_01 + 0x81) = *(ushort *)(this_01 + 0x81) | 0x800;
  }
  return;
}

