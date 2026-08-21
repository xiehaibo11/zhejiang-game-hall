
/* std::__ndk1::__money_put<wchar_t>::__gather_info(bool, bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, wchar_t&, wchar_t&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >&, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&, int&) */

void std::__ndk1::__money_put<wchar_t>::__gather_info
               (bool param_1,bool param_2,locale *param_3,pattern *param_4,wchar_t *param_5,
               wchar_t *param_6,basic_string *param_7,basic_string *param_8,basic_string *param_9,
               int *param_10)

{
  long lVar1;
  undefined4 uVar2;
  wchar_t wVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 **local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)param_3;
  if (param_1) {
    local_90 = &moneypunct<wchar_t,true>::id;
    uStack_80 = 0;
    pcStack_88 = locale::id::__init;
    if (moneypunct<wchar_t,true>::id != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      __call_once((ulong *)&moneypunct<wchar_t,true>::id,&local_78,FUN_01208130);
    }
    if (((ulong)(*(long *)(lVar6 + 0x18) - *(long *)(lVar6 + 0x10) >> 3) <= (long)DAT_01794268 - 1U)
       || (plVar7 = *(long **)(*(long *)(lVar6 + 0x10) + ((long)DAT_01794268 - 1U) * 8),
          plVar7 == (long *)0x0)) {
LAB_011f1de8:
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    lVar6 = *plVar7;
  }
  else {
    local_90 = &moneypunct<wchar_t,false>::id;
    uStack_80 = 0;
    pcStack_88 = locale::id::__init;
    if (moneypunct<wchar_t,false>::id != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      __call_once((ulong *)&moneypunct<wchar_t,false>::id,&local_78,FUN_01208130);
    }
    if (((ulong)(*(long *)(lVar6 + 0x18) - *(long *)(lVar6 + 0x10) >> 3) <= (long)DAT_01794258 - 1U)
       || (plVar7 = *(long **)(*(long *)(lVar6 + 0x10) + ((long)DAT_01794258 - 1U) * 8),
          plVar7 == (long *)0x0)) goto LAB_011f1de8;
    lVar6 = *plVar7;
  }
  if (param_2) {
    uVar2 = (**(code **)(lVar6 + 0x58))(plVar7);
    *(undefined4 *)param_4 = uVar2;
    pcVar5 = *(code **)(*plVar7 + 0x40);
  }
  else {
    uVar2 = (**(code **)(lVar6 + 0x50))(plVar7);
    *(undefined4 *)param_4 = uVar2;
    pcVar5 = *(code **)(*plVar7 + 0x38);
  }
  (*pcVar5)(&local_90,plVar7);
  if (((byte)*param_9 & 1) == 0) {
    *(undefined4 *)(param_9 + 4) = 0;
    *param_9 = (basic_string)0x0;
  }
  else {
    **(undefined4 **)(param_9 + 0x10) = 0;
    *(undefined8 *)(param_9 + 8) = 0;
    if (((byte)*param_9 & 1) != 0) {
      operator_delete(*(void **)(param_9 + 0x10));
      *(undefined8 *)param_9 = 0;
    }
  }
  *(undefined8 *)(param_9 + 0x10) = uStack_80;
  *(code **)(param_9 + 8) = pcStack_88;
  *(undefined8 **)param_9 = local_90;
  wVar3 = (**(code **)(*plVar7 + 0x18))(plVar7);
  *param_5 = wVar3;
  wVar3 = (**(code **)(*plVar7 + 0x20))(plVar7);
  *param_6 = wVar3;
  (**(code **)(*plVar7 + 0x28))(&local_90,plVar7);
  if (((byte)*param_7 & 1) == 0) {
    *(undefined2 *)param_7 = 0;
  }
  else {
    **(undefined1 **)(param_7 + 0x10) = 0;
    *(undefined8 *)(param_7 + 8) = 0;
    if (((byte)*param_7 & 1) != 0) {
      operator_delete(*(void **)(param_7 + 0x10));
      *(undefined8 *)param_7 = 0;
    }
  }
  *(undefined8 *)(param_7 + 0x10) = uStack_80;
  *(code **)(param_7 + 8) = pcStack_88;
  *(undefined8 **)param_7 = local_90;
  (**(code **)(*plVar7 + 0x30))(&local_90,plVar7);
  if (((byte)*param_8 & 1) == 0) {
    *(undefined4 *)(param_8 + 4) = 0;
    *param_8 = (basic_string)0x0;
  }
  else {
    **(undefined4 **)(param_8 + 0x10) = 0;
    *(undefined8 *)(param_8 + 8) = 0;
    if (((byte)*param_8 & 1) != 0) {
      operator_delete(*(void **)(param_8 + 0x10));
      *(undefined8 *)param_8 = 0;
    }
  }
  *(undefined8 *)(param_8 + 0x10) = uStack_80;
  *(code **)(param_8 + 8) = pcStack_88;
  *(undefined8 **)param_8 = local_90;
  iVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
  *param_10 = iVar4;
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

