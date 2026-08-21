
/* v8::internal::SpaceIterator::Next() */

undefined8 __thiscall v8::internal::SpaceIterator::Next(SpaceIterator *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x10);
  *(int *)(this + 0x10) = (int)((long)iVar1 + 1);
  return *(undefined8 *)(*(long *)(this + 8) + ((long)iVar1 + 1) * 8 + 0x128);
}

