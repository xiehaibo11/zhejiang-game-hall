
/* v8::internal::Parser::DeserializeScopeChain(v8::internal::Isolate*, v8::internal::ParseInfo*,
   v8::internal::MaybeHandle<v8::internal::ScopeInfo>, v8::internal::Scope::DeserializationMode) */

void __thiscall
v8::internal::Parser::DeserializeScopeChain
          (Parser *this,undefined8 param_1,long param_2,undefined8 *param_4,undefined4 param_5)

{
  Zone *this_00;
  Scope *this_01;
  DeclarationScope *pDVar1;
  
  this_00 = *(Zone **)(this + 0xb8);
  pDVar1 = *(DeclarationScope **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pDVar1) < 0xe0) {
    pDVar1 = (DeclarationScope *)Zone::NewExpand(this_00,0xe0);
  }
  else {
    *(DeclarationScope **)(this_00 + 0x10) = pDVar1 + 0xe0;
  }
  DeclarationScope::DeclarationScope
            (pDVar1,*(Zone **)(this + 0xb8),*(AstValueFactory **)(this + 0x60));
  *(DeclarationScope **)(param_2 + 0x18) = pDVar1;
  *(DeclarationScope **)(this + 8) = pDVar1;
  if ((*(byte *)(param_2 + 0xb) >> 6 & 1) != 0) {
    *(ushort *)(pDVar1 + 0x81) = *(ushort *)(pDVar1 + 0x81) | 0x800;
  }
  if (param_4 != (undefined8 *)0x0) {
    this_01 = (Scope *)Scope::DeserializeScopeChain
                                 (param_1,*(undefined8 *)(this + 0xb8),*param_4,
                                  *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(this + 0x60),
                                  param_5);
    *(Scope **)(this + 8) = this_01;
    if (((*(byte *)(param_2 + 8) >> 2 & 1) != 0) || (*(byte *)(param_2 + 0x30) - 9 < 2)) {
      pDVar1 = (DeclarationScope *)Scope::GetReceiverScope(this_01);
      DeclarationScope::DeserializeReceiver(pDVar1,*(AstValueFactory **)(this + 0x60));
      return;
    }
  }
  return;
}

