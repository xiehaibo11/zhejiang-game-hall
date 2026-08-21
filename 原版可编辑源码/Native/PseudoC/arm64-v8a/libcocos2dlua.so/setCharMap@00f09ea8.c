
/* cocos2d::Label::setCharMap(cocos2d::Texture2D*, int, int, int) */

bool __thiscall
cocos2d::Label::setCharMap(Label *this,Texture2D *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = FontAtlasCache::getFontAtlasCharMap(param_1,param_2,param_3,param_4);
  if (lVar1 == 0) {
    reset(this);
  }
  else {
    *(undefined4 *)(this + 0x308) = 2;
    (**(code **)(*(long *)this + 0x5f0))(this,lVar1,0,0);
  }
  return lVar1 != 0;
}

