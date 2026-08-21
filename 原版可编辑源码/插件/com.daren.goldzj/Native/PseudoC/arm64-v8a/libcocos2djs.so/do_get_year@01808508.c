
/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get_year(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get_year(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           byte *param_5,long param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  __shared_count *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = param_2;
  ios_base::getloc();
  uVar3 = locale::use_facet((locale *)&local_58,(id *)&ctype<wchar_t>::id);
  __shared_count::__release_shared(local_58);
  iVar2 = FUN_018093f4(&local_50,param_3,param_5,uVar3,4);
  if ((*param_5 >> 2 & 1) == 0) {
    if (iVar2 < 0x45) {
      iVar4 = iVar2 + 2000;
    }
    else {
      iVar4 = iVar2 + 0x76c;
      if (99 < iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_6 + 0x14) = iVar4 + -0x76c;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_50);
  }
  return;
}

