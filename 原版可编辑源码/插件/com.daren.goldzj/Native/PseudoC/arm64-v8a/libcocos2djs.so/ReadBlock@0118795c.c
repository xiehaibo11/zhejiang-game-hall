
/* v8::internal::UnbufferedCharacterStream<v8::internal::OnHeapStream>::ReadBlock() */

bool __thiscall
v8::internal::UnbufferedCharacterStream<v8::internal::OnHeapStream>::ReadBlock
          (UnbufferedCharacterStream<v8::internal::OnHeapStream> *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(this + 0x48);
  uVar1 = *(long *)(this + 0x20) + (*(long *)(this + 0x10) - *(long *)(this + 8) >> 1);
  *(ulong *)(this + 0x20) = uVar1;
  lVar7 = **(long **)(this + 0x38);
  uVar5 = uVar6;
  if (uVar1 <= uVar6) {
    uVar5 = uVar1;
  }
  lVar2 = uVar6 + *(long *)(this + 0x40);
  lVar3 = uVar5 + *(long *)(this + 0x40);
  lVar4 = lVar7 + 0xb + lVar3 * 2;
  *(long *)(this + 0x10) = lVar4;
  *(long *)(this + 0x18) = lVar7 + 0xb + lVar2 * 2;
  *(long *)(this + 8) = lVar4;
  return (lVar2 - lVar3 & 0x7fffffffffffffffU) != 0;
}

