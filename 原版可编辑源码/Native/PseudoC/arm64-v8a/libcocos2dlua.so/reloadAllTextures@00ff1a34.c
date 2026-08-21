
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::VolatileTextureMgr::reloadAllTextures() */

void cocos2d::VolatileTextureMgr::reloadAllTextures(void)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 00ff1824 with catch @ 00ff1a38 */
                    /* catch() { ... } // from try @ 00ff1808 with catch @ 00ff1a3c */
                    /* catch() { ... } // from try @ 00ff1894 with catch @ 00ff1a44 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00ff1a60 to 010f1a9f has its CatchHandler @ 00ff1a60
                       catch() { ... } // from try @ 00ff1a60 with catch @ 00ff1a60
                       catch() { ... } // from try @ 00ff1aac with catch @ 00ff1a60
                       catch() { ... } // from try @ 00ff1b04 with catch @ 00ff1a60 */
  _isReloading = 1;
  puVar7 = _DAT_01792910;
  if (_DAT_01792910 != &_textures) {
    do {
      Texture2D::releaseGLTexture(*(Texture2D **)puVar7[2]);
      puVar7 = (undefined8 *)puVar7[1];
    } while (puVar7 != &_textures);
    puVar7 = _DAT_01792910;
                    /* try { // try from 00ff1aa0 to 010f1aab has its CatchHandler @ 00ff1b54 */
    if (_DAT_01792910 != &_textures) {
      do {
        puVar8 = (undefined8 *)puVar7[2];
                    /* try { // try from 00ff1ae4 to 010f1b03 has its CatchHandler @ 00ff1b50 */
        switch(*(undefined4 *)(puVar8 + 2)) {
        case 1:
          reloadTexture(*puVar8,puVar8 + 6,*(undefined4 *)((long)puVar8 + 0x2c));
                    /* try { // try from 00ff1b04 to 010f1b6f has its CatchHandler @ 00ff1a60 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(local_88,(basic_string *)&TextureCache::s_etc1AlphaFileSuffix);
          uVar1 = (ulong)(*(byte *)(puVar8 + 6) >> 1);
          pcVar6 = (char *)((long)puVar8 + 0x31);
          if ((*(byte *)(puVar8 + 6) & 1) != 0) {
            uVar1 = puVar8[7];
            pcVar6 = (char *)puVar8[8];
          }
          puVar4 = (ulong *)std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::insert(local_88,0,pcVar6,uVar1);
          local_60 = (void *)puVar4[2];
          uStack_68 = puVar4[1];
          local_70 = *puVar4;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
                    /* catch() { ... } // from try @ 00ff1ae4 with catch @ 00ff1b50 */
                    /* catch() { ... } // from try @ 00ff1aa0 with catch @ 00ff1b54 */
          if (((byte)local_88[0] & 1) != 0) {
            operator_delete(local_78);
          }
          uVar5 = Texture2D::getAlphaTexture((Texture2D *)*puVar8);
          reloadTexture(uVar5,&local_70,*(undefined4 *)((long)puVar8 + 0x2c));
          if ((local_70 & 1) == 0) goto switchD_00ff1af0_default;
          operator_delete(local_60);
          cVar2 = *(char *)(puVar8 + 9);
          break;
        case 2:
          Texture2D::initWithData
                    (*puVar8,puVar8[3],(long)*(int *)(puVar8 + 4),
                     *(undefined4 *)((long)puVar8 + 0x2c),(int)*(float *)((long)puVar8 + 0x24),
                     (int)*(float *)(puVar8 + 5));
          cVar2 = *(char *)(puVar8 + 9);
          break;
        case 3:
          if ((*(byte *)(puVar8 + 0xc) & 1) == 0) {
            pcVar6 = (char *)((long)puVar8 + 0x61);
          }
          else {
            pcVar6 = (char *)puVar8[0xe];
          }
          Texture2D::initWithString((Texture2D *)*puVar8,pcVar6,(FontDefinition *)(puVar8 + 0xf));
          cVar2 = *(char *)(puVar8 + 9);
          break;
        case 4:
          Texture2D::initWithImage((Texture2D *)*puVar8,(Image *)puVar8[1]);
        default:
switchD_00ff1af0_default:
          cVar2 = *(char *)(puVar8 + 9);
        }
        if (cVar2 != '\0') {
          Texture2D::generateMipmap((Texture2D *)*puVar8);
        }
        Texture2D::setTexParameters((Texture2D *)*puVar8,(_TexParams *)((long)puVar8 + 0x4c));
        puVar8 = puVar7 + 1;
        puVar7 = (undefined8 *)*puVar8;
      } while ((undefined8 *)*puVar8 != &_textures);
    }
  }
  _isReloading = 0;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

