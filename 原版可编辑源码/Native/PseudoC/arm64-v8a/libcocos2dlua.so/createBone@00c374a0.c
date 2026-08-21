
/* cocostudio::Armature::createBone(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

long * __thiscall cocostudio::Armature::createBone(Armature *this,basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  DisplayManager *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)(**(code **)(*(long *)this + 0x548))();
  if (plVar3 == (long *)0x0) {
    lVar4 = ArmatureData::getBoneData(*(ArmatureData **)(this + 0x300),param_1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_60,(basic_string *)(lVar4 + 0x70));
    uVar1 = (ulong)((byte)local_60[0] >> 1);
    if (((byte)local_60[0] & 1) != 0) {
      uVar1 = local_58;
    }
    if (uVar1 == 0) {
      plVar3 = (long *)Bone::create(param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_78,"");
      (**(code **)(*(long *)this + 0x540))(this,plVar3,local_78);
      if (((byte)local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
    }
    else {
      createBone(this,(basic_string *)local_60);
      plVar3 = (long *)Bone::create(param_1);
      (**(code **)(*(long *)this + 0x540))(this,plVar3,local_60);
    }
    (**(code **)(*plVar3 + 0x558))(plVar3,lVar4);
    this_00 = (DisplayManager *)(**(code **)(*plVar3 + 0x588))(plVar3);
    DisplayManager::changeDisplayWithIndex(this_00,-1,false);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

