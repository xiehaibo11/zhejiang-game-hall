
/* WebSocketImpl::closeAsync() */

void __thiscall WebSocketImpl::closeAsync(WebSocketImpl *this)

{
  if (*(int *)(this + 0x130) != 0) {
    return;
  }
  *(undefined4 *)(this + 0x130) = 3;
  std::__ndk1::mutex::lock((mutex *)(this + 0xc));
  if ((*(uint *)(this + 8) & 0xfffffffe) != 2) {
    *(undefined4 *)(this + 8) = 2;
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0xc));
  return;
}

