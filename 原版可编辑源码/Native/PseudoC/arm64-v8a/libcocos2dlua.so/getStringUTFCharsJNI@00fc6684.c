
/* cocos2d::StringUtils::getStringUTFCharsJNI(_JNIEnv*, _jstring*, bool*) */

void __thiscall
cocos2d::StringUtils::getStringUTFCharsJNI
          (StringUtils *this,_JNIEnv *param_1,_jstring *param_2,bool *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  _jstring _Var4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  undefined2 *puVar8;
  ulong uVar9;
  undefined2 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_80;
  ulong local_78;
  undefined2 *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  if ((this == (StringUtils *)0x0) || (param_1 == (_JNIEnv *)0x0)) {
    if (param_2 != (_jstring *)0x0) {
      *param_2 = (_jstring)0x0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,"",0);
    goto LAB_00fc6864;
  }
  puVar6 = (undefined2 *)(**(code **)(*(long *)this + 0x528))(this,param_1,0);
  uVar5 = (**(code **)(*(long *)this + 0x520))(this,param_1);
  local_78 = 0;
  local_70 = (undefined2 *)0x0;
  local_80 = 0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  uVar14 = (ulong)(int)uVar5;
  if (uVar5 < 0xb) {
    puVar7 = (undefined2 *)((ulong)&local_80 | 2);
    local_80 = (ulong)(byte)(uVar5 << 1);
    if (uVar5 != 0) goto LAB_00fc6774;
  }
  else {
    if ((long)(uVar14 + 8) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar9 = uVar14 + 8 & 0xfffffffffffffff8;
    puVar7 = operator_new(uVar9 << 1);
    local_80 = uVar9 | 1;
    local_78 = uVar14;
    local_70 = puVar7;
LAB_00fc6774:
    puVar8 = puVar7;
    uVar9 = uVar14;
    puVar10 = puVar6;
    if ((0xf < uVar5) && ((puVar6 + uVar14 <= puVar7 || (puVar7 + uVar14 <= puVar6)))) {
      uVar11 = uVar14 & 0xfffffffffffffff0;
      lVar12 = 0;
      uVar9 = uVar14 - uVar11;
      uVar13 = uVar11;
      do {
        puVar1 = (undefined8 *)((long)puVar6 + lVar12);
        uVar15 = *puVar1;
        uVar17 = puVar1[3];
        uVar16 = puVar1[2];
        puVar2 = (undefined8 *)((long)puVar7 + lVar12);
        uVar13 = uVar13 - 0x10;
        lVar12 = lVar12 + 0x20;
        puVar2[1] = puVar1[1];
        *puVar2 = uVar15;
        puVar2[3] = uVar17;
        puVar2[2] = uVar16;
      } while (uVar13 != 0);
      puVar8 = puVar7 + uVar11;
      puVar10 = puVar6 + uVar11;
      if (uVar11 == uVar14) goto LAB_00fc6800;
    }
    do {
      uVar9 = uVar9 - 1;
      *puVar8 = *puVar10;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar9 != 0);
  }
LAB_00fc6800:
  puVar7[uVar14] = 0;
  _Var4 = (_jstring)
          utfConvert<char16_t,char,cocos2d::StringUtils::ConvertTrait<char16_t>,cocos2d::StringUtils::ConvertTrait<char>>
                    ((basic_string *)&local_80,(basic_string *)in_x8,ConvertUTF16toUTF8);
  if (param_2 != (_jstring *)0x0) {
    *param_2 = _Var4;
  }
  if (!(bool)_Var4) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,"",0);
  }
  (**(code **)(*(long *)this + 0x530))(this,param_1,puVar6);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00fc6864:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

