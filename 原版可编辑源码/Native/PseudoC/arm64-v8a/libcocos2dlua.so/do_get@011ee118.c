
/* std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, unsigned int&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&)
   const */

long * __thiscall
std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,uint *param_6,
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_7)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  __shared_count *p_Var4;
  char cVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  __shared_count *local_128;
  char *local_120;
  byte *local_118;
  code *local_110;
  long *local_108;
  undefined8 *local_100;
  code *local_f8;
  undefined8 uStack_f0;
  undefined8 ***local_e8;
  undefined8 **local_e0;
  byte local_d4 [100];
  long local_70 [2];
  
  lVar3 = tpidr_el0;
  local_70[0] = *(long *)(lVar3 + 0x28);
  local_118 = local_d4;
  local_110 = __do_nothing;
  local_108 = param_2;
  ios_base::getloc();
  p_Var4 = local_128;
  local_100 = &ctype<char>::id;
  uStack_f0 = 0;
  local_f8 = locale::id::__init;
  if (ctype<char>::id != -1) {
    local_e0 = &local_100;
    local_e8 = &local_e0;
    __call_once((ulong *)&ctype<char>::id,&local_e8,FUN_01208130);
  }
  lVar2 = *(long *)(p_Var4 + 0x10);
  if (((ulong)(*(long *)(p_Var4 + 0x18) - lVar2 >> 3) <= (long)DAT_01794330 - 1U) ||
     (plVar9 = *(long **)(lVar2 + ((long)DAT_01794330 - 1U) * 8), plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  local_100 = (undefined8 *)((ulong)local_100 & 0xffffffffffffff00);
  uVar8 = __do_get(&local_108,param_3,param_4 & 1,&local_128,*(undefined4 *)(param_5 + 8),param_6,
                   &local_100,plVar9,&local_118,&local_120,local_70);
  if ((uVar8 & 1) != 0) {
    if (((byte)*param_7 & 1) == 0) {
      *(undefined2 *)param_7 = 0;
    }
    else {
      **(undefined1 **)(param_7 + 0x10) = 0;
      *(undefined8 *)(param_7 + 8) = 0;
    }
    if ((char)local_100 != '\0') {
      cVar5 = (**(code **)(*plVar9 + 0x38))(plVar9,0x2d);
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                (param_7,cVar5);
    }
    bVar6 = (**(code **)(*plVar9 + 0x38))(plVar9,0x30);
    for (pbVar1 = local_118; (pbVar1 < local_120 + -1 && (*pbVar1 == bVar6)); pbVar1 = pbVar1 + 1) {
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __append_forward_unsafe<char*>(param_7,(char *)pbVar1,local_120);
  }
  if ((local_108 == (long *)0x0) || (local_108[3] != local_108[4])) {
joined_r0x011ee2d4:
    plVar9 = local_108;
    if (param_3 == (long *)0x0) goto LAB_011ee380;
LAB_011ee2d8:
    plVar9 = local_108;
    if ((param_3[3] == param_3[4]) && (iVar7 = (**(code **)(*param_3 + 0x48))(param_3), iVar7 == -1)
       ) goto LAB_011ee380;
    if (plVar9 == (long *)0x0) goto LAB_011ee30c;
  }
  else {
    iVar7 = (**(code **)(*local_108 + 0x48))(local_108);
    if (iVar7 == -1) {
      local_108 = (long *)0x0;
      goto joined_r0x011ee2d4;
    }
    plVar9 = local_108;
    if (param_3 != (long *)0x0) goto LAB_011ee2d8;
LAB_011ee380:
    if (plVar9 != (long *)0x0) goto LAB_011ee30c;
  }
  *param_6 = *param_6 | 2;
LAB_011ee30c:
  plVar9 = local_108;
  __shared_count::__release_shared(local_128);
  pbVar1 = local_118;
  local_118 = (byte *)0x0;
  if (pbVar1 != (byte *)0x0) {
    (*local_110)();
  }
  if (*(long *)(lVar3 + 0x28) == local_70[0]) {
    return plVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

