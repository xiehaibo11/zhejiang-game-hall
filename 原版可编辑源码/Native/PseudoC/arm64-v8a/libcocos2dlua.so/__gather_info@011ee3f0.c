
/* std::__ndk1::__money_get<char>::__gather_info(bool, std::__ndk1::locale const&,
   std::__ndk1::money_base::pattern&, char&, char&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, int&) */

void std::__ndk1::__money_get<char>::__gather_info
               (bool param_1,locale *param_2,pattern *param_3,char *param_4,char *param_5,
               basic_string *param_6,basic_string *param_7,basic_string *param_8,
               basic_string *param_9,int *param_10)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *local_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 **local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)param_2;
  if (param_1) {
    local_90 = &moneypunct<char,true>::id;
    uStack_80 = 0;
    pcStack_88 = locale::id::__init;
    if (moneypunct<char,true>::id != -1) {
      local_78 = &local_70;
      local_70 = (undefined1 *)&local_90;
      __call_once((ulong *)&moneypunct<char,true>::id,&local_78,FUN_01208130);
    }
    if ((ulong)(*(long *)(lVar5 + 0x18) - *(long *)(lVar5 + 0x10) >> 3) <= (long)DAT_01794248 - 1U)
    goto LAB_011ee6f8;
    plVar6 = *(long **)(*(long *)(lVar5 + 0x10) + ((long)DAT_01794248 - 1U) * 8);
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
    if ((ulong)(*(long *)(lVar5 + 0x18) - *(long *)(lVar5 + 0x10) >> 3) <= (long)DAT_01794238 - 1U)
    goto LAB_011ee6f8;
    plVar6 = *(long **)(*(long *)(lVar5 + 0x10) + ((long)DAT_01794238 - 1U) * 8);
  }
  if (plVar6 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
    *(undefined4 *)param_3 = uVar3;
    (**(code **)(*plVar6 + 0x40))(&local_90,plVar6);
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
    (**(code **)(*plVar6 + 0x38))(&local_90,plVar6);
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
    cVar2 = (**(code **)(*plVar6 + 0x18))(plVar6);
    *param_4 = cVar2;
    cVar2 = (**(code **)(*plVar6 + 0x20))(plVar6);
    *param_5 = cVar2;
    (**(code **)(*plVar6 + 0x28))(&local_90,plVar6);
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
    *(undefined8 *)(param_6 + 0x10) = uStack_80;
    *(code **)(param_6 + 8) = pcStack_88;
    *(undefined8 **)param_6 = local_90;
    (**(code **)(*plVar6 + 0x30))(&local_90,plVar6);
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
    iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
    *param_10 = iVar4;
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_011ee6f8:
                    /* WARNING: Subroutine does not return */
  FUN_00cc7c00();
}

