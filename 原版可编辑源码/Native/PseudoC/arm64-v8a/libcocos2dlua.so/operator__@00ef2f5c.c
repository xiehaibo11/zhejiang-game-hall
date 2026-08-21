
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::ClippingRectangleNode::*)(),
   cocos2d::ClippingRectangleNode*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::ClippingRectangleNode::*)(), cocos2d::ClippingRectangleNode*> >, void
   ()>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::ClippingRectangleNode::*)(),cocos2d::ClippingRectangleNode*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::ClippingRectangleNode::*)(),cocos2d::ClippingRectangleNode*>>,void()>
::operator()(__func<std::__ndk1::__bind<void(cocos2d::ClippingRectangleNode::*)(),cocos2d::ClippingRectangleNode*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::ClippingRectangleNode::*)(),cocos2d::ClippingRectangleNode*>>,void()>
             *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
                    /* try { // try from 00ef2f64 to 00ff30c3 has its CatchHandler @ 00ef2e84 */
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00ef2f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

