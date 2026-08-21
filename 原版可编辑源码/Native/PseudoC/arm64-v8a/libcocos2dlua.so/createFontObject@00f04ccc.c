
/* cocos2d::FontFreeType::createFontObject(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float) */

void __thiscall
cocos2d::FontFreeType::createFontObject(FontFreeType *this,basic_string *param_1,float param_2)

{
  basic_string *pbVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  basic_string *local_80 [2];
  long local_70 [2];
  basic_string *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x40) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
                    /* try { // try from 00f04d10 to 01004d67 has its CatchHandler @ 00f04eb0 */
    uVar6 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar6 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x40),(char *)pbVar1,uVar6);
  }
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>>>
                      *)&DAT_0178f800,param_1);
  if (lVar4 == 0) {
    local_80[0] = param_1;
                    /* try { // try from 00f04d70 to 01004d7f has its CatchHandler @ 00f04e98 */
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)&DAT_0178f800,(piecewise_construct_t *)param_1,
                       (tuple *)&DAT_0143a769,(tuple *)local_80);
                    /* try { // try from 00f04d80 to 01004d8f has its CatchHandler @ 00f04e84 */
    *(undefined4 *)(lVar4 + 0x38) = 1;
    plVar5 = (long *)FileUtils::getInstance();
                    /* try { // try from 00f04d90 to 01004dab has its CatchHandler @ 00f04e64 */
    (**(code **)(*plVar5 + 0x28))(local_80,plVar5,param_1);
    local_60 = param_1;
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)&DAT_0178f800,(piecewise_construct_t *)param_1,
                       (tuple *)&DAT_0143a769,(tuple *)&local_60);
    Data::operator=((Data *)(lVar4 + 0x28),(Data *)local_80);
    Data::~Data((Data *)local_80);
    local_80[0] = param_1;
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)&DAT_0178f800,(piecewise_construct_t *)param_1,
                       (tuple *)&DAT_0143a769,(tuple *)local_80);
    uVar6 = Data::isNull((Data *)(lVar4 + 0x28));
    if ((uVar6 & 1) == 0) goto LAB_00f04dfc;
  }
  else {
    *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
LAB_00f04dfc:
    if ((_FTInitialized == '\0') && (iVar3 = FT_Init_FreeType(&_FTlibrary), iVar3 == 0)) {
      _FTInitialized = '\x01';
    }
    uVar9 = _FTlibrary;
    local_80[0] = param_1;
                    /* try { // try from 00f04e38 to 01004e47 has its CatchHandler @ 00f04e4c */
                    /* try { // try from 00f04e48 to 01004f83 has its CatchHandler @ 00f049c0 */
                    /* catch() { ... } // from try @ 00f04e38 with catch @ 00f04e4c */
                    /* catch() { ... } // from try @ 00f04c6c with catch @ 00f04e50 */
                    /* catch() { ... } // from try @ 00f04a5c with catch @ 00f04e54 */
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)&DAT_0178f800,(piecewise_construct_t *)param_1,
                       (tuple *)&DAT_0143a769,(tuple *)local_80);
    uVar7 = Data::getBytes((Data *)(lVar4 + 0x28));
    local_80[0] = param_1;
                    /* catch() { ... } // from try @ 00f04d90 with catch @ 00f04e64 */
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)&DAT_0178f800,(piecewise_construct_t *)param_1,
                       (tuple *)&DAT_0143a769,(tuple *)local_80);
                    /* catch() { ... } // from try @ 00f04d80 with catch @ 00f04e84 */
    uVar8 = Data::getSize((Data *)(lVar4 + 0x28));
                    /* catch() { ... } // from try @ 00f04d70 with catch @ 00f04e98 */
                    /* catch() { ... } // from try @ 00f04a00 with catch @ 00f04e9c */
    iVar3 = FT_New_Memory_Face(uVar9,uVar7,uVar8,0,local_70);
    if (iVar3 == 0) {
                    /* catch() { ... } // from try @ 00f04ba0 with catch @ 00f04edc */
                    /* catch() { ... } // from try @ 00f04abc with catch @ 00f04ee0
                       catch() { ... } // from try @ 00f04c24 with catch @ 00f04ee0 */
      iVar3 = FT_Select_Charmap(local_70[0],0x756e6963);
      if (iVar3 == 0) {
LAB_00f04f38:
        lVar4 = Director::getInstance();
        lVar4 = (long)(int)(param_2 * 64.0 * *(float *)(lVar4 + 0x1a0));
        iVar3 = FT_Set_Char_Size(local_70[0],lVar4,lVar4,0x48,0x48);
        if (iVar3 == 0) {
          uVar9 = 1;
          *(long *)(this + 0x28) = local_70[0];
                    /* try { // try from 00f04f84 to 0100500f has its CatchHandler @ 00f04f84
                       catch() { ... } // from try @ 00f04f84 with catch @ 00f04f84
                       catch() { ... } // from try @ 00f05038 with catch @ 00f04f84
                       catch() { ... } // from try @ 00f05078 with catch @ 00f04f84
                       catch() { ... } // from try @ 00f050b8 with catch @ 00f04f84
                       catch() { ... } // from try @ 00f050f8 with catch @ 00f04f84 */
          *(int *)(this + 0x60) =
               (int)((ulong)(*(long *)(*(long *)(local_70[0] + 0xa0) + 0x30) -
                            *(long *)(*(long *)(local_70[0] + 0xa0) + 0x38)) >> 6);
          goto LAB_00f04eac;
        }
      }
      else if (0 < *(int *)(local_70[0] + 0x48)) {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(*(long *)(local_70[0] + 0x50) + lVar4 * 8) + 8) != 0) {
            *(undefined4 *)(this + 0x38) =
                 *(undefined4 *)(*(long *)(*(long *)(local_70[0] + 0x50) + lVar4 * 8) + 8);
            iVar3 = FT_Select_Charmap();
            if (iVar3 == 0) goto LAB_00f04f38;
            break;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(local_70[0] + 0x48));
      }
    }
  }
  uVar9 = 0;
LAB_00f04eac:
                    /* catch() { ... } // from try @ 00f04b34 with catch @ 00f04eac */
                    /* catch() { ... } // from try @ 00f04a20 with catch @ 00f04eb0
                       catch() { ... } // from try @ 00f04d10 with catch @ 00f04eb0 */
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

