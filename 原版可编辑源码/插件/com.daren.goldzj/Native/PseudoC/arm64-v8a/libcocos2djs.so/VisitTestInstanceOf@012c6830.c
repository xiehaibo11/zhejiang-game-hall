
/* WARNING: Removing unreachable block (ram,0x012c6a6c) */
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitTestInstanceOf(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitTestInstanceOf
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ProcessedFeedback *this_00;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  Zone *this_01;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  int local_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(this + 0x28);
  local_58[0] = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                          ((BytecodeArrayAccessor *)param_1,0);
  uVar4 = interpreter::Register::is_function_closure((Register *)local_58);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = interpreter::Register::is_current_context((Register *)local_58), (uVar4 & 1) == 0)) {
    local_80 = CONCAT44(local_80._4_4_,local_58[0]);
    if (local_58[0] < 0) {
      uVar2 = interpreter::Register::ToParameterIndex((Register *)&local_80,*(int *)(lVar8 + 0x18));
      lVar7 = *(long *)(lVar8 + 0x30);
    }
    else {
      uVar2 = *(int *)(lVar8 + 0x18) + local_58[0];
      lVar7 = *(long *)(lVar8 + 0x30);
    }
    if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar8 + 0x38) - lVar7 >> 3) <= (ulong)uVar2)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","local_index < ephemeral_hints_.size()");
    }
  }
  lVar8 = *(long *)(this + 0x28);
  uVar2 = *(int *)(lVar8 + 0x1c) + *(int *)(lVar8 + 0x18);
  if ((-1 < (int)uVar2) &&
     ((ulong)(*(long *)(lVar8 + 0x38) - *(long *)(lVar8 + 0x30) >> 3) <= (ulong)uVar2))
  goto LAB_012c6ae4;
  plVar10 = *(long **)(*(long *)(lVar8 + 0x30) + (long)(int)uVar2 * 8);
  local_60 = plVar10;
  iVar3 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,1);
  if ((iVar3 == -1) || (*(long *)(*(long *)(this + 0x28) + 8) == 0)) goto LAB_012c6aa4;
  FeedbackSource::FeedbackSource
            ((FeedbackSource *)local_58,*(long *)(*(long *)(this + 0x28) + 8),iVar3);
  this_00 = (ProcessedFeedback *)
            JSHeapBroker::ProcessFeedbackForInstanceOf
                      (*(JSHeapBroker **)this,(FeedbackSource *)local_58);
  if (*(int *)this_00 != 0) {
    lVar8 = ProcessedFeedback::AsInstanceOf(this_00);
    if (*(char *)(lVar8 + 8) != '\0') {
      this_01 = *(Zone **)(this + 0x20);
      if (this_01 == (Zone *)0x0) {
        this_01 = (Zone *)ZoneStats::NewEmptyZone
                                    (*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
        *(Zone **)(this + 0x20) = this_01;
        if (plVar10 != (long *)0x0) goto LAB_012c6970;
LAB_012c69d8:
        plVar6 = (long *)0x0;
      }
      else {
        if (plVar10 == (long *)0x0) goto LAB_012c69d8;
LAB_012c6970:
        plVar6 = *(long **)(this_01 + 0x10);
        if ((ulong)(*(long *)(this_01 + 0x18) - (long)plVar6) < 0x30) {
          plVar6 = (long *)Zone::NewExpand(this_01,0x30);
        }
        else {
          *(long **)(this_01 + 0x10) = plVar6 + 6;
        }
        plVar6[1] = 0;
        *plVar6 = 0;
        plVar6[3] = 0;
        plVar6[2] = 0;
        plVar6[4] = 0;
        plVar6[5] = (long)this_01;
        *plVar6 = *plVar10;
        plVar6[1] = local_60[1];
        plVar6[3] = local_60[3];
        plVar6[2] = local_60[2];
        plVar6[4] = local_60[4];
      }
      local_70 = *(undefined8 *)(lVar8 + 0x18);
      uStack_78 = *(undefined8 *)(lVar8 + 0x10);
      local_80 = *(undefined8 *)(lVar8 + 8);
      local_60 = plVar6;
      uVar5 = JSObjectRef::object((JSObjectRef *)((ulong)&local_80 | 8));
      lVar8 = *(long *)(this + 0x20);
      if (lVar8 == 0) {
        lVar8 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
        *(long *)(this + 0x20) = lVar8;
      }
      Hints::AddConstant((Hints *)&local_60,uVar5,lVar8);
      plVar10 = local_60;
    }
  }
  if (plVar10 != (long *)0x0) {
    for (puVar9 = (undefined8 *)*plVar10; puVar9 != (undefined8 *)0x0;
        puVar9 = (undefined8 *)puVar9[1]) {
      ObjectRef::ObjectRef((ObjectRef *)&local_80,*(undefined8 *)this,*puVar9,1);
      ProcessConstantForInstanceOf((ObjectRef *)this,(bool *)&local_80);
    }
  }
  lVar8 = *(long *)(this + 0x28);
  uVar2 = *(int *)(lVar8 + 0x1c) + *(int *)(lVar8 + 0x18);
  if (((int)uVar2 < 0) ||
     ((ulong)uVar2 < (ulong)(*(long *)(lVar8 + 0x38) - *(long *)(lVar8 + 0x30) >> 3))) {
    *(undefined8 *)(*(long *)(lVar8 + 0x30) + (long)(int)uVar2 * 8) = 0;
LAB_012c6aa4:
    if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_012c6ae4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
}

