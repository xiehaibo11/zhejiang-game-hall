
/* std::__ndk1::money_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, unsigned int&,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >&) const */

long * __thiscall
std::__ndk1::
money_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,uint *param_6,
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
      *param_7)

{
  wchar_t *pwVar1;
  long lVar2;
  bool bVar3;
  wchar_t wVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  char local_22c [4];
  __shared_count *local_228;
  wchar_t *local_220;
  wchar_t *local_218;
  code *local_210;
  long *local_208;
  wchar_t local_200 [100];
  undefined1 auStack_70 [16];
  
  lVar2 = tpidr_el0;
  lVar8 = *(long *)(lVar2 + 0x28);
  local_218 = local_200;
  local_210 = __do_nothing;
  local_208 = param_2;
  ios_base::getloc();
  plVar6 = (long *)locale::use_facet((locale *)&local_228,(id *)&ctype<wchar_t>::id);
  local_22c[0] = '\0';
  uVar7 = __do_get(&local_208,param_3,param_4 & 1,&local_228,*(undefined4 *)(param_5 + 8),param_6,
                   local_22c,plVar6,&local_218,&local_220,auStack_70);
  if ((uVar7 & 1) != 0) {
    if (((byte)*param_7 & 1) == 0) {
      *(undefined4 *)(param_7 + 4) = 0;
      *param_7 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  )0x0;
    }
    else {
      **(undefined4 **)(param_7 + 0x10) = 0;
      *(undefined8 *)(param_7 + 8) = 0;
    }
    if (local_22c[0] != '\0') {
      wVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x2d);
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      push_back(param_7,wVar4);
    }
    wVar4 = (**(code **)(*plVar6 + 0x58))(plVar6,0x30);
    for (pwVar1 = local_218; (pwVar1 < local_220 + -1 && (*pwVar1 == wVar4)); pwVar1 = pwVar1 + 1) {
    }
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    __append_forward_unsafe<wchar_t*>(param_7,pwVar1,local_220);
  }
  if (local_208 == (long *)0x0) {
LAB_0180d970:
    bVar3 = true;
    if (param_3 != (long *)0x0) goto LAB_0180d978;
LAB_0180d964:
    if (!bVar3) goto LAB_0180d9b8;
  }
  else {
    if ((int *)local_208[3] == (int *)local_208[4]) {
      iVar5 = (**(code **)(*local_208 + 0x48))();
    }
    else {
      iVar5 = *(int *)local_208[3];
    }
    if (iVar5 == -1) {
      local_208 = (long *)0x0;
      goto LAB_0180d970;
    }
    bVar3 = local_208 == (long *)0x0;
    if (param_3 == (long *)0x0) goto LAB_0180d964;
LAB_0180d978:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar5 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar5 = *(int *)param_3[3];
    }
    if (bVar3 != (iVar5 == -1)) goto LAB_0180d9b8;
  }
  *param_6 = *param_6 | 2;
LAB_0180d9b8:
  plVar6 = local_208;
  __shared_count::__release_shared(local_228);
  pwVar1 = local_218;
  local_218 = (wchar_t *)0x0;
  if (pwVar1 != (wchar_t *)0x0) {
    (*local_210)();
  }
  if (*(long *)(lVar2 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar6;
}

