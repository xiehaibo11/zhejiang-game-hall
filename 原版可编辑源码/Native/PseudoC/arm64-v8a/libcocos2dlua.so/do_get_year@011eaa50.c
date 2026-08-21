
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
  int iVar3;
  long lVar4;
  __shared_count *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  code *local_68;
  undefined8 uStack_60;
  undefined8 ***local_58;
  undefined8 **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_78 = param_2;
  ios_base::getloc();
  local_70 = &ctype<wchar_t>::id;
  uStack_60 = 0;
  local_68 = locale::id::__init;
  if (ctype<wchar_t>::id != -1) {
    local_50 = &local_70;
    local_58 = &local_50;
    __call_once((ulong *)&ctype<wchar_t>::id,&local_58,FUN_01208130);
  }
  if (((ulong)(*(long *)(local_80 + 0x18) - *(long *)(local_80 + 0x10) >> 3) <=
       (long)DAT_01794320 - 1U) ||
     (lVar4 = *(long *)(*(long *)(local_80 + 0x10) + ((long)DAT_01794320 - 1U) * 8), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  __shared_count::__release_shared(local_80);
  iVar2 = FUN_011eba0c(&local_78,param_3,param_5,lVar4,4);
  if ((*param_5 >> 2 & 1) == 0) {
    if (iVar2 < 0x45) {
      iVar3 = iVar2 + 2000;
    }
    else {
      iVar3 = iVar2 + 0x76c;
      if (99 < iVar2) {
        iVar3 = iVar2;
      }
    }
    *(int *)(param_6 + 0x14) = iVar3 + -0x76c;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_78);
  }
  return;
}

