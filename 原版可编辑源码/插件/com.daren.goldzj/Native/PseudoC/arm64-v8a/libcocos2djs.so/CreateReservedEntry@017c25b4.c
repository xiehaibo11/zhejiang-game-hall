
/* v8::internal::interpreter::ConstantArrayBuilder::CreateReservedEntry() */

undefined1 __thiscall
v8::internal::interpreter::ConstantArrayBuilder::CreateReservedEntry(ConstantArrayBuilder *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)this;
  lVar2 = *(long *)(lVar1 + 0x10);
  if (*(long *)(lVar1 + 8) - lVar2 == *(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 4) {
    lVar1 = *(long *)(this + 8);
    lVar2 = *(long *)(lVar1 + 0x10);
    if (*(long *)(lVar1 + 8) - lVar2 == *(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 4) {
      lVar1 = *(long *)(this + 0x10);
      lVar2 = *(long *)(lVar1 + 0x10);
      if (*(long *)(lVar1 + 8) - lVar2 == *(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 4) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      lVar3 = 2;
    }
    else {
      lVar3 = 1;
    }
  }
  else {
    lVar3 = 0;
  }
  *(long *)(lVar1 + 0x10) = lVar2 + 1;
  return *(undefined1 *)(*(long *)(this + lVar3 * 8) + 0x18);
}

