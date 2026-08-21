
/* cocos2d::experimental::ui::VideoPlayer::VideoPlayer() */

void __thiscall cocos2d::experimental::ui::VideoPlayer::VideoPlayer(VideoPlayer *this)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  _jclass *local_58;
  _jmethodID *p_Stack_50;
  undefined8 local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  cocos2d::ui::Widget::Widget((Widget *)this);
                    /* try { // try from 00ddeacc to 00edead3 has its CatchHandler @ 00ddeb5c */
                    /* try { // try from 00ddead4 to 00edeadb has its CatchHandler @ 00ddeb58 */
  *(undefined2 *)(this + 0x4f4) = 0;
                    /* try { // try from 00ddeadc to 00edeae3 has its CatchHandler @ 00ddeb54 */
  *(undefined ***)(this + 0x318) = &PTR__VideoPlayer_016e4ac8;
                    /* try { // try from 00ddeae4 to 00edeaeb has its CatchHandler @ 00ddeb50 */
  *(undefined4 *)(this + 0x4f8) = 0;
                    /* try { // try from 00ddeaec to 00edeaf3 has its CatchHandler @ 00ddeb4c */
  *(undefined8 *)(this + 0x500) = 0;
  *(undefined8 *)(this + 0x510) = 0;
                    /* try { // try from 00ddeaf4 to 00edeafb has its CatchHandler @ 00ddeb48 */
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x540) = 0;
                    /* try { // try from 00ddeafc to 00edeb03 has its CatchHandler @ 00ddeb44 */
  *(undefined4 *)(this + 0x4f0) = 0x10000;
  *(undefined4 *)(this + 0x51c) = 0xffffffff;
                    /* try { // try from 00ddeb04 to 00edeb0b has its CatchHandler @ 00ddeb40 */
  *(undefined ***)this = &PTR__VideoPlayer_016e43a0;
                    /* try { // try from 00ddeb0c to 00edeb13 has its CatchHandler @ 00ddeb3c */
                    /* try { // try from 00ddeb14 to 00edeb1b has its CatchHandler @ 00ddeb38 */
  pcVar1 = DAT_017889e8;
                    /* try { // try from 00ddeb1c to 00edeb23 has its CatchHandler @ 00ddeb34 */
  if ((DAT_017889d8 & 1) == 0) {
    pcVar1 = &DAT_017889d9;
  }
                    /* try { // try from 00ddeb24 to 00edeb2b has its CatchHandler @ 00ddeb30 */
                    /* try { // try from 00ddeb2c to 00edecf3 has its CatchHandler @ 00ddd330 */
                    /* catch() { ... } // from try @ 00ddeb24 with catch @ 00ddeb30 */
                    /* catch() { ... } // from try @ 00ddeb1c with catch @ 00ddeb34 */
  uVar4 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_58,pcVar1,"createVideoWidget","()I");
                    /* catch() { ... } // from try @ 00ddeb14 with catch @ 00ddeb38 */
  if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 00dddf6c with catch @ 00ddeb60 */
    uVar3 = 0xffffffff;
  }
  else {
                    /* catch() { ... } // from try @ 00ddeb0c with catch @ 00ddeb3c */
                    /* catch() { ... } // from try @ 00ddeb04 with catch @ 00ddeb40 */
                    /* catch() { ... } // from try @ 00ddeafc with catch @ 00ddeb44 */
    uVar3 = _JNIEnv::CallStaticIntMethod(local_58,p_Stack_50,local_48);
                    /* catch() { ... } // from try @ 00ddeaf4 with catch @ 00ddeb48 */
                    /* catch() { ... } // from try @ 00ddeaec with catch @ 00ddeb4c */
                    /* catch() { ... } // from try @ 00ddeae4 with catch @ 00ddeb50 */
                    /* catch() { ... } // from try @ 00ddeadc with catch @ 00ddeb54 */
                    /* catch() { ... } // from try @ 00ddead4 with catch @ 00ddeb58 */
    (**(code **)(*(long *)local_58 + 0xb8))(local_58,p_Stack_50);
                    /* catch() { ... } // from try @ 00ddeacc with catch @ 00ddeb5c */
  }
                    /* catch() { ... } // from try @ 00ddd3cc with catch @ 00ddeb64 */
  local_58 = (_jclass *)(this + 0x51c);
  *(undefined4 *)local_58 = uVar3;
                    /* catch() { ... } // from try @ 00ddd3bc with catch @ 00ddeb74 */
                    /* catch() { ... } // from try @ 00ddd3ac with catch @ 00ddeb84 */
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::VideoPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::VideoPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::VideoPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::ui::VideoPlayer*>>>
          ::
          __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                    ((int *)&DAT_017889f0,(piecewise_construct_t *)local_58,(tuple *)&DAT_0142049a,
                     (tuple *)&local_58);
  *(VideoPlayer **)(lVar5 + 0x18) = this;
                    /* catch() { ... } // from try @ 00ddd39c with catch @ 00ddeb94 */
                    /* catch() { ... } // from try @ 00ddd384 with catch @ 00ddeb98 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00ddd620 with catch @ 00ddeba8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

