
/* std::__ndk1::__function::__func<std::__ndk1::__bind<void (cocos2d::Sprite3D::*)(void*),
   cocos2d::Sprite3D*&, std::__ndk1::placeholders::__ph<1> const&>,
   std::__ndk1::allocator<std::__ndk1::__bind<void (cocos2d::Sprite3D::*)(void*),
   cocos2d::Sprite3D*&, std::__ndk1::placeholders::__ph<1> const&> >, void
   (void*)>::TEMPNAMEPLACEHOLDERVALUE(void*&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<void(cocos2d::Sprite3D::*)(void*),cocos2d::Sprite3D*&,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Sprite3D::*)(void*),cocos2d::Sprite3D*&,std::__ndk1::placeholders::__ph<1>const&>>,void(void*)>
::operator()(__func<std::__ndk1::__bind<void(cocos2d::Sprite3D::*)(void*),cocos2d::Sprite3D*&,std::__ndk1::placeholders::__ph<1>const&>,std::__ndk1::allocator<std::__ndk1::__bind<void(cocos2d::Sprite3D::*)(void*),cocos2d::Sprite3D*&,std::__ndk1::placeholders::__ph<1>const&>>,void(void*)>
             *this,void **param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00d40f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_1);
  return;
}

