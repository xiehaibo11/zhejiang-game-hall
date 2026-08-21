
/* cocos2d::Texture2D::setAlphaTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::Texture2D::setAlphaTexture(Texture2D *this,Texture2D *param_1)

{
                    /* try { // try from 00fed224 to 010ed22b has its CatchHandler @ 00fed5d4 */
  if (param_1 != (Texture2D *)0x0) {
                    /* try { // try from 00fed230 to 010ed23b has its CatchHandler @ 00fed5d8 */
                    /* try { // try from 00fed240 to 010ed263 has its CatchHandler @ 00fed61c */
    Ref::retain((Ref *)param_1);
    if (*(Ref **)(this + 0x80) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x80));
    }
    *(Texture2D **)(this + 0x80) = param_1;
    this[0x44] = (Texture2D)0x1;
  }
  return;
}

