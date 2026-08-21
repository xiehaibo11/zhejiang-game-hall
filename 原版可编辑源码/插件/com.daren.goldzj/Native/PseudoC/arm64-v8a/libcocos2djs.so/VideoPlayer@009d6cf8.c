
/* cocos2d::VideoPlayer::VideoPlayer() */

void __thiscall cocos2d::VideoPlayer::VideoPlayer(VideoPlayer *this)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  piecewise_construct_t *ppVar6;
  _jclass *local_68;
  _jmethodID *p_Stack_60;
  undefined8 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__VideoPlayer_01c6bcb0;
  ppVar6 = (piecewise_construct_t *)(this + 0x2c);
  *(undefined4 *)ppVar6 = 0xffffffff;
  *(undefined8 *)(this + 0x1d) = 0;
  *(undefined8 *)(this + 0x15) = 0;
  this[0x27] = (VideoPlayer)0x0;
  *(undefined2 *)(this + 0x25) = 0;
  *(undefined8 *)(this + 0xd) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(VideoPlayer **)(this + 0x30) = this + 0x38;
  pcVar1 = DAT_01d38720;
  if (((byte)DAT_01d38710 & 1) == 0) {
    pcVar1 = (char *)((long)&DAT_01d38710 + 1);
  }
  uVar4 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_68,pcVar1,"createVideoWidget","()I");
  if ((uVar4 & 1) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = _JNIEnv::CallStaticIntMethod(local_68,p_Stack_60,local_58);
    (**(code **)(*(long *)local_68 + 0xb8))(local_68,p_Stack_60);
  }
  *(undefined4 *)ppVar6 = uVar3;
  local_68 = (_jclass *)ppVar6;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::VideoPlayer*>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)&DAT_01d38728,ppVar6,(tuple *)&DAT_0188cd76,(tuple *)&local_68);
  *(VideoPlayer **)(lVar5 + 0x18) = this;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

