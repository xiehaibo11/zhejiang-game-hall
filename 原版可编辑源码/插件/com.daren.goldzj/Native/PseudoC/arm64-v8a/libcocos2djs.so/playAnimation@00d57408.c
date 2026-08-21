
/* dragonBones::CCArmatureCacheDisplay::playAnimation(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */

void __thiscall
dragonBones::CCArmatureCacheDisplay::playAnimation
          (CCArmatureCacheDisplay *this,basic_string *param_1,int param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  basic_string *pbVar2;
  undefined8 uVar3;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x30);
  *(int *)(this + 0x28) = param_2;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
  uVar3 = ArmatureCache::buildAnimationData
                    (*(ArmatureCache **)(this + 0xd8),(basic_string *)this_00);
  *(undefined8 *)(this + 0x50) = uVar3;
  this[0x2c] = (CCArmatureCacheDisplay)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  return;
}

