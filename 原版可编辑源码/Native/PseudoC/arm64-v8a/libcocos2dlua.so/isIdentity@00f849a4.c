
/* cocos2d::Mat4::isIdentity() const */

bool __thiscall cocos2d::Mat4::isIdentity(Mat4 *this)

{
  int iVar1;
  
  iVar1 = memcmp(this,IDENTITY,0x40);
  return iVar1 == 0;
}

