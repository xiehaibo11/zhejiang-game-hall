
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::ClippingRectangleNode::*)(),
   cocos2d::ClippingRectangleNode*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::ClippingRectangleNode::*)(), cocos2d::ClippingRectangleNode*> >, void ()>::__clone()
   const */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::ClippingRectangleNode::*)(),cocos2d::ClippingRectangleNode*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::ClippingRectangleNode::*)(),cocos2d::ClippingRectangleNode*>>,void()>
::__clone(__func<std::__ndk1::__bind<void(cocos2d::ClippingRectangleNode::*)(),cocos2d::ClippingRectangleNode*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::ClippingRectangleNode::*)(),cocos2d::ClippingRectangleNode*>>,void()>
          *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x20);
  *puVar1 = &PTR_FUN_016fbd90;
  uVar3 = *(undefined8 *)(this + 8);
  uVar2 = *(undefined8 *)(this + 0x18);
                    /* try { // try from 00ef2f20 to 00ff2f2b has its CatchHandler @ 00ef308c */
  puVar1[2] = *(undefined8 *)(this + 0x10);
  puVar1[1] = uVar3;
  puVar1[3] = uVar2;
                    /* try { // try from 00ef2f2c to 00ff2f3b has its CatchHandler @ 00ef306c */
  return;
}

