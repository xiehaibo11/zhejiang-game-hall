
/* std::__ndk1::vector<cocos2d::ui::Widget*, std::__ndk1::allocator<cocos2d::ui::Widget*>
   >::insert(std::__ndk1::__wrap_iter<cocos2d::ui::Widget* const*>, cocos2d::ui::Widget* const&) */

undefined8 * __thiscall
std::__ndk1::vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>>::insert
          (vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>> *this,
          undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  size_t __n;
  undefined8 *puVar10;
  
  puVar10 = *(undefined8 **)(this + 8);
  if (puVar10 < *(undefined8 **)(this + 0x10)) {
                    /* try { // try from 00db8168 to 00eb816f has its CatchHandler @ 00db82e4 */
    if (param_2 != puVar10) {
      sVar3 = (long)puVar10 + (-8 - (long)param_2);
      puVar8 = puVar10;
                    /* try { // try from 00db8170 to 00eb82e7 has its CatchHandler @ 00db811c */
      for (puVar5 = puVar10 + -1; puVar5 < puVar10; puVar5 = puVar5 + 1) {
        *puVar8 = *puVar5;
        puVar8 = puVar8 + 1;
      }
      *(undefined8 **)(this + 8) = puVar8;
      if (sVar3 != 0) {
        memmove(puVar10 + -((long)sVar3 >> 3),param_2,sVar3);
      }
      puVar10 = param_3;
      if ((param_2 <= param_3) && (puVar10 = param_3 + 1, *(undefined8 **)(this + 8) <= param_3)) {
        puVar10 = param_3;
      }
      *param_2 = *puVar10;
      return param_2;
    }
    *param_2 = *param_3;
    *(undefined8 **)(this + 8) = param_2 + 1;
    return param_2;
  }
  pvVar9 = *(void **)this;
  uVar4 = ((long)puVar10 - (long)pvVar9 >> 3) + 1;
  if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)*(undefined8 **)(this + 0x10) - (long)pvVar9;
  if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
    uVar7 = lVar6 >> 2;
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0) {
      pvVar1 = (void *)0x0;
      goto LAB_00db8234;
    }
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar4 = 0x1fffffffffffffff;
  }
  pvVar1 = operator_new(uVar4 << 3);
LAB_00db8234:
  lVar6 = (long)param_2 - (long)pvVar9;
  uVar7 = lVar6 >> 3;
  puVar10 = (undefined8 *)((long)pvVar1 + uVar7 * 8);
  pvVar2 = (void *)((long)pvVar1 + uVar4 * 8);
  if (uVar7 == uVar4) {
    if (lVar6 < 1) {
      uVar4 = lVar6 >> 2;
      if (lVar6 == 0) {
        uVar4 = 1;
      }
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar4 << 3);
      puVar10 = (undefined8 *)((long)pvVar2 + (uVar4 & 0x7ffffffffffffffc) * 2);
      pvVar2 = (void *)((long)pvVar2 + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar9 = *(void **)this;
      }
    }
    else {
      uVar4 = uVar7 + 2;
      if (-1 < (long)(uVar7 + 1)) {
        uVar4 = uVar7 + 1;
      }
      puVar10 = (undefined8 *)((long)puVar10 + (uVar4 & 0x3ffffffffffffffe) * -4);
    }
  }
  sVar3 = (long)param_2 - (long)pvVar9;
  puVar8 = puVar10 + 1;
  *puVar10 = *param_3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db8168 with catch @ 00db82e4
                        */
  if (0 < (long)sVar3) {
    memcpy((void *)((long)puVar10 - sVar3),pvVar9,sVar3);
  }
  __n = *(long *)(this + 8) - (long)param_2;
  if (0 < (long)__n) {
    memcpy(puVar8,param_2,__n);
    puVar8 = (undefined8 *)((long)puVar8 + __n);
  }
  pvVar9 = *(void **)this;
  *(void **)this = (void *)((long)puVar10 - sVar3);
  *(undefined8 **)(this + 8) = puVar8;
  *(void **)(this + 0x10) = pvVar2;
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
  return puVar10;
}

