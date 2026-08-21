
/* v8::internal::interpreter::BytecodeGenerator::VisitDoWhileStatement(v8::internal::DoWhileStatement*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitDoWhileStatement
          (BytecodeGenerator *this,DoWhileStatement *param_1)

{
  long *plVar1;
  BytecodeArrayBuilder *pBVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 *local_f0;
  long *local_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined **local_c8;
  BytecodeArrayBuilder *pBStack_c0;
  undefined8 ***local_b8;
  undefined8 ***pppuStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  DoWhileStatement *local_90;
  BlockCoverageBuilder *pBStack_88;
  undefined8 local_80;
  undefined8 ***local_78;
  undefined8 ***pppuStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pBVar2 = (BytecodeArrayBuilder *)(this + 0x18);
  local_c8 = &PTR__LoopBuilder_01cc7128;
  pBStack_88 = *(BlockCoverageBuilder **)(this + 0x208);
  uStack_a0 = *(undefined8 *)(this + 0x18);
  local_78 = &local_78;
  local_98 = 0;
  local_80 = 0xffffffffffffffff;
  local_a8 = 0;
  local_68 = 0;
  local_58 = 0;
  pBStack_c0 = pBVar2;
  local_b8 = &local_b8;
  pppuStack_b0 = &local_b8;
  local_90 = param_1;
  pppuStack_70 = local_78;
  uStack_60 = uStack_a0;
  if (pBStack_88 != (BlockCoverageBuilder *)0x0) {
    local_50 = BlockCoverageBuilder::AllocateBlockCoverageSlot(pBStack_88,param_1,0);
  }
  uVar5 = Expression::ToBooleanIsFalse(*(Expression **)(param_1 + 0x20));
  if ((uVar5 & 1) == 0) {
    uVar5 = Expression::ToBooleanIsTrue(*(Expression **)(param_1 + 0x20));
    LoopBuilder::LoopHeader((LoopBuilder *)&local_c8);
    VisitIterationBody(this,(IterationStatement *)param_1,(LoopBuilder *)&local_c8);
    if ((uVar5 & 1) == 0) {
      piVar6 = *(int **)(param_1 + 0x20);
      iVar3 = *piVar6;
      if (iVar3 != -1) {
        this[0x1c0] = (BytecodeGenerator)0x2;
        *(int *)(this + 0x1c4) = iVar3;
        piVar6 = *(int **)(param_1 + 0x20);
      }
      uStack_d8 = *(undefined8 *)(this + 0x10);
      local_e0 = 0;
      local_d0 = 0;
      local_f0 = (undefined1 *)&local_f0;
      local_e8 = (long *)&local_f0;
      VisitForTest(this,piVar6,&local_f0,&local_b8,0);
      BytecodeLabels::Bind((BytecodeLabels *)&local_f0,pBVar2);
      LoopBuilder::JumpToHeader((LoopBuilder *)&local_c8,*(int *)(this + 0x334));
      if (local_e0 != 0) {
        *(undefined8 *)(*local_e8 + 8) = *(undefined8 *)(local_f0 + 8);
        **(long **)(local_f0 + 8) = *local_e8;
        local_e0 = 0;
        plVar7 = local_e8;
        if ((undefined1 **)local_e8 != &local_f0) {
          do {
            plVar1 = plVar7 + 1;
            plVar7 = (long *)*plVar1;
          } while ((undefined1 **)*plVar1 != &local_f0);
        }
      }
    }
    else {
      LoopBuilder::JumpToHeader((LoopBuilder *)&local_c8,*(int *)(this + 0x334));
    }
  }
  else {
    VisitIterationBody(this,(IterationStatement *)param_1,(LoopBuilder *)&local_c8);
  }
  LoopBuilder::~LoopBuilder((LoopBuilder *)&local_c8);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

