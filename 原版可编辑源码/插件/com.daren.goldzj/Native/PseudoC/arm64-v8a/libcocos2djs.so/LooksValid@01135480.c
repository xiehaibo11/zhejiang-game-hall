
/* v8::internal::String::LooksValid() */

undefined8 __thiscall v8::internal::String::LooksValid(String *this)

{
  ulong uVar1;
  undefined8 uVar2;
  Heap *pHVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)this;
  uVar1 = ReadOnlyHeap::Contains(uVar4);
  if ((uVar1 & 1) == 0) {
    pHVar3 = *(Heap **)((uVar4 & 0xfffffffffffc0000) + 0x18);
    uVar2 = 0;
    if (pHVar3 != (Heap *)0x0) {
      uVar2 = Heap::Contains(pHVar3,*(undefined8 *)this);
      return uVar2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

