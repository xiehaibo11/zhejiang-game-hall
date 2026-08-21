
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
  long lVar1;
  long lVar2;
  wchar_t *pwVar3;
  __shared_count *p_Var4;
  bool bVar5;
  wchar_t wVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  __shared_count *local_250;
  wchar_t *local_248;
  wchar_t *local_240;
  code *local_238;
  long *local_230;
  undefined8 *local_228;
  code *local_220;
  undefined8 uStack_218;
  undefined8 ***local_210;
  undefined8 **local_208;
  wchar_t local_200 [100];
  long local_70 [2];
  
  lVar2 = tpidr_el0;
  local_70[0] = *(long *)(lVar2 + 0x28);
  local_240 = local_200;
  local_238 = __do_nothing;
  local_230 = param_2;
  ios_base::getloc();
  p_Var4 = local_250;
  local_228 = &ctype<wchar_t>::id;
  uStack_218 = 0;
  local_220 = locale::id::__init;
  if (ctype<wchar_t>::id != -1) {
    local_208 = &local_228;
    local_210 = &local_208;
    __call_once((ulong *)&ctype<wchar_t>::id,&local_210,FUN_01208130);
  }
  lVar1 = *(long *)(p_Var4 + 0x10);
  if (((ulong)(*(long *)(p_Var4 + 0x18) - lVar1 >> 3) <= (long)DAT_01794320 - 1U) ||
     (plVar9 = *(long **)(lVar1 + ((long)DAT_01794320 - 1U) * 8), plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  local_228 = (undefined8 *)((ulong)local_228 & 0xffffffffffffff00);
  uVar8 = __do_get(&local_230,param_3,param_4 & 1,&local_250,*(undefined4 *)(param_5 + 8),param_6,
                   &local_228,plVar9,&local_240,&local_248,local_70);
  if ((uVar8 & 1) != 0) {
    if (((byte)*param_7 & 1) == 0) {
      *(undefined4 *)(param_7 + 4) = 0;
      *param_7 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  )0x0;
    }
    else {
      **(undefined4 **)(param_7 + 0x10) = 0;
      *(undefined8 *)(param_7 + 8) = 0;
    }
    if ((char)local_228 != '\0') {
      wVar6 = (**(code **)(*plVar9 + 0x58))(plVar9,0x2d);
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      push_back(param_7,wVar6);
    }
    wVar6 = (**(code **)(*plVar9 + 0x58))(plVar9,0x30);
    for (pwVar3 = local_240; (pwVar3 < local_248 + -1 && (*pwVar3 == wVar6)); pwVar3 = pwVar3 + 1) {
    }
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    __append_forward_unsafe<wchar_t*>(param_7,pwVar3,local_248);
  }
  if (local_230 == (long *)0x0) {
LAB_011f0140:
    bVar5 = true;
    if (param_3 != (long *)0x0) goto LAB_011f0148;
LAB_011f0134:
    if (!bVar5) goto LAB_011f0188;
  }
  else {
    if ((int *)local_230[3] == (int *)local_230[4]) {
      iVar7 = (**(code **)(*local_230 + 0x48))();
    }
    else {
      iVar7 = *(int *)local_230[3];
    }
    if (iVar7 == -1) {
      local_230 = (long *)0x0;
      goto LAB_011f0140;
    }
    bVar5 = local_230 == (long *)0x0;
    if (param_3 == (long *)0x0) goto LAB_011f0134;
LAB_011f0148:
    if ((int *)param_3[3] == (int *)param_3[4]) {
      iVar7 = (**(code **)(*param_3 + 0x48))(param_3);
    }
    else {
      iVar7 = *(int *)param_3[3];
    }
    if (bVar5 != (iVar7 == -1)) goto LAB_011f0188;
  }
  *param_6 = *param_6 | 2;
LAB_011f0188:
  plVar9 = local_230;
  __shared_count::__release_shared(local_250);
  pwVar3 = local_240;
  local_240 = (wchar_t *)0x0;
  if (pwVar3 != (wchar_t *)0x0) {
    (*local_238)();
  }
  if (*(long *)(lVar2 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar9;
}

