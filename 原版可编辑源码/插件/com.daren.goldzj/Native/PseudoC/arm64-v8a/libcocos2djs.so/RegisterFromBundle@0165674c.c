
/* v8::internal::compiler::LiveRange::RegisterFromBundle(int*) const */

undefined8 __thiscall
v8::internal::compiler::LiveRange::RegisterFromBundle(LiveRange *this,int *param_1)

{
  int iVar1;
  
  if ((*(long *)(this + 0x50) != 0) &&
     (iVar1 = *(int *)(*(long *)(this + 0x50) + 0x44), iVar1 != 0x20)) {
    *param_1 = iVar1;
    return 1;
  }
  return 0;
}

