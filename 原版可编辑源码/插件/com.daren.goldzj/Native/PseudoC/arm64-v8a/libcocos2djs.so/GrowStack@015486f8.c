
/* v8::internal::NativeRegExpMacroAssembler::GrowStack(unsigned long, unsigned long*,
   v8::internal::Isolate*) */

ulong v8::internal::NativeRegExpMacroAssembler::GrowStack
                (ulong param_1,ulong *param_2,Isolate *param_3)

{
  RegExpStack *this;
  ulong uVar1;
  long lVar2;
  
  this = *(RegExpStack **)(param_3 + 0xb618);
  lVar2 = *(long *)(this + 0x208);
  uVar1 = RegExpStack::EnsureCapacity(this,*(long *)(this + 0x210) << 1);
  if (uVar1 != 0) {
    *param_2 = uVar1;
    uVar1 = (param_1 - lVar2) + uVar1;
  }
  return uVar1;
}

