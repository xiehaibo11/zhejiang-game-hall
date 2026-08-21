
/* cocos2d::VolatileTextureMgr::setHasMipmaps(cocos2d::Texture2D*, bool) */

void cocos2d::VolatileTextureMgr::setHasMipmaps(Texture2D *param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = findVolotileTexture(param_1);
  *(bool *)(lVar1 + 0x48) = param_2;
                    /* catch() { ... } // from try @ 00ff1760 with catch @ 00ff17ac */
  return;
}

