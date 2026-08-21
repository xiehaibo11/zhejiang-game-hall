
/* std::__ndk1::__assoc_sub_state::wait() */

void __thiscall std::__ndk1::__assoc_sub_state::wait(__assoc_sub_state *this)

{
  mutex *this_00;
  uint uVar1;
  long lVar2;
  mutex *local_48;
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = (mutex *)(this + 0x18);
  local_40 = '\x01';
  local_48 = this_00;
  mutex::lock(this_00);
  uVar1 = *(uint *)(this + 0x70);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      do {
        condition_variable::wait((condition_variable *)(this + 0x40),(unique_lock *)&local_48);
      } while (((byte)this[0x70] >> 2 & 1) == 0);
    }
    else {
      *(uint *)(this + 0x70) = uVar1 & 0xfffffff7;
      mutex::unlock(this_00);
      local_40 = '\0';
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  if (local_40 != '\0') {
    mutex::unlock(local_48);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

