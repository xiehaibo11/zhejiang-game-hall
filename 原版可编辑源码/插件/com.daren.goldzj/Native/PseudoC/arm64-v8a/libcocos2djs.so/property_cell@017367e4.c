
/* v8::internal::compiler::GlobalAccessFeedback::property_cell() const */

void __thiscall
v8::internal::compiler::GlobalAccessFeedback::property_cell(GlobalAccessFeedback *this)

{
  short sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (this[8] != (GlobalAccessFeedback)0x0) {
    puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)(this + 0x10));
    if (*(int *)(puVar2 + 1) == 2) {
      uVar3 = *(ulong *)*puVar2;
      if ((uVar3 & 1) == 0) goto LAB_0173685c;
      sVar1 = *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1));
    }
    else {
      if (*(int *)(puVar2 + 1) == 0) goto LAB_0173685c;
      sVar1 = *(short *)(puVar2[2] + 0x18);
    }
    if (sVar1 == 0xa5) {
      ObjectRef::AsPropertyCell((ObjectRef *)(this + 0x10));
      return;
    }
  }
LAB_0173685c:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsPropertyCell()");
}

