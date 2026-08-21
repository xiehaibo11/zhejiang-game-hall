
/* cocos2d::Texture2D::setTexParameters(cocos2d::Texture2D::_TexParams const&) */

void __thiscall cocos2d::Texture2D::setTexParameters(Texture2D *this,_TexParams *param_1)

{
  GL::bindTexture2D(*(uint *)(this + 0x30));
  glTexParameteri(0xde1,0x2801,*(undefined4 *)param_1);
  glTexParameteri(0xde1,0x2800,*(undefined4 *)(param_1 + 4));
  glTexParameteri(0xde1,0x2802,*(undefined4 *)(param_1 + 8));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fec9b4 with catch @ 00feca14
                        */
  glTexParameteri(0xde1,0x2803,*(undefined4 *)(param_1 + 0xc));
  VolatileTextureMgr::setTexParameters(this,param_1);
  return;
}

