
/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get_weekday(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, tm*) const */

void __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get_weekday(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
               *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              long param_6)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  __shared_count *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = param_2;
  ios_base::getloc();
  uVar3 = locale::use_facet((locale *)&local_58,(id *)&ctype<char>::id);
  __shared_count::__release_shared(local_58);
  lVar4 = (*(code *)**(undefined8 **)(this + 0x10))(this + 0x10);
  lVar5 = FUN_017f9fb8(&local_50,param_3,lVar4,lVar4 + 0x150,uVar3,param_5,0);
  if (lVar5 - lVar4 < 0x150) {
    lVar4 = (lVar5 - lVar4 >> 3) * -0x5555555555555555;
    auVar1 = SEXT816(lVar4) * SEXT816(0x4924924924924925);
    *(int *)(param_6 + 0x18) =
         (int)lVar4 + ((int)(auVar1._8_8_ >> 1) - (auVar1._12_4_ >> 0x1f)) * -7;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_50);
}

