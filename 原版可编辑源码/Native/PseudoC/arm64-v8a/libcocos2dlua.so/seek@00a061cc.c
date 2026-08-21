
/* universe::network::OStream::seek(long, universe::network::UpdatesDir) */

void __thiscall universe::network::OStream::seek(OStream *this,ulong param_1,int param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    if (param_3 == 1) {
      lVar1 = *(long *)(this + 0x10);
    }
    else {
      if (param_3 != 2) {
        param_1 = *(ulong *)(this + 0x10);
        goto LAB_00a061fc;
      }
      lVar1 = *(long *)(this + 8);
    }
    param_1 = lVar1 + param_1;
  }
  *(ulong *)(this + 0x10) = param_1;
LAB_00a061fc:
  if (*(ulong *)(this + 8) < param_1) {
    *(ulong *)(this + 0x10) = *(ulong *)(this + 8);
  }
  return;
}

