
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::StringRef::GetFirstChar() */

ulong __thiscall v8::internal::compiler::StringRef::GetFirstChar(StringRef *this)

{
  ulong uVar1;
  long lVar2;
  uint local_20 [2];
  ulong local_18;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    local_18 = *(ulong *)**(undefined8 **)this;
    local_20[1] = 0;
    local_20[0] = (uint)*(ushort *)
                         ((local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 - 1)) + 7);
    uVar1 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (local_20,&local_18,local_20 + 1);
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (0x3f < *(ushort *)(*(long *)(lVar2 + 0x10) + 0x18)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsString()");
    }
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x1c);
  }
  return uVar1;
}

