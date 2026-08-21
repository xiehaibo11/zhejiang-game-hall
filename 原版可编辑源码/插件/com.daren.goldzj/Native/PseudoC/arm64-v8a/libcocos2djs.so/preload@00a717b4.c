
/* cocos2d::AudioEngineImpl::preload(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::function<void (bool)> const&) */

void __thiscall
cocos2d::AudioEngineImpl::preload(AudioEngineImpl *this,basic_string *param_1,function *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  AudioPlayerProvider *this_00;
  basic_string local_b8 [16];
  void *local_a8;
  long alStack_a0 [4];
  long *local_80;
  undefined1 local_70 [32];
  long *local_50;
  long local_38;
  
                    /* try { // try from 00a717c4 to 00b718c3 has its CatchHandler @ 00a715d0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xa0) == 0) {
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 != (long *)0x0) {
      local_70[0] = 0;
                    /* catch() { ... } // from try @ 00a7168c with catch @ 00a71838
                       catch() { ... } // from try @ 00a7172c with catch @ 00a71838 */
                    /* catch() { ... } // from try @ 00a71680 with catch @ 00a7183c
                       catch() { ... } // from try @ 00a716e4 with catch @ 00a7183c */
      (**(code **)(*plVar2 + 0x30))(plVar2,local_70);
    }
    goto LAB_00a71954;
  }
  plVar2 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar2 + 0x40))(local_b8,plVar2,param_1);
  plVar2 = *(long **)(param_2 + 0x20);
  this_00 = *(AudioPlayerProvider **)(this + 0xa0);
  if (plVar2 == (long *)0x0) {
    local_80 = (long *)0x0;
                    /* catch() { ... } // from try @ 00a71650 with catch @ 00a71854 */
  }
  else if ((long *)param_2 == plVar2) {
                    /* catch() { ... } // from try @ 00a71644 with catch @ 00a71858 */
    local_80 = alStack_a0;
                    /* catch() { ... } // from try @ 00a71624 with catch @ 00a7185c */
                    /* catch() { ... } // from try @ 00a7165c with catch @ 00a7186c
                       catch() { ... } // from try @ 00a716c4 with catch @ 00a7186c
                       catch() { ... } // from try @ 00a71788 with catch @ 00a7186c */
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_a0);
  }
  else {
    local_80 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = local_80;
  local_50 = (long *)0x0;
  plVar3 = operator_new(0x40);
  *plVar3 = (long)&PTR_FUN_01c6ed70;
  if (plVar2 == (long *)0x0) {
    plVar3[6] = 0;
  }
  else if (alStack_a0 == plVar2) {
                    /* try { // try from 00a718c4 to 00b71917 has its CatchHandler @ 00a718c4
                       catch() { ... } // from try @ 00a718c4 with catch @ 00a718c4
                       catch() { ... } // from try @ 00a71ab0 with catch @ 00a718c4 */
    plVar3[6] = (long)(plVar3 + 2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  else {
    lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    plVar3[6] = lVar4;
  }
  local_50 = plVar3;
  AudioPlayerProvider::preloadEffect(this_00,local_b8,local_70);
  if ((long *)local_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00a71914:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00a71914;
  }
                    /* try { // try from 00a71918 to 00b7192f has its CatchHandler @ 00a71ae4 */
  if (alStack_a0 == local_80) {
                    /* try { // try from 00a71938 to 00b71943 has its CatchHandler @ 00a71ac8 */
    pcVar5 = *(code **)(*local_80 + 0x20);
LAB_00a71940:
    (*pcVar5)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar5 = *(code **)(*local_80 + 0x28);
    goto LAB_00a71940;
  }
                    /* try { // try from 00a71944 to 00b7194f has its CatchHandler @ 00a71ac4 */
  if (((byte)local_b8[0] & 1) != 0) {
                    /* try { // try from 00a71950 to 00b7198f has its CatchHandler @ 00a71af4 */
    operator_delete(local_a8);
  }
LAB_00a71954:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

