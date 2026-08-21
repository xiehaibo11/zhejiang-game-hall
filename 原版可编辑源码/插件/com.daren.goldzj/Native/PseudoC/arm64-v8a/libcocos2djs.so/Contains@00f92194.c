
/* v8::internal::Heap::ExternalStringTable::Contains(v8::internal::String) */

undefined8 __thiscall
v8::internal::Heap::ExternalStringTable::Contains(ExternalStringTable *this,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x10) - *(long *)(this + 8);
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      if ((int)*(undefined8 *)(*(long *)(this + 8) + uVar2 * 8) == param_2) {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)(lVar1 >> 3));
  }
  lVar1 = *(long *)(this + 0x28) - *(long *)(this + 0x20);
  if (lVar1 != 0) {
    uVar2 = 0;
    do {
      if ((int)*(undefined8 *)(*(long *)(this + 0x20) + uVar2 * 8) == param_2) {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)(lVar1 >> 3));
    return 0;
  }
  return 0;
}

