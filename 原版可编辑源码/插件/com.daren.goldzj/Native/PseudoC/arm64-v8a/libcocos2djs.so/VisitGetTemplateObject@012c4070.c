
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitGetTemplateObject(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitGetTemplateObject
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  JSArrayRef local_80 [16];
  ObjectRef aOStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  FeedbackSource aFStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar7 = *(undefined8 **)this;
  uVar4 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                    ((BytecodeArrayAccessor *)param_1,0,(Isolate *)*puVar7);
  ObjectRef::ObjectRef((ObjectRef *)&local_60,puVar7,uVar4,0);
  uVar5 = ObjectRef::IsTemplateObjectDescription((ObjectRef *)&local_60);
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsTemplateObjectDescription()");
  }
  uVar3 = interpreter::BytecodeArrayAccessor::GetSlotOperand((BytecodeArrayAccessor *)param_1,1);
  FeedbackSource::FeedbackSource(aFStack_48,*(undefined8 *)(*(long *)(this + 0x28) + 8),uVar3);
  ObjectRef::ObjectRef(aOStack_70,*(undefined8 *)this,**(undefined8 **)(this + 0x28),0);
  uVar5 = ObjectRef::IsSharedFunctionInfo(aOStack_70);
  if ((uVar5 & 1) != 0) {
    local_80 = (JSArrayRef  [16])
               SharedFunctionInfoRef::GetTemplateObject(aOStack_70,local_60,uStack_58,aFStack_48,1);
    uVar4 = JSArrayRef::object(local_80);
    lVar6 = *(long *)(this + 0x20);
    if (lVar6 == 0) {
      lVar6 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
      *(long *)(this + 0x20) = lVar6;
    }
    local_50 = 0;
    Hints::AddConstant((Hints *)&local_50,uVar4,lVar6);
    lVar6 = *(long *)(this + 0x28);
    uVar1 = *(int *)(lVar6 + 0x1c) + *(int *)(lVar6 + 0x18);
    if ((-1 < (int)uVar1) &&
       ((ulong)(*(long *)(lVar6 + 0x38) - *(long *)(lVar6 + 0x30) >> 3) <= (ulong)uVar1)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
    }
    *(undefined8 *)(*(long *)(lVar6 + 0x30) + (long)(int)uVar1 * 8) = local_50;
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
}

