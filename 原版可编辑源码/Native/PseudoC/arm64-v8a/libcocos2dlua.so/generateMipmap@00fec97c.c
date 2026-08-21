
/* cocos2d::Texture2D::generateMipmap() */

void __thiscall cocos2d::Texture2D::generateMipmap(Texture2D *this)

{
  GL::bindTexture2D(*(uint *)(this + 0x30));
  glGenerateMipmap(0xde1);
  this[0x45] = (Texture2D)0x1;
                    /* try { // try from 00fec9b4 to 010ec9bb has its CatchHandler @ 00feca14 */
  VolatileTextureMgr::setHasMipmaps(this,true);
  return;
}

