
/* v8::internal::UnbufferedCharacterStream<v8::internal::ExternalStringStream>::ReadBlock() */

bool __thiscall
v8::internal::UnbufferedCharacterStream<v8::internal::ExternalStringStream>::ReadBlock
          (UnbufferedCharacterStream<v8::internal::ExternalStringStream> *this)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 0x48);
  uVar1 = *(long *)(this + 0x20) + (*(long *)(this + 0x10) - *(long *)(this + 8) >> 1);
  *(ulong *)(this + 0x18) = *(long *)(this + 0x40) + uVar4 * 2;
  *(ulong *)(this + 0x20) = uVar1;
  uVar3 = uVar4;
  if (uVar1 <= uVar4) {
    uVar3 = uVar1;
  }
  lVar2 = *(long *)(this + 0x40) + uVar3 * 2;
  *(long *)(this + 8) = lVar2;
  *(long *)(this + 0x10) = lVar2;
  return (uVar4 - uVar3 & 0x7fffffffffffffff) != 0;
}

