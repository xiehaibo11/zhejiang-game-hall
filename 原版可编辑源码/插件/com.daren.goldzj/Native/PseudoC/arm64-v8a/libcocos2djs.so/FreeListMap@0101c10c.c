
/* v8::internal::FreeListMap::FreeListMap() */

void __thiscall v8::internal::FreeListMap::FreeListMap(FreeListMap *this)

{
  undefined8 *puVar1;
  long lVar2;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x10) = 0x28;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = 1;
  *(undefined ***)this = &PTR__FreeListMap_01ca9838;
  puVar1 = operator_new__(8);
  lVar2 = 0;
  *puVar1 = 0;
  *(undefined8 **)(this + 0x20) = puVar1;
  do {
    *(undefined8 *)(*(long *)(this + 0x20) + lVar2 * 8) = 0;
    lVar2 = lVar2 + 1;
  } while (lVar2 < *(int *)(this + 8));
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

