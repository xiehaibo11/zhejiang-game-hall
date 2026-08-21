
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
  char cVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  char local_104 [4];
  __shared_count *local_100;
  char *local_f8;
  byte *local_f0;
  code *local_e8;
  long *local_e0;
  byte local_d4 [100];
  undefined1 auStack_70 [16];
  
  lVar2 = tpidr_el0;
  lVar8 = *(long *)(lVar2 + 0x28);
  local_f0 = local_d4;
  local_e8 = __do_nothing;
  local_e0 = param_2;
  ios_base::getloc();
  plVar6 = (long *)locale::use_facet((locale *)&local_100,(id *)&ctype<char>::id);
  local_104[0] = '\0';
  uVar7 = __do_get(&local_e0,param_3,param_4 & 1,&local_100,*(undefined4 *)(param_5 + 8),param_6,
                   local_104,plVar6,&local_f0,&local_f8,auStack_70);
  if ((uVar7 & 1) != 0) {
    if (((byte)*param_7 & 1) == 0) {
      *(undefined2 *)param_7 = 0;
    }
    else {
      **(undefined1 **)(param_7 + 0x10) = 0;
      *(undefined8 *)(param_7 + 8) = 0;
    }
    if (local_104[0] != '\0') {
      cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,0x2d);
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                (param_7,cVar3);
    }
    bVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,0x30);
    for (pbVar1 = local_f0; (pbVar1 < local_f8 + -1 && (*pbVar1 == bVar4)); pbVar1 = pbVar1 + 1) {
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __append_forward_unsafe<char*>(param_7,(char *)pbVar1,local_f8);
  }
  if ((local_e0 == (long *)0x0) || (local_e0[3] != local_e0[4])) {
joined_r0x0180bc08:
    plVar6 = local_e0;
    if (param_3 == (long *)0x0) goto LAB_0180bcb4;
LAB_0180bc0c:
    plVar6 = local_e0;
    if ((param_3[3] == param_3[4]) && (iVar5 = (**(code **)(*param_3 + 0x48))(param_3), iVar5 == -1)
       ) goto LAB_0180bcb4;
    if (plVar6 == (long *)0x0) goto LAB_0180bc40;
  }
  else {
    iVar5 = (**(code **)(*local_e0 + 0x48))(local_e0);
    if (iVar5 == -1) {
      local_e0 = (long *)0x0;
      goto joined_r0x0180bc08;
    }
    plVar6 = local_e0;
    if (param_3 != (long *)0x0) goto LAB_0180bc0c;
LAB_0180bcb4:
    if (plVar6 != (long *)0x0) goto LAB_0180bc40;
  }
  *param_6 = *param_6 | 2;
LAB_0180bc40:
  plVar6 = local_e0;
  __shared_count::__release_shared(local_100);
  pbVar1 = local_f0;
  local_f0 = (byte *)0x0;
  if (pbVar1 != (byte *)0x0) {
    (*local_e8)();
  }
  if (*(long *)(lVar2 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar6;
}

