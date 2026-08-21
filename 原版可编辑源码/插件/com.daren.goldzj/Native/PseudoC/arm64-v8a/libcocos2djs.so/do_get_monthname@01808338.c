
/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get_monthname(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get_monthname(time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                 *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  __shared_count *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = param_2;
  ios_base::getloc();
  uVar2 = locale::use_facet((locale *)&local_58,(id *)&ctype<wchar_t>::id);
  __shared_count::__release_shared(local_58);
  lVar3 = (**(code **)(*(long *)(this + 0x10) + 8))(this + 0x10);
  lVar4 = FUN_017fd8d0(&local_50,param_3,lVar3,lVar3 + 0x240,uVar2,param_5,0);
  if (lVar4 - lVar3 < 0x240) {
    lVar3 = (lVar4 - lVar3 >> 3) * -0x5555555555555555;
    *(int *)(param_6 + 0x10) =
         (int)lVar3 +
         ((int)((ulong)(lVar3 / 6 + (lVar3 >> 0x3f)) >> 1) -
         (SUB164(SEXT816(lVar3) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50);
}

