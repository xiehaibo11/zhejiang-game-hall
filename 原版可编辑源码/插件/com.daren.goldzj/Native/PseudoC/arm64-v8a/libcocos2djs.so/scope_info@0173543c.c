
/* v8::internal::compiler::SharedFunctionInfoRef::scope_info() const */

undefined1  [16] __thiscall
v8::internal::compiler::SharedFunctionInfoRef::scope_info(SharedFunctionInfoRef *this)

{
  uint uVar1;
  short sVar2;
  undefined1 auVar3 [16];
  Isolate *pIVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long local_40;
  undefined8 *puStack_38;
  
  puVar7 = *(undefined8 **)(this + 8);
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar9 = *(ulong *)**(undefined8 **)this;
    uVar1 = *(uint *)(uVar9 + 7);
    pIVar4 = (Isolate *)(uVar9 & 0xffffffff00000000);
    if (((uVar1 & 1) == 0) ||
       (uVar9 = (ulong)pIVar4 | (ulong)uVar1, puVar8 = puVar7,
       *(short *)(((ulong)pIVar4 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x83)) {
      uVar9 = ScopeInfo::Empty(pIVar4);
      puVar8 = *(undefined8 **)(this + 8);
    }
    pIVar4 = (Isolate *)*puVar8;
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar9;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,puVar7,puVar5,0);
  }
  else {
    lVar6 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar6 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar6 + 0x10) + 0x18) != 0xa6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    local_40 = *(long *)(lVar6 + 0x70);
    puStack_38 = puVar7;
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
  }
  puVar7 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar7 + 1) == 2) {
    uVar9 = *(ulong *)*puVar7;
    if ((uVar9 & 1) == 0) goto LAB_017355a8;
    sVar2 = *(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1));
  }
  else {
    if (*(int *)(puVar7 + 1) == 0) goto LAB_017355a8;
    sVar2 = *(short *)(puVar7[2] + 0x18);
  }
  if (sVar2 == 0x83) {
    auVar3._8_8_ = puStack_38;
    auVar3._0_8_ = local_40;
    return auVar3;
  }
LAB_017355a8:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsScopeInfo()");
}

