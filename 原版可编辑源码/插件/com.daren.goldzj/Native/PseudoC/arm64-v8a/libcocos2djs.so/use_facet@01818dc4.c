
/* std::__ndk1::locale::use_facet(std::__ndk1::locale::id&) const */

void __thiscall std::__ndk1::locale::use_facet(locale *this,id *param_1)

{
  long lVar1;
  long lVar2;
  bad_cast *this_00;
  long lVar3;
  id *local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined1 **local_48;
  undefined1 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)this;
  uStack_50 = 0;
  local_58 = id::__init;
  local_60 = param_1;
  if (*(long *)param_1 != -1) {
    local_48 = &local_40;
    local_40 = (undefined1 *)&local_60;
    __call_once((ulong *)param_1,&local_48,FUN_01828620);
  }
  lVar1 = *(long *)(lVar3 + 0x10);
  if (((long)*(int *)(param_1 + 8) - 1U < (ulong)(*(long *)(lVar3 + 0x18) - lVar1 >> 3)) &&
     (*(long *)(lVar1 + ((long)*(int *)(param_1 + 8) - 1U) * 8) != 0)) {
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  this_00 = (bad_cast *)__cxa_allocate_exception(8);
  bad_cast::bad_cast(this_00);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,&bad_cast::typeinfo,bad_cast::~bad_cast);
}

