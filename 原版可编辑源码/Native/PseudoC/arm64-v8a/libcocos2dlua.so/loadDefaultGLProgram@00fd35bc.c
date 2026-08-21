
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::GLProgramCache::loadDefaultGLProgram(cocos2d::GLProgram*, int) */

void __thiscall
cocos2d::GLProgramCache::loadDefaultGLProgram(GLProgramCache *this,GLProgram *param_1,int param_2)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  Configuration *pCVar5;
  ulong *puVar6;
  basic_string *pbVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_220 [8];
  ulong local_218;
  char *local_210;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_208 [16];
  void *local_1f8;
  ulong local_1f0;
  ulong uStack_1e8;
  char *local_1e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1d8 [8];
  basic_string *local_1d0;
  char *local_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  char *local_1b0;
  ulong local_1a0;
  ulong uStack_198;
  char *local_190;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_188 [8];
  ulong local_180;
  char *local_178;
  ulong local_170;
  ulong uStack_168;
  char *local_160;
  long local_68;
  
  pbVar7 = (basic_string *)(ulong)(uint)param_2;
                    /* try { // try from 00fd35dc to 010d35df has its CatchHandler @ 00fd35f0 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd35dc with catch @ 00fd35f0
                        */
  switch(pbVar7) {
  case (basic_string *)0x0:
    ppuVar8 = &ccPositionTextureColor_vert;
    ppuVar9 = &ccPositionTextureColor_frag;
                    /* try { // try from 00fd3638 to 010d363b has its CatchHandler @ 00fd3654 */
    break;
  case (basic_string *)0x1:
    ppuVar8 = &ccPositionTextureColor_noMVP_vert;
                    /* try { // try from 00fd36fc to 010d36ff has its CatchHandler @ 00fd3710 */
    ppuVar9 = &ccPositionTextureColor_noMVP_frag;
    break;
  case (basic_string *)0x2:
    ppuVar8 = &ccPositionTextureColor_vert;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd36fc with catch @ 00fd3710
                        */
    ppuVar9 = &ccPositionTextureColorAlphaTest_frag;
    break;
  case (basic_string *)0x3:
    ppuVar8 = &ccPositionTextureColor_noMVP_vert;
    ppuVar9 = &ccPositionTextureColorAlphaTest_frag;
    break;
  case (basic_string *)0x4:
    ppuVar8 = &ccPositionColor_vert;
    ppuVar9 = &ccPositionColor_frag;
    break;
  case (basic_string *)0x5:
    ppuVar8 = &ccPositionColorTextureAsPointsize_vert;
    ppuVar9 = &ccPositionColor_frag;
    break;
  case (basic_string *)0x6:
    ppuVar8 = &ccPositionTextureColor_noMVP_vert;
    ppuVar9 = &ccPositionColor_frag;
    break;
  case (basic_string *)0x7:
                    /* try { // try from 00fd3758 to 010d375b has its CatchHandler @ 00fd3774 */
    ppuVar8 = &ccPositionTexture_vert;
    ppuVar9 = &ccPositionTexture_frag;
    break;
  case (basic_string *)0x8:
    ppuVar8 = &ccPositionTexture_uColor_vert;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3758 with catch @ 00fd3774
                        */
    ppuVar9 = &ccPositionTexture_uColor_frag;
    break;
  case (basic_string *)0x9:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3698 with catch @ 00fd36b4
                        */
    ppuVar8 = &ccPositionTextureA8Color_vert;
    ppuVar9 = &ccPositionTextureA8Color_frag;
    break;
  case (basic_string *)0xa:
    GLProgram::initWithByteArrays(param_1,ccPosition_uColor_vert,ccPosition_uColor_frag);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_170,"aVertex");
                    /* try { // try from 00fd37b8 to 010d37bb has its CatchHandler @ 00fd37d4 */
    GLProgram::bindAttribLocation(param_1,(basic_string *)&local_170,0);
    if ((local_170 & 1) != 0) {
      operator_delete(local_160);
    }
    goto LAB_00fd3f50;
  case (basic_string *)0xb:
    ppuVar8 = &ccPositionColorLengthTexture_vert;
    ppuVar9 = &ccPositionColorLengthTexture_frag;
    break;
  case (basic_string *)0xc:
    ppuVar8 = &ccLabel_vert;
    ppuVar9 = &ccLabelDistanceFieldNormal_frag;
    break;
  case (basic_string *)0xd:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd37b8 with catch @ 00fd37d4
                        */
    ppuVar8 = &ccLabel_vert;
    ppuVar9 = &ccLabelDistanceFieldGlow_frag;
    break;
  case (basic_string *)0xe:
    ppuVar8 = &ccPositionTextureColor_noMVP_vert;
    ppuVar9 = &ccPositionTexture_GrayScale_frag;
    break;
  case (basic_string *)0xf:
    ppuVar8 = &ccLabel_vert;
    ppuVar9 = &ccLabelNormal_frag;
    break;
  case (basic_string *)0x10:
    ppuVar8 = &ccLabel_vert;
    ppuVar9 = &ccLabelOutline_frag;
    break;
  case (basic_string *)0x11:
    ppuVar8 = &cc3D_PositionTex_vert;
    ppuVar9 = &cc3D_Color_frag;
    break;
  case (basic_string *)0x12:
    ppuVar8 = &cc3D_PositionTex_vert;
    ppuVar9 = &cc3D_ColorTex_frag;
                    /* try { // try from 00fd381c to 010d381f has its CatchHandler @ 00fd3830 */
    break;
  case (basic_string *)0x13:
    ppuVar8 = &cc3D_SkinPositionTex_vert;
    ppuVar9 = &cc3D_ColorTex_frag;
    break;
  case (basic_string *)0x14:
    pCVar5 = (Configuration *)Configuration::getInstance();
    Configuration::getMaxSupportDirLightInShader(pCVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd381c with catch @ 00fd3830
                        */
    Configuration::getMaxSupportPointLightInShader(pCVar5);
    Configuration::getMaxSupportSpotLightInShader(pCVar5);
    FUN_00fd5674(&local_170);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_188,(char *)&local_170);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1a0,cc3D_PositionNormalTex_vert);
                    /* try { // try from 00fd3878 to 010d387b has its CatchHandler @ 00fd3894 */
    uVar2 = (ulong)((byte)local_188[0] >> 1);
    pcVar1 = (char *)((ulong)local_188 | 1);
    if (((byte)local_188[0] & 1) != 0) {
      uVar2 = local_180;
      pcVar1 = local_178;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3878 with catch @ 00fd3894
                        */
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_1a0,0,pcVar1,uVar2);
    local_160 = (char *)puVar6[2];
    uStack_168 = puVar6[1];
    local_170 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    pcVar1 = (char *)((ulong)&local_170 | 1);
    if ((local_170 & 1) != 0) {
      pcVar1 = local_160;
    }
                    /* try { // try from 00fd38d8 to 010d38db has its CatchHandler @ 00fd38f4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_1d8,cc3D_ColorNormal_frag);
    uVar2 = (ulong)((byte)local_188[0] >> 1);
    pcVar3 = (char *)((ulong)local_188 | 1);
    if (((byte)local_188[0] & 1) != 0) {
      uVar2 = local_180;
      pcVar3 = local_178;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd38d8 with catch @ 00fd38f4
                        */
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::insert(local_1d8,0,pcVar3,uVar2);
    local_1b0 = (char *)puVar6[2];
    uStack_1b8 = puVar6[1];
    local_1c0 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    pcVar3 = (char *)((ulong)&local_1c0 | 1);
    if ((local_1c0 & 1) != 0) {
      pcVar3 = local_1b0;
    }
                    /* try { // try from 00fd393c to 010d393f has its CatchHandler @ 00fd3950 */
    GLProgram::initWithByteArrays(param_1,pcVar1,pcVar3);
    goto LAB_00fd3cec;
  case (basic_string *)0x15:
    pCVar5 = (Configuration *)Configuration::getInstance();
    Configuration::getMaxSupportDirLightInShader(pCVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd393c with catch @ 00fd3950
                        */
    Configuration::getMaxSupportPointLightInShader(pCVar5);
    Configuration::getMaxSupportSpotLightInShader(pCVar5);
    FUN_00fd5674(&local_170);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_188,(char *)&local_170);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1a0,cc3D_PositionNormalTex_vert);
                    /* try { // try from 00fd3998 to 010d399b has its CatchHandler @ 00fd39b4 */
    uVar2 = (ulong)((byte)local_188[0] >> 1);
    pcVar1 = (char *)((ulong)local_188 | 1);
    if (((byte)local_188[0] & 1) != 0) {
      uVar2 = local_180;
      pcVar1 = local_178;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3998 with catch @ 00fd39b4
                        */
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_1a0,0,pcVar1,uVar2);
    local_160 = (char *)puVar6[2];
    uStack_168 = puVar6[1];
    local_170 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    pcVar1 = (char *)((ulong)&local_170 | 1);
    if ((local_170 & 1) != 0) {
      pcVar1 = local_160;
    }
                    /* try { // try from 00fd39f8 to 010d39fb has its CatchHandler @ 00fd3a14 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_1d8,cc3D_ColorNormalTex_frag);
    uVar2 = (ulong)((byte)local_188[0] >> 1);
    pcVar3 = (char *)((ulong)local_188 | 1);
    if (((byte)local_188[0] & 1) != 0) {
      uVar2 = local_180;
      pcVar3 = local_178;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd39f8 with catch @ 00fd3a14
                        */
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::insert(local_1d8,0,pcVar3,uVar2);
    local_1b0 = (char *)puVar6[2];
    uStack_1b8 = puVar6[1];
    local_1c0 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    pcVar3 = (char *)((ulong)&local_1c0 | 1);
    if ((local_1c0 & 1) != 0) {
      pcVar3 = local_1b0;
    }
    GLProgram::initWithByteArrays(param_1,pcVar1,pcVar3);
                    /* try { // try from 00fd3a5c to 010d3a5f has its CatchHandler @ 00fd3a70 */
    goto LAB_00fd3cec;
  case (basic_string *)0x16:
    pCVar5 = (Configuration *)Configuration::getInstance();
                    /* try { // try from 00fd3bd8 to 010d3bdb has its CatchHandler @ 00fd3bf4 */
    Configuration::getMaxSupportDirLightInShader(pCVar5);
    Configuration::getMaxSupportPointLightInShader(pCVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3bd8 with catch @ 00fd3bf4
                        */
    Configuration::getMaxSupportSpotLightInShader(pCVar5);
    FUN_00fd5674(&local_170);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_188,(char *)&local_170);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1a0,cc3D_SkinPositionNormalTex_vert);
                    /* try { // try from 00fd3c38 to 010d3c3b has its CatchHandler @ 00fd3c54 */
    uVar2 = (ulong)((byte)local_188[0] >> 1);
    pcVar1 = (char *)((ulong)local_188 | 1);
    if (((byte)local_188[0] & 1) != 0) {
      uVar2 = local_180;
      pcVar1 = local_178;
    }
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_1a0,0,pcVar1,uVar2);
    local_160 = (char *)puVar6[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3c38 with catch @ 00fd3c54
                        */
    uStack_168 = puVar6[1];
    local_170 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    pcVar1 = (char *)((ulong)&local_170 | 1);
    if ((local_170 & 1) != 0) {
      pcVar1 = local_160;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_1d8,cc3D_ColorNormalTex_frag);
    uVar2 = (ulong)((byte)local_188[0] >> 1);
    pcVar3 = (char *)((ulong)local_188 | 1);
                    /* try { // try from 00fd3c9c to 010d3c9f has its CatchHandler @ 00fd3cb0 */
    if (((byte)local_188[0] & 1) != 0) {
      uVar2 = local_180;
      pcVar3 = local_178;
    }
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::insert(local_1d8,0,pcVar3,uVar2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3c9c with catch @ 00fd3cb0
                        */
    local_1b0 = (char *)puVar6[2];
    uStack_1b8 = puVar6[1];
    local_1c0 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    pcVar3 = (char *)((ulong)&local_1c0 | 1);
    if ((local_1c0 & 1) != 0) {
      pcVar3 = local_1b0;
    }
    GLProgram::initWithByteArrays(param_1,pcVar1,pcVar3);
LAB_00fd3cec:
    if ((local_1c0 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3cf8 with catch @ 00fd3d14
                        */
      operator_delete(local_1b0);
    }
    if (((byte)local_1d8[0] & 1) != 0) {
      operator_delete(local_1c8);
    }
    pcVar1 = local_190;
    uVar2 = local_1a0;
    if ((local_170 & 1) != 0) {
      operator_delete(local_160);
      pcVar1 = local_190;
      uVar2 = local_1a0;
    }
joined_r0x00fd3fec:
    if ((uVar2 & 1) != 0) {
      operator_delete(pcVar1);
    }
    if (((byte)local_188[0] & 1) != 0) {
      operator_delete(local_178);
    }
    goto LAB_00fd3f50;
  case (basic_string *)0x17:
    pCVar5 = (Configuration *)Configuration::getInstance();
    Configuration::getMaxSupportDirLightInShader(pCVar5);
    Configuration::getMaxSupportPointLightInShader(pCVar5);
    Configuration::getMaxSupportSpotLightInShader(pCVar5);
                    /* try { // try from 00fd3db0 to 010d3db3 has its CatchHandler @ 00fd3dcc */
    FUN_00fd5674(&local_170);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_188,(char *)&local_170);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3db0 with catch @ 00fd3dcc
                        */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_170,"\n#define USE_NORMAL_MAPPING 1 \n");
    std::__ndk1::operator+((__ndk1 *)local_188,(basic_string *)&local_170,pbVar7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_1d8,cc3D_PositionNormalTex_vert);
    pbVar7 = (basic_string *)(ulong)((byte)local_1d8[0] >> 1);
    pcVar1 = (char *)((ulong)local_1d8 | 1);
    if (((byte)local_1d8[0] & 1) != 0) {
      pbVar7 = local_1d0;
      pcVar1 = local_1c8;
    }
                    /* try { // try from 00fd3e14 to 010d3e17 has its CatchHandler @ 00fd3e28 */
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_1c0,pcVar1,(ulong)pbVar7);
    local_190 = (char *)puVar6[2];
    uStack_198 = puVar6[1];
    local_1a0 = *puVar6;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3e14 with catch @ 00fd3e28
                        */
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    pcVar1 = (char *)((ulong)&local_1a0 | 1);
    if ((local_1a0 & 1) != 0) {
      pcVar1 = local_190;
    }
    std::__ndk1::operator+((__ndk1 *)local_188,(basic_string *)&local_170,pbVar7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_220,cc3D_ColorNormalTex_frag);
                    /* try { // try from 00fd3e70 to 010d3e73 has its CatchHandler @ 00fd3e8c */
    uVar2 = (ulong)((byte)local_220[0] >> 1);
    pcVar3 = (char *)((ulong)local_220 | 1);
    if (((byte)local_220[0] & 1) != 0) {
      uVar2 = local_218;
      pcVar3 = local_210;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3e70 with catch @ 00fd3e8c
                        */
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_208,pcVar3,uVar2);
    local_1e0 = (char *)puVar6[2];
    uStack_1e8 = puVar6[1];
    local_1f0 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    pcVar3 = (char *)((ulong)&local_1f0 | 1);
    if ((local_1f0 & 1) != 0) {
      pcVar3 = local_1e0;
    }
    GLProgram::initWithByteArrays(param_1,pcVar1,pcVar3);
    goto LAB_00fd3ecc;
  case (basic_string *)0x18:
    pCVar5 = (Configuration *)Configuration::getInstance();
    Configuration::getMaxSupportDirLightInShader(pCVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3a5c with catch @ 00fd3a70
                        */
    Configuration::getMaxSupportPointLightInShader(pCVar5);
    Configuration::getMaxSupportSpotLightInShader(pCVar5);
    FUN_00fd5674(&local_170);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_188,(char *)&local_170);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_170,"\n#define USE_NORMAL_MAPPING 1 \n");
                    /* try { // try from 00fd3ab8 to 010d3abb has its CatchHandler @ 00fd3ad4 */
    std::__ndk1::operator+((__ndk1 *)local_188,(basic_string *)&local_170,pbVar7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_1d8,cc3D_SkinPositionNormalTex_vert);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3ab8 with catch @ 00fd3ad4
                        */
    pbVar7 = (basic_string *)(ulong)((byte)local_1d8[0] >> 1);
    pcVar1 = (char *)((ulong)local_1d8 | 1);
    if (((byte)local_1d8[0] & 1) != 0) {
      pbVar7 = local_1d0;
      pcVar1 = local_1c8;
    }
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_1c0,pcVar1,(ulong)pbVar7);
    local_190 = (char *)puVar6[2];
    uStack_198 = puVar6[1];
    local_1a0 = *puVar6;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 00fd3b18 to 010d3b1b has its CatchHandler @ 00fd3b34 */
    pcVar1 = (char *)((ulong)&local_1a0 | 1);
    if ((local_1a0 & 1) != 0) {
      pcVar1 = local_190;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3b18 with catch @ 00fd3b34
                        */
    std::__ndk1::operator+((__ndk1 *)local_188,(basic_string *)&local_170,pbVar7);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_220,cc3D_ColorNormalTex_frag);
    uVar2 = (ulong)((byte)local_220[0] >> 1);
    pcVar3 = (char *)((ulong)local_220 | 1);
    if (((byte)local_220[0] & 1) != 0) {
      uVar2 = local_218;
      pcVar3 = local_210;
    }
    puVar6 = (ulong *)std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::append(local_208,pcVar3,uVar2);
    local_1e0 = (char *)puVar6[2];
    uStack_1e8 = puVar6[1];
    local_1f0 = *puVar6;
                    /* try { // try from 00fd3b7c to 010d3b7f has its CatchHandler @ 00fd3b90 */
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3b7c with catch @ 00fd3b90
                        */
    pcVar3 = (char *)((ulong)&local_1f0 | 1);
    if ((local_1f0 & 1) != 0) {
      pcVar3 = local_1e0;
    }
    GLProgram::initWithByteArrays(param_1,pcVar1,pcVar3);
LAB_00fd3ecc:
                    /* try { // try from 00fd3ed0 to 010d3ed3 has its CatchHandler @ 00fd3eec */
    if ((local_1f0 & 1) != 0) {
                    /* try { // try from 00fd3f90 to 010d3f93 has its CatchHandler @ 00fd3fac */
      operator_delete(local_1e0);
    }
    if (((byte)local_220[0] & 1) != 0) {
      operator_delete(local_210);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3f90 with catch @ 00fd3fac
                        */
    }
    if (((byte)local_208[0] & 1) != 0) {
      operator_delete(local_1f8);
    }
    if ((local_1a0 & 1) != 0) {
      operator_delete(local_190);
    }
    if (((byte)local_1d8[0] & 1) != 0) {
      operator_delete(local_1c8);
    }
    pcVar1 = local_160;
    uVar2 = local_170;
    if ((local_1c0 & 1) != 0) {
      operator_delete(local_1b0);
      pcVar1 = local_160;
      uVar2 = local_170;
    }
    goto joined_r0x00fd3fec;
  case (basic_string *)0x19:
    ppuVar8 = &cc3D_Particle_vert;
    ppuVar9 = &cc3D_Particle_tex_frag;
    break;
  case (basic_string *)0x1a:
                    /* try { // try from 00fd3f34 to 010d3f37 has its CatchHandler @ 00fd3f48 */
    ppuVar8 = &cc3D_Particle_vert;
    ppuVar9 = &cc3D_Particle_color_frag;
    break;
  case (basic_string *)0x1b:
    ppuVar8 = &cc3D_Skybox_vert;
    ppuVar9 = &cc3D_Skybox_frag;
    break;
  case (basic_string *)0x1c:
    ppuVar8 = &cc3D_Terrain_vert;
    ppuVar9 = &cc3D_Terrain_frag;
    break;
  case (basic_string *)0x1d:
    ppuVar8 = &ccCameraClearVert;
    ppuVar9 = &ccCameraClearFrag;
    break;
  case (basic_string *)0x1e:
    ppuVar8 = &ccPositionTextureColor_vert;
    ppuVar9 = &ccETC1ASPositionTextureColor_frag;
                    /* try { // try from 00fd3d58 to 010d3d5b has its CatchHandler @ 00fd3d6c */
    break;
  case (basic_string *)0x1f:
    ppuVar8 = &ccPositionTextureColor_noMVP_vert;
    ppuVar9 = &ccETC1ASPositionTextureColor_frag;
    break;
  case (basic_string *)0x20:
    ppuVar8 = &ccPositionTextureColor_vert;
    ppuVar9 = &ccETC1ASPositionTextureGray_frag;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3d58 with catch @ 00fd3d6c
                        */
    break;
  case (basic_string *)0x21:
    ppuVar8 = &ccPositionTextureColor_noMVP_vert;
                    /* try { // try from 00fd3698 to 010d369b has its CatchHandler @ 00fd36b4 */
    ppuVar9 = &ccETC1ASPositionTextureGray_frag;
    break;
  case (basic_string *)0x22:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3638 with catch @ 00fd3654
                        */
    ppuVar8 = &ccPosition_vert;
    ppuVar9 = &ccShader_LayerRadialGradient_frag;
    break;
  default:
    goto switchD_00fd3624_default;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3f34 with catch @ 00fd3f48
                        */
  GLProgram::initWithByteArrays(param_1,*ppuVar8,*ppuVar9);
LAB_00fd3f50:
  GLProgram::link(param_1);
  this = (GLProgramCache *)GLProgram::updateUniforms(param_1);
switchD_00fd3624_default:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fd3ff0 with catch @ 00fd400c
                        */
  __stack_chk_fail(this);
}

