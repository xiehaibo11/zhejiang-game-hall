
/* v8::internal::compiler::OffHeapBytecodeArray::GetConstantAtIndexAsSmi(int) const */

ulong __thiscall
v8::internal::compiler::OffHeapBytecodeArray::GetConstantAtIndexAsSmi
          (OffHeapBytecodeArray *this,int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = *(undefined8 **)(this + 8);
  if (*(int *)(puVar2 + 1) == 2) {
    uVar3 = *(ulong *)*puVar2;
    uVar4 = uVar3 & 0xffffffff00000000;
    uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(uVar3 + 7)) + (long)(param_1 << 2) + 7);
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)(this + 8));
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0x86) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsBytecodeArray()");
    }
    uVar4 = *(ulong *)**(undefined8 **)(*(long *)(lVar1 + 0x90) + (long)param_1 * 8);
  }
  return uVar4;
}

