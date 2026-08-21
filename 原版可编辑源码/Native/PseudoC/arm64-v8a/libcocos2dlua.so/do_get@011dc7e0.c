
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
  undefined8 **ppuVar3;
  long lVar4;
  long *plVar5;
  __shared_count *local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  undefined8 **local_90;
  undefined8 *local_88;
  code *local_80;
  void *pvStack_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_a0 = param_2;
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    local_88 = (undefined8 *)0xffffffffffffffff;
    uVar2 = (**(code **)(*(long *)this + 0x20))(this,param_2,param_3,param_4,param_5,&local_88);
    local_a0 = uVar2;
    if (local_88 == (undefined8 *)0x1) {
      *param_6 = 1;
    }
    else if (local_88 == (undefined8 *)0x0) {
      *param_6 = 0;
    }
    else {
      *param_6 = 1;
      *param_5 = 4;
    }
  }
  else {
    ios_base::getloc();
    local_88 = &ctype<char>::id;
    pvStack_78 = (void *)0x0;
    local_80 = locale::id::__init;
    if (ctype<char>::id != -1) {
      local_90 = &local_88;
      local_98 = &local_90;
      __call_once((ulong *)&ctype<char>::id,&local_98,FUN_01208130);
    }
    if (((ulong)(*(long *)(local_a8 + 0x18) - *(long *)(local_a8 + 0x10) >> 3) <=
         (long)DAT_01794330 - 1U) ||
       (lVar4 = *(long *)(*(long *)(local_a8 + 0x10) + ((long)DAT_01794330 - 1U) * 8), lVar4 == 0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    __shared_count::__release_shared(local_a8);
    ios_base::getloc();
    pvStack_78 = (void *)0x0;
    local_80 = locale::id::__init;
    local_88 = &numpunct<char>::id;
    if (numpunct<char>::id != -1) {
      local_90 = &local_88;
      local_98 = &local_90;
      __call_once((ulong *)&numpunct<char>::id,&local_98,FUN_01208130);
    }
    if (((ulong)(*(long *)(local_a8 + 0x18) - *(long *)(local_a8 + 0x10) >> 3) <=
         (long)DAT_01794380 - 1U) ||
       (plVar5 = *(long **)(*(long *)(local_a8 + 0x10) + ((long)DAT_01794380 - 1U) * 8),
       plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00cc7c00();
    }
    __shared_count::__release_shared(local_a8);
    (**(code **)(*plVar5 + 0x30))(&local_88,plVar5);
    (**(code **)(*plVar5 + 0x38))(local_70,plVar5);
    ppuVar3 = (undefined8 **)FUN_011dcaa8(&local_a0,param_3,&local_88,&local_58,lVar4,param_5,1);
    uVar2 = local_a0;
    *param_6 = ppuVar3 == &local_88;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (((ulong)local_88 & 1) != 0) {
      operator_delete(pvStack_78);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

