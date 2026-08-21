
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::NodeGrid::*)(),
   cocos2d::NodeGrid*>, std::__ndk1::allocator<std::__ndk1::__bind<void (cocos2d::NodeGrid::*)(),
   cocos2d::NodeGrid*> >, void ()>::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::NodeGrid::*)(),cocos2d::NodeGrid*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::NodeGrid::*)(),cocos2d::NodeGrid*>>,void()>
::operator()(__func<std::__ndk1::__bind<void(cocos2d::NodeGrid::*)(),cocos2d::NodeGrid*>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::NodeGrid::*)(),cocos2d::NodeGrid*>>,void()>
             *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
                    /* try { // try from 00f2c59c to 0102c5a3 has its CatchHandler @ 00f2c5bc */
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00f2c5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00f2c5a4 to 0102c5d7 has its CatchHandler @ 00f2c578 */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

