
/* std::__ndk1::basic_string<char32_t, std::__ndk1::char_traits<char32_t>,
   std::__ndk1::allocator<char32_t> >::assign(char32_t const*, unsigned long) */

basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *
__thiscall
std::__ndk1::
basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>::assign
          (basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
           *this,wchar32 *param_1,ulong param_2)

{
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> bVar1;
  wchar32 *pwVar2;
  ulong uVar3;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar4
  ;
  basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>> *pbVar5
  ;
  ulong uVar6;
  wchar32 *pwVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar3 = 4;
    if (4 < param_2) {
LAB_00f0fcdc:
      if (((byte)bVar1 & 1) == 0) {
        uVar6 = (ulong)((byte)bVar1 >> 1);
      }
      else {
        uVar6 = *(ulong *)(this + 8);
      }
      __grow_by_and_replace(this,uVar3,param_2 - uVar3,uVar6,0,uVar6,param_2,param_1);
      return this;
    }
  }
  else {
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    if (uVar3 < param_2) goto LAB_00f0fcdc;
  }
  if (((byte)bVar1 & 1) == 0) {
    pbVar4 = this + 4;
  }
  else {
    pbVar4 = *(basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
               **)(this + 0x10);
  }
  if (pbVar4 < param_1) {
    if (param_2 != 0) {
      pbVar5 = pbVar4;
      uVar3 = param_2;
      if ((7 < param_2) &&
         (((basic_string<char32_t,std::__ndk1::char_traits<char32_t>,std::__ndk1::allocator<char32_t>>
            *)(param_1 + param_2) <= pbVar4 || (pbVar4 + param_2 * 4 <= param_1)))) {
        uVar6 = param_2 & 0xfffffffffffffff8;
        pwVar7 = param_1 + 4;
        param_1 = param_1 + uVar6;
        pbVar5 = pbVar4 + 0x10;
        uVar3 = uVar6;
        do {
          pwVar2 = pwVar7 + -2;
          uVar8 = *(undefined8 *)(pwVar7 + -4);
          uVar10 = *(undefined8 *)(pwVar7 + 2);
          uVar9 = *(undefined8 *)pwVar7;
          pwVar7 = pwVar7 + 8;
          uVar3 = uVar3 - 8;
          *(undefined8 *)(pbVar5 + -8) = *(undefined8 *)pwVar2;
          *(undefined8 *)(pbVar5 + -0x10) = uVar8;
          *(undefined8 *)(pbVar5 + 8) = uVar10;
          *(undefined8 *)pbVar5 = uVar9;
          pbVar5 = pbVar5 + 0x20;
        } while (uVar3 != 0);
        pbVar5 = pbVar4 + uVar6 * 4;
        uVar3 = param_2 - uVar6;
        if (uVar6 == param_2) goto LAB_00f0fd34;
      }
      do {
        uVar3 = uVar3 - 1;
        *(wchar32 *)pbVar5 = *param_1;
        param_1 = param_1 + 1;
        pbVar5 = pbVar5 + 4;
      } while (uVar3 != 0);
    }
  }
  else if ((param_2 != 0) && (uVar3 = param_2, param_1 < pbVar4)) {
    do {
      uVar6 = uVar3 - 1;
      *(wchar32 *)(pbVar4 + uVar3 * 4 + -4) = param_1[uVar3 - 1];
      uVar3 = uVar6;
    } while (uVar6 != 0);
  }
LAB_00f0fd34:
  *(undefined4 *)(pbVar4 + param_2 * 4) = 0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)param_2 << 1,0);
  }
  else {
    *(ulong *)(this + 8) = param_2;
  }
  return this;
}

