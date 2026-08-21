
/* v8::internal::compiler::JSGlobalObjectRef::IsDetached() const */

void __thiscall v8::internal::compiler::JSGlobalObjectRef::IsDetached(JSGlobalObjectRef *this)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong local_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar4 = *(ulong *)**(undefined8 **)this;
    local_50 = uVar4 & 0xffffffff00000000;
    local_38 = 0;
    local_48 = local_50 | *(uint *)(uVar4 + 0xf);
    local_34 = 0;
    uStack_40 = 0;
    local_30 = 0;
    PrototypeIterator::Advance((PrototypeIterator *)&local_50);
    bVar2 = (int)local_48 == (int)uVar4;
  }
  else {
    lVar3 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar3 + 0x10) + 0x18) != 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSGlobalObject()");
    }
    bVar2 = *(char *)(lVar3 + 0xb0) == '\0';
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(!bVar2);
}

