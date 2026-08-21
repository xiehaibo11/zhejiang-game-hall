
/* std::__ndk1::random_device::~random_device() */

int __thiscall std::__ndk1::random_device::~random_device(random_device *this)

{
  int iVar1;
  
  iVar1 = close(*(int *)this);
  return iVar1;
}

