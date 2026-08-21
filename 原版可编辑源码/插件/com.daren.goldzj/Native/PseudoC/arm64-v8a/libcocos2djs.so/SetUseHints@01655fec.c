
/* v8::internal::compiler::LiveRange::SetUseHints(int) */

void __thiscall v8::internal::compiler::LiveRange::SetUseHints(LiveRange *this,int param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x18);
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    while( true ) {
      if ((lVar2 == 0) || ((~*(uint *)((long)plVar1 + 0x1c) & 3) == 0)) {
        plVar1 = (long *)plVar1[2];
      }
      else {
        *(uint *)((long)plVar1 + 0x1c) = *(uint *)((long)plVar1 + 0x1c) & 0xfffff03f | param_1 << 6;
        plVar1 = (long *)plVar1[2];
      }
      if (plVar1 == (long *)0x0) break;
      lVar2 = *plVar1;
    }
  }
  return;
}

