
/* std::__ndk1::vector<std::__ndk1::pair<void*, dragonBones::DisplayType>,
   std::__ndk1::allocator<std::__ndk1::pair<void*, dragonBones::DisplayType> > >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
::__append(vector<std::__ndk1::pair<void*,dragonBones::DisplayType>,std::__ndk1::allocator<std::__ndk1::pair<void*,dragonBones::DisplayType>>>
           *this,ulong param_1)

{
  void *__dest;
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  void *pvVar8;
  size_t __n;
  ulong uVar9;
  
  puVar4 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 4)) {
    puVar3 = puVar4;
    uVar9 = param_1;
    if (1 < param_1) {
      uVar2 = param_1 & 0xfffffffffffffffe;
      puVar3 = puVar4 + 2;
      uVar9 = uVar2;
      do {
        puVar3[-2] = 0;
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + -1) = 0;
        *(undefined4 *)(puVar3 + 1) = 0;
        uVar9 = uVar9 - 2;
        puVar3 = puVar3 + 4;
      } while (uVar9 != 0);
      puVar3 = puVar4 + uVar2 * 2;
      uVar9 = param_1 - uVar2;
      if (uVar2 == param_1) goto LAB_00d2d9c4;
    }
    do {
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      uVar9 = uVar9 - 1;
      puVar3 = puVar3 + 2;
    } while (uVar9 != 0);
LAB_00d2d9c4:
    *(undefined8 **)(this + 8) = puVar4 + param_1 * 2;
    return;
  }
  pvVar8 = *(void **)this;
  __n = (long)puVar4 - (long)pvVar8;
  uVar9 = ((long)__n >> 4) + param_1;
  if (uVar9 >> 0x3c != 0) {
LAB_00d2d960:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = *(long *)(this + 0x10) - (long)pvVar8;
  if ((ulong)(lVar1 >> 4) < 0x7ffffffffffffff) {
    uVar2 = lVar1 >> 3;
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
    if (uVar9 != 0) {
      if (uVar9 >> 0x3c != 0) goto LAB_00d2d960;
      goto LAB_00d2d9d4;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar9 = 0xfffffffffffffff;
LAB_00d2d9d4:
    __dest = operator_new(uVar9 << 4);
  }
  puVar3 = (undefined8 *)((long)__dest + ((long)__n >> 4) * 0x10);
  puVar4 = puVar3;
  uVar2 = param_1;
  if (1 < param_1) {
    uVar5 = param_1 & 0xfffffffffffffffe;
    puVar4 = puVar3 + uVar5 * 2;
    uVar2 = param_1 - uVar5;
    puVar6 = puVar3 + 2;
    uVar7 = uVar5;
    do {
      puVar6[-2] = 0;
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + -1) = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      uVar7 = uVar7 - 2;
      puVar6 = puVar6 + 4;
    } while (uVar7 != 0);
    if (uVar5 == param_1) goto LAB_00d2da40;
  }
  do {
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    uVar2 = uVar2 - 1;
    puVar4 = puVar4 + 2;
  } while (uVar2 != 0);
LAB_00d2da40:
  if (0 < (long)__n) {
    memcpy(__dest,pvVar8,__n);
  }
  pvVar8 = *(void **)this;
  *(void **)this = __dest;
  *(undefined8 **)(this + 8) = puVar3 + param_1 * 2;
  *(void **)(this + 0x10) = (void *)((long)__dest + uVar9 * 0x10);
  if (pvVar8 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar8);
  return;
}

