
/* v8::internal::compiler::BytecodeArrayRef::GetConstantAtIndex(int) const */

ulong * __thiscall
v8::internal::compiler::BytecodeArrayRef::GetConstantAtIndex(BytecodeArrayRef *this,int param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar3 = *(ulong *)**(undefined8 **)this;
    uVar5 = uVar3 & 0xffffffff00000000;
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(uVar3 + 7)) + (long)(param_1 << 2) + 7);
    pIVar4 = (Isolate *)**(undefined8 **)(this + 8);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar5;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar5);
    }
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0x86) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsBytecodeArray()");
    }
    puVar1 = (ulong *)**(long **)(*(long *)(lVar2 + 0x90) + (long)param_1 * 8);
  }
  return puVar1;
}

