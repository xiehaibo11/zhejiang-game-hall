
/* v8::internal::BreakableStatement::labels() const */

undefined8 __thiscall v8::internal::BreakableStatement::labels(BreakableStatement *this)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(this + 4) & 0x3f;
  lVar2 = 1;
  if ((4 < uVar1 - 2) && (uVar1 != 8)) {
    if (uVar1 != 7) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if ((*(uint *)(this + 4) >> 8 & 1) == 0) {
      return 0;
    }
    lVar2 = 4;
  }
  return *(undefined8 *)(this + lVar2 * 8);
}

