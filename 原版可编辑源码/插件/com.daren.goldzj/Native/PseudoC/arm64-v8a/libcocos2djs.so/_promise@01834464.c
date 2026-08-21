
/* std::__ndk1::promise<void>::~promise() */

void __thiscall std::__ndk1::promise<void>::~promise(promise<void> *this)

{
  long lVar1;
  int iVar2;
  long lVar3;
  __assoc_sub_state *p_Var4;
  undefined **local_90 [2];
  undefined8 local_80;
  undefined8 *puStack_78;
  exception_ptr aeStack_70 [8];
  ulong local_68 [2];
  void *local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)this;
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 0x70) & 1) == 0) {
      local_68[0] = 0;
      lVar3 = *(long *)(lVar3 + 0x10);
      exception_ptr::~exception_ptr((exception_ptr *)local_68);
      if ((lVar3 == 0) && (p_Var4 = *(__assoc_sub_state **)this, 0 < *(long *)(p_Var4 + 8))) {
        if (((DAT_01d53e50 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01d53e50), iVar2 != 0)) {
          error_category::error_category((error_category *)&DAT_01d53e48);
          DAT_01d53e48 = &PTR__error_category_01cdea70;
          __cxa_atexit(error_category::~error_category,&DAT_01d53e48,&PTR_LOOP_01d1b000);
          __cxa_guard_release(&DAT_01d53e50);
        }
        puStack_48 = &DAT_01d53e48;
        local_50 = 4;
        error_code::message((error_code *)&local_50);
        logic_error::logic_error((logic_error *)local_90,(basic_string *)local_68);
        if ((local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
        puStack_78 = puStack_48;
        local_80 = local_50;
        local_90[0] = &PTR__future_error_01cde9e8;
        FUN_0183461c(aeStack_70,local_90);
        __assoc_sub_state::set_exception(p_Var4,aeStack_70);
        exception_ptr::~exception_ptr(aeStack_70);
        invalid_argument::~invalid_argument((invalid_argument *)local_90);
      }
    }
    __shared_count::__release_shared(*(__shared_count **)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

