
/* v8::internal::compiler::LiveRange::NextUsePosition(v8::internal::compiler::LifetimePosition)
   const */

long __thiscall v8::internal::compiler::LiveRange::NextUsePosition(LiveRange *this,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x38);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x18) <= param_2)) goto LAB_016558e0;
  for (lVar1 = *(long *)(this + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
LAB_016558e0:
    if (param_2 <= *(int *)(lVar1 + 0x18)) break;
  }
  *(long *)(this + 0x38) = lVar1;
  return lVar1;
}

