
/* v8::internal::compiler::SharedFunctionInfoRef::IsUserJavaScript() const */

byte __thiscall
v8::internal::compiler::SharedFunctionInfoRef::IsUserJavaScript(SharedFunctionInfoRef *this)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_18;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar3 = *(ulong *)**(undefined8 **)this;
    uVar4 = uVar3 & 0xffffffff00000000;
    local_18 = uVar4 | *(uint *)(uVar3 + 0xf);
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x5b) {
      local_18 = uVar4 | *(uint *)(local_18 + 0xb);
    }
    if (((local_18 & 1) == 0) || ((int)local_18 != *(int *)((local_18 & 0xffffffff00000000) + 0xa0))
       ) {
      bVar1 = Script::IsUserJavaScript((Script *)&local_18);
    }
    else {
      bVar1 = 0;
    }
  }
  else {
    lVar2 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) != 0xa6) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    bVar1 = *(char *)(lVar2 + 0x45) != '\0';
  }
  return bVar1 & 1;
}

