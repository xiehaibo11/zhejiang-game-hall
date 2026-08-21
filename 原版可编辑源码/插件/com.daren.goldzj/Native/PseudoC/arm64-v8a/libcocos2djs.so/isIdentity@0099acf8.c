
/* cocos2d::Mat4::isIdentity() const */

bool __thiscall cocos2d::Mat4::isIdentity(Mat4 *this)

{
  int iVar1;
  
                    /* try { // try from 0099acf8 to 00a9ad4b has its CatchHandler @ 0099acf8
                       catch() { ... } // from try @ 0099acf8 with catch @ 0099acf8
                       catch() { ... } // from try @ 0099aec0 with catch @ 0099acf8 */
  iVar1 = memcmp(this,IDENTITY,0x40);
  return iVar1 == 0;
}

