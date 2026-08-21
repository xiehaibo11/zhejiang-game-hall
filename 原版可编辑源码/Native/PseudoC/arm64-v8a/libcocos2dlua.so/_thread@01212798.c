
/* std::__ndk1::thread::~thread() */

void __thiscall std::__ndk1::thread::~thread(thread *this)

{
  if (*(long *)this == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  terminate();
}

