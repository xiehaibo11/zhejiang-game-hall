
/* LuaSkeletonAnimation::createWithFile(char const*, char const*, float) */

SkeletonAnimation * LuaSkeletonAnimation::createWithFile(char *param_1,char *param_2,float param_3)

{
  long lVar1;
  SkeletonAnimation *this;
  spAtlas *psVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x4e0,(nothrow_t *)&std::nothrow);
  if (this != (SkeletonAnimation *)0x0) {
    spine::SkeletonAnimation::SkeletonAnimation(this);
    *(undefined ***)this = &PTR__LuaSkeletonAnimation_0169d290;
    *(undefined ***)(this + 0x2f8) = &PTR__LuaSkeletonAnimation_0169d810;
  }
  psVar2 = (spAtlas *)spAtlas_createFromFile(param_2,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,param_1);
  spine::SkeletonRenderer::initWithJsonFile
            ((SkeletonRenderer *)this,(basic_string *)local_60,psVar2,param_3);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  cocos2d::Ref::autorelease((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

