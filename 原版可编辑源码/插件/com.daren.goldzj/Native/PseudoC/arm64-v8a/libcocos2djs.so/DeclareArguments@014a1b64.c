
/* v8::internal::DeclarationScope::DeclareArguments(v8::internal::AstValueFactory*) */

void __thiscall
v8::internal::DeclarationScope::DeclareArguments(DeclarationScope *this,AstValueFactory *param_1)

{
  long lVar1;
  long lVar2;
  char local_4 [4];
  
  lVar2 = VariableMap::Declare
                    ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,
                     *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70),2,0,1,0,0,local_4);
  if (local_4[0] == '\0') {
    *(long *)(this + 200) = lVar2;
    lVar1 = 0;
    if ((*(ushort *)(lVar2 + 0x28) & 0xe) != 0) {
      lVar1 = lVar2;
    }
    *(long *)(this + 200) = lVar1;
  }
  else {
    **(long **)(this + 0x40) = lVar2;
    *(long *)(this + 0x40) = lVar2 + 0x18;
    *(long *)(this + 200) = lVar2;
  }
  return;
}

