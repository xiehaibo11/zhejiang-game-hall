
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::TransitionScene::*)(),
   cocos2d::TransitionJumpZoom*>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::TransitionScene::*)(), cocos2d::TransitionJumpZoom*> >, void
   ()>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionJumpZoom*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionJumpZoom*>>,void()>
::operator()(__func<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionJumpZoom*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::TransitionScene::*)(),cocos2d::TransitionJumpZoom*>>,void()>
             *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* try { // try from 00f5f340 to 0105f347 has its CatchHandler @ 00f5f4e4 */
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
                    /* try { // try from 00f5f348 to 0105f35b has its CatchHandler @ 00f5f4e0 */
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00f5f358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

