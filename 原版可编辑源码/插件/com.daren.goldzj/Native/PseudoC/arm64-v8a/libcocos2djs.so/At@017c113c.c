
/* v8::internal::interpreter::ConstantArrayBuilder::At(unsigned long, v8::internal::Isolate*) const
    */

undefined8 __thiscall
v8::internal::interpreter::ConstantArrayBuilder::At
          (ConstantArrayBuilder *this,ulong param_1,Isolate *param_2)

{
  Entry *this_00;
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  lVar2 = *plVar3;
  if ((lVar2 + plVar3[1]) - 1U < param_1) {
    plVar3 = *(long **)(this + 8);
    lVar2 = *plVar3;
    if ((lVar2 + plVar3[1]) - 1U < param_1) {
      plVar3 = *(long **)(this + 0x10);
      lVar2 = *plVar3;
      if ((lVar2 + plVar3[1]) - 1U < param_1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
    }
  }
  if ((param_1 < (ulong)(lVar2 + (plVar3[5] - plVar3[4] >> 4))) &&
     (this_00 = (Entry *)(plVar3[4] + (param_1 - lVar2) * 0x10), this_00[8] != (Entry)0x0)) {
    uVar1 = Entry::ToHandle(this_00,param_2);
    return uVar1;
  }
  return 0;
}

