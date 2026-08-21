
/* v8::internal::compiler::StringRef::IsSeqString() const */

bool __thiscall v8::internal::compiler::StringRef::IsSeqString(StringRef *this)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar2 = *(ulong *)**(undefined8 **)this;
    uVar3 = uVar2 & 0xffffffff00000000 | 7;
    if (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40) {
      return (*(byte *)(uVar3 + *(uint *)(uVar2 - 1)) & 7) == 0;
    }
    return false;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(ushort *)(*(long *)(lVar1 + 0x10) + 0x18) < 0x40) {
    return *(char *)(lVar1 + 0x31) != '\0';
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsString()");
}

