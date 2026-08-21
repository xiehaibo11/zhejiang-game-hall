
/* cocos2d::PointArray::reverse() const */

Ref * __thiscall cocos2d::PointArray::reverse(PointArray *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  Ref *this_00;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puStack_58 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  puVar1 = *(undefined8 **)(this + 0x30);
  puVar6 = *(undefined8 **)(this + 0x38);
  uVar2 = (long)puVar6 - (long)puVar1;
  if (uVar2 != 0) {
    if ((ulong)((long)uVar2 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    local_60 = operator_new(uVar2);
    local_50 = local_60 + ((long)uVar2 >> 3);
    puStack_58 = local_60;
  }
  while (puVar6 != puVar1) {
    while (puVar6 = puVar6 + -1, puStack_58 == local_50) {
      std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
      __push_back_slow_path<cocos2d::Vec2_const&>
                ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)&local_60,
                 (Vec2 *)puVar6);
      if (puVar1 == puVar6) goto LAB_00ecd2c8;
    }
    *puStack_58 = *puVar6;
    puStack_58 = puStack_58 + 1;
  }
LAB_00ecd2c8:
  this_00 = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined ***)this_00 = &PTR__PointArray_016f5788;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f57b0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    Ref::autorelease(this_00);
  }
  puVar4 = local_50;
  puVar6 = puStack_58;
  puVar1 = local_60;
  puStack_58 = (void *)0x0;
  local_50 = (undefined8 *)0x0;
  local_60 = (void *)0x0;
  pvVar5 = *(void **)(this_00 + 0x30);
  if (pvVar5 == (void *)0x0) {
    *(undefined8 **)(this_00 + 0x30) = puVar1;
    *(undefined8 **)(this_00 + 0x38) = puVar6;
    *(undefined8 **)(this_00 + 0x40) = puVar4;
  }
  else {
    *(void **)(this_00 + 0x38) = pvVar5;
    operator_delete(pvVar5);
    *(undefined8 **)(this_00 + 0x30) = puVar1;
    *(undefined8 **)(this_00 + 0x38) = puVar6;
    *(undefined8 **)(this_00 + 0x40) = puVar4;
    if (local_60 != (void *)0x0) {
      puStack_58 = local_60;
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

