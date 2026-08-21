
/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get_weekday(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get_weekday(time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
               *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              long param_6)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lVar3;
  long lVar4;
  __shared_count *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  code *local_78;
  undefined8 uStack_70;
  undefined8 **local_68;
  undefined8 **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_88 = param_2;
  ios_base::getloc();
  local_80 = &ctype<wchar_t>::id;
  uStack_70 = 0;
  local_78 = locale::id::__init;
  if (ctype<wchar_t>::id != -1) {
    local_60 = &local_80;
    local_68 = &local_60;
    __call_once((ulong *)&ctype<wchar_t>::id,&local_68,FUN_01208130);
  }
  if (((ulong)(*(long *)(local_90 + 0x18) - *(long *)(local_90 + 0x10) >> 3) <=
       (long)DAT_01794320 - 1U) ||
     (lVar4 = *(long *)(*(long *)(local_90 + 0x10) + ((long)DAT_01794320 - 1U) * 8), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00cc7c00();
  }
  __shared_count::__release_shared(local_90);
  lVar3 = (*(code *)**(undefined8 **)(this + 0x10))(this + 0x10);
  lVar4 = FUN_011dfbf8(&local_88,param_3,lVar3,lVar3 + 0x150,lVar4,param_5,0);
  if (lVar4 - lVar3 < 0x150) {
    lVar4 = (lVar4 - lVar3 >> 3) * -0x5555555555555555;
    auVar1 = SEXT816(lVar4) * SEXT816(0x4924924924924925);
    *(int *)(param_6 + 0x18) =
         (int)lVar4 + ((int)(auVar1._8_8_ >> 1) - (auVar1._12_4_ >> 0x1f)) * -7;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_88);
}

