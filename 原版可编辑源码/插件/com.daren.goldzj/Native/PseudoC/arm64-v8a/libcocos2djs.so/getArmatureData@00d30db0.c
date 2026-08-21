
/* dragonBones::BaseFactory::getArmatureData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

undefined8 __thiscall
dragonBones::BaseFactory::getArmatureData
          (BaseFactory *this,basic_string *param_1,basic_string *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_a0 [2];
  void *local_90;
  ulong local_88 [2];
  void *local_78;
  ulong local_70 [2];
  void *local_60;
  ulong local_58;
  undefined8 local_50;
  void *pvStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = 0;
  pvStack_48 = (void *)0x0;
  local_50 = 0;
  local_38 = 0;
  uStack_40 = 0;
  local_70[1] = 0;
  local_70[0] = 0;
  local_58 = 0;
  local_60 = (void *)0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_78 = (void *)0x0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_90 = (void *)0x0;
  uVar3 = (**(code **)(*(long *)this + 0x20))(this,local_70,param_2,param_1,local_88,local_a0);
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  uVar1 = local_38;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  if ((local_58 & 1) != 0) {
    operator_delete(pvStack_48);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

