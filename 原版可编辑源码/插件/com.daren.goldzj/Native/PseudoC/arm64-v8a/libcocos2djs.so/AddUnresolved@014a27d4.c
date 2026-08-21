
/* v8::internal::Scope::AddUnresolved(v8::internal::VariableProxy*) */

void __thiscall v8::internal::Scope::AddUnresolved(Scope *this,VariableProxy *param_1)

{
  VariableProxy *pVVar1;
  long lVar2;
  long lVar3;
  
  **(undefined8 **)(this + 0x50) = param_1;
  pVVar1 = param_1 + 0x10;
  lVar2 = *(long *)pVVar1;
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 5) >> 1 & 1) != 0)) {
    do {
      lVar3 = lVar2;
      lVar2 = *(long *)(lVar3 + 0x10);
      if (lVar2 == 0) break;
    } while ((*(byte *)(lVar2 + 5) >> 1 & 1) != 0);
    pVVar1 = (VariableProxy *)(lVar3 + 0x10);
  }
  *(VariableProxy **)(this + 0x50) = pVVar1;
  return;
}

