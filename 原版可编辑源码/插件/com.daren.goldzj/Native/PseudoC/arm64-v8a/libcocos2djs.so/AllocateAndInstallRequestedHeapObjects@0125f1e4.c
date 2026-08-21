
/* v8::internal::Assembler::AllocateAndInstallRequestedHeapObjects(v8::internal::Isolate*) */

void __thiscall
v8::internal::Assembler::AllocateAndInstallRequestedHeapObjects(Assembler *this,Isolate *param_1)

{
  Instruction *this_00;
  Instruction IVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0x18);
joined_r0x0125f1fc:
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return;
    }
    this_00 = (Instruction *)(*(long *)(this + 0x10) + (long)*(int *)(plVar5 + 3));
    if (*(int *)(plVar5 + 1) != 1) break;
    if ((StringConstantBase *)plVar5[2] == (StringConstantBase *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(str) != nullptr");
    }
    uVar4 = StringConstantBase::AllocateStringConstant((StringConstantBase *)plVar5[2],param_1);
    uVar4 = AssemblerBase::AddEmbeddedObject((AssemblerBase *)this,uVar4);
    IVar1 = this_00[3];
    puVar3 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar1 != (Instruction)0x58) goto LAB_0125f20c;
    *puVar3 = uVar4;
    plVar5 = (long *)*plVar5;
  }
  if (*(int *)(plVar5 + 1) == 0) {
    uVar4 = plVar5[2];
    plVar2 = (long *)Factory::NewHeapNumber<(v8::internal::AllocationType)1>((Factory *)param_1);
    *(undefined8 *)(*plVar2 + 3) = uVar4;
    uVar4 = AssemblerBase::AddEmbeddedObject((AssemblerBase *)this,plVar2);
    IVar1 = this_00[3];
    puVar3 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar1 == (Instruction)0x58) {
      *puVar3 = uVar4;
      plVar5 = (long *)*plVar5;
      goto joined_r0x0125f1fc;
    }
LAB_0125f20c:
    *(int *)puVar3 = (int)uVar4;
  }
  plVar5 = (long *)*plVar5;
  goto joined_r0x0125f1fc;
}

