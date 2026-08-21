
/* v8::internal::Scope::DeclareVariableName(v8::internal::AstRawString const*,
   v8::internal::VariableMode, bool*, v8::internal::VariableKind) */

Variable * __thiscall
v8::internal::Scope::DeclareVariableName
          (Scope *this,undefined8 param_1,uint param_3,char *param_4,uint param_5)

{
  Scope SVar1;
  Variable *this_00;
  
  if ((param_3 & 0xff) == 2) {
    SVar1 = this[0x82];
    while (((byte)SVar1 & 1) == 0) {
      this = *(Scope **)(this + 8);
      SVar1 = this[0x82];
    }
    param_3 = 2;
  }
  this_00 = (Variable *)
            VariableMap::Declare
                      ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,param_1,param_3,param_5
                       ,1,0,0,param_4);
  if (*param_4 != '\0') {
    **(undefined8 **)(this + 0x40) = this_00;
    *(Variable **)(this + 0x40) = this_00 + 0x18;
  }
  if ((byte)this[0x80] - 3 < 2) {
    if ((param_3 & 0xff) != 1) {
      Variable::SetMaybeAssigned(this_00);
    }
    *(ushort *)(this_00 + 0x28) = *(ushort *)(this_00 + 0x28) | 0x800;
  }
  if (*param_4 == '\0') {
    if (((param_3 & 0xff) < 2) || ((*(ushort *)(this_00 + 0x28) & 0xe) == 0)) {
      if ((param_5 & 0xff) != 3) {
        return (Variable *)0x0;
      }
      if ((*(ushort *)(this_00 + 0x28) & 0x70) != 0x30) {
        return (Variable *)0x0;
      }
    }
    Variable::SetMaybeAssigned(this_00);
  }
  *(ushort *)(this_00 + 0x28) = *(ushort *)(this_00 + 0x28) | 0x800;
  return this_00;
}

