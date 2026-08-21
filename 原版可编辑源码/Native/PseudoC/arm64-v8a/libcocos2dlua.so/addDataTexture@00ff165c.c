
/* cocos2d::VolatileTextureMgr::addDataTexture(cocos2d::Texture2D*, void*, int,
   cocos2d::Texture2D::PixelFormat, cocos2d::Size const&) */

void cocos2d::VolatileTextureMgr::addDataTexture
               (Texture2D *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               Size *param_5)

{
  long lVar1;
  
  if (_isReloading == '\0') {
                    /* try { // try from 00ff1680 to 010f16db has its CatchHandler @ 00ff1680
                       catch() { ... } // from try @ 00ff1680 with catch @ 00ff1680
                       catch() { ... } // from try @ 00ff16e8 with catch @ 00ff1680 */
    lVar1 = findVolotileTexture(param_1);
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    *(undefined4 *)(lVar1 + 0x20) = param_3;
    *(undefined4 *)(lVar1 + 0x2c) = param_4;
    *(undefined4 *)(lVar1 + 0x10) = 2;
    Size::operator=((Size *)(lVar1 + 0x24),param_5);
  }
  return;
}

