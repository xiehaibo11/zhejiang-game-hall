
/* v8::internal::Isolate::IsJavaScriptHandlerOnTop(v8::internal::Object) */

bool __thiscall v8::internal::Isolate::IsJavaScriptHandlerOnTop(Isolate *this,int param_2)

{
  ulong uVar1;
  
  if ((param_2 == *(int *)(this + 0x188)) || (*(ulong *)(this + 0x2c30) == 0)) {
    return false;
  }
  if ((*(long *)(this + 0x2bb8) != 0) &&
     (uVar1 = *(ulong *)(*(long *)(this + 0x2bb8) + 0x20), uVar1 != 0)) {
    return *(ulong *)(this + 0x2c30) < uVar1;
  }
  return true;
}

