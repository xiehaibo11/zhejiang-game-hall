
/* v8::internal::wasm::ZoneBuffer::write_size(unsigned long) */

void __thiscall v8::internal::wasm::ZoneBuffer::write_size(ZoneBuffer *this,ulong param_1)

{
  Zone *this_00;
  uint uVar1;
  bool bVar2;
  void *__dest;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  
  pbVar6 = *(byte **)(this + 0x10);
  uVar7 = (uint)param_1;
  if (*(byte **)(this + 0x18) < pbVar6 + 5) {
    this_00 = *(Zone **)this;
    __dest = *(void **)(this_00 + 0x10);
    lVar5 = ((long)*(byte **)(this + 0x18) - *(long *)(this + 8)) * 2;
    uVar3 = lVar5 + 0xcU & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)__dest) < uVar3) {
      __dest = (void *)Zone::NewExpand(this_00,uVar3);
    }
    else {
      *(ulong *)(this_00 + 0x10) = uVar3 + (long)__dest;
    }
    memcpy(__dest,*(void **)(this + 8),*(long *)(this + 0x10) - (long)*(void **)(this + 8));
    *(long *)(this + 0x18) = (long)__dest + lVar5 + 5;
    pbVar6 = (byte *)((long)__dest + (*(long *)(this + 0x10) - *(long *)(this + 8)));
    *(void **)(this + 8) = __dest;
    *(byte **)(this + 0x10) = pbVar6;
  }
  if (0x7f < uVar7) {
    bVar2 = 0x3fff < uVar7;
    *(byte **)(this + 0x10) = pbVar6 + 1;
    *pbVar6 = (byte)param_1 | 0x80;
    uVar7 = uVar7 >> 7;
    uVar4 = uVar7;
    if (bVar2) {
      do {
        pbVar6 = *(byte **)(this + 0x10);
        uVar7 = uVar4 >> 7;
        uVar1 = uVar4 >> 0xe;
        *(byte **)(this + 0x10) = pbVar6 + 1;
        *pbVar6 = (byte)uVar4 | 0x80;
        uVar4 = uVar7;
      } while (uVar1 != 0);
    }
    pbVar6 = *(byte **)(this + 0x10);
  }
  *(byte **)(this + 0x10) = pbVar6 + 1;
  *pbVar6 = (byte)uVar7 & 0x7f;
  return;
}

