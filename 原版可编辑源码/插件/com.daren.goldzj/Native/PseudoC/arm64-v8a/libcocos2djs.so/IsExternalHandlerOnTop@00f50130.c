
/* v8::internal::Isolate::IsExternalHandlerOnTop(v8::internal::Object) */

bool __thiscall v8::internal::Isolate::IsExternalHandlerOnTop(Isolate *this,int param_2)

{
  ulong uVar1;
  
  if ((*(long *)(this + 0x2bb8) != 0) &&
     (uVar1 = *(ulong *)(*(long *)(this + 0x2bb8) + 0x20), uVar1 != 0)) {
    if (param_2 == *(int *)(this + 0x188)) {
      return true;
    }
    return uVar1 <= *(long *)(this + 0x2c30) - 1U;
  }
  return false;
}

