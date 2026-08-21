
/* v8::internal::compiler::LiveRange::VerifyIntervals() const */

void __thiscall v8::internal::compiler::LiveRange::VerifyIntervals(LiveRange *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  do {
    lVar1 = *(long *)(lVar1 + 8);
  } while (lVar1 != 0);
  return;
}

