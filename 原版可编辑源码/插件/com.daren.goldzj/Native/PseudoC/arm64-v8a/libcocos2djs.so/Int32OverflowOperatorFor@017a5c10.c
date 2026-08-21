
/* v8::internal::compiler::RepresentationChanger::Int32OverflowOperatorFor(v8::internal::compiler::IrOpcode::Value)
    */

void __thiscall
v8::internal::compiler::RepresentationChanger::Int32OverflowOperatorFor
          (RepresentationChanger *this,undefined4 param_2)

{
  switch(param_2) {
  case 0x91:
    SimplifiedOperatorBuilder::CheckedInt32Div
              (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    return;
  case 0x92:
    SimplifiedOperatorBuilder::CheckedInt32Mod
              (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x99:
    SimplifiedOperatorBuilder::CheckedInt32Add
              (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    return;
  case 0x9a:
    SimplifiedOperatorBuilder::CheckedInt32Sub
              (*(SimplifiedOperatorBuilder **)(*(long *)(this + 8) + 0x178));
    return;
  }
}

