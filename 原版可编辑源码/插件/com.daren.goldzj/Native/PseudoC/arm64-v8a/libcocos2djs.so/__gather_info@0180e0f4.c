
/* std::__ndk1::__money_put<char>::__gather_info(bool, bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, char&, char&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, int&) */

void std::__ndk1::__money_put<char>::__gather_info
               (bool param_1,bool param_2,locale *param_3,pattern *param_4,char *param_5,
               char *param_6,basic_string *param_7,basic_string *param_8,basic_string *param_9,
               int *param_10)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  id *piVar6;
  code *pcVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1) {
    piVar6 = (id *)&moneypunct<char,true>::id;
  }
  else {
    piVar6 = (id *)&moneypunct<char,false>::id;
  }
  plVar5 = (long *)locale::use_facet(param_3,piVar6);
  if (param_2) {
    uVar3 = (**(code **)(*plVar5 + 0x58))(plVar5);
    *(undefined4 *)param_4 = uVar3;
    pcVar7 = *(code **)(*plVar5 + 0x40);
  }
  else {
    uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
    *(undefined4 *)param_4 = uVar3;
    pcVar7 = *(code **)(*plVar5 + 0x38);
  }
  (*pcVar7)(&local_80,plVar5);
  if (((byte)*param_9 & 1) == 0) {
    *(undefined2 *)param_9 = 0;
  }
  else {
    **(undefined1 **)(param_9 + 0x10) = 0;
    *(undefined8 *)(param_9 + 8) = 0;
    if (((byte)*param_9 & 1) != 0) {
      operator_delete(*(void **)(param_9 + 0x10));
      *(undefined8 *)param_9 = 0;
    }
  }
  *(undefined8 *)(param_9 + 0x10) = local_70;
  *(undefined8 *)(param_9 + 8) = uStack_78;
  *(undefined8 *)param_9 = local_80;
  cVar2 = (**(code **)(*plVar5 + 0x18))(plVar5);
  *param_5 = cVar2;
  cVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
  *param_6 = cVar2;
  (**(code **)(*plVar5 + 0x28))(&local_80,plVar5);
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
  *(undefined8 *)(param_7 + 0x10) = local_70;
  *(undefined8 *)(param_7 + 8) = uStack_78;
  *(undefined8 *)param_7 = local_80;
  (**(code **)(*plVar5 + 0x30))(&local_80,plVar5);
  if (((byte)*param_8 & 1) == 0) {
    *(undefined2 *)param_8 = 0;
  }
  else {
    **(undefined1 **)(param_8 + 0x10) = 0;
    *(undefined8 *)(param_8 + 8) = 0;
    if (((byte)*param_8 & 1) != 0) {
      operator_delete(*(void **)(param_8 + 0x10));
      *(undefined8 *)param_8 = 0;
    }
  }
  *(undefined8 *)(param_8 + 0x10) = local_70;
  *(undefined8 *)(param_8 + 8) = uStack_78;
  *(undefined8 *)param_8 = local_80;
  iVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
  *param_10 = iVar4;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

