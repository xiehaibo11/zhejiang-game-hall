
/* v8::internal::compiler::StringRef::ToNumber() */

undefined1  [16] __thiscall v8::internal::compiler::StringRef::ToNumber(StringRef *this)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar4 = StringToDouble(0,**(undefined8 **)(this + 8),**(undefined8 **)this,0xb);
    uVar2 = 0;
    uVar3 = 1;
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (0x3f < *(ushort *)(*(long *)(lVar1 + 0x10) + 0x18)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsString()");
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    uVar2 = *(ulong *)(lVar1 + 0x20) & 0xffffffffffffff00;
    uVar3 = *(ulong *)(lVar1 + 0x20) & 0xff;
  }
  auVar5._0_8_ = uVar2 | uVar3;
  auVar5._8_8_ = uVar4;
  return auVar5;
}

