
/* v8::internal::PreparseDataBuilder::ByteData::Finalize(v8::internal::Zone*) */

void __thiscall v8::internal::PreparseDataBuilder::ByteData::Finalize(ByteData *this,Zone *param_1)

{
  void *__dest;
  ulong uVar1;
  long *plVar2;
  
  __dest = *(void **)(param_1 + 0x10);
  uVar1 = (long)*(int *)(this + 8) + 7U & 0xfffffffffffffff8;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)__dest) < uVar1) {
    __dest = (void *)Zone::NewExpand(param_1,uVar1);
  }
  else {
    *(ulong *)(param_1 + 0x10) = uVar1 + (long)__dest;
  }
  memcpy(__dest,(void *)**(undefined8 **)this,(long)*(int *)(this + 8));
  plVar2 = *(long **)this;
  if (plVar2[1] != *plVar2) {
    plVar2[1] = *plVar2;
  }
  *(void **)this = __dest;
  *(long *)(this + 8) = (long)*(int *)(this + 8);
  return;
}

