
/* std::__ndk1::future<void>::~future() */

void __thiscall std::__ndk1::future<void>::~future(future<void> *this)

{
  if (*(__shared_count **)this != (__shared_count *)0x0) {
    __shared_count::__release_shared(*(__shared_count **)this);
    return;
  }
  return;
}

