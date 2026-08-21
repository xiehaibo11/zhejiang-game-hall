
/* v8::internal::Scope::AllocateScopeInfosRecursively(v8::internal::Isolate*,
   v8::internal::MaybeHandle<v8::internal::ScopeInfo>) */

void __thiscall
v8::internal::Scope::AllocateScopeInfosRecursively
          (Scope *this,undefined8 param_1,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((this[0x80] == (Scope)0x2) || (uVar1 = param_3, 0 < *(int *)(this + 0x7c))) {
    uVar1 = ScopeInfo::Create(param_1,*(undefined8 *)this,this,param_3);
    *(undefined8 *)(this + 0x68) = uVar1;
    if (*(int *)(this + 0x7c) < 1) {
      uVar1 = param_3;
    }
  }
  for (lVar2 = *(long *)(this + 0x10); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x18)) {
    if ((*(char *)(lVar2 + 0x80) != '\x02') || ((*(byte *)(lVar2 + 0x83) & 0x44) != 0)) {
      AllocateScopeInfosRecursively((Scope *)lVar2,param_1,uVar1);
    }
  }
  return;
}

