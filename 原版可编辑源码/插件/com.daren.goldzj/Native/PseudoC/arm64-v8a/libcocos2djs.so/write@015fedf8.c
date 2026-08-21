
/* v8::internal::wasm::ZoneBuffer::write(unsigned char const*, unsigned long) */

void __thiscall v8::internal::wasm::ZoneBuffer::write(ZoneBuffer *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  Zone *this_00;
  void *__dest;
  void *__dest_00;
  ulong uVar2;
  
  __dest = *(void **)(this + 0x10);
  if (*(ulong *)(this + 0x18) < (long)__dest + param_2) {
    this_00 = *(Zone **)this;
    __dest_00 = *(void **)(this_00 + 0x10);
    lVar1 = param_2 + (*(ulong *)(this + 0x18) - *(long *)(this + 8)) * 2;
    uVar2 = lVar1 + 7U & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)__dest_00) < uVar2) {
      __dest_00 = (void *)Zone::NewExpand(this_00,uVar2);
    }
    else {
      *(ulong *)(this_00 + 0x10) = uVar2 + (long)__dest_00;
    }
    memcpy(__dest_00,*(void **)(this + 8),*(long *)(this + 0x10) - (long)*(void **)(this + 8));
    *(long *)(this + 0x18) = (long)__dest_00 + lVar1;
    __dest = (void *)((long)__dest_00 + (*(long *)(this + 0x10) - *(long *)(this + 8)));
    *(void **)(this + 8) = __dest_00;
    *(void **)(this + 0x10) = __dest;
  }
  memcpy(__dest,param_1,param_2);
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_2;
  return;
}

