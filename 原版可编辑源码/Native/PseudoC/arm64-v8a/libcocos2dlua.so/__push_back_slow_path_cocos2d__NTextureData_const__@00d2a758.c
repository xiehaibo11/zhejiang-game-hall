
/* void std::__ndk1::vector<cocos2d::NTextureData, std::__ndk1::allocator<cocos2d::NTextureData>
   >::__push_back_slow_path<cocos2d::NTextureData const&>(cocos2d::NTextureData const&) */

void __thiscall
std::__ndk1::vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>::
__push_back_slow_path<cocos2d::NTextureData_const&>
          (vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>> *this,
          NTextureData *param_1)

{
  undefined4 *puVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  void *pvVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  void *pvVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar11 = lVar9 + 1;
  if (uVar11 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar4 = *(long *)(this + 0x10) - *(long *)this;
  if ((ulong)(lVar4 >> 6) < 0x1ffffffffffffff) {
    uVar5 = lVar4 >> 5;
    if (uVar11 <= uVar5) {
      uVar11 = uVar5;
    }
    if (uVar11 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00d2a7d4;
    }
    if (uVar11 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    uVar11 = 0x3ffffffffffffff;
  }
  pvVar3 = operator_new(uVar11 << 6);
LAB_00d2a7d4:
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            ((long)pvVar3 + lVar9 * 0x40);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (this_00,(basic_string *)param_1);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            (this_00 + 0x18,(basic_string *)(param_1 + 0x18));
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)((long)pvVar3 + lVar9 * 0x40 + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined8 *)((long)pvVar3 + lVar9 * 0x40 + 0x30) = uVar6;
  pvVar8 = *(void **)this;
  pvVar7 = *(void **)(this + 8);
  pbVar2 = this_00 + 0x40;
  pvVar10 = pvVar8;
  if (pvVar7 != pvVar8) {
    do {
      uVar12 = *(undefined8 *)((long)pvVar7 + -0x38);
      uVar6 = *(undefined8 *)((long)pvVar7 + -0x40);
      *(undefined8 *)(this_00 + -0x30) = *(undefined8 *)((long)pvVar7 + -0x30);
      *(undefined8 *)(this_00 + -0x38) = uVar12;
      *(undefined8 *)(this_00 + -0x40) = uVar6;
      uVar12 = *(undefined8 *)((long)pvVar7 + -0x20);
      uVar6 = *(undefined8 *)((long)pvVar7 + -0x28);
      *(undefined8 *)((long)pvVar7 + -0x38) = 0;
      *(undefined8 *)((long)pvVar7 + -0x30) = 0;
      *(undefined8 *)((long)pvVar7 + -0x40) = 0;
      *(undefined8 *)(this_00 + -0x18) = *(undefined8 *)((long)pvVar7 + -0x18);
      *(undefined8 *)(this_00 + -0x20) = uVar12;
      *(undefined8 *)(this_00 + -0x28) = uVar6;
      puVar1 = (undefined4 *)((long)pvVar7 + -8);
      uVar6 = *(undefined8 *)((long)pvVar7 + -0x10);
      *(undefined8 *)((long)pvVar7 + -0x20) = 0;
      *(undefined8 *)((long)pvVar7 + -0x18) = 0;
      *(undefined8 *)((long)pvVar7 + -0x28) = 0;
      pvVar7 = (void *)((long)pvVar7 + -0x40);
      *(undefined4 *)(this_00 + -8) = *puVar1;
      *(undefined8 *)(this_00 + -0x10) = uVar6;
      this_00 = this_00 + -0x40;
    } while (pvVar8 != pvVar7);
    pvVar8 = *(void **)this;
    pvVar10 = *(void **)(this + 8);
  }
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)this = this_00
  ;
  *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)(this + 8) =
       pbVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar11 * 0x40);
  while (pvVar3 = pvVar10, pvVar3 != pvVar8) {
    if ((*(byte *)((long)pvVar3 + -0x28) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar3 + -0x18));
    }
    pvVar10 = (void *)((long)pvVar3 + -0x40);
    if ((*(byte *)((long)pvVar3 + -0x40) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar3 + -0x30));
    }
  }
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
    return;
  }
  return;
}

