
/* std::__ndk1::__deque_base<cocos2d::TextureCache::AsyncStruct*,
   std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*> >::~__deque_base() */

void __thiscall
std::__ndk1::
__deque_base<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
::~__deque_base(__deque_base<cocos2d::TextureCache::AsyncStruct*,std::__ndk1::allocator<cocos2d::TextureCache::AsyncStruct*>>
                *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)(this + 0x10);
  lVar3 = (long)puVar2 - (long)puVar8;
  if (lVar3 != 0) {
    uVar6 = *(ulong *)(this + 0x20);
    plVar5 = (long *)((long)puVar8 + (uVar6 >> 6 & 0x3fffffffffffff8));
                    /* catch() { ... } // from try @ 00fef248 with catch @ 00fef2b4 */
    lVar7 = *plVar5 + (uVar6 & 0x1ff) * 8;
    lVar1 = *(long *)((long)puVar8 + (*(long *)(this + 0x28) + uVar6 >> 6 & 0x3fffffffffffff8)) +
            (*(long *)(this + 0x28) + uVar6 & 0x1ff) * 8;
    while (lVar1 != lVar7) {
      while (lVar7 = lVar7 + 8, lVar7 - *plVar5 == 0x1000) {
        plVar5 = plVar5 + 1;
        lVar7 = *plVar5;
        if (lVar1 == lVar7) goto LAB_00fef308;
      }
    }
  }
LAB_00fef308:
  *(undefined8 *)(this + 0x28) = 0;
  while (uVar6 = lVar3 >> 3, 2 < uVar6) {
    operator_delete((void *)*puVar8);
    puVar2 = *(undefined8 **)(this + 0x10);
    puVar8 = (undefined8 *)(*(long *)(this + 8) + 8);
    *(undefined8 **)(this + 8) = puVar8;
    lVar3 = (long)puVar2 - (long)puVar8;
  }
  if (uVar6 == 1) {
    uVar4 = 0x100;
  }
  else {
    if (uVar6 != 2) goto LAB_00fef35c;
    uVar4 = 0x200;
  }
  *(undefined8 *)(this + 0x20) = uVar4;
LAB_00fef35c:
  if (puVar8 != puVar2) {
    do {
      puVar9 = puVar8 + 1;
      operator_delete((void *)*puVar8);
      puVar8 = puVar9;
    } while (puVar2 != puVar9);
    lVar3 = *(long *)(this + 0x10) - *(long *)(this + 8);
    if (lVar3 != 0) {
                    /* try { // try from 00fef390 to 010ef3c3 has its CatchHandler @ 00fef390
                       catch() { ... } // from try @ 00fef390 with catch @ 00fef390
                       catch() { ... } // from try @ 00fef450 with catch @ 00fef390 */
      *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)this == (void *)0x0) {
                    /* try { // try from 00fef3c4 to 010ef3cb has its CatchHandler @ 00fef488 */
    return;
  }
  operator_delete(*(void **)this);
  return;
}

