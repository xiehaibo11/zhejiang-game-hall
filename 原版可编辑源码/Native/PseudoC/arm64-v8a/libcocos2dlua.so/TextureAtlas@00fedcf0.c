
/* cocos2d::TextureAtlas::TextureAtlas() */

void __thiscall cocos2d::TextureAtlas::TextureAtlas(TextureAtlas *this)

{
                    /* try { // try from 00fedcfc to 010edd07 has its CatchHandler @ 00fede64 */
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x28) = 0;
  this[0x3c] = (TextureAtlas)0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined ***)this = &PTR__TextureAtlas_01724470;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}

