
/* v8::internal::ScopeIterator::SetVariableValue(v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::ScopeIterator::SetVariableValue(ScopeIterator *this,ulong *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (0x1f < *(ushort *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1))) {
    param_2 = (ulong *)StringTable::LookupString(*(undefined8 *)this,param_2);
  }
  uVar2 = Type(this);
  uVar4 = 0;
  if (uVar2 < 9) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x1b0) == 0) {
      if ((uVar1 & 10) == 0) {
        if (uVar2 != 6) {
          return 0;
        }
        uVar4 = SetScriptVariableValue(this,param_2,param_3);
        return uVar4;
      }
      if (*(long *)(this + 0x20) == 0) {
        uVar5 = SetContextVariableValue(this,param_2,param_3);
        if ((uVar5 & 1) == 0) goto LAB_00f0361c;
      }
      else {
        uVar5 = SetLocalVariableValue(this,param_2,param_3);
        if ((uVar5 & 1) == 0) {
          if (*(int *)(*(long *)(this + 0x50) + 0x7c) < 1) {
            return 0;
          }
LAB_00f0361c:
          uVar4 = SetContextExtensionValue(this,param_2,param_3);
          return uVar4;
        }
      }
    }
    else {
      if (*(long *)(this + 0x20) != 0) {
        uVar4 = SetLocalVariableValue(this,param_2,param_3);
        return uVar4;
      }
      iVar3 = Type(this);
      if ((iVar3 != 8) || (uVar5 = SetModuleVariableValue(this,param_2,param_3), (uVar5 & 1) == 0))
      {
        uVar4 = SetContextVariableValue(this,param_2,param_3);
        return uVar4;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

