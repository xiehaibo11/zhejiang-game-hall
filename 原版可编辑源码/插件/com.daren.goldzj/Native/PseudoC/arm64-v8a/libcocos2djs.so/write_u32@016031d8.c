
/* v8::internal::wasm::ZoneBuffer::write_u32(unsigned int) */

void __thiscall v8::internal::wasm::ZoneBuffer::write_u32(ZoneBuffer *this,uint param_1)

{
  Zone *this_00;
  void *__dest;
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(this + 0x10);
  if (*(uint **)(this + 0x18) < puVar3 + 1) {
    this_00 = *(Zone **)this;
    __dest = *(void **)(this_00 + 0x10);
    lVar2 = ((long)*(uint **)(this + 0x18) - *(long *)(this + 8)) * 2;
    uVar1 = lVar2 + 0xbU & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)__dest) < uVar1) {
      __dest = (void *)Zone::NewExpand(this_00,uVar1);
    }
    else {
      *(ulong *)(this_00 + 0x10) = uVar1 + (long)__dest;
    }
    memcpy(__dest,*(void **)(this + 8),*(long *)(this + 0x10) - (long)*(void **)(this + 8));
    *(long *)(this + 0x18) = (long)__dest + lVar2 + 4;
    puVar3 = (uint *)((long)__dest + (*(long *)(this + 0x10) - *(long *)(this + 8)));
    *(void **)(this + 8) = __dest;
    *(uint **)(this + 0x10) = puVar3;
  }
  *puVar3 = param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 4;
  return;
}

