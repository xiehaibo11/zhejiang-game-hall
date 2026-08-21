
/* v8::internal::compiler::ObjectRef::AsHeapObject() const */

undefined1  [16] __thiscall v8::internal::compiler::ObjectRef::AsHeapObject(ObjectRef *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(this + 8);
  auVar3._0_8_ = data(this);
  local_30 = auVar3._0_8_;
  uStack_28 = uVar2;
  if (auVar3._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(data_) != nullptr");
  }
  puVar1 = (undefined8 *)data((ObjectRef *)&local_30);
  if (*(int *)(puVar1 + 1) == 2) {
    if ((*(byte *)*puVar1 & 1) == 0) goto LAB_0171ace4;
  }
  else if (*(int *)(puVar1 + 1) == 0) {
LAB_0171ace4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsHeapObject()");
  }
  auVar3._8_8_ = uVar2;
  return auVar3;
}

