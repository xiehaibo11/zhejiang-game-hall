
/* std::__ndk1::vector<std::__ndk1::pair<unsigned long, char const*>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned long, char const*> > >::__append(unsigned long)
    */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
::__append(vector<std::__ndk1::pair<unsigned_long,char_const*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_long,char_const*>>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *__src;
  size_t __n;
  ulong uVar5;
  
  puVar4 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 4)) {
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      param_1 = param_1 - 1;
      puVar4 = (undefined8 *)(*(long *)(this + 8) + 0x10);
      *(undefined8 **)(this + 8) = puVar4;
    } while (param_1 != 0);
    return;
  }
  __src = *(void **)this;
  __n = (long)puVar4 - (long)__src;
  uVar1 = ((long)__n >> 4) + param_1;
  if (uVar1 >> 0x3c != 0) {
LAB_00865124:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = *(long *)(this + 0x10) - (long)__src;
  if ((ulong)(lVar2 >> 4) < 0x7ffffffffffffff) {
    uVar3 = lVar2 >> 3;
    uVar5 = uVar1;
    if (uVar1 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
      goto LAB_00865154;
    }
    if (uVar5 >> 0x3c != 0) goto LAB_00865124;
  }
  else {
    uVar5 = 0xfffffffffffffff;
  }
  __dest = operator_new(uVar5 << 4);
LAB_00865154:
  memset((void *)((long)__dest + ((long)__n >> 4) * 0x10),0,param_1 << 4);
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 0x10);
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar5 * 0x10);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

