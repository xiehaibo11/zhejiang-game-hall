
/* register_all_cocos2dx_deprecated(lua_State*) */

undefined8 register_all_cocos2dx_deprecated(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  char *pcVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *apbStack_98 [2];
  void *pvStack_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_80 [16];
  void *pvStack_70;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **ppbStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  tolua_open();
  tolua_module(param_1,0,0);
  tolua_beginmodule(param_1,0);
  tolua_usertype(param_1,0x129ccb1);
  tolua_cclass(param_1,0x129ccb1,0x129ccb1,&DAT_013c996e,FUN_0089c074);
  tolua_beginmodule(param_1,0x129ccb1);
  tolua_function(param_1,"new",FUN_0089c09c);
  tolua_function(param_1,"new_local",FUN_0089c140);
  tolua_function(param_1,".call",FUN_0089c140);
  tolua_function(param_1,"new",FUN_0089c1e4);
  tolua_function(param_1,"new_local",FUN_0089c328);
  tolua_function(param_1,".call",FUN_0089c328);
  tolua_endmodule(param_1);
  tolua_usertype(param_1,"CCRect");
  tolua_cclass(param_1,"CCRect","CCRect",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"CCRect");
  tolua_function(param_1,"new",FUN_0089c46c);
  tolua_function(param_1,"new_local",FUN_0089c514);
  tolua_function(param_1,".call",FUN_0089c514);
  tolua_function(param_1,"new",FUN_0089c5bc);
  tolua_function(param_1,"new_local",FUN_0089c774);
  tolua_function(param_1,".call",FUN_0089c774);
  tolua_endmodule(param_1);
  tolua_usertype(param_1,"CCSize");
  tolua_cclass(param_1,"CCSize","CCSize",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"CCSize");
  tolua_function(param_1,"new",FUN_0089c92c);
  tolua_function(param_1,"new_local",FUN_0089c9d4);
  tolua_function(param_1,".call",FUN_0089c9d4);
  tolua_function(param_1,"new",FUN_0089ca7c);
  tolua_function(param_1,"new_local",FUN_0089cbcc);
  tolua_function(param_1,".call",FUN_0089cbcc);
  tolua_endmodule(param_1);
  tolua_usertype(param_1,"CCArray");
  tolua_cclass(param_1,"CCArray","CCArray","CCObject",0);
  tolua_beginmodule(param_1,"CCArray");
  tolua_function(param_1,"create",FUN_0089cd1c);
  tolua_function(param_1,"createWithObject",FUN_0089cde4);
  tolua_function(param_1,"createWithArray",FUN_0089cedc);
  tolua_function(param_1,"createWithCapacity",FUN_0089cfd4);
  tolua_function(param_1,"createWithContentsOfFile",FUN_0089d0c8);
  tolua_function(param_1,"count",FUN_0089d200);
  tolua_function(param_1,"capacity",FUN_0089d2dc);
  tolua_function(param_1,"indexOfObject",FUN_0089d3b8);
  tolua_function(param_1,"objectAtIndex",FUN_0089d4cc);
  tolua_function(param_1,"lastObject",FUN_0089d5f8);
  tolua_function(param_1,"randomObject",FUN_0089d708);
  tolua_function(param_1,"isEqualToArray",FUN_0089d808);
  tolua_function(param_1,"containsObject",FUN_0089d91c);
  tolua_function(param_1,"addObject",FUN_0089da30);
  tolua_function(param_1,"addObjectsFromArray",FUN_0089db34);
  tolua_function(param_1,"insertObject",FUN_0089dc38);
  tolua_function(param_1,"removeLastObject",FUN_0089dd74);
  tolua_function(param_1,"removeObject",FUN_0089de74);
  tolua_function(param_1,"removeObjectAtIndex",FUN_0089dfb4);
  tolua_function(param_1,"removeObjectsInArray",FUN_0089e0ec);
  tolua_function(param_1,"removeAllObjects",FUN_0089e1f0);
  tolua_function(param_1,"fastRemoveObject",FUN_0089e2bc);
  tolua_function(param_1,"fastRemoveObjectAtIndex",FUN_0089e3c0);
  tolua_function(param_1,"exchangeObject",FUN_0089e4bc);
  tolua_function(param_1,"exchangeObjectAtIndex",FUN_0089e600);
  tolua_function(param_1,"reverseObjects",FUN_0089e734);
  tolua_function(param_1,"reduceMemoryFootprint",FUN_0089e800);
  tolua_function(param_1,"replaceObjectAtIndex",FUN_0089e8cc);
  tolua_endmodule(param_1);
  tolua_usertype(param_1,"CCString");
  tolua_cclass(param_1,"CCString","CCString",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"CCString");
  tolua_function(param_1,"intValue",FUN_0089ea3c);
  tolua_function(param_1,"uintValue",FUN_0089eb18);
  tolua_function(param_1,"floatValue",FUN_0089ebf4);
  tolua_function(param_1,"doubleValue",FUN_0089ecd0);
  tolua_function(param_1,"boolValue",FUN_0089eda8);
  tolua_function(param_1,"getCString",FUN_0089ee84);
  tolua_function(param_1,"length",FUN_0089ef60);
  tolua_function(param_1,"compare",FUN_0089f03c);
  tolua_function(param_1,"isEqual",FUN_0089f148);
  tolua_function(param_1,"create",FUN_0089f264);
  tolua_function(param_1,"createWithData",FUN_0089f39c);
  tolua_function(param_1,"createWithContentsOfFile",FUN_0089f4c8);
  tolua_endmodule(param_1);
  tolua_usertype(param_1,"cc.LabelBMFont");
  tolua_module(param_1,"cc",0);
  tolua_beginmodule(param_1,"cc");
  tolua_cclass(param_1,"LabelBMFont","cc.LabelBMFont","cc.Node",0);
  tolua_beginmodule(param_1,"LabelBMFont");
  tolua_function(param_1,"new",FUN_0089f600);
  tolua_function(param_1,"setLineBreakWithoutSpace",FUN_0089f6c4);
  tolua_function(param_1,"getBlendFunc",FUN_0089f788);
  tolua_function(param_1,"isOpacityModifyRGB",FUN_0089f808);
  tolua_function(param_1,"getLetter",FUN_0089f888);
  tolua_function(param_1,"getString",FUN_0089f980);
  tolua_function(param_1,"setBlendFunc",FUN_0089fa0c);
  tolua_function(param_1,"setString",FUN_0089fae8);
  tolua_function(param_1,"initWithString",FUN_0089fbe0);
  tolua_function(param_1,"setOpacityModifyRGB",FUN_0089ffd8);
  tolua_function(param_1,"getFntFile",FUN_008a009c);
  tolua_function(param_1,"setFntFile",FUN_008a0120);
  tolua_function(param_1,"setAlignment",FUN_008a027c);
  tolua_function(param_1,"setWidth",FUN_008a0340);
  tolua_function(param_1,"create",FUN_008a0408);
  tolua_endmodule(param_1);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(abStack_80,"N7cocos2d11LabelBMFontE");
  apbStack_98[0] = abStack_80;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)abStack_80,
                     (tuple *)&DAT_0129e137,(tuple *)apbStack_98);
  pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar2 + 0x28);
  if (((byte)*pbVar3 & 1) == 0) {
    pcVar5 = (char *)(lVar2 + 0x29);
LAB_0089b3bc:
    builtin_strncpy(pcVar5,"cc.LabelBMFont",0xf);
    if (((byte)*pbVar3 & 1) == 0) {
      *pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1c
      ;
    }
    else {
      *(undefined8 *)(lVar2 + 0x30) = 0xe;
    }
  }
  else {
    uVar4 = (*(ulong *)pbVar3 & 0xfffffffffffffffe) - 1;
    if (0xd < uVar4) {
      pcVar5 = *(char **)(lVar2 + 0x38);
      goto LAB_0089b3bc;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar3,uVar4,0xf - (*(ulong *)pbVar3 & 0xfffffffffffffffe),*(ulong *)(lVar2 + 0x30),0
               ,*(ulong *)(lVar2 + 0x30),0xe,"cc.LabelBMFont");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             apbStack_98,"LabelBMFont");
  ppbStack_60 = apbStack_98;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)apbStack_98,
                     (tuple *)&DAT_0129e137,(tuple *)&ppbStack_60);
  pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar2 + 0x28);
  if (((byte)*pbVar3 & 1) == 0) {
    pcVar5 = (char *)(lVar2 + 0x29);
LAB_0089b838:
    builtin_strncpy(pcVar5,"cc.LabelBMFont",0xf);
    if (((byte)*pbVar3 & 1) == 0) {
      *pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1c
      ;
    }
    else {
      *(undefined8 *)(lVar2 + 0x30) = 0xe;
    }
  }
  else {
    uVar4 = (*(ulong *)pbVar3 & 0xfffffffffffffffe) - 1;
    if (0xd < uVar4) {
      pcVar5 = *(char **)(lVar2 + 0x38);
      goto LAB_0089b838;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar3,uVar4,0xf - (*(ulong *)pbVar3 & 0xfffffffffffffffe),*(ulong *)(lVar2 + 0x30),0
               ,*(ulong *)(lVar2 + 0x30),0xe,"cc.LabelBMFont");
  }
  if (((ulong)apbStack_98[0] & 1) != 0) {
    operator_delete(pvStack_88);
  }
  if (((byte)abStack_80[0] & 1) != 0) {
    operator_delete(pvStack_70);
  }
  tolua_usertype(param_1,"cc.LabelTTF");
  tolua_module(param_1,"cc",0);
  tolua_beginmodule(param_1,"cc");
  tolua_cclass(param_1,"LabelTTF","cc.LabelTTF","cc.Node",0);
  tolua_beginmodule(param_1,"LabelTTF");
  tolua_function(param_1,"new",FUN_008a099c);
  tolua_function(param_1,"enableShadow",FUN_008a0a60);
  tolua_function(param_1,"setDimensions",FUN_008a0c14);
  tolua_function(param_1,"getFontSize",FUN_008a0cd8);
  tolua_function(param_1,"getString",FUN_008a0d50);
  tolua_function(param_1,"setFlippedY",FUN_008a0ddc);
  tolua_function(param_1,"setFlippedX",FUN_008a0ea0);
  tolua_function(param_1,"setTextDefinition",FUN_008a0f64);
  tolua_function(param_1,"setFontName",FUN_008a10e4);
  tolua_function(param_1,"getHorizontalAlignment",FUN_008a11d4);
  tolua_function(param_1,"initWithStringAndTextDefinition",FUN_008a124c);
  tolua_function(param_1,"setString",FUN_008a1440);
  tolua_function(param_1,"initWithString",FUN_008a1538);
  tolua_function(param_1,"setFontFillColor",FUN_008a19e0);
  tolua_function(param_1,"getBlendFunc",FUN_008a1b08);
  tolua_function(param_1,"enableStroke",FUN_008a1b88);
  tolua_function(param_1,"getDimensions",FUN_008a1cf8);
  tolua_function(param_1,"setVerticalAlignment",FUN_008a1d70);
  tolua_function(param_1,"setFontSize",FUN_008a1e2c);
  tolua_function(param_1,"getVerticalAlignment",FUN_008a1eec);
  tolua_function(param_1,"getTextDefinition",FUN_008a1f64);
  tolua_function(param_1,"setBlendFunc",FUN_008a1fdc);
  tolua_function(param_1,"getFontName",FUN_008a20b8);
  tolua_function(param_1,"setHorizontalAlignment",FUN_008a213c);
  tolua_function(param_1,"disableShadow",FUN_008a21f8);
  tolua_function(param_1,"disableStroke",FUN_008a22c0);
  tolua_function(param_1,"create",FUN_008a2388);
  tolua_function(param_1,"createWithFontDefinition",FUN_008a29b8);
  tolua_endmodule(param_1);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(abStack_80,"N7cocos2d8LabelTTFE");
  apbStack_98[0] = abStack_80;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)abStack_80,
                     (tuple *)&DAT_0129e137,(tuple *)apbStack_98);
  pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar2 + 0x28);
  if (((byte)*pbVar3 & 1) == 0) {
    pcVar5 = (char *)(lVar2 + 0x29);
LAB_0089b880:
    builtin_strncpy(pcVar5,"cc.LabelTTF",0xc);
    if (((byte)*pbVar3 & 1) == 0) {
      *pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x16
      ;
    }
    else {
      *(undefined8 *)(lVar2 + 0x30) = 0xb;
    }
  }
  else {
    uVar4 = (*(ulong *)pbVar3 & 0xfffffffffffffffe) - 1;
    if (10 < uVar4) {
      pcVar5 = *(char **)(lVar2 + 0x38);
      goto LAB_0089b880;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __grow_by_and_replace
              (pbVar3,uVar4,0xc - (*(ulong *)pbVar3 & 0xfffffffffffffffe),*(ulong *)(lVar2 + 0x30),0
               ,*(ulong *)(lVar2 + 0x30),0xb,"cc.LabelTTF");
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             apbStack_98,"LabelTTF");
  ppbStack_60 = apbStack_98;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)apbStack_98,
                     (tuple *)&DAT_0129e137,(tuple *)&ppbStack_60);
  pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar2 + 0x28);
  if (((byte)*pbVar3 & 1) == 0) {
    pcVar5 = (char *)(lVar2 + 0x29);
  }
  else {
    uVar4 = (*(ulong *)pbVar3 & 0xfffffffffffffffe) - 1;
    if (uVar4 < 0xb) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by_and_replace
                (pbVar3,uVar4,0xc - (*(ulong *)pbVar3 & 0xfffffffffffffffe),*(ulong *)(lVar2 + 0x30)
                 ,0,*(ulong *)(lVar2 + 0x30),0xb,"cc.LabelTTF");
      goto joined_r0x0089b93c;
    }
    pcVar5 = *(char **)(lVar2 + 0x38);
  }
  builtin_strncpy(pcVar5,"cc.LabelTTF",0xc);
  if (((byte)*pbVar3 & 1) == 0) {
    *pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x16;
  }
  else {
    *(undefined8 *)(lVar2 + 0x30) = 0xb;
  }
joined_r0x0089b93c:
  if (((ulong)apbStack_98[0] & 1) != 0) {
    operator_delete(pvStack_88);
  }
  if (((byte)abStack_80[0] & 1) != 0) {
    operator_delete(pvStack_70);
  }
  tolua_function(param_1,"kmGLPushMatrix",FUN_0089ba9c);
  tolua_function(param_1,"kmGLTranslatef",FUN_0089bb10);
  tolua_function(param_1,"kmGLPopMatrix",FUN_0089bc18);
  tolua_function(param_1,&DAT_0129cca2,FUN_0089bc8c);
  tolua_endmodule(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

