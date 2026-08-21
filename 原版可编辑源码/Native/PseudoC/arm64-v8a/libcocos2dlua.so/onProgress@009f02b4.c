
/* universe::Downloader::onProgress(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float) */

void __thiscall
universe::Downloader::onProgress(Downloader *this,basic_string *param_1,float param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x90);
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    local_2c = param_2;
    auVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,param_1,&local_2c);
    param_1 = auVar4._8_8_;
    uVar3 = auVar4._0_8_;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,param_1);
}

