
/* cocos2d::FontAtlas::getFontName() const */

void cocos2d::FontAtlas::getFontName(void)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long in_x0;
  void *pvVar4;
  ulong *in_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long *)(in_x0 + 0x88) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_60,"");
  }
  else {
                    /* catch() { ... } // from try @ 00efd610 with catch @ 00efdf4c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_60,(basic_string *)(*(long *)(in_x0 + 0x88) + 0x40));
  }
  pvVar4 = local_50;
  uVar3 = uStack_58;
  uVar8 = local_60;
  uVar7 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    uVar7 = uStack_58;
  }
  if (uVar7 == 0) {
LAB_00efe058:
    local_50 = (void *)0x0;
    local_60 = 0;
    uStack_58 = 0;
    in_x8[2] = (ulong)pvVar4;
    in_x8[1] = uVar3;
    *in_x8 = uVar8;
    goto LAB_00efe080;
  }
                    /* catch() { ... } // from try @ 00efe0d4 with catch @ 00efdf88 */
  uVar6 = uVar7;
  pvVar1 = (void *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    pvVar1 = local_50;
  }
  do {
    uVar9 = uVar6;
    uVar5 = uVar7;
    if (uVar9 == 0) goto LAB_00efe010;
    uVar6 = uVar9 - 1;
  } while (*(char *)((long)pvVar1 + (uVar9 - 1)) != '/');
  if (uVar6 == 0xffffffffffffffff) {
LAB_00efe010:
    do {
      uVar9 = uVar5;
      if (uVar9 == 0) goto LAB_00efe058;
      uVar5 = uVar9 - 1;
    } while (*(char *)((long)pvVar1 + (uVar9 - 1)) != '\\');
    if (uVar5 == 0xffffffffffffffff) goto LAB_00efe058;
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
                    /* try { // try from 00efe02c to 00ffe033 has its CatchHandler @ 00efe138 */
    if (uVar7 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar7 = uVar7 - uVar9;
                    /* try { // try from 00efe03c to 00ffe04b has its CatchHandler @ 00efe120 */
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar7 < 0x17) goto LAB_00efe048;
    uVar8 = uVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = operator_new(uVar8);
LAB_00efe0b8:
    in_x8[1] = uVar7;
    in_x8[2] = (ulong)pvVar4;
    *in_x8 = uVar8 | 1;
LAB_00efe0c8:
                    /* try { // try from 00efe0cc to 00ffe0d3 has its CatchHandler @ 00efe138 */
                    /* try { // try from 00efe0d4 to 00ffe16f has its CatchHandler @ 00efdf88 */
    memcpy(pvVar4,(void *)((long)pvVar1 + uVar9),uVar7);
  }
  else {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    if (uVar7 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar7 = uVar7 - uVar9;
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (0x16 < uVar7) {
      uVar8 = uVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00efdff4 to 00ffdfff has its CatchHandler @ 00efe13c */
      pvVar4 = operator_new(uVar8);
      goto LAB_00efe0b8;
    }
LAB_00efe048:
    pvVar4 = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar7 << 1);
    if (uVar7 != 0) goto LAB_00efe0c8;
  }
  *(undefined1 *)((long)pvVar4 + uVar7) = 0;
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00efe080:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

