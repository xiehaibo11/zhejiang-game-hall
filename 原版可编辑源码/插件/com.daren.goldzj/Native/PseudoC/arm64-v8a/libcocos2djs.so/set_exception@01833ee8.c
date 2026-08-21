
/* std::__ndk1::__assoc_sub_state::set_exception(std::exception_ptr) */

void __thiscall
std::__ndk1::__assoc_sub_state::set_exception(__assoc_sub_state *this,exception_ptr *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  mutex::lock((mutex *)(this + 0x18));
  if (((byte)this[0x70] & 1) == 0) {
    local_50 = 0;
    lVar2 = *(long *)(this + 0x10);
    exception_ptr::~exception_ptr((exception_ptr *)&local_50);
    if (lVar2 == 0) {
      exception_ptr::operator=((exception_ptr *)(this + 0x10),param_2);
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 4;
      condition_variable::notify_all((condition_variable *)(this + 0x40));
      mutex::unlock((mutex *)(this + 0x18));
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01833d70(2);
}

