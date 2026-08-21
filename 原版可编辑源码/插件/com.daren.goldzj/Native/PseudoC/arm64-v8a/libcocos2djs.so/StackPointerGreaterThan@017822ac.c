
/* v8::internal::compiler::MachineOperatorBuilder::StackPointerGreaterThan(v8::internal::compiler::StackCheckKind)
    */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::StackPointerGreaterThan
          (MachineOperatorBuilder *this,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case 0:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x76b0;
    break;
  case 1:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x76e8;
    break;
  case 2:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x7720;
    break;
  case 3:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x7758;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar1 + lVar2;
}

