
/* v8::internal::wasm::ZoneBuffer::write_i64v(long) */

void __thiscall v8::internal::wasm::ZoneBuffer::write_i64v(ZoneBuffer *this,long param_1)

{
  Zone *this_00;
  bool bVar1;
  void *__dest;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  
  pbVar4 = *(byte **)(this + 0x10);
  if (*(byte **)(this + 0x18) < pbVar4 + 10) {
    this_00 = *(Zone **)this;
    __dest = *(void **)(this_00 + 0x10);
    lVar3 = ((long)*(byte **)(this + 0x18) - *(long *)(this + 8)) * 2;
    uVar2 = lVar3 + 0x11U & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)__dest) < uVar2) {
      __dest = (void *)Zone::NewExpand(this_00,uVar2);
    }
    else {
      *(ulong *)(this_00 + 0x10) = uVar2 + (long)__dest;
    }
    memcpy(__dest,*(void **)(this + 8),*(long *)(this + 0x10) - (long)*(void **)(this + 8));
    *(long *)(this + 0x18) = (long)__dest + lVar3 + 10;
    pbVar4 = (byte *)((long)__dest + (*(long *)(this + 0x10) - *(long *)(this + 8)));
    *(void **)(this + 8) = __dest;
    *(byte **)(this + 0x10) = pbVar4;
  }
  if (param_1 < 0) {
    if ((ulong)param_1 < 0xffffffffffffffc0) {
      *(byte **)(this + 0x10) = pbVar4 + 1;
      *pbVar4 = (byte)param_1 | 0x80;
      while (param_1 = param_1 >> 7, (ulong)param_1 < 0xffffffffffffffc0) {
        pbVar4 = *(byte **)(this + 0x10);
        *(byte **)(this + 0x10) = pbVar4 + 1;
        *pbVar4 = (byte)param_1 | 0x80;
      }
      pbVar4 = *(byte **)(this + 0x10);
    }
    *(byte **)(this + 0x10) = pbVar4 + 1;
    *pbVar4 = (byte)param_1 & 0x7f;
  }
  else {
    if (0x3f < param_1) {
      bVar1 = 0x1fff < (ulong)param_1;
      *(byte **)(this + 0x10) = pbVar4 + 1;
      *pbVar4 = (byte)param_1 | 0x80;
      param_1 = (ulong)param_1 >> 7;
      uVar2 = param_1;
      if (bVar1) {
        do {
          pbVar4 = *(byte **)(this + 0x10);
          param_1 = uVar2 >> 7;
          uVar5 = uVar2 >> 0xd;
          *(byte **)(this + 0x10) = pbVar4 + 1;
          *pbVar4 = (byte)uVar2 | 0x80;
          uVar2 = param_1;
        } while (uVar5 != 0);
      }
      pbVar4 = *(byte **)(this + 0x10);
    }
    *(byte **)(this + 0x10) = pbVar4 + 1;
    *pbVar4 = (byte)param_1;
  }
  return;
}

