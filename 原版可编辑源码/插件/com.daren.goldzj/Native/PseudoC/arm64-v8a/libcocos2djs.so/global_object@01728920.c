
/* v8::internal::compiler::NativeContextRef::global_object() const */

undefined1  [16] __thiscall
v8::internal::compiler::NativeContextRef::global_object(NativeContextRef *this)

{
  undefined8 uVar1;
  short sVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  Isolate *pIVar7;
  undefined1 auVar8 [16];
  long local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  uVar1 = *(undefined8 *)(this + 8);
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    local_18 = *(undefined8 *)**(undefined8 **)this;
    uVar3 = Context::global_object((Context *)&local_18);
    pIVar7 = (Isolate *)**(undefined8 **)(this + 8);
    if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar7 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar3;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar3);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,uVar1,puVar4,0);
    puVar6 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
    lVar5 = local_40;
    uVar1 = uStack_38;
    if (*(int *)(puVar6 + 1) == 2) {
      uVar3 = *(ulong *)*puVar6;
      if ((uVar3 & 1) == 0) goto LAB_01728ab0;
      sVar2 = *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1));
    }
    else {
      if (*(int *)(puVar6 + 1) == 0) goto LAB_01728ab0;
      sVar2 = *(short *)(puVar6[2] + 0x18);
    }
  }
  else {
    lVar5 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar5 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar5 + 0x10) + 0x18) != 0x8f) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsNativeContext()");
    }
    lVar5 = *(long *)(lVar5 + 0x98);
    local_40 = lVar5;
    uStack_38 = uVar1;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
    puVar6 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
    if (*(int *)(puVar6 + 1) == 2) {
      uVar3 = *(ulong *)*puVar6;
      if ((uVar3 & 1) == 0) goto LAB_01728ab0;
      sVar2 = *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1));
    }
    else {
      if (*(int *)(puVar6 + 1) == 0) goto LAB_01728ab0;
      sVar2 = *(short *)(puVar6[2] + 0x18);
    }
  }
  if (sVar2 == 0xaa) {
    auVar8._8_8_ = uVar1;
    auVar8._0_8_ = lVar5;
    return auVar8;
  }
LAB_01728ab0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsJSGlobalObject()");
}

