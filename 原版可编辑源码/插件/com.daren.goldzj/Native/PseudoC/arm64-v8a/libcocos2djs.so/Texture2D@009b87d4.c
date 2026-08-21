
/* cocos2d::renderer::Texture2D::Texture2D() */

void __thiscall cocos2d::renderer::Texture2D::Texture2D(Texture2D *this)

{
                    /* try { // try from 009b87e0 to 00ab8833 has its CatchHandler @ 009b87e0
                       catch() { ... } // from try @ 009b87e0 with catch @ 009b87e0
                       catch() { ... } // from try @ 009b898c with catch @ 009b87e0 */
  Texture::Texture((Texture *)this);
  *(undefined ***)this = &PTR__Texture2D_01c6aed8;
  return;
}

