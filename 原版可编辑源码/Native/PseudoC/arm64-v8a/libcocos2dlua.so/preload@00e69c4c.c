
/* cocos2d::experimental::AudioEngine::preload(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (bool)>) */

void cocos2d::experimental::AudioEngine::preload(basic_string *param_1,function *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  AudioEngineImpl *this;
  undefined1 *puVar4;
  long lVar5;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  long local_48;
  
  puVar4 = local_50;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (_isEnabled == '\0') {
    local_4c[0] = 0;
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    lVar5 = *plVar2;
    puVar4 = local_4c;
  }
  else {
    if (_audioEngineImpl == (AudioEngineImpl *)0x0) {
      this = operator_new(0xd8,(nothrow_t *)&std::nothrow);
      if (this == (AudioEngineImpl *)0x0) {
        _audioEngineImpl = (AudioEngineImpl *)0x0;
        goto LAB_00e69d30;
      }
      AudioEngineImpl::AudioEngineImpl(this);
      _audioEngineImpl = this;
      uVar3 = AudioEngineImpl::init(this);
      if ((uVar3 & 1) == 0) {
        if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
          (**(code **)(*(long *)_audioEngineImpl + 8))(_audioEngineImpl);
        }
        _audioEngineImpl = (AudioEngineImpl *)0x0;
        goto LAB_00e69d30;
      }
      if (_audioEngineImpl == (AudioEngineImpl *)0x0) goto LAB_00e69d30;
    }
    plVar2 = (long *)FileUtils::getInstance();
    uVar3 = (**(code **)(*plVar2 + 0x128))(plVar2,param_1);
    if ((uVar3 & 1) != 0) {
      AudioEngineImpl::preload(_audioEngineImpl,param_1,param_2);
      goto LAB_00e69d30;
    }
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_00e69d30;
    local_50[0] = 0;
    lVar5 = *plVar2;
  }
  (**(code **)(lVar5 + 0x30))(plVar2,puVar4);
LAB_00e69d30:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

