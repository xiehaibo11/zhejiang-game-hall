
/* v8::internal::wasm::ZoneBuffer::write_u64(unsigned long) */

void __thiscall v8::internal::wasm::ZoneBuffer::write_u64(ZoneBuffer *this,ulong param_1)

{
  Zone *this_00;
  void *__dest;
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  
  puVar3 = *(ulong **)(this + 0x10);
  if (*(ulong **)(this + 0x18) < puVar3 + 1) {
    this_00 = *(Zone **)this;
    __dest = *(void **)(this_00 + 0x10);
    lVar2 = ((long)*(ulong **)(this + 0x18) - *(long *)(this + 8)) * 2;
    uVar1 = lVar2 + 0xfU & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)__dest) < uVar1) {
      __dest = (void *)Zone::NewExpand(this_00,uVar1);
    }
    else {
      *(ulong *)(this_00 + 0x10) = uVar1 + (long)__dest;
    }
    memcpy(__dest,*(void **)(this + 8),*(long *)(this + 0x10) - (long)*(void **)(this + 8));
    *(long *)(this + 0x18) = (long)__dest + lVar2 + 8;
    puVar3 = (ulong *)((long)__dest + (*(long *)(this + 0x10) - *(long *)(this + 8)));
    *(void **)(this + 8) = __dest;
    *(ulong **)(this + 0x10) = puVar3;
  }
  *puVar3 = param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}

