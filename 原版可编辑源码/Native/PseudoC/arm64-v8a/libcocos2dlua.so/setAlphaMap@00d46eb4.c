
/* cocos2d::Terrain::setAlphaMap(cocos2d::Texture2D*) */

void __thiscall cocos2d::Terrain::setAlphaMap(Terrain *this,Texture2D *param_1)

{
  if (param_1 != (Texture2D *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  if (*(Ref **)(this + 0x478) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x478));
  }
  *(Texture2D **)(this + 0x478) = param_1;
  return;
}

