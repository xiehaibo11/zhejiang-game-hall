
/* v8::internal::Scanner::CurrentLiteralAsCString(v8::internal::Zone*) const */

void * __thiscall v8::internal::Scanner::CurrentLiteralAsCString(Scanner *this,Zone *param_1)

{
  void *__dest;
  ulong uVar1;
  size_t __n;
  void *__src;
  
  __dest = *(void **)(param_1 + 0x10);
  __n = (size_t)*(int *)(*(long *)this + 0x18);
  __src = *(void **)(*(long *)this + 8);
  uVar1 = __n + 8 & 0xfffffffffffffff8;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)__dest) < uVar1) {
    __dest = (void *)Zone::NewExpand(param_1,uVar1);
  }
  else {
    *(ulong *)(param_1 + 0x10) = uVar1 + (long)__dest;
  }
  memcpy(__dest,__src,__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  return __dest;
}

