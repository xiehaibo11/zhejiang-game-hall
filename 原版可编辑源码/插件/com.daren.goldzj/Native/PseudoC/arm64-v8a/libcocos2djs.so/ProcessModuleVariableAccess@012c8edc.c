
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessModuleVariableAccess(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessModuleVariableAccess
          (SerializerForBackgroundCompilation *this,BytecodeArrayIterator *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 local_48 [16];
  ObjectRef aOStack_38 [16];
  long *local_28;
  
  uVar1 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand
                    ((BytecodeArrayAccessor *)param_1,1);
  local_28 = (long *)0x0;
  ProcessContextAccess(this,*(long *)(this + 0x28) + 0x28,2,uVar1,1,&local_28);
  if (local_28 != (long *)0x0) {
    for (puVar3 = (undefined8 *)*local_28; puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[1]) {
      ObjectRef::ObjectRef(aOStack_38,*(undefined8 *)this,*puVar3,1);
      uVar2 = ObjectRef::IsSourceTextModule(aOStack_38);
      if ((uVar2 & 1) != 0) {
        auVar4 = ObjectRef::AsSourceTextModule(aOStack_38);
        local_48 = auVar4;
        SourceTextModuleRef::Serialize((SourceTextModuleRef *)local_48);
      }
    }
  }
  return;
}

