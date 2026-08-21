
/* std::__ndk1::__split_buffer<cocos2d::ui::TabControl::CellContainer*,
   std::__ndk1::allocator<cocos2d::ui::TabControl::CellContainer*>&>::push_back(cocos2d::ui::TabControl::CellContainer*&&)
    */

void __thiscall
std::__ndk1::
__split_buffer<cocos2d::ui::TabControl::CellContainer*,std::__ndk1::allocator<cocos2d::ui::TabControl::CellContainer*>&>
::push_back(__split_buffer<cocos2d::ui::TabControl::CellContainer*,std::__ndk1::allocator<cocos2d::ui::TabControl::CellContainer*>&>
            *this,CellContainer **param_1)

{
  long lVar1;
  undefined8 *puVar2;
  size_t __n;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *__src;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(this + 0x10);
  if (puVar7 == *(undefined8 **)(this + 0x18)) {
    puVar6 = *(undefined8 **)this;
    __src = *(undefined8 **)(this + 8);
    if (__src < puVar6 || (long)__src - (long)puVar6 == 0) {
      lVar1 = (long)*(undefined8 **)(this + 0x18) - (long)puVar6;
                    /* try { // try from 00df3d70 to 00ef3d73 has its CatchHandler @ 00df3db4 */
      uVar5 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar5 * 8);
      puVar2 = (undefined8 *)((long)pvVar3 + (uVar5 >> 2) * 8);
      lVar1 = (long)puVar7 - (long)__src;
      puVar7 = puVar2;
      if (lVar1 != 0) {
        lVar4 = (lVar1 >> 3) << 3;
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df3d70 with catch @ 00df3db4
                        */
          lVar4 = lVar4 + -8;
          *puVar7 = *__src;
          puVar7 = puVar7 + 1;
          __src = __src + 1;
        } while (lVar4 != 0);
        puVar6 = *(undefined8 **)this;
        puVar7 = (undefined8 *)((long)puVar2 + lVar1);
      }
      *(void **)this = pvVar3;
      *(undefined8 **)(this + 8) = puVar2;
      *(undefined8 **)(this + 0x10) = puVar7;
      *(void **)(this + 0x18) = (void *)((long)pvVar3 + uVar5 * 8);
      if (puVar6 != (undefined8 *)0x0) {
        operator_delete(puVar6);
        puVar7 = *(undefined8 **)(this + 0x10);
      }
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df3ce4 with catch @ 00df3d20
                        */
      lVar4 = (long)__src - (long)puVar6 >> 3;
      lVar1 = lVar4 + 2;
      if (-1 < lVar4 + 1) {
        lVar1 = lVar4 + 1;
      }
      __n = (long)puVar7 - (long)__src;
      if (__n != 0) {
        memmove(__src + -(lVar1 >> 1),__src,__n);
      }
      puVar7 = __src + -(lVar1 >> 1) + ((long)__n >> 3);
      *(long *)(this + 8) = *(long *)(this + 8) + (lVar1 >> 1) * -8;
      *(undefined8 **)(this + 0x10) = puVar7;
    }
  }
                    /* try { // try from 00df3df4 to 00ef3df7 has its CatchHandler @ 00df3e38 */
  *puVar7 = *param_1;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  return;
}

