
/* v8::internal::Scope::NonLocal(v8::internal::AstRawString const*, v8::internal::VariableMode) */

void __thiscall v8::internal::Scope::NonLocal(Scope *this,undefined8 param_1,undefined4 param_3)

{
  long lVar1;
  undefined1 auStack_14 [4];
  
  lVar1 = VariableMap::Declare
                    ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,param_1,param_3,0,1,0,0,
                     auStack_14);
  *(undefined4 *)(lVar1 + 0x20) = 0xffffffff;
  *(ushort *)(lVar1 + 0x28) = *(ushort *)(lVar1 + 0x28) & 0xfc7f | 0x200;
  return;
}

