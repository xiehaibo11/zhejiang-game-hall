
/* cocos2d::Label::recordLetterInfo(cocos2d::Vec2 const&, char32_t, int, int) */

void __thiscall
cocos2d::Label::recordLetterInfo(Label *this,Vec2 *param_1,wchar32 param_2,int param_3,int param_4)

{
  wchar32 *pwVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *__src;
  ulong uVar9;
  size_t __n;
  ulong uVar10;
  ulong uVar11;
  wchar32 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  wchar32 local_74 [3];
  long local_68;
  
                    /* try { // try from 00f13a18 to 01013a1b has its CatchHandler @ 00f13af4 */
                    /* try { // try from 00f13a1c to 01013a6f has its CatchHandler @ 00f139b8 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar11 = (ulong)param_3;
  puVar5 = *(undefined8 **)(this + 0x3f8);
  __src = *(void **)(this + 0x3f0);
  __n = (long)puVar5 - (long)__src;
                    /* try { // try from 00f13a70 to 01013aa3 has its CatchHandler @ 00f13af4 */
  uVar10 = ((long)__n >> 3) * -0x5555555555555555;
  local_74[0] = param_2;
  if (uVar11 <= uVar10 && uVar10 - uVar11 != 0) goto LAB_00f13b6c;
  if (*(undefined8 **)(this + 0x400) == puVar5) {
    uVar9 = 0xaaaaaaaaaaaaaaa;
    uVar10 = uVar10 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = (long)*(undefined8 **)(this + 0x400) - (long)__src >> 3;
    if ((ulong)(lVar6 * -0x5555555555555555) < 0x555555555555555) {
      uVar7 = lVar6 * 0x5555555555555556;
      uVar9 = uVar10;
                    /* catch() { ... } // from try @ 00f13a18 with catch @ 00f13af4
                       catch() { ... } // from try @ 00f13a70 with catch @ 00f13af4 */
      if (uVar10 <= uVar7) {
        uVar9 = uVar7;
      }
      if (uVar9 != 0) goto LAB_00f13afc;
      pvVar3 = (void *)0x0;
    }
    else {
LAB_00f13afc:
      pvVar3 = operator_new(uVar9 * 0x18);
    }
    puVar5 = (undefined8 *)((long)pvVar3 + ((long)__n >> 3) * 8);
    puVar5[2] = local_80;
    puVar5[1] = uStack_88;
    *puVar5 = local_90;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar5 - __n),__src,__n);
    }
    *(undefined8 **)(this + 0x3f8) = puVar5 + 3;
    *(void **)(this + 0x3f0) = (void *)((long)puVar5 - __n);
    *(void **)(this + 0x400) = (void *)((long)pvVar3 + uVar9 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    puVar5[2] = local_80;
    puVar5[1] = uStack_88;
    *puVar5 = local_90;
                    /* try { // try from 00f13aa4 to 01013b0f has its CatchHandler @ 00f139b8 */
    *(undefined8 **)(this + 0x3f8) = puVar5 + 3;
  }
  __src = *(void **)(this + 0x3f0);
LAB_00f13b6c:
  pwVar1 = (wchar32 *)((long)__src + uVar11 * 0x18);
  pwVar1[5] = param_4;
  *pwVar1 = param_2;
  local_90 = local_74;
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
          ::
          __emplace_unique_key_args<char32_t,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<char32_t_const&>,std::__ndk1::tuple<>>
                    ((wchar32 *)(*(long *)(this + 0x3d0) + 0x50),(piecewise_construct_t *)local_74,
                     (tuple *)&DAT_0143ae14,(tuple *)&local_90);
  lVar6 = *(long *)(this + 0x3f0) + uVar11 * 0x18;
  *(undefined1 *)(lVar6 + 4) = *(undefined1 *)(lVar4 + 0x30);
  uVar8 = *(undefined8 *)param_1;
  *(undefined4 *)(lVar6 + 0x10) = 0xffffffff;
  *(undefined8 *)(lVar6 + 8) = uVar8;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

