
/* cocostudio::ArmatureAnimation::playWithNames(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&, int, bool) */

void __thiscall
cocostudio::ArmatureAnimation::playWithNames
          (ArmatureAnimation *this,vector *param_1,int param_2,bool param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  
  pbVar1 = *(byte **)(this + 0x118);
  pbVar2 = *(byte **)(this + 0x120);
  if (pbVar2 != pbVar1) {
    bVar3 = pbVar2[-0x18];
    pbVar4 = pbVar2 + -0x18;
    while( true ) {
      if ((bVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
      }
      if (pbVar1 == pbVar4) break;
      bVar3 = pbVar4[-0x18];
      pbVar2 = pbVar4;
      pbVar4 = pbVar4 + -0x18;
    }
  }
  *(byte **)(this + 0x120) = pbVar1;
  this[0x131] = (ArmatureAnimation)param_3;
  *(int *)(this + 0x138) = param_2;
  this[0x130] = (ArmatureAnimation)0x1;
  *(undefined4 *)(this + 0x134) = 0;
  if ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
       *)(this + 0x118) !=
      (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
       *)param_1) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x118),*(basic_string **)param_1,*(basic_string **)(param_1 + 8));
  }
  updateMovementList(this);
  return;
}

