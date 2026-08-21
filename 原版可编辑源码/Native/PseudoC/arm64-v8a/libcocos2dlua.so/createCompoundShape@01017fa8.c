
/* cocos2d::Physics3DShape::createCompoundShape(std::__ndk1::vector<std::__ndk1::pair<cocos2d::Physics3DShape*,
   cocos2d::Mat4>, std::__ndk1::allocator<std::__ndk1::pair<cocos2d::Physics3DShape*, cocos2d::Mat4>
   > > const&) */

Ref * cocos2d::Physics3DShape::createCompoundShape(vector *param_1)

{
  Ref *this;
  
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01017f8c with catch @ 01017fd0
                        */
    Ref::Ref(this);
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x3c) = 0;
    *(undefined8 *)(this + 0x34) = 0;
    *(undefined ***)this = &PTR__Physics3DShape_01726930;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
  }
  initCompoundShape((Physics3DShape *)this,param_1);
                    /* catch() { ... } // from try @ 010180d8 with catch @ 01018008 */
  Ref::autorelease(this);
  return this;
}

