
/* cocos2d::network::WebSocket::close() */

void __thiscall cocos2d::network::WebSocket::close(WebSocket *this)

{
  mutex *this_00;
  long lVar1;
  mutex *local_58;
  char local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x130) == 0) {
    this_00 = (mutex *)(this + 8);
    *(undefined4 *)(this + 0x130) = 1;
    std::__ndk1::mutex::lock(this_00);
    if (*(int *)(this + 0x30) == 3) {
      std::__ndk1::mutex::unlock(this_00);
    }
    else {
      *(undefined4 *)(this + 0x30) = 2;
      std::__ndk1::mutex::unlock(this_00);
      local_58 = (mutex *)(this + 0xc0);
      local_50 = '\x01';
      std::__ndk1::mutex::lock(local_58);
      std::__ndk1::condition_variable::wait
                ((condition_variable *)(this + 0xe8),(unique_lock *)&local_58);
      *(undefined4 *)(this + 0x130) = 2;
      if (local_50 != '\0') {
        std::__ndk1::mutex::unlock(local_58);
      }
      local_58 = (mutex *)0x4c4b40;
      std::__ndk1::this_thread::sleep_for((duration *)&local_58);
    }
    (**(code **)(**(long **)(this + 0xb8) + 0x20))(*(long **)(this + 0xb8),this);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

