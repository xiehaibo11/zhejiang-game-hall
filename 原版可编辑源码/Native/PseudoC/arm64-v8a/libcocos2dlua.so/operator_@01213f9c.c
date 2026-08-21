
/* std::__ndk1::shared_future<void>::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::shared_future<void>
   const&) */

shared_future<void> * __thiscall
std::__ndk1::shared_future<void>::operator=(shared_future<void> *this,shared_future *param_1)

{
  if (*(__shared_count **)param_1 != (__shared_count *)0x0) {
    __shared_count::__add_shared(*(__shared_count **)param_1);
  }
  if (*(__shared_count **)this != (__shared_count *)0x0) {
    __shared_count::__release_shared(*(__shared_count **)this);
  }
  *(undefined8 *)this = *(undefined8 *)param_1;
  return this;
}

