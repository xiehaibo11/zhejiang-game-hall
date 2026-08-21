
/* v8::internal::compiler::LiveRange::UpdateBundleRegister(int) const */

void __thiscall v8::internal::compiler::LiveRange::UpdateBundleRegister(LiveRange *this,int param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x50);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x44) == 0x20)) {
    *(int *)(lVar1 + 0x44) = param_1;
  }
  return;
}

