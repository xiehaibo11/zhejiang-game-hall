
/* v8::internal::compiler::InstructionSelector::VisitWord32AtomicAdd(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord32AtomicAdd
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = AtomicOpType(*(Operator **)param_1);
  uVar1 = uVar2 & 0xff;
  if (uVar1 == 4) {
    if ((uVar2 >> 8 & 0xfe) != 2) goto LAB_0162608c;
    uVar3 = 0x36;
  }
  else if (uVar1 == 3) {
    uVar1 = uVar2 >> 8 & 0xff;
    if (uVar1 == 2) {
      uVar3 = 0x34;
    }
    else {
      if (uVar1 != 3) goto LAB_0162608c;
      uVar3 = 0x35;
    }
  }
  else {
    if (uVar1 != 2) {
LAB_0162608c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = uVar2 >> 8 & 0xff;
    if (uVar1 == 2) {
      uVar3 = 0x32;
    }
    else {
      if (uVar1 != 3) goto LAB_0162608c;
      uVar3 = 0x33;
    }
  }
  FUN_01625e50(this,param_1,uVar3);
  return;
}

