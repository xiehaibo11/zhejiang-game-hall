
/* v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::ApplyDeferredCommands()
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::ControlScope::DeferredCommands::ApplyDeferredCommands
          (DeferredCommands *this)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  BytecodeArrayBuilder *pBVar4;
  ulong uVar5;
  BytecodeJumpTable *pBVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  BytecodeLabel local_60 [8];
  undefined8 local_58;
  
  puVar1 = *(uint **)(this + 8);
  lVar3 = *(long *)(this + 0x10) - (long)puVar1;
  if (lVar3 != 0) {
    local_60[0] = (BytecodeLabel)0x0;
    local_58 = 0xffffffffffffffff;
    if (lVar3 == 0x18) {
      pBVar4 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::LoadLiteral
                         ((BytecodeArrayBuilder *)(*(long *)this + 0x18),(long)(int)puVar1[4] << 1);
      pBVar4 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::CompareReference(pBVar4,*(undefined4 *)(this + 0x28));
      BytecodeArrayBuilder::JumpIfFalse(pBVar4,1,local_60);
      uVar7 = *puVar1;
      if (1 < uVar7) {
        BytecodeArrayBuilder::LoadAccumulatorWithRegister
                  ((BytecodeArrayBuilder *)(*(long *)this + 0x18),*(undefined4 *)(this + 0x2c));
        uVar7 = *puVar1;
      }
      uVar9 = *(undefined8 *)(puVar1 + 2);
      plVar8 = *(long **)(*(long *)this + 0x2f0);
      while (uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar7,uVar9,0xffffffff), (uVar5 & 1) == 0)
      {
        plVar8 = (long *)plVar8[2];
        if (plVar8 == (long *)0x0) {
LAB_01520eb4:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
      }
    }
    else {
      pBVar6 = (BytecodeJumpTable *)
               BytecodeArrayBuilder::AllocateJumpTable
                         ((BytecodeArrayBuilder *)(*(long *)this + 0x18),
                          (int)(lVar3 >> 3) * -0x55555555,0);
      pBVar4 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::LoadAccumulatorWithRegister
                         ((BytecodeArrayBuilder *)(*(long *)this + 0x18),
                          *(undefined4 *)(this + 0x28));
      pBVar4 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::SwitchOnSmiNoFeedback(pBVar4,pBVar6);
      BytecodeArrayBuilder::Jump(pBVar4,local_60);
      puVar2 = *(uint **)(this + 0x10);
      for (puVar1 = *(uint **)(this + 8); puVar1 != puVar2; puVar1 = puVar1 + 6) {
        BytecodeArrayBuilder::Bind((BytecodeArrayBuilder *)(*(long *)this + 0x18),pBVar6,puVar1[4]);
        uVar7 = *puVar1;
        if (1 < uVar7) {
          BytecodeArrayBuilder::LoadAccumulatorWithRegister
                    ((BytecodeArrayBuilder *)(*(long *)this + 0x18),*(undefined4 *)(this + 0x2c));
          uVar7 = *puVar1;
        }
        uVar9 = *(undefined8 *)(puVar1 + 2);
        plVar8 = *(long **)(*(long *)this + 0x2f0);
        while (uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar7,uVar9,0xffffffff),
              (uVar5 & 1) == 0) {
          plVar8 = (long *)plVar8[2];
          if (plVar8 == (long *)0x0) goto LAB_01520eb4;
        }
      }
    }
    BytecodeArrayBuilder::Bind((BytecodeArrayBuilder *)(*(long *)this + 0x18),local_60);
  }
  return;
}

