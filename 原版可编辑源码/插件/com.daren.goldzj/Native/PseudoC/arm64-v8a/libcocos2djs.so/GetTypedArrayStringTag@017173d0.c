
/* v8::internal::compiler::JSHeapBroker::GetTypedArrayStringTag(v8::internal::ElementsKind) */

undefined1  [16] __thiscall
v8::internal::compiler::JSHeapBroker::GetTypedArrayStringTag(JSHeapBroker *this,ulong param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long local_30;
  JSHeapBroker *pJStack_28;
  
  uVar3 = (param_2 & 0xff) - 0x11;
  if ((ulong)(*(long *)(this + 0x230) - *(long *)(this + 0x228) >> 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","idx < typed_array_string_tags_.size()");
  }
  lVar4 = *(long *)(*(long *)(this + 0x228) + uVar3 * 8);
  local_30 = lVar4;
  pJStack_28 = this;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(data_) != nullptr");
  }
  puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_30);
  if (*(int *)(puVar2 + 1) == 2) {
    uVar3 = *(ulong *)*puVar2;
    if ((uVar3 & 1) == 0) goto LAB_01717474;
    uVar1 = *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1));
  }
  else {
    if (*(int *)(puVar2 + 1) == 0) goto LAB_01717474;
    uVar1 = *(ushort *)(puVar2[2] + 0x18);
  }
  if (uVar1 < 0x40) {
    auVar5._8_8_ = this;
    auVar5._0_8_ = lVar4;
    return auVar5;
  }
LAB_01717474:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsString()");
}

