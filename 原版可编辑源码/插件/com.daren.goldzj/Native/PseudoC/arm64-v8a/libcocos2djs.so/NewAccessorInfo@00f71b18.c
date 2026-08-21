
/* v8::internal::Factory::NewAccessorInfo() */

ulong * __thiscall v8::internal::Factory::NewAccessorInfo(Factory *this)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)NewStruct(this,0x51,1);
  uVar4 = *puVar1;
  uVar3 = *(ulong *)(this + 200);
  *(int *)(uVar4 + 3) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 3,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 3,uVar3);
    }
  }
  *(undefined4 *)(*puVar1 + 7) = 0;
  *(uint *)(*puVar1 + 7) = *(uint *)(*puVar1 + 7) & 0xfffffffe | 0x10;
  *(uint *)(*puVar1 + 7) = *(uint *)(*puVar1 + 7) & 0xffffe3fe;
  *(undefined4 *)(*puVar1 + 0x13) = 0;
  *(undefined4 *)(*puVar1 + 0xf) = 0;
  *(undefined4 *)(*puVar1 + 0x17) = 0;
  return puVar1;
}

