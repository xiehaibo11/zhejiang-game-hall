
/* v8::internal::ClassScope::DeclareClassVariable(v8::internal::AstValueFactory*,
   v8::internal::AstRawString const*, int) */

undefined8 __thiscall
v8::internal::ClassScope::DeclareClassVariable
          (ClassScope *this,AstValueFactory *param_1,AstRawString *param_2,int param_3)

{
  long lVar1;
  char local_24 [4];
  
  if (param_2 == (AstRawString *)0x0) {
    param_2 = *(AstRawString **)(*(long *)(param_1 + 0x38) + 200);
  }
  lVar1 = VariableMap::Declare
                    ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,param_2,1,0,0,1,0,
                     local_24);
  if (local_24[0] != '\0') {
    **(long **)(this + 0x40) = lVar1;
    *(long *)(this + 0x40) = lVar1 + 0x18;
  }
  *(long *)(this + 0x90) = lVar1;
  *(int *)(lVar1 + 0x24) = param_3;
  return *(undefined8 *)(this + 0x90);
}

