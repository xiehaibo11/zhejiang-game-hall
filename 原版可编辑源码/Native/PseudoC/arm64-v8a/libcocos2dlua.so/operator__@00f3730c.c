
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void
   (cocos2d::ParticleSystemQuad::*)(cocos2d::EventCustom*), cocos2d::ParticleSystemQuad*,
   std::__ndk1::placeholders::__ph<1> const&>, std::__ndk1::allocator<std::__ndk1::__bind<void
   (cocos2d::ParticleSystemQuad::*)(cocos2d::EventCustom*), cocos2d::ParticleSystemQuad*,
   std::__ndk1::placeholders::__ph<1> const&> >, void
   (cocos2d::EventCustom*)>::TEMPNAMEPLACEHOLDERVALUE(cocos2d::EventCustom*&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::ParticleSystemQuad::*)(cocos2d::EventCustom*),cocos2d::ParticleSystemQuad*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::ParticleSystemQuad::*)(cocos2d::EventCustom*),cocos2d::ParticleSystemQuad*,std::__ndk1::placeholders::__ph<1>const&>>,void(cocos2d::EventCustom*)>
::operator()(__func<std::__ndk1::__bind<void(cocos2d::ParticleSystemQuad::*)(cocos2d::EventCustom*),cocos2d::ParticleSystemQuad*,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::ParticleSystemQuad::*)(cocos2d::EventCustom*),cocos2d::ParticleSystemQuad*,std::__ndk1::placeholders::__ph<1>const&>>,void(cocos2d::EventCustom*)>
             *this,EventCustom **param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* catch() { ... } // from try @ 00f37230 with catch @ 00f3730c */
                    /* catch() { ... } // from try @ 00f37228 with catch @ 00f37310 */
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
                    /* catch() { ... } // from try @ 00f3716c with catch @ 00f37314 */
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* catch() { ... } // from try @ 00f37164 with catch @ 00f37324 */
                    /* WARNING: Could not recover jumptable at 0x00f37328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00f37260 with catch @ 00f37328 */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_1);
  return;
}

