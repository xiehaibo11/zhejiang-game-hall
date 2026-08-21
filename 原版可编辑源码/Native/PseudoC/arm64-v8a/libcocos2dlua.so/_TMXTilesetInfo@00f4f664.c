
/* cocos2d::TMXTilesetInfo::~TMXTilesetInfo() */

void __thiscall cocos2d::TMXTilesetInfo::~TMXTilesetInfo(TMXTilesetInfo *this)

{
  TMXTilesetInfo TVar1;
  
  *(undefined ***)this = &PTR__TMXTilesetInfo_01711d20;
  if (((byte)this[0x80] & 1) == 0) {
    TVar1 = this[0x60];
  }
  else {
    operator_delete(*(void **)(this + 0x90));
    TVar1 = this[0x60];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0x28];
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    TVar1 = this[0x28];
  }
  if (((byte)TVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

