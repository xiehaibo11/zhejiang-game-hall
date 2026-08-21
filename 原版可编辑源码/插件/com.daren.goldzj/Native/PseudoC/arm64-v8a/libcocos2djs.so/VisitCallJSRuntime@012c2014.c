
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallJSRuntime(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::VisitCallJSRuntime
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetNativeContextIndexOperand
                    ((BytecodeArrayAccessor *)param_1,0);
  lVar4 = *(long *)this;
  if (*(char *)(lVar4 + 0x18) == '\x01') {
    uStack_68 = *(undefined8 *)(lVar4 + 0x28);
    local_70 = *(undefined8 *)(lVar4 + 0x20);
    ContextRef::get(&local_58,&local_70,uVar1,1);
    if (local_58._0_1_ == (Hints)0x1) {
      uStack_38 = uStack_48;
      local_40 = local_50;
      uVar3 = ObjectRef::object((ObjectRef *)&local_40);
      lVar4 = *(long *)(this + 0x20);
      if (lVar4 == 0) {
        lVar4 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
        *(long *)(this + 0x20) = lVar4;
      }
      local_58 = 0;
      Hints::AddConstant((Hints *)&local_58,uVar3,lVar4);
      uVar1 = interpreter::BytecodeArrayAccessor::GetRegisterOperand
                        ((BytecodeArrayAccessor *)param_1,1);
      uVar2 = interpreter::BytecodeArrayAccessor::GetRegisterCountOperand
                        ((BytecodeArrayAccessor *)param_1,2);
      ProcessCallVarArgs(this,0,&local_58,uVar1,uVar2,0xffffffff,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","storage_.is_populated_");
}

