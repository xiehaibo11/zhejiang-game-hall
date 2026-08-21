
/* v8::internal::compiler::RefsMap::RefsMap(v8::internal::compiler::RefsMap const*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::RefsMap::RefsMap(RefsMap *this,RefsMap *param_1,Zone *param_2)

{
  uint uVar1;
  void *__dest;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)(this + 8) = uVar1;
  uVar2 = (ulong)uVar1 * 0x18;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  __dest = *(void **)(param_2 + 0x10);
  if (uVar2 < (ulong)(*(long *)(param_2 + 0x18) - (long)__dest) ||
      uVar2 - (*(long *)(param_2 + 0x18) - (long)__dest) == 0) {
    *(void **)(param_2 + 0x10) = (void *)((long)__dest + uVar2);
  }
  else {
    __dest = (void *)Zone::NewExpand(param_2,uVar2);
  }
  *(void **)this = __dest;
  memcpy(__dest,*(void **)param_1,(ulong)*(uint *)(this + 8) * 0x18);
  return;
}

