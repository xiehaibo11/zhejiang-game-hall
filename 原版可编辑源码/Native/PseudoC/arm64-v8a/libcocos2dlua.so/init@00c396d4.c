
/* cocostudio::Bone::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall cocostudio::Bone::init(Bone *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  FrameData *this_00;
  Tween *this_01;
  DisplayManager *this_02;
  BaseData *this_03;
  BoneData *this_04;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x1a8) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x1a8),(char *)pbVar2,uVar1);
  }
  if (*(long **)(this + 0x330) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x330) + 8))();
  }
  *(undefined8 *)(this + 0x330) = 0;
  this_00 = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (this_00 != (FrameData *)0x0) {
    FrameData::FrameData(this_00);
  }
  *(FrameData **)(this + 0x330) = this_00;
  if (*(long **)(this + 0x328) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x328) + 8))();
  }
  *(undefined8 *)(this + 0x328) = 0;
  this_01 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
  if (this_01 != (Tween *)0x0) {
    Tween::Tween(this_01);
  }
  *(Tween **)(this + 0x328) = this_01;
  (**(code **)(*(long *)this_01 + 0xa0))(this_01,this);
  if (*(long **)(this + 0x310) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x310) + 8))();
  }
  *(undefined8 *)(this + 0x310) = 0;
  this_02 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this_02 != (DisplayManager *)0x0) {
    DisplayManager::DisplayManager(this_02);
  }
  *(DisplayManager **)(this + 0x310) = this_02;
  DisplayManager::init(this_02,this);
  if (*(long **)(this + 0x388) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x388) + 8))();
  }
  *(undefined8 *)(this + 0x388) = 0;
  this_03 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_03 != (BaseData *)0x0) {
    BaseData::BaseData(this_03);
  }
  *(BaseData **)(this + 0x388) = this_03;
  if (*(long **)(this + 0x2f8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2f8) + 8))();
  }
  *(undefined8 *)(this + 0x2f8) = 0;
  this_04 = operator_new(0xb8,(nothrow_t *)&std::nothrow);
  if (this_04 != (BoneData *)0x0) {
    BoneData::BoneData(this_04);
  }
  *(BoneData **)(this + 0x2f8) = this_04;
  return 1;
}

