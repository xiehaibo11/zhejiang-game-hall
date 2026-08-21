
/* se::Class::Class() */

void __thiscall se::Class::Class(Class *this)

{
  long lVar1;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x48] = (Class)0x1;
  local_30 = this;
  if (DAT_01d37188 < DAT_01d37190) {
    *DAT_01d37188 = this;
    DAT_01d37188 = DAT_01d37188 + 1;
  }
  else {
    std::__ndk1::vector<se::Class*,std::__ndk1::allocator<se::Class*>>::
    __push_back_slow_path<se::Class*>
              ((vector<se::Class*,std::__ndk1::allocator<se::Class*>> *)&DAT_01d37180,&local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

