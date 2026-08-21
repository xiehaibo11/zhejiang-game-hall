
/* v8::internal::compiler::UsePosition::HasHint() const */

bool __thiscall v8::internal::compiler::UsePosition::HasHint(UsePosition *this)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 != 0) {
    switch(*(uint *)(this + 0x1c) >> 2 & 7) {
    case 0:
    case 4:
      return false;
    case 1:
      return true;
    case 2:
      bVar1 = (*(uint *)(lVar2 + 0x1c) & 0xfc0) == 0x800;
      break;
    case 3:
      bVar1 = *(int *)(lVar2 + 0x30) == 0x20;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    return !bVar1;
  }
  return false;
}

