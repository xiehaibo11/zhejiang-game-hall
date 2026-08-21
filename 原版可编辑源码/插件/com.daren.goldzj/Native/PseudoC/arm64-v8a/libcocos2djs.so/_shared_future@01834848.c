
/* std::__ndk1::shared_future<void>::~shared_future() */

void __thiscall std::__ndk1::shared_future<void>::~shared_future(shared_future<void> *this)

{
  if (*(__shared_count **)this != (__shared_count *)0x0) {
    __shared_count::__release_shared(*(__shared_count **)this);
    return;
  }
  return;
}

