
/* std::__ndk1::__money_get<wchar_t>::__gather_info(bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, wchar_t&, wchar_t&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >&, std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >&, int&) */

void std::__ndk1::__money_get<wchar_t>::__gather_info
               (bool param_1,locale *param_2,pattern *param_3,wchar_t *param_4,wchar_t *param_5,
               basic_string *param_6,basic_string *param_7,basic_string *param_8,
               basic_string *param_9,int *param_10)

{
  long lVar1;
  undefined4 uVar2;
  wchar_t wVar3;
  int iVar4;
  long *plVar5;
  id *piVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1) {
    piVar6 = (id *)&moneypunct<wchar_t,true>::id;
  }
  else {
    piVar6 = (id *)&moneypunct<wchar_t,false>::id;
  }
  plVar5 = (long *)locale::use_facet(param_2,piVar6);
  uVar2 = (**(code **)(*plVar5 + 0x58))();
  *(undefined4 *)param_3 = uVar2;
  (**(code **)(*plVar5 + 0x40))(&local_80,plVar5);
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
  *(undefined8 *)(param_9 + 0x10) = local_70;
  *(undefined8 *)(param_9 + 8) = uStack_78;
  *(undefined8 *)param_9 = local_80;
  (**(code **)(*plVar5 + 0x38))(&local_80,plVar5);
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
  *(undefined8 *)(param_8 + 0x10) = local_70;
  *(undefined8 *)(param_8 + 8) = uStack_78;
  *(undefined8 *)param_8 = local_80;
  wVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
  *param_4 = wVar3;
  wVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
  *param_5 = wVar3;
  (**(code **)(*plVar5 + 0x28))(&local_80,plVar5);
  if (((byte)*param_6 & 1) == 0) {
    *(undefined2 *)param_6 = 0;
  }
  else {
    **(undefined1 **)(param_6 + 0x10) = 0;
    *(undefined8 *)(param_6 + 8) = 0;
    if (((byte)*param_6 & 1) != 0) {
      operator_delete(*(void **)(param_6 + 0x10));
      *(undefined8 *)param_6 = 0;
    }
  }
  *(undefined8 *)(param_6 + 0x10) = local_70;
  *(undefined8 *)(param_6 + 8) = uStack_78;
  *(undefined8 *)param_6 = local_80;
  (**(code **)(*plVar5 + 0x30))(&local_80,plVar5);
  if (((byte)*param_7 & 1) == 0) {
    *(undefined4 *)(param_7 + 4) = 0;
    *param_7 = (basic_string)0x0;
  }
  else {
    **(undefined4 **)(param_7 + 0x10) = 0;
    *(undefined8 *)(param_7 + 8) = 0;
    if (((byte)*param_7 & 1) != 0) {
      operator_delete(*(void **)(param_7 + 0x10));
      *(undefined8 *)param_7 = 0;
    }
  }
  *(undefined8 *)(param_7 + 0x10) = local_70;
  *(undefined8 *)(param_7 + 8) = uStack_78;
  *(undefined8 *)param_7 = local_80;
  iVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
  *param_10 = iVar4;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

