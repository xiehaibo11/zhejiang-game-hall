
/* v8::internal::compiler::GlobalAccessFeedback::script_context() const */

void __thiscall
v8::internal::compiler::GlobalAccessFeedback::script_context(GlobalAccessFeedback *this)

{
  ushort uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (this[8] != (GlobalAccessFeedback)0x0) {
    puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)(this + 0x10));
    if (*(int *)(puVar2 + 1) == 2) {
      uVar3 = *(ulong *)*puVar2;
      if ((uVar3 & 1) == 0) goto LAB_017368e4;
      uVar1 = *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1));
    }
    else {
      if (*(int *)(puVar2 + 1) == 0) goto LAB_017368e4;
      uVar1 = *(ushort *)(puVar2[2] + 0x18);
    }
    if (uVar1 - 0x88 < 10) {
      ObjectRef::AsContext((ObjectRef *)(this + 0x10));
      return;
    }
  }
LAB_017368e4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsScriptContextSlot()");
}

