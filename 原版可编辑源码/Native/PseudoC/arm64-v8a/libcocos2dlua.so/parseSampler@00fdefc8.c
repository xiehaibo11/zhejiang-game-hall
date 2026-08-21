
/* cocos2d::Material::parseSampler(cocos2d::GLProgramState*, cocos2d::Properties*) */

void __thiscall
cocos2d::Material::parseSampler(Material *this,GLProgramState *param_1,Properties *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  long *plVar7;
  char *pcVar8;
  Director *this_00;
  TextureCache *this_01;
  Texture2D *this_02;
  char *pcVar9;
  undefined8 uVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00fdefec to 010deff3 has its CatchHandler @ 00fdf070 */
  pcVar6 = (char *)Properties::getString(param_2,"path",(char *)0x0);
  plVar7 = (long *)FileUtils::getInstance();
                    /* try { // try from 00fdf018 to 010df023 has its CatchHandler @ 00fdf078 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,pcVar6);
                    /* try { // try from 00fdf024 to 010df09b has its CatchHandler @ 00fdefb4 */
  (**(code **)(*plVar7 + 0x138))(&local_70,plVar7,local_88);
  uVar1 = (ulong)((byte)local_70._0_1_ >> 1);
  if ((local_70 & 1) != 0) {
    uVar1 = CONCAT44(uStack_64,local_68);
  }
  if (uVar1 == 4) {
    piVar2 = (int *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      piVar2 = local_60;
    }
                    /* catch() { ... } // from try @ 00fdefec with catch @ 00fdf070 */
                    /* catch() { ... } // from try @ 00fdf018 with catch @ 00fdf078 */
    bVar4 = *piVar2 == 0x676e702e;
  }
  else {
    bVar4 = false;
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (bVar4) {
    pcVar8 = (char *)Properties::getString(param_2,"enablePremultipliedAlpha",(char *)0x0);
    pcVar9 = "TRUE";
    if (pcVar8 != (char *)0x0) {
      pcVar9 = pcVar8;
    }
                    /* catch() { ... } // from try @ 00fdf148 with catch @ 00fdf0d8 */
    iVar5 = strcasecmp(pcVar9,"TRUE");
    if (iVar5 == 0) {
      Image::PNG_PREMULTIPLIED_ALPHA_ENABLED = 1;
    }
    else {
      iVar5 = strcasecmp(pcVar9,"FALSE");
      if (iVar5 == 0) {
        Image::PNG_PREMULTIPLIED_ALPHA_ENABLED = 0;
      }
    }
  }
  this_00 = (Director *)Director::getInstance();
                    /* try { // try from 00fdf10c to 010df113 has its CatchHandler @ 00fdf1a4 */
  this_01 = (TextureCache *)Director::getTextureCache(this_00);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_70,pcVar6);
  this_02 = (Texture2D *)TextureCache::addImage(this_01,(basic_string *)&local_70);
  if ((local_70 & 1) != 0) {
                    /* try { // try from 00fdf138 to 010df147 has its CatchHandler @ 00fdf1ac */
    operator_delete(local_60);
  }
  Image::PNG_PREMULTIPLIED_ALPHA_ENABLED = 1;
                    /* try { // try from 00fdf148 to 010df1cf has its CatchHandler @ 00fdf0d8 */
  if (this_02 == (Texture2D *)0x0) {
    uVar10 = 0;
  }
  else {
    pcVar9 = (char *)Properties::getString(param_2,"mipmap",(char *)0x0);
    pcVar6 = "false";
    if (pcVar9 != (char *)0x0) {
      pcVar6 = pcVar9;
    }
    iVar5 = strcasecmp(pcVar6,"true");
    pcVar6 = "LINEAR";
    if (iVar5 == 0) {
      Texture2D::generateMipmap(this_02);
      pcVar6 = "LINEAR_MIPMAP_NEAREST";
    }
                    /* catch() { ... } // from try @ 00fdf10c with catch @ 00fdf1a4 */
                    /* catch() { ... } // from try @ 00fdf138 with catch @ 00fdf1ac */
    pcVar8 = (char *)Properties::getString(param_2,"wrapS",(char *)0x0);
    pcVar9 = "CLAMP_TO_EDGE";
    if (pcVar8 != (char *)0x0) {
      pcVar9 = pcVar8;
    }
    iVar5 = strcasecmp(pcVar9,"REPEAT");
    if (iVar5 == 0) {
      local_68 = 0x2901;
    }
    else {
      iVar5 = strcasecmp(pcVar9,"CLAMP_TO_EDGE");
      if (iVar5 == 0) {
        local_68 = 0x812f;
      }
    }
    pcVar8 = (char *)Properties::getString(param_2,"wrapT",(char *)0x0);
    pcVar9 = "CLAMP_TO_EDGE";
                    /* try { // try from 00fdf218 to 010df24f has its CatchHandler @ 00fdf218
                       catch() { ... } // from try @ 00fdf218 with catch @ 00fdf218
                       catch() { ... } // from try @ 00fdf25c with catch @ 00fdf218 */
    if (pcVar8 != (char *)0x0) {
      pcVar9 = pcVar8;
    }
    iVar5 = strcasecmp(pcVar9,"REPEAT");
    if (iVar5 == 0) {
      uStack_64 = 0x2901;
    }
    else {
      iVar5 = strcasecmp(pcVar9,"CLAMP_TO_EDGE");
      if (iVar5 == 0) {
        uStack_64 = 0x812f;
      }
    }
                    /* try { // try from 00fdf25c to 010df27b has its CatchHandler @ 00fdf218 */
    pcVar9 = (char *)Properties::getString(param_2,"minFilter",(char *)0x0);
                    /* catch() { ... } // from try @ 00fdf250 with catch @ 00fdf268 */
    if (pcVar9 != (char *)0x0) {
      pcVar6 = pcVar9;
    }
                    /* catch() { ... } // from try @ 00fdf2dc with catch @ 00fdf27c */
    iVar5 = strcasecmp(pcVar6,"NEAREST");
    if (iVar5 == 0) {
      local_70 = 0x2600;
    }
    else {
      iVar5 = strcasecmp(pcVar6,"LINEAR");
      if (iVar5 == 0) {
        local_70 = 0x2601;
      }
      else {
                    /* try { // try from 00fdf2a4 to 010df2ab has its CatchHandler @ 00fdf368 */
        iVar5 = strcasecmp(pcVar6,"NEAREST_MIPMAP_NEAREST");
        if (iVar5 == 0) {
          local_70 = 0x2700;
        }
        else {
          iVar5 = strcasecmp(pcVar6,"LINEAR_MIPMAP_NEAREST");
          if (iVar5 == 0) {
            local_70 = 0x2701;
          }
          else {
            iVar5 = strcasecmp(pcVar6,"NEAREST_MIPMAP_LINEAR");
                    /* try { // try from 00fdf2d0 to 010df2db has its CatchHandler @ 00fdf370 */
            if (iVar5 == 0) {
              local_70 = 0x2702;
            }
            else {
                    /* try { // try from 00fdf2dc to 010df393 has its CatchHandler @ 00fdf27c */
              iVar5 = strcasecmp(pcVar6,"LINEAR_MIPMAP_LINEAR");
              if (iVar5 == 0) {
                local_70 = 0x2703;
              }
            }
          }
        }
      }
    }
    pcVar9 = (char *)Properties::getString(param_2,"magFilter",(char *)0x0);
    pcVar6 = "LINEAR";
    if (pcVar9 != (char *)0x0) {
      pcVar6 = pcVar9;
    }
    iVar5 = strcasecmp(pcVar6,"NEAREST");
    if (iVar5 == 0) {
      local_6c = 0x2600;
    }
    else {
      iVar5 = strcasecmp(pcVar6,"LINEAR");
      if (iVar5 == 0) {
        local_6c = 0x2601;
      }
    }
                    /* catch() { ... } // from try @ 00fdf2d0 with catch @ 00fdf370 */
    Texture2D::setTexParameters(this_02,(_TexParams *)&local_70);
    pcVar6 = (char *)Properties::getId(param_2);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,pcVar6);
    GLProgramState::setUniformTexture(param_1,(basic_string *)&local_70,this_02);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    uVar10 = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

