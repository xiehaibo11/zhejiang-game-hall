
/* v8::internal::MacroAssembler::AssertBoundFunction(v8::internal::Register) */

void v8::internal::MacroAssembler::AssertBoundFunction
               (Label *param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  if (param_1[0xc0] != (Label)0x0) {
    AssertNotSmi(param_1,param_2,param_3,0x13);
    lVar3 = *(long *)(param_1 + 0x198);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!available->IsEmpty()");
    }
    uVar4 = *(undefined8 *)(param_1 + 0x1a8);
    uVar2 = CPURegList::PopLowestIndex((CPURegList *)(param_1 + 0x198));
    uVar1 = 0x400000003f;
    if (uVar2 != 0x3f) {
      uVar1 = (ulong)uVar2 | 0x4000000000;
    }
    CompareObjectType(param_1,param_2,param_3,uVar1,0,uVar1,0,0x438);
    local_28 = 0;
    TurboAssembler::B((TurboAssembler *)param_1,&local_28,0);
    TurboAssembler::Abort((TurboAssembler *)param_1,0x17);
    Assembler::bind(param_1);
    *(long *)(param_1 + 0x198) = lVar3;
    *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  }
  return;
}

