
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
    local_90 = &moneypunct<char,true>::id;
    uStack_80 = 0;
    pcStack_88 = locale::id::__init;
    if (moneypunct<char,true>::id != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      __call_once((ulong *)&moneypunct<char,true>::id,&local_78,FUN_01208130);
    }
    if (((ulong)(*(long *)(lVar6 + 0x18) - *(long *)(lVar6 + 0x10) >> 3) <= (long)DAT_01794248 - 1U)
       || (plVar7 = *(long **)(*(long *)(lVar6 + 0x10) + ((long)DAT_01794248 - 1U) * 8),
          plVar7 == (long *)0x0)) {
LAB_011f0d80:
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    lVar6 = *plVar7;
  }
  else {
    local_90 = &moneypunct<char,false>::id;
    uStack_80 = 0;
    pcStack_88 = locale::id::__init;
    if (moneypunct<char,false>::id != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      __call_once((ulong *)&moneypunct<char,false>::id,&local_78,FUN_01208130);
    }
    if (((ulong)(*(long *)(lVar6 + 0x18) - *(long *)(lVar6 + 0x10) >> 3) <= (long)DAT_01794238 - 1U)
       || (plVar7 = *(long **)(*(long *)(lVar6 + 0x10) + ((long)DAT_01794238 - 1U) * 8),
          plVar7 == (long *)0x0)) goto LAB_011f0d80;
    lVar6 = *plVar7;
  }
  if (param_2) {
    uVar3 = (**(code **)(lVar6 + 0x58))(plVar7);
    *(undefined4 *)param_4 = uVar3;
    pcVar5 = *(code **)(*plVar7 + 0x40);
  }
  else {
    uVar3 = (**(code **)(lVar6 + 0x50))(plVar7);
    *(undefined4 *)param_4 = uVar3;
    pcVar5 = *(code **)(*plVar7 + 0x38);
  }
  (*pcVar5)(&local_90,plVar7);
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
  *(undefined8 *)(param_9 + 0x10) = uStack_80;
  *(code **)(param_9 + 8) = pcStack_88;
  *(undefined8 **)param_9 = local_90;
  cVar2 = (**(code **)(*plVar7 + 0x18))(plVar7);
  *param_5 = cVar2;
  cVar2 = (**(code **)(*plVar7 + 0x20))(plVar7);
  *param_6 = cVar2;
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

