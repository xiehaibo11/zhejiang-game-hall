
/* v8::internal::EternalHandles::PostGarbageCollectionProcessing() */

void __thiscall v8::internal::EternalHandles::PostGarbageCollectionProcessing(EternalHandles *this)

{
  uint uVar1;
  vector<int,std::__ndk1::allocator<int>> *this_00;
  uint *puVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  this_00 = (vector<int,std::__ndk1::allocator<int>> *)(this + 0x20);
  puVar2 = *(uint **)this_00;
  puVar4 = *(uint **)(this + 0x28);
  if (puVar2 == puVar4) {
    uVar3 = 0;
    uVar5 = (long)puVar4 - (long)puVar2 >> 2;
  }
  else {
    uVar5 = 0;
    do {
      uVar1 = *puVar2;
      uVar6 = *(ulong *)(*(long *)(*(long *)(this + 8) + (long)((int)uVar1 >> 8) * 8) +
                        ((ulong)uVar1 & 0xff) * 8);
      uVar3 = uVar5;
      if (((uVar6 & 1) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
        uVar3 = uVar5 + 1;
        *(uint *)(*(long *)this_00 + uVar5 * 4) = uVar1;
      }
      puVar2 = puVar2 + 1;
      uVar5 = uVar3;
    } while (puVar4 != puVar2);
    puVar2 = *(uint **)(this + 0x20);
    uVar5 = *(long *)(this + 0x28) - (long)puVar2 >> 2;
    if (uVar5 <= uVar3 && uVar3 - uVar5 != 0) {
      std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append(this_00,uVar3 - uVar5);
      return;
    }
  }
  if (uVar3 < uVar5) {
    *(uint **)(this + 0x28) = puVar2 + uVar3;
  }
  return;
}

