
/* v8::internal::TranslatedFrame::GetValueCount() */

int __thiscall v8::internal::TranslatedFrame::GetValueCount(TranslatedFrame *this)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 - 2U < 4) {
    return *(int *)(this + 0x18) + 2;
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return *(int *)(this + 0x18) + 1;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return *(int *)(this + 0x18) + (uint)(ushort)(*(short *)(*(long *)(this + 8) + 0x15) + 1) + 3;
}

