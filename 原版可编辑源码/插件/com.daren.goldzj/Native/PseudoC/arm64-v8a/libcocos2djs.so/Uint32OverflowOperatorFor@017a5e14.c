
/* v8::internal::compiler::RepresentationChanger::Uint32OverflowOperatorFor(v8::internal::compiler::IrOpcode::Value)
    */

void __thiscall
v8::internal::compiler::RepresentationChanger::Uint32OverflowOperatorFor
          (RepresentationChanger *this,int param_2)

{
  if (param_2 == 0x92) {
    SimplifiedOperatorBuilder::CheckedUint32Mod
              (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    return;
  }
  if (param_2 == 0x91) {
    SimplifiedOperatorBuilder::CheckedUint32Div
              (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

