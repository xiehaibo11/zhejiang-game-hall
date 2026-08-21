
/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, bool&) const */

undefined8 __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get(num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
      undefined8 param_2,undefined8 param_3,long param_4,undefined4 *param_5,undefined1 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  __shared_count **pp_Var4;
  undefined8 local_90;
  __shared_count *local_88 [2];
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_90 = param_2;
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    local_88[0] = (__shared_count *)0xffffffffffffffff;
    uVar2 = (**(code **)(*(long *)this + 0x20))(this,param_2,param_3,param_4,param_5,local_88);
    local_90 = uVar2;
    if (local_88[0] == (__shared_count *)0x1) {
      *param_6 = 1;
    }
    else if (local_88[0] == (__shared_count *)0x0) {
      *param_6 = 0;
    }
    else {
      *param_6 = 1;
      *param_5 = 4;
    }
  }
  else {
    ios_base::getloc();
    uVar2 = locale::use_facet((locale *)local_88,(id *)&ctype<char>::id);
    __shared_count::__release_shared(local_88[0]);
    ios_base::getloc();
    plVar3 = (long *)locale::use_facet((locale *)local_88,(id *)&numpunct<char>::id);
    __shared_count::__release_shared(local_88[0]);
    (**(code **)(*plVar3 + 0x30))(local_88,plVar3);
    (**(code **)(*plVar3 + 0x38))(local_70,plVar3);
    pp_Var4 = (__shared_count **)FUN_017f9fb8(&local_90,param_3,local_88,&local_58,uVar2,param_5,1);
    uVar2 = local_90;
    *param_6 = pp_Var4 == local_88;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (((ulong)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

