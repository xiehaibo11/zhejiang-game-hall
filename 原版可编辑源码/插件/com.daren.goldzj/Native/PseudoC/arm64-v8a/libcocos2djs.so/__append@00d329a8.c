
/* std::__ndk1::vector<std::__ndk1::pair<void*, dragonBones::DisplayType>,
   std::__ndk1::allocator<std::__ndk1::pair<void*, dragonBones::DisplayType> > >::__append(unsigned
   long, std::__ndk1::pair<void*, dragonBones::DisplayType> const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
::__append(vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
           *this,ulong param_1,pair *param_2)

{
  ulong uVar1;
  void *__src;
  void *pvVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  void *__dest;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar5 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar5 >> 4)) {
    do {
      uVar9 = *(undefined8 *)param_2;
      param_1 = param_1 - 1;
      puVar5[1] = *(undefined8 *)(param_2 + 8);
      *puVar5 = uVar9;
      puVar5 = (undefined8 *)(*(long *)(this + 8) + 0x10);
      *(undefined8 **)(this + 8) = puVar5;
    } while (param_1 != 0);
    return;
  }
  lVar7 = (long)puVar5 - *(long *)this >> 4;
  uVar1 = lVar7 + param_1;
  if (uVar1 >> 0x3c != 0) {
LAB_00d32a18:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar3 >> 4) < 0x7ffffffffffffff) {
    uVar4 = lVar3 >> 3;
    uVar8 = uVar1;
    if (uVar1 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00d32a48;
    }
    if (uVar8 >> 0x3c != 0) goto LAB_00d32a18;
  }
  else {
    uVar8 = 0xfffffffffffffff;
  }
  pvVar2 = operator_new(uVar8 << 4);
LAB_00d32a48:
  puVar5 = (undefined8 *)((long)pvVar2 + lVar7 * 0x10);
  puVar6 = puVar5;
  do {
    uVar9 = *(undefined8 *)param_2;
    param_1 = param_1 - 1;
    puVar6[1] = *(undefined8 *)(param_2 + 8);
    *puVar6 = uVar9;
    puVar6 = puVar6 + 2;
  } while (param_1 != 0);
  __src = *(void **)this;
  __n = *(long *)(this + 8) - (long)__src;
  __dest = (void *)((long)puVar5 - __n);
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)this = __dest;
  *(void **)(this + 8) = (void *)((long)pvVar2 + uVar1 * 0x10);
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar8 * 0x10);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

