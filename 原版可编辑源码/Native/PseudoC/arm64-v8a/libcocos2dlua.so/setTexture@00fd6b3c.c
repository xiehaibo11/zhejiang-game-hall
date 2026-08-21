
/* cocos2d::UniformValue::setTexture(cocos2d::Texture2D*, unsigned int) */

void __thiscall
cocos2d::UniformValue::setTexture(UniformValue *this,Texture2D *param_1,uint param_2)

{
  undefined4 uVar1;
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x20);
  if (this_00 != (Ref *)param_1) {
                    /* catch() { ... } // from try @ 00fd6bb8 with catch @ 00fd6b60 */
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    if (param_1 != (Texture2D *)0x0) {
      Ref::retain((Ref *)param_1);
    }
    *(Texture2D **)(this + 0x20) = param_1;
    uVar1 = Texture2D::getName(param_1);
    *(undefined4 *)(this + 0x18) = uVar1;
    *(uint *)(this + 0x1c) = param_2;
    *(undefined4 *)(this + 0x10) = 0;
  }
                    /* try { // try from 00fd6b8c to 010d6b93 has its CatchHandler @ 00fd6c58 */
  return;
}

