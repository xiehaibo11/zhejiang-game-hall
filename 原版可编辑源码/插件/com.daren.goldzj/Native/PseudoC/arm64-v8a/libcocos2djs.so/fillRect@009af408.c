
/* cocos2d::TextRowSpace::fillRect(int, cocos2d::Rect&, cocos2d::Rect&) */

void __thiscall
cocos2d::TextRowSpace::fillRect(TextRowSpace *this,int param_1,Rect *param_2,Rect *param_3)

{
  TextRowSpace *pTVar1;
  TextRowSpace *pTVar2;
  long lVar3;
  float local_44;
  
  lVar3 = *(long *)(this + 0x18);
  if (*(long *)(this + 0x20) - lVar3 == -0x28) {
    *(long *)(this + 0x20) = lVar3;
  }
  else {
    std::__ndk1::
    vector<cocos2d::TextRowSpace::GlyphBlock,std::__ndk1::allocator<cocos2d::TextRowSpace::GlyphBlock>>
    ::__append((vector<cocos2d::TextRowSpace::GlyphBlock,std::__ndk1::allocator<cocos2d::TextRowSpace::GlyphBlock>>
                *)(this + 0x18),1);
    lVar3 = *(long *)(this + 0x20);
  }
  local_44 = (float)Rect::getMinX(param_2);
  pTVar1 = (TextRowSpace *)&local_44;
  if (*(float *)this <= local_44) {
    pTVar1 = this;
  }
  *(float *)this = *(float *)pTVar1;
  local_44 = (float)Rect::getMaxX(param_2);
  pTVar2 = this + 8;
  pTVar1 = (TextRowSpace *)&local_44;
  if (local_44 <= *(float *)pTVar2) {
    pTVar1 = pTVar2;
  }
  *(float *)pTVar2 = *(float *)pTVar1;
  local_44 = (float)Rect::getMinY(param_2);
  pTVar2 = this + 4;
  pTVar1 = (TextRowSpace *)&local_44;
  if (*(float *)pTVar2 <= local_44) {
    pTVar1 = pTVar2;
  }
  *(float *)pTVar2 = *(float *)pTVar1;
  local_44 = (float)Rect::getMaxY(param_2);
  pTVar2 = this + 0xc;
  pTVar1 = (TextRowSpace *)&local_44;
  if (local_44 <= *(float *)pTVar2) {
    pTVar1 = pTVar2;
  }
  *(float *)pTVar2 = *(float *)pTVar1;
  Rect::operator=((Rect *)(lVar3 + -0x28),param_2);
  Rect::operator=((Rect *)(lVar3 + -0x18),param_3);
  *(undefined1 *)(lVar3 + -4) = 0;
  *(int *)(lVar3 + -8) = param_1;
  return;
}

