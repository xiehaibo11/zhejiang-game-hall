
/* v8::internal::compiler::SharedFunctionInfoRef::GetBytecodeArray() const */

undefined1  [16] __thiscall
v8::internal::compiler::SharedFunctionInfoRef::GetBytecodeArray(SharedFunctionInfoRef *this)

{
  undefined8 uVar1;
  short sVar2;
  undefined1 auVar3 [16];
  long lVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long local_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(this + 8);
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar8 = *(ulong *)**(undefined8 **)this;
    uVar9 = uVar8 & 0xffffffff00000000;
    uVar12 = uVar9 | *(uint *)(uVar8 + 0xf);
    uVar11 = uVar9 | 7;
    if ((*(short *)(uVar11 + *(uint *)(uVar12 - 1)) == 0x5b) &&
       (*(short *)(uVar11 + *(uint *)((uVar9 | *(uint *)(uVar12 + 0x13)) - 1)) == 0x86)) {
      uVar10 = *(uint *)(uVar12 + 0xf);
    }
    else {
      uVar10 = *(uint *)(uVar8 + 3);
      if (((uVar10 & 1) == 0) || (*(short *)(uVar11 + *(uint *)((uVar9 | uVar10) - 1)) != 0x86)) {
        uVar10 = *(uint *)((uVar9 | *(uint *)(uVar8 + 3)) + 3);
      }
      else {
        uVar10 = *(uint *)(uVar8 + 3);
      }
    }
    pIVar5 = (Isolate *)**(undefined8 **)(this + 8);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar9 | uVar10;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar9 | uVar10);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,uVar1,puVar6,0);
  }
  else {
    lVar4 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar4 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar4 + 0x10) + 0x18) != 0xa6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    local_40 = *(long *)(lVar4 + 0x20);
    uStack_38 = uVar1;
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
  }
  puVar7 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar7 + 1) == 2) {
    uVar8 = *(ulong *)*puVar7;
    if ((uVar8 & 1) == 0) goto LAB_0172cc78;
    sVar2 = *(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1));
  }
  else {
    if (*(int *)(puVar7 + 1) == 0) goto LAB_0172cc78;
    sVar2 = *(short *)(puVar7[2] + 0x18);
  }
  if (sVar2 == 0x86) {
    auVar3._8_8_ = uStack_38;
    auVar3._0_8_ = local_40;
    return auVar3;
  }
LAB_0172cc78:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsBytecodeArray()");
}

