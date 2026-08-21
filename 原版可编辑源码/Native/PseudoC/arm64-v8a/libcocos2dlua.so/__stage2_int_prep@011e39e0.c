
/* std::__ndk1::__num_get<wchar_t>::__stage2_int_prep(std::__ndk1::ios_base&, wchar_t*, wchar_t&) */

void __thiscall
std::__ndk1::__num_get<wchar_t>::__stage2_int_prep
          (__num_get<wchar_t> *this,ios_base *param_1,wchar_t *param_2,wchar_t *param_3)

{
  long lVar1;
  wchar_t wVar2;
  long *plVar3;
  __shared_count *local_88;
  undefined8 *local_80;
  code *local_78;
  undefined8 uStack_70;
  undefined8 ***local_68;
  undefined8 **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ios_base::getloc();
  local_80 = &ctype<wchar_t>::id;
  uStack_70 = 0;
  local_78 = locale::id::__init;
  if (ctype<wchar_t>::id != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
    __call_once((ulong *)&ctype<wchar_t>::id,&local_68,FUN_01208130);
  }
  if (((ulong)(*(long *)(local_88 + 0x18) - *(long *)(local_88 + 0x10) >> 3) <=
       (long)DAT_01794320 - 1U) ||
     (plVar3 = *(long **)(*(long *)(local_88 + 0x10) + ((long)DAT_01794320 - 1U) * 8),
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  (**(code **)(*plVar3 + 0x60))(plVar3,"0123456789abcdefABCDEFxX+-pPiInN","pPiInN",param_1);
  uStack_70 = 0;
  local_78 = locale::id::__init;
  local_80 = &numpunct<wchar_t>::id;
  if (numpunct<wchar_t>::id != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
    __call_once((ulong *)&numpunct<wchar_t>::id,&local_68,FUN_01208130);
  }
  if (((long)DAT_01794390 - 1U <
       (ulong)(*(long *)(local_88 + 0x18) - *(long *)(local_88 + 0x10) >> 3)) &&
     (plVar3 = *(long **)(*(long *)(local_88 + 0x10) + ((long)DAT_01794390 - 1U) * 8),
     plVar3 != (long *)0x0)) {
    wVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
    *param_2 = wVar2;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    __shared_count::__release_shared(local_88);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cc7c00();
}

