
/* v8::internal::Scope::DeclareLocal(v8::internal::AstRawString const*, v8::internal::VariableMode,
   v8::internal::VariableKind, bool*, v8::internal::InitializationFlag) */

Variable * __thiscall
v8::internal::Scope::DeclareLocal
          (Scope *this,undefined8 param_1,uint param_3,undefined4 param_4,char *param_5,
          undefined4 param_6)

{
  Variable *this_00;
  
  this_00 = (Variable *)
            VariableMap::Declare
                      ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,param_1,param_3,param_4
                       ,param_6,0,0,param_5);
  if (*param_5 != '\0') {
    **(undefined8 **)(this + 0x40) = this_00;
    *(Variable **)(this + 0x40) = this_00 + 0x18;
  }
  if ((byte)this[0x80] - 3 < 2) {
    if ((param_3 & 0xff) != 1) {
      Variable::SetMaybeAssigned(this_00);
    }
    *(ushort *)(this_00 + 0x28) = *(ushort *)(this_00 + 0x28) | 0x800;
  }
  return this_00;
}

