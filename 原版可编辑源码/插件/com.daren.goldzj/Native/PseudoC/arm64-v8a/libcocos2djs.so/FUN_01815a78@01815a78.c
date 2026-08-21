
void FUN_01815a78(long param_1,long param_2)

{
  long lVar1;
  bad_cast *this;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  __shared_count *this_00;
  long *plVar6;
  ulong uVar7;
  undefined8 *local_70;
  code *local_68;
  undefined8 uStack_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = &std::__ndk1::
              money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
              ::id;
  uStack_60 = 0;
  local_68 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::
      money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
      ::id != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once
              ((ulong *)&std::__ndk1::
                         money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                         ::id,&local_58,FUN_01828620);
  }
  uVar4 = (ulong)DAT_01d52d78;
  uVar7 = uVar4 - 1;
  if (((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3) <= uVar7) ||
     (this_00 = *(__shared_count **)(*(long *)(param_2 + 0x10) + uVar7 * 8),
     this_00 == (__shared_count *)0x0)) {
    this = (bad_cast *)__cxa_allocate_exception(8);
    std::bad_cast::bad_cast(this);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&std::bad_cast::typeinfo,std::bad_cast::~bad_cast);
  }
  std::__ndk1::__shared_count::__add_shared(this_00);
  plVar6 = (long *)(param_1 + 0x10);
  lVar2 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar2 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      if (uVar4 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar2 + uVar4 * 8;
      }
    }
    else {
      FUN_018284d0(plVar6,uVar4 - uVar5);
      lVar2 = *plVar6;
    }
  }
  puVar3 = (undefined8 *)(lVar2 + uVar7 * 8);
  if ((__shared_count *)*puVar3 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar3);
    puVar3 = (undefined8 *)(*plVar6 + uVar7 * 8);
  }
  *puVar3 = this_00;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

