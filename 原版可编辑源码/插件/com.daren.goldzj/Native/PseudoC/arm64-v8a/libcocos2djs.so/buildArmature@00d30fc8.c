
/* dragonBones::BaseFactory::buildArmature(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

Armature * __thiscall
dragonBones::BaseFactory::buildArmature
          (BaseFactory *this,basic_string *param_1,basic_string *param_2,basic_string *param_3,
          basic_string *param_4)

{
  long lVar1;
  ulong uVar2;
  Armature *this_00;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  ulong local_68;
  undefined8 local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  pvStack_58 = (void *)0x0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = (void *)0x0;
  uVar2 = (**(code **)(*(long *)this + 0x20))(this,&local_80,param_2,param_1,param_3,param_4);
  this_00 = (Armature *)0x0;
  if ((uVar2 & 1) != 0) {
    this_00 = (Armature *)(**(code **)(*(long *)this + 0x50))(this,&local_80);
    (**(code **)(*(long *)this + 0x28))(this,&local_80,this_00);
    (**(code **)(*(long *)this + 0x30))(this,&local_80,this_00);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = (void *)0x0;
    Armature::invalidUpdate(this_00,(basic_string *)&local_98,true);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    (**(code **)(*(long *)this_00 + 0x20))(0,this_00);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(pvStack_58);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

