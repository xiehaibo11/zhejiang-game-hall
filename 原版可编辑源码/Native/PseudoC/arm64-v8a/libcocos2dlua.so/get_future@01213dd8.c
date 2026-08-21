
/* std::__ndk1::promise<void>::get_future() */

void std::__ndk1::promise<void>::get_future(void)

{
  undefined8 *in_x0;
  undefined8 *in_x8;
  __shared_count *this;
  
  this = (__shared_count *)*in_x0;
  if (this == (__shared_count *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0121349c(3);
  }
  *in_x8 = this;
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] >> 1 & 1) == 0) {
    __shared_count::__add_shared(this);
    *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
    mutex::unlock((mutex *)(this + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0121349c(1);
}

