
/* cocos2d::AudioDecoderSLES::init(SLEngineItf_ const* const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int, int,
   std::__ndk1::function<int (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, long*, long*)> const&) */

void __thiscall
cocos2d::AudioDecoderSLES::init
          (AudioDecoderSLES *this,SLEngineItf_ **param_1,basic_string *param_2,int param_3,
          int param_4,function *param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  void *__s;
  undefined8 uVar4;
  code *pcVar5;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = AudioDecoder::init((AudioDecoder *)this,param_2,param_4);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
    goto LAB_00a9aae8;
  }
  *(SLEngineItf_ ***)(this + 0x70) = param_1;
  *(int *)(this + 0x130) = param_3;
  plVar3 = *(long **)(param_5 + 0x20);
  if (plVar3 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if ((long *)param_5 == plVar3) {
    local_60 = alStack_80;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_00a9bf9c(alStack_80,this + 0x140);
  if (alStack_80 == local_60) {
    pcVar5 = *(code **)(*local_60 + 0x20);
LAB_00a9aab4:
    (*pcVar5)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar5 = *(code **)(*local_60 + 0x28);
    goto LAB_00a9aab4;
  }
  DAT_01d38e38 = param_3 << 2;
  __s = malloc((long)(param_3 << 4));
  *(void **)(this + 0x80) = __s;
  memset(__s,0,(long)(param_3 << 4));
  uVar4 = 1;
LAB_00a9aae8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

