
void FUN_00914d78(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  LuaMinXmlHttpRequest *pLVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  undefined8 *puVar5;
  LuaMinXmlHttpRequest *pLVar6;
  char cVar7;
  int iVar8;
  undefined1 *puVar9;
  long *plVar10;
  basic_istream *pbVar11;
  ScriptHandlerMgr *pSVar12;
  undefined8 *puVar13;
  ulong uVar14;
  LuaMinXmlHttpRequest *pLVar15;
  undefined1 *puVar16;
  ulong uVar17;
  LuaMinXmlHttpRequest *pLVar18;
  undefined8 *puVar19;
  LuaMinXmlHttpRequest *this;
  ulong uVar20;
  ulong uVar21;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  undefined1 *puVar22;
  long lVar24;
  long lVar25;
  LuaMinXmlHttpRequest *pLVar26;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined4 local_250 [2];
  int *local_248;
  ulong local_240;
  undefined8 local_238;
  void *local_230;
  ulong local_228;
  ulong local_220;
  undefined1 *local_218;
  int local_210 [2];
  undefined ***local_208;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined **local_180;
  undefined8 uStack_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  undefined1 *puVar23;
  LuaMinXmlHttpRequest *pLVar27;
  
                    /* try { // try from 00914d94 to 00a14da7 has its CatchHandler @ 00914efc */
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  this = *(LuaMinXmlHttpRequest **)(param_1 + 8);
  if (this[0x121] != (LuaMinXmlHttpRequest)0x0) goto LAB_00914db0;
  lVar25 = *param_3;
                    /* try { // try from 00914df0 to 00a14e07 has its CatchHandler @ 00914f64 */
  lVar24 = *(long *)(lVar25 + 0x68);
  if (*(char *)(lVar25 + 0x30) == '\0') {
    if (lVar24 == 0) {
      this[0x120] = (LuaMinXmlHttpRequest)0x1;
      *(undefined4 *)(this + 0x94) = 0;
      if (((byte)this[0x98] & 1) == 0) {
        *(undefined2 *)(this + 0x98) = 0;
      }
      else {
        **(undefined1 **)(this + 0xa8) = 0;
        *(undefined8 *)(this + 0xa0) = 0;
      }
    }
    pSVar12 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
    iVar8 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar12,this,0x1e);
    if (iVar8 != 0) {
                    /* try { // try from 0091513c to 00a15147 has its CatchHandler @ 009151c8 */
      local_180 = (undefined **)CONCAT44(local_180._4_4_,iVar8);
                    /* try { // try from 00915148 to 00a15227 has its CatchHandler @ 009150c0 */
      local_138 = 0;
      __strncpy_chk2((ulong)&local_180 | 4,&DAT_013c996e,0x40,0x40,1);
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = (void *)0x0;
      ppuStack_108 = (undefined **)0x0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      local_210[0] = 9;
      local_208 = &local_180;
      puVar13 = (undefined8 *)cocos2d::ScriptEngineManager::getInstance();
      (**(code **)(*(long *)*puVar13 + 0x78))((long *)*puVar13,local_210);
    }
    goto LAB_00914db0;
  }
  puVar23 = *(undefined1 **)(lVar25 + 0x50);
  puVar1 = *(undefined1 **)(lVar25 + 0x58);
  local_220 = 0;
  local_218 = (undefined1 *)0x0;
  local_228 = 0;
  uVar21 = (long)puVar1 - (long)puVar23;
                    /* try { // try from 00914e08 to 00a14ea7 has its CatchHandler @ 00914d0c */
  if (0xffffffffffffffef < uVar21) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar21 < 0x17) {
    uVar20 = 0;
    local_228 = (ulong)(byte)((int)uVar21 << 1);
    puVar9 = (undefined1 *)((ulong)&local_228 | 1);
    if (puVar23 != puVar1) goto LAB_00914e30;
LAB_00914e84:
  }
  else {
    uVar20 = uVar21 + 0x10 & 0xfffffffffffffff0;
    puVar9 = operator_new(uVar20);
    uVar20 = uVar20 | 1;
    local_228 = uVar20;
    local_220 = uVar21;
    local_218 = puVar9;
    if (puVar23 == puVar1) goto LAB_00914e84;
LAB_00914e30:
    if ((0x1f < uVar21) && ((puVar1 <= puVar9 || (puVar9 + uVar21 <= puVar23)))) {
                    /* try { // try from 00914ea8 to 00a14eb3 has its CatchHandler @ 00914ef4 */
      uVar17 = uVar21 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)(puVar23 + 0x10);
      puVar16 = puVar9 + uVar17;
                    /* try { // try from 00914eb4 to 00a14f97 has its CatchHandler @ 00914d0c */
      puVar23 = puVar23 + uVar17;
      puVar19 = (undefined8 *)(puVar9 + 0x10);
      uVar14 = uVar17;
      do {
        puVar5 = puVar13 + -1;
        uVar28 = puVar13[-2];
        uVar30 = puVar13[1];
        uVar29 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar14 = uVar14 - 0x20;
        puVar19[-1] = *puVar5;
        puVar19[-2] = uVar28;
        puVar19[1] = uVar30;
        *puVar19 = uVar29;
        puVar19 = puVar19 + 4;
      } while (uVar14 != 0);
      puVar9 = puVar16;
      if (uVar17 == uVar21) goto LAB_00914ef0;
    }
    do {
      puVar22 = puVar23 + 1;
      puVar16 = puVar9 + 1;
      *puVar9 = *puVar23;
      puVar9 = puVar16;
      puVar23 = puVar22;
    } while (puVar1 != puVar22);
  }
LAB_00914ef0:
  *puVar9 = 0;
                    /* catch() { ... } // from try @ 00914ea8 with catch @ 00914ef4 */
                    /* catch() { ... } // from try @ 00914d94 with catch @ 00914efc */
  puVar23 = (undefined1 *)((ulong)&local_228 | 1);
  if ((uVar20 & 1) != 0) {
    puVar23 = local_218;
  }
  cocos2d::log("_sendRequest header is %s",puVar23);
  ppuStack_108 = (undefined **)0x169c448;
  local_180 = (undefined **)0x169c420;
  uStack_178 = 0;
  std::__ndk1::ios_base::init
            ((ios_base *)&ppuStack_108,
             (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_170);
                    /* catch() { ... } // from try @ 00914df0 with catch @ 00914f64 */
  local_78 = 0xffffffff;
                    /* catch() { ... } // from try @ 00914dcc with catch @ 00914f68 */
  local_180 = &PTR__basic_istringstream_0169c3d0;
  ppuStack_108 = &PTR__basic_istringstream_0169c3f8;
  local_170 = &PTR__basic_streambuf_01698a08;
                    /* catch() { ... } // from try @ 00914d68 with catch @ 00914f7c */
  local_80 = 0;
  std::__ndk1::locale::locale(alStack_168);
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
                    /* try { // try from 00914f98 to 00a14fe7 has its CatchHandler @ 00914f98
                       catch() { ... } // from try @ 00914f98 with catch @ 00914f98
                       catch() { ... } // from try @ 00915020 with catch @ 00914f98
                       catch() { ... } // from try @ 00915064 with catch @ 00914f98 */
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = CONCAT44(local_110._4_4_,8);
  local_170 = &PTR__basic_stringbuf_01698960;
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &local_170,(basic_string *)&local_228);
  local_238 = 0;
  local_230 = (void *)0x0;
  local_240 = 0;
  while( true ) {
                    /* try { // try from 00914fe8 to 00a1501f has its CatchHandler @ 009150a4 */
    std::__ndk1::ios_base::getloc();
    plVar10 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)local_210,(id *)&std::__ndk1::ctype<char>::id);
    cVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,10);
    std::__ndk1::locale::~locale((locale *)local_210);
                    /* try { // try from 00915020 to 00a1504f has its CatchHandler @ 00914f98 */
    pbVar11 = std::__ndk1::getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ((basic_istream *)&local_180,(basic_string *)&local_240,cVar7);
    if (((byte)pbVar11[*(long *)(*(long *)pbVar11 + -0x18) + 0x20] & 5) != 0) break;
    LuaMinXmlHttpRequest::_gotHeader(this,(basic_string *)&local_240);
  }
                    /* try { // try from 00915050 to 00a15063 has its CatchHandler @ 009150a4 */
  if (lVar24 == 200) {
    this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x70);
    bVar3 = *this_00;
                    /* try { // try from 00915064 to 00a150bf has its CatchHandler @ 00914f98 */
    *(undefined8 *)(this + 0x90) = 0xc800000004;
    pLVar27 = *(LuaMinXmlHttpRequest **)(lVar25 + 0x38);
    pLVar2 = *(LuaMinXmlHttpRequest **)(lVar25 + 0x40);
    uVar21 = (long)pLVar2 - (long)pLVar27;
    if (((byte)bVar3 & 1) == 0) {
      uVar14 = 0x16;
      uVar17 = (ulong)(byte)bVar3;
      uVar20 = uVar21 - 0x16;
      if (0x15 < uVar21 && uVar20 != 0) goto LAB_00915084;
LAB_009150ac:
      if ((uVar17 & 1) == 0) goto LAB_009150b0;
LAB_00915108:
      pLVar18 = *(LuaMinXmlHttpRequest **)(this + 0x80);
    }
    else {
      uVar17 = *(ulong *)this_00;
      uVar14 = (uVar17 & 0xfffffffffffffffe) - 1;
                    /* catch() { ... } // from try @ 00914fe8 with catch @ 009150a4
                       catch() { ... } // from try @ 00915050 with catch @ 009150a4 */
      uVar20 = uVar21 - uVar14;
      if (uVar21 < uVar14 || uVar20 == 0) goto LAB_009150ac;
LAB_00915084:
      if (((byte)bVar3 & 1) == 0) {
        uVar17 = (ulong)((byte)bVar3 >> 1);
      }
      else {
        uVar17 = *(ulong *)(this + 0x78);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by(this_00,uVar14,uVar20,uVar17,0,uVar17,0);
      if (((byte)*this_00 & 1) != 0) goto LAB_00915108;
LAB_009150b0:
      pLVar18 = this + 0x71;
    }
    if (pLVar27 != pLVar2) {
                    /* try { // try from 009150c0 to 00a1513b has its CatchHandler @ 009150c0
                       catch() { ... } // from try @ 009150c0 with catch @ 009150c0
                       catch() { ... } // from try @ 00915148 with catch @ 009150c0 */
      if ((0x1f < uVar21) && ((pLVar2 <= pLVar18 || (pLVar18 + uVar21 <= pLVar27)))) {
        uVar14 = uVar21 & 0xffffffffffffffe0;
        pLVar15 = pLVar27 + 0x10;
        pLVar26 = pLVar18 + uVar14;
        pLVar27 = pLVar27 + uVar14;
        pLVar18 = pLVar18 + 0x10;
        uVar20 = uVar14;
        do {
          pLVar6 = pLVar15 + -8;
          uVar28 = *(undefined8 *)(pLVar15 + -0x10);
          uVar30 = *(undefined8 *)(pLVar15 + 8);
          uVar29 = *(undefined8 *)pLVar15;
          pLVar15 = pLVar15 + 0x20;
          uVar20 = uVar20 - 0x20;
          *(undefined8 *)(pLVar18 + -8) = *(undefined8 *)pLVar6;
          *(undefined8 *)(pLVar18 + -0x10) = uVar28;
          *(undefined8 *)(pLVar18 + 8) = uVar30;
          *(undefined8 *)pLVar18 = uVar29;
          pLVar18 = pLVar18 + 0x20;
        } while (uVar20 != 0);
                    /* catch() { ... } // from try @ 0091513c with catch @ 009151c8 */
        pLVar18 = pLVar26;
        if (uVar14 == uVar21) goto LAB_009151e0;
      }
      do {
        pLVar26 = pLVar27 + 1;
        pLVar15 = pLVar18 + 1;
        *pLVar18 = *pLVar27;
        pLVar18 = pLVar15;
        pLVar27 = pLVar26;
      } while (pLVar2 != pLVar26);
    }
LAB_009151e0:
    *pLVar18 = (LuaMinXmlHttpRequest)0x0;
    if (((byte)*this_00 & 1) == 0) {
      *this_00 = SUB41((int)uVar21 << 1,0);
    }
    else {
      *(ulong *)(this + 0x78) = uVar21;
    }
    *(long *)(this + 0x88) = *(long *)(lVar25 + 0x40) - *(long *)(lVar25 + 0x38);
  }
  else {
    *(undefined4 *)(this + 0x94) = 0;
  }
  pSVar12 = (ScriptHandlerMgr *)cocos2d::ScriptHandlerMgr::getInstance();
  iVar8 = cocos2d::ScriptHandlerMgr::getObjectHandler(pSVar12,this,0x1e);
  if (iVar8 != 0) {
                    /* try { // try from 00915228 to 00a15283 has its CatchHandler @ 00915228
                       catch() { ... } // from try @ 00915228 with catch @ 00915228
                       catch() { ... } // from try @ 00915324 with catch @ 00915228
                       catch() { ... } // from try @ 009153d0 with catch @ 00915228 */
    local_1c8 = 0;
    local_210[0] = iVar8;
    __strncpy_chk2((ulong)local_210 | 4,&DAT_013c996e,0x40,0x40,1);
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_1b8 = 0;
    local_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    local_250[0] = 9;
    local_248 = local_210;
    puVar13 = (undefined8 *)cocos2d::ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar13 + 0x78))((long *)*puVar13,local_250);
  }
  cocos2d::Ref::release((Ref *)this);
  if ((local_240 & 1) != 0) {
                    /* try { // try from 00915284 to 00a1529b has its CatchHandler @ 00915498 */
    operator_delete(local_230);
  }
  local_180 = &PTR__basic_istringstream_0169c3d0;
  ppuStack_108 = &PTR__basic_istringstream_0169c3f8;
                    /* try { // try from 009152b0 to 00a152c3 has its CatchHandler @ 00915418 */
  local_170 = &PTR__basic_stringbuf_01698960;
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  local_170 = &PTR__basic_streambuf_01698a08;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)&ppuStack_108);
                    /* try { // try from 009152e8 to 00a152ff has its CatchHandler @ 00915484 */
  if ((local_228 & 1) != 0) {
    operator_delete(local_218);
  }
LAB_00914db0:
  if (*(long *)(lVar4 + 0x28) == local_70) {
                    /* try { // try from 00914dcc to 00a14de3 has its CatchHandler @ 00914f68 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

