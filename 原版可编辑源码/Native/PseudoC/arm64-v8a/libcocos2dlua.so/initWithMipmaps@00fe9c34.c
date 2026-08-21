
/* cocos2d::Texture2D::initWithMipmaps(cocos2d::_MipmapInfo*, int, cocos2d::Texture2D::PixelFormat,
   int, int) */

void __thiscall
cocos2d::Texture2D::initWithMipmaps
          (Texture2D *this,long param_1,uint param_2,int param_4,int param_5,int param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  Configuration *pCVar4;
  ulong uVar5;
  GLProgramCache *this_00;
  Ref *this_01;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  Texture2D *pTVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  uint local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
                    /* try { // try from 00fe9c34 to 010e9c37 has its CatchHandler @ 00fe9c98 */
                    /* try { // try from 00fe9c38 to 010e9cc3 has its CatchHandler @ 00fe9bdc */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((0 < (int)param_2) && (DAT_017928b8 != (undefined8 *)0x0)) {
    puVar14 = &DAT_017928b8;
    puVar7 = DAT_017928b8;
    do {
                    /* catch() { ... } // from try @ 00fe9c34 with catch @ 00fe9c98 */
      if (param_4 <= *(int *)((long)puVar7 + 0x1c)) {
        puVar14 = puVar7;
      }
      puVar7 = (undefined8 *)puVar7[*(int *)((long)puVar7 + 0x1c) < param_4];
                    /* catch() { ... } // from try @ 00fe9c0c with catch @ 00fe9ca8 */
    } while (puVar7 != (undefined8 *)0x0);
    if (((undefined8 **)puVar14 != &DAT_017928b8) && (*(int *)((long)puVar14 + 0x1c) <= param_4)) {
      if (*(char *)(puVar14 + 6) != '\0') {
        pCVar4 = (Configuration *)Configuration::getInstance();
        uVar5 = Configuration::supportsPVRTC(pCVar4);
        if ((uVar5 & 1) == 0) {
          pCVar4 = (Configuration *)Configuration::getInstance();
          uVar5 = Configuration::supportsETC(pCVar4);
          if ((uVar5 & 1) == 0) {
            pCVar4 = (Configuration *)Configuration::getInstance();
            uVar5 = Configuration::supportsS3TC(pCVar4);
            if ((uVar5 & 1) == 0) {
              pCVar4 = (Configuration *)Configuration::getInstance();
              uVar5 = Configuration::supportsATITC(pCVar4);
              if ((uVar5 & 1) == 0) goto LAB_00fe9ed0;
            }
          }
        }
      }
      if ((param_2 == 1) && (*(char *)(puVar14 + 6) == '\0')) {
        iVar11 = *(int *)((long)puVar14 + 0x2c) * param_5;
        iVar13 = iVar11 + 7;
        if (-1 < iVar11) {
          iVar13 = iVar11;
        }
        uVar2 = iVar13 >> 3;
        if ((uVar2 & 7) == 0) {
          uVar6 = 8;
        }
        else if ((uVar2 & 3) == 0) {
          uVar6 = 4;
        }
        else {
          uVar6 = 1;
          if ((uVar2 & 1) == 0) {
            uVar6 = 2;
          }
        }
      }
      else {
        uVar6 = 1;
      }
      glPixelStorei(0xcf5,uVar6);
      pTVar12 = this + 0x30;
      if (*(uint *)pTVar12 != 0) {
        GL::deleteTexture(*(uint *)pTVar12);
        *(uint *)pTVar12 = 0;
      }
                    /* catch() { ... } // from try @ 00fe9d90 with catch @ 00fe9d34 */
      glGenTextures(1,pTVar12);
      GL::bindTexture2D(*(uint *)(this + 0x30));
      uVar9 = 0x2600;
      uVar6 = 0x2700;
      if (this[0x50] != (Texture2D)0x0) {
        uVar6 = 0x2701;
      }
      uVar8 = 0x2600;
      if (this[0x50] != (Texture2D)0x0) {
        uVar8 = 0x2601;
      }
                    /* try { // try from 00fe9d64 to 010e9d6b has its CatchHandler @ 00fe9e00 */
      if (param_2 != 1) {
        uVar8 = uVar6;
      }
      glTexParameteri(0xde1,0x2801,uVar8);
      local_80 = 0x2600;
      uVar2 = local_80;
      if (this[0x50] != (Texture2D)0x0) {
        uVar2 = 0x2601;
      }
      glTexParameteri(0xde1,0x2800,uVar2);
                    /* try { // try from 00fe9d8c to 010e9d8f has its CatchHandler @ 00fe9df0 */
                    /* try { // try from 00fe9d90 to 010e9e1b has its CatchHandler @ 00fe9d34 */
      glTexParameteri(0xde1,0x2802,0x812f);
      glTexParameteri(0xde1,0x2803,0x812f);
      if (this[0x50] == (Texture2D)0x0) {
        if (this[0x45] != (Texture2D)0x0) {
          local_80 = 0x2700;
        }
      }
      else {
        uVar9 = 0x2601;
        local_80 = 0x2601;
        if (this[0x45] != (Texture2D)0x0) {
          local_80 = 0x2701;
        }
      }
      local_78 = 0;
      uStack_7c = uVar9;
      VolatileTextureMgr::setTexParameters(this,(_TexParams *)&local_80);
      uVar2 = glGetError();
                    /* catch() { ... } // from try @ 00fe9d8c with catch @ 00fe9df0 */
      if (uVar2 != 0) {
                    /* catch() { ... } // from try @ 00fe9d64 with catch @ 00fe9e00 */
        log("OpenGL error 0x%04X in %s %s %d\n",(ulong)uVar2,
            "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCTexture2D.cpp",
            "initWithMipmaps",0x299);
      }
      if (0 < (int)param_2) {
        puVar10 = (undefined4 *)(param_1 + 8);
        uVar5 = 0;
        iVar13 = param_5;
        iVar11 = param_6;
        do {
          if (*(char *)(puVar14 + 6) == '\0') {
            glTexImage2D(0xde1,uVar5 & 0xffffffff,*(undefined4 *)(puVar14 + 4),iVar13,iVar11,0,
                         *(undefined4 *)((long)puVar14 + 0x24),*(undefined4 *)(puVar14 + 5),
                         *(undefined8 *)(puVar10 + -2));
          }
          else {
            glCompressedTexImage2D
                      (0xde1,uVar5 & 0xffffffff,*(undefined4 *)(puVar14 + 4),iVar13,iVar11,0,
                       *puVar10);
          }
          if ((uVar5 != 0) && (iVar13 == iVar11)) {
            ccNextPOT(iVar13);
          }
          iVar3 = glGetError();
          if (iVar3 != 0) goto LAB_00fe9ed0;
          iVar13 = iVar13 >> 1;
          iVar11 = iVar11 >> 1;
          uVar5 = uVar5 + 1;
          if (iVar13 < 2) {
            iVar13 = 1;
          }
          if (iVar11 < 2) {
            iVar11 = 1;
          }
          puVar10 = puVar10 + 4;
        } while (param_2 != uVar5);
      }
      Size::Size((Size *)&local_80,(float)param_5,(float)param_6);
      Size::operator=((Size *)(this + 0x3c),(Size *)&local_80);
      uVar15 = NEON_fmov(0x3f800000,4);
      *(int *)(this + 0x24) = param_4;
      *(int *)(this + 0x28) = param_5;
      *(int *)(this + 0x2c) = param_6;
      this[0x44] = (Texture2D)0x0;
                    /* catch() { ... } // from try @ 00fe9f98 with catch @ 00fe9f3c */
      *(undefined8 *)(this + 0x34) = uVar15;
      this[0x45] = (Texture2D)(1 < (int)param_2);
      this_00 = (GLProgramCache *)GLProgramCache::getInstance();
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_80,GLProgram::SHADER_NAME_POSITION_TEXTURE);
      this_01 = (Ref *)GLProgramCache::getGLProgram(this_00,(basic_string *)&local_80);
                    /* try { // try from 00fe9f6c to 010e9f73 has its CatchHandler @ 00fea008 */
      if (this_01 != (Ref *)0x0) {
        Ref::retain(this_01);
      }
      if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
        Ref::release(*(Ref **)(this + 0x48));
      }
      *(Ref **)(this + 0x48) = this_01;
      if ((local_80 & 1) != 0) {
                    /* try { // try from 00fe9f94 to 010e9f97 has its CatchHandler @ 00fe9ff8 */
                    /* try { // try from 00fe9f98 to 010ea023 has its CatchHandler @ 00fe9f3c */
        operator_delete(local_70);
      }
      uVar15 = 1;
      goto LAB_00fe9ed4;
    }
  }
LAB_00fe9ed0:
  uVar15 = 0;
LAB_00fe9ed4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15);
}

