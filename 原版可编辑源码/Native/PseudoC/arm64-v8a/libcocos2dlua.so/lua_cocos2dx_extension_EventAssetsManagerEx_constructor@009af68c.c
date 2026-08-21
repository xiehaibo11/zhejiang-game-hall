
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_extension_EventAssetsManagerEx_constructor(lua_State*) */

undefined4 lua_cocos2dx_extension_EventAssetsManagerEx_constructor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  EventAssetsManagerEx *pEVar12;
  undefined4 uVar13;
  AssetsManagerEx *unaff_x21;
  uint uVar14;
  AssetsManagerEx *local_e8;
  int local_e0;
  int local_dc;
  double local_d8;
  int iStack_cc;
  double local_c8;
  ulong local_c0;
  undefined8 local_b8;
  void *local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
                    /* try { // try from 009af69c to 00aaf6bb has its CatchHandler @ 009af8d0 */
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009af6bc to 00aaf6c7 has its CatchHandler @ 009af8ac */
  iVar2 = lua_gettop();
                    /* try { // try from 009af6c8 to 00aaf6ff has its CatchHandler @ 009af61c */
  switch(iVar2) {
  case 4:
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
                    /* try { // try from 009af700 to 00aaf71f has its CatchHandler @ 009af8cc */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_90,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
                    /* try { // try from 009af720 to 00aaf73f has its CatchHandler @ 009af8b0 */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       (uVar11 = luaval_is_usertype(param_1,3,"cc.AssetsManagerEx",0), (uVar11 & 1) == 0)) {
      uVar14 = 0;
    }
    else {
                    /* try { // try from 009af740 to 00aaf74f has its CatchHandler @ 009af87c */
      unaff_x21 = (AssetsManagerEx *)tolua_tousertype(param_1,3,0);
                    /* try { // try from 009af750 to 00aaf7b7 has its CatchHandler @ 009af61c */
      uVar14 = 1;
    }
    uVar4 = luaval_to_int32(param_1,4,(int *)&local_c8,
                            "cc.EventAssetsManagerEx:EventAssetsManagerEx");
    if ((uVar3 & uVar14 & uVar4) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_EventAssetsManagerEx_constructor\'"
                  ,0);
      break;
    }
    pEVar12 = operator_new(0xa8);
                    /* try { // try from 009afca4 to 00aafce7 has its CatchHandler @ 009afdf8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_a8,"");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_c0,"");
    cocos2d::extension::EventAssetsManagerEx::EventAssetsManagerEx
              (pEVar12,(basic_string *)&local_90,unaff_x21,(EventCode *)&local_c8,0.0,0.0,
               (basic_string *)&local_a8,(basic_string *)&local_c0,0,0);
    if ((local_c0 & 1) != 0) {
                    /* try { // try from 009afcf0 to 00aafcf7 has its CatchHandler @ 009afdf0 */
      operator_delete(local_b0);
    }
                    /* try { // try from 009afcf8 to 00aafd3b has its CatchHandler @ 009afc4c */
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    cocos2d::Ref::autorelease((Ref *)pEVar12);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(pEVar12 + 0xc),(int *)(pEVar12 + 0x10),pEVar12,
               "cc.EventAssetsManagerEx");
LAB_009aff30:
    uVar13 = 1;
    if ((local_90 & 1) == 0) goto LAB_009b02b0;
    goto LAB_009b02a8;
  case 5:
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_90,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       (uVar11 = luaval_is_usertype(param_1,3,"cc.AssetsManagerEx",0), (uVar11 & 1) == 0)) {
      uVar14 = 0;
    }
    else {
      unaff_x21 = (AssetsManagerEx *)tolua_tousertype(param_1,3,0);
      uVar14 = 1;
    }
                    /* try { // try from 009afe50 to 00aafea3 has its CatchHandler @ 009afe50
                       catch() { ... } // from try @ 009afe50 with catch @ 009afe50
                       catch() { ... } // from try @ 009afec4 with catch @ 009afe50 */
    uVar4 = luaval_to_int32(param_1,4,(int *)&local_d8,
                            "cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar5 = luaval_to_number(param_1,5,&local_c8,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    if ((uVar3 & uVar14 & uVar4 & uVar5) != 0) {
      pEVar12 = operator_new(0xa8);
                    /* try { // try from 009afea4 to 00aafec3 has its CatchHandler @ 009aff48 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,"");
                    /* try { // try from 009afec4 to 00aaff8f has its CatchHandler @ 009afe50 */
      cocos2d::extension::EventAssetsManagerEx::EventAssetsManagerEx
                (pEVar12,(basic_string *)&local_90,unaff_x21,(EventCode *)&local_d8,(float)local_c8,
                 0.0,(basic_string *)&local_a8,(basic_string *)&local_c0,0,0);
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      cocos2d::Ref::autorelease((Ref *)pEVar12);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(pEVar12 + 0xc),(int *)(pEVar12 + 0x10),pEVar12,
                 "cc.EventAssetsManagerEx");
      goto LAB_009aff30;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_EventAssetsManagerEx_constructor\'"
                ,0);
    break;
  case 6:
    local_88 = 0;
    local_80 = (void *)0x0;
    local_90 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_90,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
                    /* try { // try from 009af7f4 to 00aaf803 has its CatchHandler @ 009af874 */
                    /* try { // try from 009af804 to 00aaf8eb has its CatchHandler @ 009af61c */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       (uVar11 = luaval_is_usertype(param_1,3,"cc.AssetsManagerEx",0), (uVar11 & 1) == 0)) {
      uVar14 = 0;
    }
    else {
      unaff_x21 = (AssetsManagerEx *)tolua_tousertype(param_1,3,0);
      uVar14 = 1;
    }
    uVar4 = luaval_to_int32(param_1,4,&iStack_cc,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar5 = luaval_to_number(param_1,5,&local_c8,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar6 = luaval_to_number(param_1,6,&local_d8,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    if ((uVar3 & uVar14 & uVar4 & uVar5 & uVar6) != 0) {
      pEVar12 = operator_new(0xa8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,"");
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,"");
      cocos2d::extension::EventAssetsManagerEx::EventAssetsManagerEx
                (pEVar12,(basic_string *)&local_90,unaff_x21,(EventCode *)&iStack_cc,(float)local_c8
                 ,(float)local_d8,(basic_string *)&local_a8,(basic_string *)&local_c0,0,0);
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      cocos2d::Ref::autorelease((Ref *)pEVar12);
                    /* try { // try from 009afc4c to 00aafca3 has its CatchHandler @ 009afc4c
                       catch(type#1 @ 00000000) { ... } // from try @ 009afc4c with catch @ 009afc4c
                       catch(type#1 @ 00000000) { ... } // from try @ 009afcf8 with catch @ 009afc4c
                       catch(type#1 @ 00000000) { ... } // from try @ 009afd60 with catch @ 009afc4c
                       catch(type#1 @ 00000000) { ... } // from try @ 009afe10 with catch @ 009afc4c
                        */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(pEVar12 + 0xc),(int *)(pEVar12 + 0x10),pEVar12,
                 "cc.EventAssetsManagerEx");
      goto LAB_009aff30;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_EventAssetsManagerEx_constructor\'"
                ,0);
    break;
  case 7:
    local_88 = 0;
    local_80 = (void *)0x0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_90,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
                    /* catch() { ... } // from try @ 009af7f4 with catch @ 009af874 */
                    /* catch() { ... } // from try @ 009af7b8 with catch @ 009af878 */
                    /* catch() { ... } // from try @ 009af740 with catch @ 009af87c */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       (uVar11 = luaval_is_usertype(param_1,3,"cc.AssetsManagerEx",0), (uVar11 & 1) == 0)) {
      uVar14 = 0;
    }
    else {
      unaff_x21 = (AssetsManagerEx *)tolua_tousertype(param_1,3,0);
                    /* catch() { ... } // from try @ 009af6bc with catch @ 009af8ac */
                    /* catch() { ... } // from try @ 009af720 with catch @ 009af8b0 */
      uVar14 = 1;
    }
                    /* try { // try from 009afd3c to 00aafd4b has its CatchHandler @ 009afdec */
    uVar4 = luaval_to_int32(param_1,4,&iStack_cc,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
                    /* try { // try from 009afd5c to 00aafd5f has its CatchHandler @ 009afdf4 */
                    /* try { // try from 009afd60 to 00aafe0b has its CatchHandler @ 009afc4c */
    uVar5 = luaval_to_number(param_1,5,&local_c8,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar6 = luaval_to_number(param_1,6,&local_d8,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar7 = luaval_to_std_string
                      (param_1,7,(basic_string *)&local_a8,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
    if ((uVar3 & uVar14 & uVar4 & uVar5 & uVar6 & uVar7) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_EventAssetsManagerEx_constructor\'"
                  ,0);
      uVar13 = 0;
                    /* try { // try from 009b022c to 00ab02f7 has its CatchHandler @ 009b022c
                       catch() { ... } // from try @ 009b022c with catch @ 009b022c
                       catch() { ... } // from try @ 009b0300 with catch @ 009b022c
                       catch() { ... } // from try @ 009b0380 with catch @ 009b022c */
    }
    else {
      pEVar12 = operator_new(0xa8);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,"");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009afd3c with catch @ 009afdec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009afcf0 with catch @ 009afdf0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009afd5c with catch @ 009afdf4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009afca4 with catch @ 009afdf8
                        */
      cocos2d::extension::EventAssetsManagerEx::EventAssetsManagerEx
                (pEVar12,(basic_string *)&local_90,unaff_x21,(EventCode *)&iStack_cc,(float)local_c8
                 ,(float)local_d8,(basic_string *)&local_a8,(basic_string *)&local_c0,0,0);
      if ((local_c0 & 1) != 0) {
                    /* try { // try from 009afe0c to 00aafe0f has its CatchHandler @ 009afe3c */
                    /* try { // try from 009afe10 to 00aafe4f has its CatchHandler @ 009afc4c */
        operator_delete(local_b0);
      }
      cocos2d::Ref::autorelease((Ref *)pEVar12);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(pEVar12 + 0xc),(int *)(pEVar12 + 0x10),pEVar12,
                 "cc.EventAssetsManagerEx");
      uVar13 = 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009afe0c with catch @ 009afe3c
                        */
    }
    goto joined_r0x009afe40;
  case 8:
    local_88 = 0;
    local_80 = (void *)0x0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    local_b0 = (void *)0x0;
    local_c0 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_90,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       (uVar11 = luaval_is_usertype(param_1,3,"cc.AssetsManagerEx",0), (uVar11 & 1) == 0)) {
      uVar14 = 0;
    }
    else {
                    /* try { // try from 009af7b8 to 00aaf7c7 has its CatchHandler @ 009af878 */
      unaff_x21 = (AssetsManagerEx *)tolua_tousertype(param_1,3,0);
      uVar14 = 1;
    }
    uVar4 = luaval_to_int32(param_1,4,&iStack_cc,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
                    /* catch() { ... } // from try @ 009afa30 with catch @ 009afa78 */
                    /* catch() { ... } // from try @ 009af9e4 with catch @ 009afa7c */
    uVar5 = luaval_to_number(param_1,5,&local_c8,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar6 = luaval_to_number(param_1,6,&local_d8,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar7 = luaval_to_std_string
                      (param_1,7,(basic_string *)&local_a8,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar8 = luaval_to_std_string
                      (param_1,8,(basic_string *)&local_c0,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
    if ((uVar3 & uVar14 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_extension_EventAssetsManagerEx_constructor\'"
                  ,0);
      goto LAB_009b027c;
    }
    pEVar12 = operator_new(0xa8);
    cocos2d::extension::EventAssetsManagerEx::EventAssetsManagerEx
              (pEVar12,(basic_string *)&local_90,unaff_x21,(EventCode *)&iStack_cc,(float)local_c8,
               (float)local_d8,(basic_string *)&local_a8,(basic_string *)&local_c0,0,0);
    cocos2d::Ref::autorelease((Ref *)pEVar12);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(pEVar12 + 0xc),(int *)(pEVar12 + 0x10),pEVar12,
               "cc.EventAssetsManagerEx");
LAB_009b01b0:
    uVar13 = 1;
    goto joined_r0x009b01b8;
  case 9:
    local_88 = 0;
    local_80 = (void *)0x0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    local_b0 = (void *)0x0;
    local_c0 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_90,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
                    /* try { // try from 009af988 to 00aaf9e3 has its CatchHandler @ 009af988
                       catch() { ... } // from try @ 009af988 with catch @ 009af988
                       catch() { ... } // from try @ 009af9ec with catch @ 009af988
                       catch() { ... } // from try @ 009afa40 with catch @ 009af988 */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       (uVar11 = luaval_is_usertype(param_1,3,"cc.AssetsManagerEx",0), (uVar11 & 1) == 0)) {
      uVar14 = 0;
    }
    else {
      unaff_x21 = (AssetsManagerEx *)tolua_tousertype(param_1,3,0);
      uVar14 = 1;
    }
                    /* catch() { ... } // from try @ 009afea4 with catch @ 009aff48 */
    uVar4 = luaval_to_int32(param_1,4,&iStack_cc,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar5 = luaval_to_number(param_1,5,&local_c8,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
                    /* try { // try from 009aff90 to 00aaffe3 has its CatchHandler @ 009aff90
                       catch() { ... } // from try @ 009aff90 with catch @ 009aff90
                       catch() { ... } // from try @ 009b0004 with catch @ 009aff90 */
    uVar6 = luaval_to_number(param_1,6,&local_d8,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar7 = luaval_to_std_string
                      (param_1,7,(basic_string *)&local_a8,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar8 = luaval_to_std_string
                      (param_1,8,(basic_string *)&local_c0,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
                    /* try { // try from 009affe4 to 00ab0003 has its CatchHandler @ 009b0088 */
    uVar9 = luaval_to_int32(param_1,9,&local_dc,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
                    /* try { // try from 009b0004 to 00ab00cf has its CatchHandler @ 009aff90 */
    if ((uVar3 & uVar14 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9) != 0) {
      pEVar12 = operator_new(0xa8);
      cocos2d::extension::EventAssetsManagerEx::EventAssetsManagerEx
                (pEVar12,(basic_string *)&local_90,unaff_x21,(EventCode *)&iStack_cc,(float)local_c8
                 ,(float)local_d8,(basic_string *)&local_a8,(basic_string *)&local_c0,local_dc,0);
      cocos2d::Ref::autorelease((Ref *)pEVar12);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(pEVar12 + 0xc),(int *)(pEVar12 + 0x10),pEVar12,
                 "cc.EventAssetsManagerEx");
      goto LAB_009b01b0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_EventAssetsManagerEx_constructor\'"
                ,0);
    goto LAB_009b027c;
  case 10:
    local_88 = 0;
    local_80 = (void *)0x0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    local_b0 = (void *)0x0;
    local_c0 = 0;
                    /* try { // try from 009af9e4 to 00aaf9eb has its CatchHandler @ 009afa7c */
                    /* try { // try from 009af9ec to 00aafa2f has its CatchHandler @ 009af988 */
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_90,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       (uVar11 = luaval_is_usertype(param_1,3,"cc.AssetsManagerEx",0), (uVar11 & 1) == 0)) {
      uVar14 = 0;
    }
    else {
                    /* try { // try from 009afa30 to 00aafa3f has its CatchHandler @ 009afa78 */
      local_e8 = (AssetsManagerEx *)tolua_tousertype(param_1,3,0);
                    /* try { // try from 009afa40 to 00aafa97 has its CatchHandler @ 009af988 */
      uVar14 = 1;
    }
    uVar4 = luaval_to_int32(param_1,4,&iStack_cc,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
                    /* catch() { ... } // from try @ 009affe4 with catch @ 009b0088 */
    uVar5 = luaval_to_number(param_1,5,&local_c8,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar6 = luaval_to_number(param_1,6,&local_d8,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar7 = luaval_to_std_string
                      (param_1,7,(basic_string *)&local_a8,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar8 = luaval_to_std_string
                      (param_1,8,(basic_string *)&local_c0,
                       "cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar9 = luaval_to_int32(param_1,9,&local_dc,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    uVar10 = luaval_to_int32(param_1,10,&local_e0,"cc.EventAssetsManagerEx:EventAssetsManagerEx");
    if ((uVar3 & uVar14 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10) != 0) {
      pEVar12 = operator_new(0xa8);
      cocos2d::extension::EventAssetsManagerEx::EventAssetsManagerEx
                (pEVar12,(basic_string *)&local_90,local_e8,(EventCode *)&iStack_cc,(float)local_c8,
                 (float)local_d8,(basic_string *)&local_a8,(basic_string *)&local_c0,local_dc,
                 local_e0);
      cocos2d::Ref::autorelease((Ref *)pEVar12);
      toluafix_pushusertype_ccobject
                (param_1,*(int *)(pEVar12 + 0xc),(int *)(pEVar12 + 0x10),pEVar12,
                 "cc.EventAssetsManagerEx");
      goto LAB_009b01b0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_EventAssetsManagerEx_constructor\'"
                ,0);
LAB_009b027c:
    uVar13 = 0;
joined_r0x009b01b8:
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
joined_r0x009afe40:
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    goto joined_r0x009b02a4;
  default:
                    /* catch() { ... } // from try @ 009af700 with catch @ 009af8cc */
                    /* catch() { ... } // from try @ 009af69c with catch @ 009af8d0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventAssetsManagerEx:EventAssetsManagerEx",iVar2 + -1,3);
    uVar13 = 0;
    goto LAB_009b02b0;
  }
  uVar13 = 0;
joined_r0x009b02a4:
  if ((local_90 & 1) != 0) {
LAB_009b02a8:
    operator_delete(local_80);
  }
LAB_009b02b0:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}

