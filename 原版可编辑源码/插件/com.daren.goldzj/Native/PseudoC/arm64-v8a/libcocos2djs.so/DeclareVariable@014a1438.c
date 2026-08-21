
/* v8::internal::Scope::DeclareVariable(v8::internal::Declaration*, v8::internal::AstRawString
   const*, int, v8::internal::VariableMode, v8::internal::VariableKind,
   v8::internal::InitializationFlag, bool*, bool*, bool*) */

Variable * __thiscall
v8::internal::Scope::DeclareVariable
          (Scope *this,long param_1,long param_2,undefined8 param_4,uint param_5,undefined8 param_6,
          undefined8 param_7,char *param_8,undefined8 param_9,undefined8 param_10)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  Variable *this_00;
  undefined1 auStack_24 [36];
  
  while (((param_5 & 0xff) == 2 && (((byte)this[0x82] & 1) == 0))) {
    do {
      this = *(Scope **)(this + 8);
    } while (((byte)this[0x82] & 1) == 0);
    param_5 = 2;
  }
  uVar3 = (ulong)(*(int *)(this + 0x28) - 1U & *(uint *)(param_2 + 0x18) >> 3);
  plVar2 = (long *)(*(long *)(this + 0x20) + uVar3 * 0x18);
  lVar4 = *plVar2;
  do {
    if (lVar4 == 0) {
LAB_014a1580:
      *param_8 = '\x01';
LAB_014a1588:
      if (((this[0x80] == (Scope)0x1) && ((param_5 & 0xff) == 2)) &&
         ((*(ushort *)(this + 0x81) & 1) == 0)) {
        this_00 = (Variable *)
                  VariableMap::Declare
                            ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,param_2,4,0,1,0,0
                             ,auStack_24);
        *(undefined4 *)(this_00 + 0x20) = 0xffffffff;
        *(ushort *)(this_00 + 0x28) = *(ushort *)(this_00 + 0x28) & 0xfc7f | 0xa00;
      }
      else {
        this_00 = (Variable *)
                  VariableMap::Declare
                            ((VariableMap *)(this + 0x20),*(undefined8 *)this,this,param_2,param_5,
                             param_6,param_7,0,0,param_8);
        if (*param_8 != '\0') {
          **(undefined8 **)(this + 0x40) = this_00;
          *(Variable **)(this + 0x40) = this_00 + 0x18;
        }
        if ((byte)this[0x80] - 3 < 2) {
          if ((param_5 & 0xff) != 1) {
            Variable::SetMaybeAssigned(this_00);
          }
          *(ushort *)(this_00 + 0x28) = *(ushort *)(this_00 + 0x28) | 0x800;
        }
      }
LAB_014a1618:
      **(long **)(this + 0x60) = param_1;
      *(long *)(this + 0x60) = param_1 + 0x10;
      *(Variable **)(param_1 + 8) = this_00;
      return this_00;
    }
    if (lVar4 == param_2) {
      if ((param_2 != 0) && (plVar2 != (long *)0x0)) {
        this_00 = (Variable *)plVar2[1];
        *param_8 = this_00 == (Variable *)0x0;
        if (this_00 == (Variable *)0x0) goto LAB_014a1588;
        Variable::SetMaybeAssigned(this_00);
        if (((param_5 & 0xff) < 2) || ((*(ushort *)(this_00 + 0x28) & 0xe) == 0)) {
          bVar1 = ((uint)param_6 & 0xff) == 3 && (*(ushort *)(this_00 + 0x28) & 0x70) == 0x30;
          *(bool *)param_10 = bVar1;
          *(bool *)param_9 = bVar1;
        }
        goto LAB_014a1618;
      }
      goto LAB_014a1580;
    }
    uVar3 = (ulong)((int)uVar3 + 1U & *(int *)(this + 0x28) - 1U);
    plVar2 = (long *)(*(long *)(this + 0x20) + uVar3 * 0x18);
    lVar4 = *plVar2;
  } while( true );
}

