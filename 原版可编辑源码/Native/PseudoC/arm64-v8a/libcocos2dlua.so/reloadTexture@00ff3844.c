
/* cocos2d::TextureCube::reloadTexture() */

undefined8 __thiscall cocos2d::TextureCube::reloadTexture(TextureCube *this)

{
  basic_string *pbVar1;
  
  pbVar1 = *(basic_string **)(this + 0x88);
  init(this,pbVar1,pbVar1 + 0x18,pbVar1 + 0x30,pbVar1 + 0x48,pbVar1 + 0x60,pbVar1 + 0x78);
  return 1;
}

