
/* cocos2d::TextRowSpace::appendBlock() */

long __thiscall cocos2d::TextRowSpace::appendBlock(TextRowSpace *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x18);
  if (*(long *)(this + 0x20) - lVar1 == -0x28) {
    *(long *)(this + 0x20) = lVar1;
  }
  else {
    std::__ndk1::
    vector<cocos2d::TextRowSpace::GlyphBlock,std::__ndk1::allocator<cocos2d::TextRowSpace::GlyphBlock>>
    ::__append((vector<cocos2d::TextRowSpace::GlyphBlock,std::__ndk1::allocator<cocos2d::TextRowSpace::GlyphBlock>>
                *)(this + 0x18),1);
    lVar1 = *(long *)(this + 0x20);
  }
  return lVar1 + -0x28;
}

