
/* v8::internal::DeclarationScope::DeclareDynamicGlobal(v8::internal::AstRawString const*,
   v8::internal::VariableKind, v8::internal::Scope*) */

void __thiscall
v8::internal::DeclarationScope::DeclareDynamicGlobal
          (DeclarationScope *this,undefined8 param_1,undefined4 param_3,long param_4)

{
  undefined1 auStack_14 [4];
  
  VariableMap::Declare
            ((VariableMap *)(param_4 + 0x20),*(undefined8 *)this,this,param_1,5,param_3,1,0,0,
             auStack_14);
  return;
}

