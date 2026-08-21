
/* v8::internal::LargeObjectSpaceObjectIterator::Next() */

long __thiscall
v8::internal::LargeObjectSpaceObjectIterator::Next(LargeObjectSpaceObjectIterator *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x20) + 1;
    *(undefined8 *)(this + 8) = *(undefined8 *)(lVar1 + 0xe0);
  }
  return lVar2;
}

