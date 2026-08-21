
/* std::__ndk1::ios_base::clear(unsigned int) */

void __thiscall std::__ndk1::ios_base::clear(ios_base *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  system_error *psVar3;
  
  uVar1 = *(long *)(this + 0x28) == 0 | param_1;
  *(uint *)(this + 0x20) = uVar1;
  if ((*(uint *)(this + 0x24) & uVar1) == 0) {
    return;
  }
  psVar3 = (system_error *)__cxa_allocate_exception(0x20);
  if (((DAT_01d524c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01d524c8), iVar2 != 0)) {
    error_category::error_category((error_category *)&DAT_01d524c0);
    DAT_01d524c0 = &PTR__error_category_01cdb720;
    __cxa_atexit(error_category::~error_category,&DAT_01d524c0,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d524c8);
  }
  system_error::system_error(psVar3,1,&DAT_01d524c0,"ios_base::clear");
  *(undefined ***)psVar3 = &PTR__failure_01cdb578;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(psVar3,&failure::typeinfo,failure::~failure);
}

