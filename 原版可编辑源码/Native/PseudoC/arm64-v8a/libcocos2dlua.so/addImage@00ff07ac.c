
/* cocos2d::VolatileTextureMgr::addImage(cocos2d::Texture2D*, cocos2d::Image*) */

void cocos2d::VolatileTextureMgr::addImage(Texture2D *param_1,Image *param_2)

{
  long lVar1;
  
  if ((param_1 != (Texture2D *)0x0) && (param_2 != (Image *)0x0)) {
    lVar1 = findVolotileTexture(param_1);
    Ref::retain((Ref *)param_2);
    *(Image **)(lVar1 + 8) = param_2;
    *(undefined4 *)(lVar1 + 0x10) = 4;
  }
  return;
}

