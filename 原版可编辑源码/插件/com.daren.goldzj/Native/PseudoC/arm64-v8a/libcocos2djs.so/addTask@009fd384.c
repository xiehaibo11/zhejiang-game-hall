
/* universe::Example::addTask(unsigned int) */

void __thiscall universe::Example::addTask(Example *this,uint param_1)

{
  uint *puVar1;
  long lVar2;
  uint local_2c;
  long local_28;
  
                    /* try { // try from 009fd388 to 00afd3b3 has its CatchHandler @ 009fd3f8 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = *(uint **)(this + 0x18);
  local_2c = param_1;
  if (puVar1 == *(uint **)(this + 0x20)) {
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
    __push_back_slow_path<unsigned_int_const&>
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x10),&local_2c)
    ;
  }
  else {
    *puVar1 = param_1;
                    /* try { // try from 009fd3b4 to 00afd413 has its CatchHandler @ 009fd320 */
    *(uint **)(this + 0x18) = puVar1 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

