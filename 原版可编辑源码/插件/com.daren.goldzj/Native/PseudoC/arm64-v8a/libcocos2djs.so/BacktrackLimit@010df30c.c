
/* v8::internal::JSRegExp::BacktrackLimit() const */

int __thiscall v8::internal::JSRegExp::BacktrackLimit(JSRegExp *this)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(ulong *)this + 0xb);
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  if ((((uVar1 & 1) == 0) || (uVar1 != *(uint *)(uVar2 + 0xa0))) &&
     (uVar2 = uVar2 | uVar1, (*(uint *)(uVar2 + 7) & 0xfffffffe) == 4)) {
    return *(int *)(uVar2 + 0x33) >> 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","TypeTag() == IRREGEXP");
}

