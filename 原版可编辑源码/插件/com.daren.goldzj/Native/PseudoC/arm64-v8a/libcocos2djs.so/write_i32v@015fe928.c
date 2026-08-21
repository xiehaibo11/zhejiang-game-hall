
/* v8::internal::wasm::ZoneBuffer::write_i32v(int) */

void __thiscall v8::internal::wasm::ZoneBuffer::write_i32v(ZoneBuffer *this,int param_1)

{
  Zone *this_00;
  uint uVar1;
  bool bVar2;
  void *__dest;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  
  pbVar6 = *(byte **)(this + 0x10);
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
  if (param_1 < 0) {
    if ((uint)param_1 < 0xffffffc0) {
      *(byte **)(this + 0x10) = pbVar6 + 1;
      *pbVar6 = (byte)param_1 | 0x80;
      while (param_1 = param_1 >> 7, (uint)param_1 < 0xffffffc0) {
        pbVar6 = *(byte **)(this + 0x10);
        *(byte **)(this + 0x10) = pbVar6 + 1;
        *pbVar6 = (byte)param_1 | 0x80;
      }
      pbVar6 = *(byte **)(this + 0x10);
    }
    *(byte **)(this + 0x10) = pbVar6 + 1;
    *pbVar6 = (byte)param_1 & 0x7f;
  }
  else {
    if (0x3f < param_1) {
      bVar2 = 0x1fff < (uint)param_1;
      *(byte **)(this + 0x10) = pbVar6 + 1;
      *pbVar6 = (byte)param_1 | 0x80;
      param_1 = (uint)param_1 >> 7;
      uVar4 = param_1;
      if (bVar2) {
        do {
          pbVar6 = *(byte **)(this + 0x10);
          param_1 = uVar4 >> 7;
          uVar1 = uVar4 >> 0xd;
          *(byte **)(this + 0x10) = pbVar6 + 1;
          *pbVar6 = (byte)uVar4 | 0x80;
          uVar4 = param_1;
        } while (uVar1 != 0);
      }
      pbVar6 = *(byte **)(this + 0x10);
    }
    *(byte **)(this + 0x10) = pbVar6 + 1;
    *pbVar6 = (byte)param_1;
  }
  return;
}

