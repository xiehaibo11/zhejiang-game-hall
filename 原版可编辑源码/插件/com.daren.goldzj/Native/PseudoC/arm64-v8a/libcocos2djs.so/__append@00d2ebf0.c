
/* std::__ndk1::vector<dragonBones::BaseObject*, std::__ndk1::allocator<dragonBones::BaseObject*>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>::
__append(vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>> *this,
        ulong param_1)

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
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 3)) {
    do {
      *puVar4 = 0;
      param_1 = param_1 - 1;
      puVar4 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar4;
    } while (param_1 != 0);
    return;
  }
  __src = *(void **)this;
  __n = (long)puVar4 - (long)__src;
  uVar1 = ((long)__n >> 3) + param_1;
  if (uVar1 >> 0x3d != 0) {
LAB_00d2ec60:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = *(long *)(this + 0x10) - (long)__src;
  if ((ulong)(lVar2 >> 3) < 0xfffffffffffffff) {
    uVar3 = lVar2 >> 2;
    uVar5 = uVar1;
    if (uVar1 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
      goto LAB_00d2ec90;
    }
    if (uVar5 >> 0x3d != 0) goto LAB_00d2ec60;
  }
  else {
    uVar5 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar5 << 3);
LAB_00d2ec90:
  memset((void *)((long)__dest + ((long)__n >> 3) * 8),0,param_1 << 3);
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)__dest + uVar1 * 8);
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar5 * 8);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

