
/* v8::internal::TextElement::length() const */

undefined4 __thiscall v8::internal::TextElement::length(TextElement *this)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(this + 4) != 1) {
    if (*(int *)(this + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = *(undefined4 *)(*(long *)(this + 8) + 0x10);
  }
  return uVar1;
}

