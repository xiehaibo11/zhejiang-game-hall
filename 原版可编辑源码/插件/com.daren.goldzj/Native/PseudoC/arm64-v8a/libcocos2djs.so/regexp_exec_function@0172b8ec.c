
/* v8::internal::compiler::NativeContextRef::regexp_exec_function() const */

undefined1  [16] __thiscall
v8::internal::compiler::NativeContextRef::regexp_exec_function(NativeContextRef *this)

{
  short sVar1;
  undefined1 auVar2 [16];
  Isolate *pIVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long local_40;
  undefined8 *puStack_38;
  
  puVar6 = *(undefined8 **)(this + 8);
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar7 = *(ulong *)**(undefined8 **)this;
    pIVar3 = (Isolate *)*puVar6;
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x23f);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar6,puVar4,0);
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
    local_40 = *(long *)(lVar5 + 0x198);
    puStack_38 = puVar6;
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
  }
  puVar6 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar6 + 1) == 2) {
    uVar7 = *(ulong *)*puVar6;
    if ((uVar7 & 1) == 0) goto LAB_0172ba2c;
    sVar1 = *(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1));
  }
  else {
    if (*(int *)(puVar6 + 1) == 0) goto LAB_0172ba2c;
    sVar1 = *(short *)(puVar6[2] + 0x18);
  }
  if (sVar1 == 0x439) {
    auVar2._8_8_ = puStack_38;
    auVar2._0_8_ = local_40;
    return auVar2;
  }
LAB_0172ba2c:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsJSFunction()");
}

