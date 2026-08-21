
/* v8::internal::Scope::DeclareCatchVariableName(v8::internal::AstRawString const*) */

void __thiscall v8::internal::Scope::DeclareCatchVariableName(Scope *this,AstRawString *param_1)

{
  long lVar1;
  char local_4 [4];
  
  lVar1 = VariableMap::Declare
                    ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,param_1,2,0,1,0,0,local_4
                    );
  if (local_4[0] != '\0') {
    **(long **)(this + 0x40) = lVar1;
    *(long *)(this + 0x40) = lVar1 + 0x18;
  }
  return;
}

