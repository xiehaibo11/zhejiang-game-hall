
/* ArmatureNodeReader::getArmatureName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

basic_string * ArmatureNodeReader::getArmatureName(basic_string *param_1)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  byte *in_x1;
  ulong *in_x8;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  void *__dest;
  ulong uVar7;
  
  uVar7 = *(ulong *)(in_x1 + 8);
  pbVar1 = *(byte **)(in_x1 + 0x10);
  if ((*in_x1 & 1) == 0) {
    pbVar1 = in_x1 + 1;
    uVar7 = (ulong)(*in_x1 >> 1);
  }
  uVar4 = uVar7;
  if (uVar7 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar4 == 0) {
        uVar4 = 0xffffffffffffffff;
        break;
      }
      lVar2 = uVar4 - 1;
      uVar4 = uVar4 - 1;
    } while (pbVar1[lVar2] != 0x2e);
    uVar6 = uVar7;
    if (uVar7 == 0) {
      uVar5 = 0;
    }
    else {
      do {
        uVar5 = uVar6;
        if (uVar5 == 0) break;
        uVar6 = uVar5 - 1;
      } while (pbVar1[uVar5 - 1] != 0x5c);
      uVar3 = uVar7;
      if (uVar7 != 0) {
        do {
          uVar6 = uVar3;
          if (uVar6 == 0) break;
          uVar3 = uVar6 - 1;
        } while (pbVar1[uVar6 - 1] != 0x2f);
        goto LAB_00cc9a10;
      }
    }
    uVar6 = 0;
  }
LAB_00cc9a10:
  if (uVar6 <= uVar5) {
    uVar6 = uVar5;
  }
  uVar5 = 0;
  if (uVar6 != 0xffffffffffffffff) {
    uVar5 = uVar6;
  }
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (uVar7 < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  uVar6 = uVar7 - uVar5;
  if (uVar4 - uVar5 <= uVar7 - uVar5) {
    uVar6 = uVar4 - uVar5;
  }
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar6 << 1);
    if (uVar6 == 0) goto LAB_00cc9a8c;
  }
  else {
    uVar7 = uVar6 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    in_x8[1] = uVar6;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar7 | 1;
  }
  param_1 = memcpy(__dest,pbVar1 + uVar5,uVar6);
LAB_00cc9a8c:
  *(undefined1 *)((long)__dest + uVar6) = 0;
  return param_1;
}

