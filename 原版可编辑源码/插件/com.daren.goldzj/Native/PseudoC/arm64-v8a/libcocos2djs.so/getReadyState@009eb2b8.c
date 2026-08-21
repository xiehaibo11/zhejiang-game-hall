
/* WebSocketImpl::getReadyState() const */

undefined4 __thiscall WebSocketImpl::getReadyState(WebSocketImpl *this)

{
  undefined4 uVar1;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0xc));
  uVar1 = *(undefined4 *)(this + 8);
  std::__ndk1::mutex::unlock((mutex *)(this + 0xc));
  return uVar1;
}

