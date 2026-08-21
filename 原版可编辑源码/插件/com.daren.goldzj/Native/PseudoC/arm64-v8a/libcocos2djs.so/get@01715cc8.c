
/* v8::internal::compiler::ContextRef::get(int, v8::internal::compiler::SerializationPolicy) const
    */

void v8::internal::compiler::ContextRef::get
               (undefined1 *param_1,ObjectRef *param_2,int param_3,undefined4 param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ContextData *pCVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(int *)(*(undefined8 **)param_2 + 1) == 2) {
    uVar6 = *(ulong *)**(undefined8 **)param_2;
    uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + (long)(param_3 << 2) + 7);
    pIVar1 = (Isolate *)**(undefined8 **)(param_2 + 8);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar6;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar6);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,*(undefined8 *)(param_2 + 8),puVar2,0);
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    *(undefined8 *)(param_1 + 8) = local_40;
  }
  else {
    pCVar3 = (ContextData *)ObjectRef::data(param_2);
    if (*(int *)(pCVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (9 < *(ushort *)(*(long *)(pCVar3 + 0x10) + 0x18) - 0x88) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsContext()");
    }
    lVar4 = ContextData::GetSlot(pCVar3,*(undefined8 *)(param_2 + 8),param_3,param_4);
    if (lVar4 == 0) {
      *param_1 = 0;
      param_1[8] = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 8);
      *param_1 = 1;
      *(long *)(param_1 + 8) = lVar4;
      *(undefined8 *)(param_1 + 0x10) = uVar5;
    }
  }
  return;
}

