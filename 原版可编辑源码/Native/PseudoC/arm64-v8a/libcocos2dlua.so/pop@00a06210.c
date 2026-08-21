
/* universe::network::OStream::pop(unsigned long) */

void __thiscall universe::network::OStream::pop(OStream *this,ulong param_1)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(ulong *)(this + 8);
    if (*(long *)(this + 0x10) + param_1 <= *(ulong *)(this + 8)) {
      uVar1 = *(long *)(this + 0x10) + param_1;
    }
    *(ulong *)(this + 0x10) = uVar1;
  }
  return;
}

