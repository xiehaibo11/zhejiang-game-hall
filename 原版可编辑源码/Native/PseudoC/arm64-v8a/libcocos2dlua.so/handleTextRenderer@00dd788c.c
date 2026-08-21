
/* cocos2d::ui::RichText::handleTextRenderer(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float, cocos2d::Color3B const&, unsigned char, unsigned int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::Color3B const&, int, cocos2d::Color3B const&, cocos2d::Size const&, int,
   cocos2d::Color3B const&) */

void __thiscall
cocos2d::ui::RichText::handleTextRenderer
          (RichText *this,basic_string *param_1,basic_string *param_2,float param_3,Color3B *param_4
          ,uchar param_5,uint param_6,basic_string *param_7,Color3B *param_8,int param_9,
          Color3B *param_10,Size *param_11,int param_12,Color3B *param_13)

{
  undefined1 *puVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  undefined1 *puVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  basic_istream *pbVar15;
  Label *this_00;
  undefined8 uVar16;
  float *pfVar17;
  ulong uVar18;
  undefined1 *__dest;
  code *pcVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  byte *pbVar29;
  byte *pbVar30;
  uint uVar31;
  byte *pbVar32;
  long lVar33;
  undefined4 in_register_00005004;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  long local_268;
  byte *local_258;
  byte *local_250;
  Ref *local_240;
  ulong uStack_238;
  undefined1 *local_230;
  Ref *local_228;
  ulong uStack_220;
  undefined1 *local_218;
  undefined8 local_210;
  ulong uStack_208;
  undefined1 *local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined **ppuStack_1d8;
  locale alStack_1d0 [8];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ulong local_198;
  undefined8 uStack_190;
  void *local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_170 [17];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined **local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  RichText *local_b8;
  undefined ***local_b0;
  long local_98;
  
                    /* try { // try from 00dd7890 to 00ed78cf has its CatchHandler @ 00dd7ba0 */
  lVar5 = tpidr_el0;
  local_98 = *(long *)(lVar5 + 0x28);
  plVar13 = (long *)FileUtils::getInstance();
  uVar8 = (**(code **)(*plVar13 + 0x128))(plVar13,param_2);
  lVar14 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                       *)(this + 0x548),(basic_string *)KEY_WRAP_MODE);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_007d44e0("unordered_map::at: key not found");
  }
  iVar9 = cocos2d::Value::asInt((Value *)(lVar14 + 0x28));
                    /* try { // try from 00dd793c to 00ed7943 has its CatchHandler @ 00dd7cdc */
  local_170[0] = 0x1698928;
  local_1f0 = 0x1698900;
  uStack_1e8 = 0;
  local_1e0 = 0x1698810;
  std::__ndk1::ios_base::init
            ((ios_base *)local_170,
             (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &ppuStack_1d8);
  local_e0 = 0xffffffff;
  ppuStack_1d8 = &PTR__basic_streambuf_01698a08;
  local_1f0 = 0x16987e8;
  local_170[0] = 0x1698838;
  local_e8 = 0;
  local_1e0 = 0x1698810;
  std::__ndk1::locale::locale(alStack_1d0);
  uStack_1a0 = 0;
  local_1a8 = 0;
  uStack_1b0 = 0;
  local_1b8 = 0;
  uStack_1c0 = 0;
  local_1c8 = 0;
  ppuStack_1d8 = &PTR__basic_stringbuf_01698960;
  uStack_190 = 0;
  local_198 = 0;
  uStack_180 = 0;
  local_188 = (void *)0x0;
  local_178 = 0x18;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &ppuStack_1d8,param_1);
                    /* try { // try from 00dd79ec to 00ed79f7 has its CatchHandler @ 00dd7c8c */
  uStack_238 = 0;
  local_230 = (undefined1 *)0x0;
  local_240 = (Ref *)0x0;
  lVar14 = 0;
  while( true ) {
                    /* try { // try from 00dd7a80 to 00ed7aa7 has its CatchHandler @ 00dd7c9c */
    pbVar15 = std::__ndk1::getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ((basic_istream *)&local_1f0,(basic_string *)&local_240,'\n');
    if (((byte)pbVar15[*(long *)(*(long *)pbVar15 + -0x18) + 0x20] & 5) != 0) {
      if (((ulong)local_240 & 1) != 0) {
        operator_delete(local_230);
      }
      local_1f0 = 0x16987e8;
      local_1e0 = 0x1698810;
                    /* catch() { ... } // from try @ 00dd83ac with catch @ 00dd8514 */
                    /* catch() { ... } // from try @ 00dd8158 with catch @ 00dd8518 */
      local_170[0] = 0x1698838;
                    /* catch() { ... } // from try @ 00dd81c8 with catch @ 00dd8528 */
      ppuStack_1d8 = &PTR__basic_stringbuf_01698960;
                    /* catch() { ... } // from try @ 00dd81e8 with catch @ 00dd852c */
                    /* catch() { ... } // from try @ 00dd8300 with catch @ 00dd8530 */
      if ((local_198 & 1) != 0) {
                    /* catch() { ... } // from try @ 00dd82e0 with catch @ 00dd8534 */
        operator_delete(local_188);
      }
      ppuStack_1d8 = &PTR__basic_streambuf_01698a08;
      std::__ndk1::locale::~locale(alStack_1d0);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_170);
      if (*(long *)(lVar5 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (lVar14 != 0) {
      addNewLine(this);
      *(float *)(*(long *)(this + 0x530) + -4) = param_3;
    }
    StringUtils::StringUTF8::StringUTF8((StringUTF8 *)&local_258,(basic_string *)&local_240);
    uVar18 = (ulong)local_240 >> 1 & 0x7f;
    if (((ulong)local_240 & 1) != 0) {
      uVar18 = uStack_238;
    }
    if (uVar18 != 0) break;
LAB_00dd7a68:
    lVar14 = lVar14 + 1;
    StringUtils::StringUTF8::~StringUTF8((StringUTF8 *)&local_258);
  }
  local_268 = 0;
LAB_00dd7b34:
  if ((uVar8 & 1) == 0) {
                    /* catch() { ... } // from try @ 00dd7800 with catch @ 00dd7c00 */
    this_00 = (Label *)Label::createWithSystemFont
                                 (CONCAT44(in_register_00005004,param_3),&local_240,param_2,
                                  &Size::ZERO,0,0);
  }
  else {
    this_00 = (Label *)Label::createWithTTF
                                 (CONCAT44(in_register_00005004,param_3),&local_240,param_2,
                                  &Size::ZERO,0,0);
  }
  if ((param_6 & 1) != 0) {
                    /* catch() { ... } // from try @ 00dd7840 with catch @ 00dd7b68 */
    Label::enableItalics(this_00);
  }
  if ((param_6 >> 1 & 1) != 0) {
    Label::enableBold(this_00);
  }
                    /* catch() { ... } // from try @ 00dd77e8 with catch @ 00dd7b78 */
  if ((param_6 >> 2 & 1) != 0) {
    Label::enableUnderline(this_00);
  }
  if ((param_6 >> 3 & 1) != 0) {
                    /* catch() { ... } // from try @ 00dd7858 with catch @ 00dd7b88 */
    Label::enableStrikethrough(this_00);
  }
  if ((param_6 >> 4 & 1) != 0) {
                    /* catch() { ... } // from try @ 00dd77d0 with catch @ 00dd7b9c */
    local_d0 = &PTR_FUN_016e2cb8;
                    /* catch() { ... } // from try @ 00dd7890 with catch @ 00dd7ba0 */
    local_b0 = &local_d0;
    uStack_c0 = 0;
    local_c8 = openUrl;
    local_b8 = this;
    uVar16 = ListenerComponent::create(this_00,param_7,&local_d0);
    (**(code **)(*(long *)this_00 + 0x460))(this_00,uVar16);
    if (&local_d0 == local_b0) {
      pcVar19 = (code *)(*local_b0)[4];
    }
    else {
      if (local_b0 == (undefined ***)0x0) goto LAB_00dd7c1c;
      pcVar19 = (code *)(*local_b0)[5];
    }
    (*pcVar19)();
  }
LAB_00dd7c1c:
  if ((param_6 >> 5 & 1) != 0) {
    Color4B::Color4B((Color4B *)&local_210,param_8,0xff);
    (**(code **)(*(long *)this_00 + 0x5a8))(this_00,&local_210,param_9);
  }
  if ((param_6 >> 6 & 1) != 0) {
    Color4B::Color4B((Color4B *)&local_210,param_10,0xff);
    (**(code **)(*(long *)this_00 + 0x5a0))(this_00,&local_210,param_11,param_12);
  }
  if ((param_6 >> 7 & 1) != 0) {
    Color4B::Color4B((Color4B *)&local_210,param_13,0xff);
                    /* catch() { ... } // from try @ 00dd79ec with catch @ 00dd7c8c */
                    /* catch() { ... } // from try @ 00dd775c with catch @ 00dd7c90 */
                    /* catch() { ... } // from try @ 00dd7afc with catch @ 00dd7c94 */
                    /* catch() { ... } // from try @ 00dd7a64 with catch @ 00dd7c98 */
                    /* catch() { ... } // from try @ 00dd7a80 with catch @ 00dd7c9c */
    (**(code **)(*(long *)this_00 + 0x5b0))(this_00,&local_210);
  }
                    /* catch() { ... } // from try @ 00dd7724 with catch @ 00dd7ca0
                       catch() { ... } // from try @ 00dd77ac with catch @ 00dd7ca0 */
  Color4B::Color4B((Color4B *)&local_210,param_4,0xff);
  (**(code **)(*(long *)this_00 + 0x598))(this_00,&local_210);
                    /* catch() { ... } // from try @ 00dd76dc with catch @ 00dd7ccc */
  (**(code **)(*(long *)this_00 + 0x490))(this_00,param_5);
                    /* catch() { ... } // from try @ 00dd7764 with catch @ 00dd7cdc
                       catch() { ... } // from try @ 00dd77b8 with catch @ 00dd7cdc
                       catch() { ... } // from try @ 00dd793c with catch @ 00dd7cdc */
  pfVar17 = (float *)(**(code **)(*(long *)this_00 + 0x168))(this_00);
  fVar36 = *pfVar17;
  fVar35 = *(float *)(this + 0x540);
  if (fVar36 <= 0.0) {
    fVar36 = fVar35 / param_3;
  }
  else {
    if (fVar36 <= fVar35) {
      lVar33 = *(long *)(this + 0x510);
      *(float *)(this + 0x540) = fVar35 - fVar36;
      if (*(long *)(this + 0x518) - lVar33 != 0) {
                    /* catch() { ... } // from try @ 00dd80fc with catch @ 00dd84bc */
                    /* catch() { ... } // from try @ 00dd80e4 with catch @ 00dd84c0 */
        lVar24 = (*(long *)(this + 0x518) - lVar33 >> 3) * -0x5555555555555555 + -1;
                    /* catch() { ... } // from try @ 00dd83f8 with catch @ 00dd84d0 */
        lVar22 = lVar33 + lVar24 * 0x18;
                    /* catch() { ... } // from try @ 00dd824c with catch @ 00dd84d4 */
        puVar25 = (undefined8 *)(lVar22 + 8);
        puVar27 = (undefined8 *)*puVar25;
        if (puVar27 == *(undefined8 **)(lVar22 + 0x10)) {
          local_210 = (Ref *)this_00;
          std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
          __push_back_slow_path<cocos2d::Node*const&>
                    ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)
                     (lVar33 + lVar24 * 0x18),(Node **)&local_210);
        }
        else {
          *puVar27 = this_00;
          *puVar25 = puVar27 + 1;
          local_210 = (Ref *)this_00;
        }
                    /* try { // try from 00dd7a64 to 00ed7a6b has its CatchHandler @ 00dd7c98 */
        Ref::retain(local_210);
      }
      goto LAB_00dd7a68;
    }
    uVar18 = StringUtils::StringUTF8::length((StringUTF8 *)&local_258);
    fVar36 = fVar35 / fVar36;
    fVar35 = *(float *)(this + 0x540);
    fVar36 = fVar36 * (float)uVar18;
  }
  pbVar20 = local_250;
  fVar37 = *(float *)(this + 0x39c);
  uVar31 = (uint)fVar36;
  pbVar30 = local_258;
  if (iVar9 != 0) {
    iVar10 = StringUtils::StringUTF8::length((StringUTF8 *)&local_258);
    StringUtils::StringUTF8::getAsCharSequence((ulong)&local_258,0);
    (**(code **)(*(long *)this_00 + 0x588))(this_00,&local_210);
    pfVar17 = (float *)(**(code **)(*(long *)this_00 + 0x168))(this_00);
    fVar36 = *pfVar17;
    if (fVar36 <= fVar35) {
      for (; (fVar36 < fVar35 && ((int)uVar31 < iVar10)); uVar31 = uVar31 + (fVar36 <= fVar35)) {
        uVar18 = (ulong)(int)uVar31;
                    /* catch() { ... } // from try @ 00dd7f38 with catch @ 00dd7f6c */
        uVar23 = ((long)local_250 - (long)local_258 >> 3) * -0x5555555555555555;
        if (uVar23 < uVar18 || uVar23 - uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
        }
        pbVar20 = local_258 + uVar18 * 0x18;
        uVar18 = *(ulong *)(pbVar20 + 8);
        pbVar30 = *(byte **)(pbVar20 + 0x10);
        if ((*pbVar20 & 1) == 0) {
          pbVar30 = pbVar20 + 1;
          uVar18 = (ulong)(*pbVar20 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_210,(char *)pbVar30,uVar18);
        (**(code **)(*(long *)this_00 + 0x588))(this_00,&local_210);
        pfVar17 = (float *)(**(code **)(*(long *)this_00 + 0x168))(this_00);
        fVar36 = *pfVar17;
      }
    }
    else {
      lVar33 = (long)(int)uVar31 * 0x18;
      uVar18 = (long)(int)uVar31;
      do {
        uVar31 = uVar31 - 1;
        uVar23 = uVar18 - 1;
        if ((long)uVar18 < 1) break;
        uVar18 = ((long)local_250 - (long)local_258 >> 3) * -0x5555555555555555;
        if (uVar18 < uVar23 || uVar18 - uVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
        }
        uVar26 = (ulong)local_210 >> 1 & 0x7f;
        uVar18 = uVar26;
        puVar6 = (undefined1 *)((ulong)&local_210 | 1);
        if (((ulong)local_210 & 1) != 0) {
          uVar18 = uStack_208;
          puVar6 = local_200;
        }
        if ((local_258[lVar33 + -0x18] & 1) == 0) {
          uVar28 = (ulong)(local_258[lVar33 + -0x18] >> 1);
        }
        else {
          uVar28 = *(ulong *)(local_258 + lVar33 + -0x10);
        }
        __dest = puVar6 + (uVar18 - uVar28);
        puVar1 = local_200 + uStack_208;
        if (((ulong)local_210 & 1) == 0) {
          puVar1 = (undefined1 *)((long)&local_210 + uVar26 + 1);
        }
        uVar26 = uVar18 - ((long)__dest - (long)puVar6);
        if (uVar18 < (ulong)((long)__dest - (long)puVar6)) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        uVar28 = (long)puVar1 - (long)__dest;
        if (uVar28 != 0) {
          uVar3 = uVar26;
          if (uVar28 <= uVar26) {
            uVar3 = uVar28;
          }
          if (uVar26 - uVar3 != 0) {
            memmove(__dest,__dest + uVar3,uVar26 - uVar3);
          }
          uVar18 = uVar18 - uVar3;
          uVar26 = uVar18;
          if (((ulong)local_210 & 1) == 0) {
            local_210 = (Ref *)CONCAT71(local_210._1_7_,(char)((int)uVar18 << 1));
            uVar26 = uStack_208;
          }
          uStack_208 = uVar26;
          puVar6[uVar18] = 0;
        }
        (**(code **)(*(long *)this_00 + 0x588))(this_00,&local_210);
        pfVar17 = (float *)(**(code **)(*(long *)this_00 + 0x168))(this_00);
                    /* catch() { ... } // from try @ 00dd7ec0 with catch @ 00dd7e88 */
        lVar33 = lVar33 + -0x18;
        uVar18 = uVar23;
      } while (fVar35 < *pfVar17);
    }
    uVar11 = (uint)(fVar37 == fVar35);
    if (0 < (int)uVar31) {
      uVar11 = uVar31;
    }
    goto joined_r0x00dd8474;
  }
  for (; pbVar30 != pbVar20; pbVar30 = pbVar30 + 0x18) {
    bVar4 = *pbVar30;
    if ((bVar4 & 1) != 0) {
      if (*(long *)(pbVar30 + 8) == 1) goto LAB_00dd7eb8;
LAB_00dd8088:
      uVar23 = FUN_00dd9a00(&local_258,uVar31);
      uVar18 = uVar23 & 0xffffffff;
      uVar11 = (uint)uVar23;
      StringUtils::StringUTF8::getAsCharSequence((ulong)&local_258,0);
      (**(code **)(*(long *)this_00 + 0x588))(this_00,&local_210);
      pfVar17 = (float *)(**(code **)(*(long *)this_00 + 0x168))(this_00);
      if (fVar35 < *pfVar17) goto LAB_00dd80dc;
      if (fVar35 <= *pfVar17) goto joined_r0x00dd8474;
      goto LAB_00dd83b4;
    }
    if (bVar4 >> 1 != 1) goto LAB_00dd8088;
LAB_00dd7eb8:
                    /* try { // try from 00dd7eb8 to 00ed7ebf has its CatchHandler @ 00dd7eec */
    if ((bVar4 & 1) == 0) {
      pbVar29 = pbVar30 + 1;
                    /* try { // try from 00dd7ec0 to 00ed7f07 has its CatchHandler @ 00dd7e88 */
    }
    else {
      pbVar29 = *(byte **)(pbVar30 + 0x10);
    }
    bVar4 = *pbVar29;
    std::__ndk1::locale::locale((locale *)&local_210);
                    /* catch() { ... } // from try @ 00dd7eb8 with catch @ 00dd7eec */
    lVar33 = std::__ndk1::locale::use_facet
                       ((locale *)&local_210,(id *)&std::__ndk1::ctype<char>::id);
    if ((char)bVar4 < '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = (*(ulong *)(*(long *)(lVar33 + 0x10) + (long)(char)bVar4 * 8) & 0x60) != 0;
                    /* catch() { ... } // from try @ 00dd7f40 with catch @ 00dd7f08 */
    }
    std::__ndk1::locale::~locale((locale *)&local_210);
    if (!bVar7) goto LAB_00dd8088;
  }
  pbVar30 = local_250;
  if (fVar37 == fVar35) {
    uVar11 = StringUtils::StringUTF8::length((StringUTF8 *)&local_258);
                    /* try { // try from 00dd7f38 to 00ed7f3f has its CatchHandler @ 00dd7f6c */
                    /* try { // try from 00dd7f40 to 00ed7f87 has its CatchHandler @ 00dd7f08 */
    goto joined_r0x00dd7ff8;
  }
  goto LAB_00dd836c;
LAB_00dd80dc:
  do {
    pbVar30 = local_258;
    uVar11 = (uint)uVar18;
    if ((int)uVar11 < 1) {
LAB_00dd8468:
      if (fVar37 != fVar35) {
        uVar11 = 0;
      }
      break;
    }
                    /* try { // try from 00dd80e4 to 00ed80ef has its CatchHandler @ 00dd84c0 */
                    /* try { // try from 00dd80fc to 00ed8107 has its CatchHandler @ 00dd84bc */
    lVar33 = (long)(int)uVar11;
    uVar18 = ~(((long)local_250 - (long)local_258 >> 3) * -0x5555555555555555);
    pbVar20 = local_250 + (uVar18 + lVar33) * 0x18;
    if (pbVar20 != local_258) {
      lVar22 = lVar33 * 0x18;
      pbVar29 = local_250 + uVar18 * 0x18 + 0x18;
      pbVar2 = local_258 + lVar33 * -0x18 + 0x18;
      pbVar21 = pbVar20;
      while( true ) {
        pbVar32 = pbVar29 + lVar22 + -0x30;
        bVar4 = *pbVar32;
        pbVar20 = pbVar21;
        if ((bVar4 & 1) == 0) {
          if (bVar4 >> 1 != 1) goto LAB_00dd81cc;
        }
        else if (*(long *)(pbVar29 + lVar22 + -0x28) != 1) goto LAB_00dd81cc;
        if ((bVar4 & 1) == 0) {
          pbVar21 = pbVar29 + lVar22 + -0x2f;
                    /* try { // try from 00dd8158 to 00ed8167 has its CatchHandler @ 00dd8518 */
        }
        else {
          pbVar21 = *(byte **)(pbVar29 + lVar22 + -0x20);
        }
        bVar4 = *pbVar21;
        std::__ndk1::locale::locale((locale *)&local_228);
        lVar33 = std::__ndk1::locale::use_facet
                           ((locale *)&local_228,(id *)&std::__ndk1::ctype<char>::id);
        if ((char)bVar4 < '\0') break;
        uVar18 = *(ulong *)(*(long *)(lVar33 + 0x10) + (long)(char)bVar4 * 8);
        std::__ndk1::locale::~locale((locale *)&local_228);
        if (((uVar18 & 0x60) == 0) ||
           (pbVar29 = pbVar29 + -0x18, pbVar20 = pbVar30, pbVar21 = pbVar32, pbVar2 == pbVar29))
        goto LAB_00dd81cc;
      }
                    /* try { // try from 00dd81c8 to 00ed81e3 has its CatchHandler @ 00dd8528 */
      std::__ndk1::locale::~locale((locale *)&local_228);
    }
LAB_00dd81cc:
    if ((long)pbVar20 - (long)local_258 == 0) goto LAB_00dd8468;
                    /* try { // try from 00dd81e8 to 00ed81f7 has its CatchHandler @ 00dd852c */
    uVar18 = ((long)pbVar20 - (long)local_258 >> 3) * -0x5555555555555555;
    uVar31 = (uint)uVar18;
    if ((int)uVar31 < 0) goto LAB_00dd8468;
    StringUtils::StringUTF8::getAsCharSequence((ulong)&local_258,0);
    if (((ulong)local_210 & 1) != 0) {
      *local_200 = 0;
      uStack_208 = 0;
      if (((ulong)local_210 & 1) != 0) {
        operator_delete(local_200);
      }
    }
    uStack_208 = uStack_220;
    local_210 = local_228;
                    /* try { // try from 00dd824c to 00ed8293 has its CatchHandler @ 00dd84d4 */
    local_200 = local_218;
    (**(code **)(*(long *)this_00 + 0x588))(this_00,&local_210);
    pfVar17 = (float *)(**(code **)(*(long *)this_00 + 0x168))(this_00);
    uVar18 = uVar18 & 0xffffffff;
    uVar11 = uVar31;
  } while (fVar35 < *pfVar17);
  goto joined_r0x00dd8474;
  while (uVar12 = StringUtils::StringUTF8::length((StringUTF8 *)&local_258),
        uVar18 = uVar23 & 0xffffffff, uVar11 = uVar31, uVar31 != uVar12) {
LAB_00dd83b4:
    uVar23 = FUN_00dd9a00(&local_258,uVar18);
    uVar31 = (uint)uVar23;
    StringUtils::StringUTF8::getAsCharSequence((ulong)&local_258,0);
    if (((ulong)local_210 & 1) != 0) {
      *local_200 = 0;
      uStack_208 = 0;
                    /* try { // try from 00dd83f8 to 00ed845b has its CatchHandler @ 00dd84d0 */
      if (((ulong)local_210 & 1) != 0) {
        operator_delete(local_200);
      }
    }
    uStack_208 = uStack_220;
    local_210 = local_228;
    local_200 = local_218;
    (**(code **)(*(long *)this_00 + 0x588))(this_00,&local_210);
    pfVar17 = (float *)(**(code **)(*(long *)this_00 + 0x168))(this_00);
    if (fVar35 <= *pfVar17) {
      uVar11 = (uint)uVar18;
      if (*pfVar17 <= fVar35) {
        uVar11 = uVar31;
      }
      break;
    }
  }
joined_r0x00dd8474:
  if (((ulong)local_210 & 1) != 0) {
    operator_delete(local_200);
  }
joined_r0x00dd7ff8:
  if ((int)uVar11 < 1) {
                    /* try { // try from 00dd8080 to 00ed80e3 has its CatchHandler @ 00dd8080
                       catch() { ... } // from try @ 00dd8080 with catch @ 00dd8080
                       catch() { ... } // from try @ 00dd845c with catch @ 00dd8080 */
    pbVar30 = local_250;
    if (uVar11 == 0) goto LAB_00dd836c;
  }
  else {
    StringUtils::StringUTF8::getAsCharSequence((ulong)&local_258,0);
    (**(code **)(*(long *)this_00 + 0x588))(this_00,&local_210);
    if (((ulong)local_210 & 1) != 0) {
      operator_delete(local_200);
    }
    lVar33 = *(long *)(this + 0x510);
    if (*(long *)(this + 0x518) - lVar33 != 0) {
      lVar22 = (*(long *)(this + 0x518) - lVar33 >> 3) * -0x5555555555555555 + -1;
      lVar24 = lVar33 + lVar22 * 0x18;
      puVar25 = (undefined8 *)(lVar24 + 8);
      puVar27 = (undefined8 *)*puVar25;
      if (puVar27 == *(undefined8 **)(lVar24 + 0x10)) {
        local_210 = (Ref *)this_00;
        std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
        __push_back_slow_path<cocos2d::Node*const&>
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)
                   (lVar33 + lVar22 * 0x18),(Node **)&local_210);
      }
      else {
        *puVar27 = this_00;
        *puVar25 = puVar27 + 1;
        local_210 = (Ref *)this_00;
      }
      Ref::retain(local_210);
    }
  }
  pbVar20 = local_258 + (long)(int)uVar11 * 0x18;
  pbVar30 = local_258;
  if (local_258 + (long)(int)uVar11 * 0x18 != local_250) {
    lVar33 = (long)(int)uVar11 * 0x18 >> 3;
    pbVar29 = local_250 + lVar33 * -8;
    if ((*local_258 & 1) != 0) goto LAB_00dd830c;
    do {
      pbVar30[0] = 0;
      pbVar30[1] = 0;
      pbVar20 = pbVar30;
      while( true ) {
                    /* try { // try from 00dd82e0 to 00ed82fb has its CatchHandler @ 00dd8534 */
        pbVar2 = pbVar20 + lVar33 * 8;
        uVar34 = *(undefined8 *)(pbVar2 + 8);
        uVar16 = *(undefined8 *)pbVar2;
        *(undefined8 *)(pbVar20 + 0x10) = *(undefined8 *)(pbVar2 + 0x10);
        pbVar30 = pbVar20 + 0x18;
        *(undefined8 *)(pbVar20 + 8) = uVar34;
        *(undefined8 *)pbVar20 = uVar16;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
        pbVar2[0x10] = 0;
        pbVar2[0x11] = 0;
        pbVar2[0x12] = 0;
        pbVar2[0x13] = 0;
        pbVar2[0x14] = 0;
        pbVar2[0x15] = 0;
        pbVar2[0x16] = 0;
        pbVar2[0x17] = 0;
        pbVar2[0] = 0;
        pbVar2[1] = 0;
        pbVar2[2] = 0;
        pbVar2[3] = 0;
        pbVar2[4] = 0;
        pbVar2[5] = 0;
        pbVar2[6] = 0;
        pbVar2[7] = 0;
        pbVar20 = local_250;
                    /* try { // try from 00dd8300 to 00ed830f has its CatchHandler @ 00dd8530 */
        if (pbVar29 == pbVar30) goto LAB_00dd8334;
        if ((*pbVar30 & 1) == 0) break;
LAB_00dd830c:
        **(undefined1 **)(pbVar30 + 0x10) = 0;
        pbVar30[8] = 0;
        pbVar30[9] = 0;
        pbVar30[10] = 0;
        pbVar30[0xb] = 0;
        pbVar30[0xc] = 0;
        pbVar30[0xd] = 0;
        pbVar30[0xe] = 0;
        pbVar30[0xf] = 0;
        pbVar20 = pbVar30;
        if ((*pbVar30 & 1) != 0) {
          operator_delete(*(void **)(pbVar30 + 0x10));
          pbVar30[0] = 0;
          pbVar30[1] = 0;
          pbVar30[2] = 0;
          pbVar30[3] = 0;
          pbVar30[4] = 0;
          pbVar30[5] = 0;
          pbVar30[6] = 0;
          pbVar30[7] = 0;
        }
      }
    } while( true );
  }
LAB_00dd8334:
  if (pbVar20 != pbVar30) {
    bVar4 = pbVar20[-0x18];
    pbVar29 = pbVar20 + -0x18;
    while( true ) {
      pbVar2 = pbVar29;
      if ((bVar4 & 1) != 0) {
        operator_delete(*(void **)(pbVar20 + -8));
      }
      if (pbVar30 == pbVar2) break;
      bVar4 = pbVar2[-0x18];
      pbVar29 = pbVar2 + -0x18;
      pbVar20 = pbVar2;
    }
  }
LAB_00dd836c:
  local_250 = pbVar30;
  StringUtils::StringUTF8::getAsCharSequence();
  local_268 = local_268 + 1;
  if (((ulong)local_240 & 1) != 0) {
    *local_230 = 0;
    uStack_238 = 0;
    if (((ulong)local_240 & 1) != 0) {
      operator_delete(local_230);
                    /* try { // try from 00dd83ac to 00ed83b7 has its CatchHandler @ 00dd8514 */
    }
  }
  uStack_238 = uStack_208;
  local_240 = local_210;
  local_230 = local_200;
                    /* try { // try from 00dd7afc to 00ed7b17 has its CatchHandler @ 00dd7c94 */
  uVar18 = (ulong)local_210 >> 1 & 0x7f;
  if (((ulong)local_210 & 1) != 0) {
    uVar18 = uStack_208;
  }
                    /* try { // try from 00dd7b18 to 00ed7cfb has its CatchHandler @ 00dd75d4 */
  if (uVar18 == 0) goto LAB_00dd7a68;
  if (local_268 != 0) {
    local_230 = local_200;
    uStack_238 = uStack_208;
    local_240 = local_210;
    addNewLine(this);
    *(float *)(*(long *)(this + 0x530) + -4) = param_3;
  }
  goto LAB_00dd7b34;
}

