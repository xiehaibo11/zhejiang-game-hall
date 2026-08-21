
/* v8::internal::compiler::SharedFunctionInfoRef::context_header_size() const */

ulong __thiscall
v8::internal::compiler::SharedFunctionInfoRef::context_header_size(SharedFunctionInfoRef *this)

{
  uint uVar1;
  Isolate *pIVar2;
  long lVar3;
  ulong uVar4;
  ulong local_18;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar4 = *(ulong *)**(undefined8 **)this;
    uVar1 = *(uint *)(uVar4 + 7);
    pIVar2 = (Isolate *)(uVar4 & 0xffffffff00000000);
    if (((uVar1 & 1) == 0) ||
       (local_18 = (ulong)pIVar2 | (ulong)uVar1,
       *(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(local_18 - 1)) != 0x83)) {
      local_18 = ScopeInfo::Empty(pIVar2);
    }
    uVar4 = ScopeInfo::ContextHeaderLength((ScopeInfo *)&local_18);
  }
  else {
    lVar3 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar3 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar3 + 0x10) + 0x18) != 0xa6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    uVar4 = (ulong)*(uint *)(lVar3 + 0x1c);
  }
  return uVar4;
}

