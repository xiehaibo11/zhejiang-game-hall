
/* v8::internal::CodeSerializer::SerializeGeneric(v8::internal::HeapObject) */

void __thiscall
v8::internal::CodeSerializer::SerializeGeneric(CodeSerializer *this,undefined8 param_2)

{
  long lVar1;
  undefined **local_50;
  CodeSerializer *pCStack_48;
  undefined8 local_40;
  CodeSerializer *pCStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pCStack_38 = this + 0x50;
  local_50 = &PTR__ObjectVisitor_01cbba18;
  local_30 = 0;
  pCStack_48 = this;
  local_40 = param_2;
  Serializer::ObjectSerializer::Serialize((ObjectSerializer *)&local_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

