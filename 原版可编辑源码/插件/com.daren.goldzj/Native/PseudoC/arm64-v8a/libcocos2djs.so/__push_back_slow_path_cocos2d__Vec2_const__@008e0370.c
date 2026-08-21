
/* void std::__ndk1::vector<cocos2d::Vec2, std::__ndk1::allocator<cocos2d::Vec2>
   >::__push_back_slow_path<cocos2d::Vec2 const&>(cocos2d::Vec2 const&) */

void __thiscall
std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
__push_back_slow_path<cocos2d::Vec2_const&>
          (vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *this,Vec2 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  
  puVar1 = *(undefined8 **)this;
  puVar7 = *(undefined8 **)(this + 8);
  lVar8 = (long)puVar7 - (long)puVar1 >> 3;
  uVar9 = lVar8 + 1;
  if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(*(long *)(this + 0x10) - (long)puVar1 >> 3) < 0xfffffffffffffff) {
    uVar3 = *(long *)(this + 0x10) - (long)puVar1 >> 2;
    if (uVar9 <= uVar3) {
      uVar9 = uVar3;
    }
    if (uVar9 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_008e03e8;
    }
    if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar9 = 0x1fffffffffffffff;
  }
  pvVar2 = operator_new(uVar9 << 3);
LAB_008e03e8:
  puVar5 = (undefined8 *)((long)pvVar2 + lVar8 * 8);
  puVar4 = puVar5 + 1;
  *puVar5 = *(undefined8 *)param_1;
  if (puVar7 != puVar1) {
    uVar3 = (long)puVar7 + (-8 - (long)puVar1);
    puVar6 = puVar5;
    do {
      puVar6 = puVar6 + -1;
      puVar7 = puVar7 + -1;
      *puVar6 = *puVar7;
    } while (puVar1 != puVar7);
    puVar5 = (undefined8 *)((long)puVar5 + (~uVar3 & 0xfffffffffffffff8));
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar4;
  *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar9 * 8);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
    return;
  }
  return;
}

