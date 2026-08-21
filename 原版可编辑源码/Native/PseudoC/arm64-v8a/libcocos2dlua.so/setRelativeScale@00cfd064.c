
/* cocosbuilder::setRelativeScale(cocos2d::Node*, float, float, cocosbuilder::CCBReader::ScaleType,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void cocosbuilder::setRelativeScale(ulong param_1_00,ulong param_2,long *param_1,int param_4)

{
  float fVar1;
  
  if (param_4 == 1) {
    fVar1 = (float)CCBReader::getResolutionScale();
    param_1_00 = (ulong)(uint)(fVar1 * (float)param_1_00);
    param_2 = (ulong)(uint)(fVar1 * (float)param_2);
  }
  (**(code **)(*param_1 + 0x50))(param_1_00,param_1);
                    /* WARNING: Could not recover jumptable at 0x00cfd0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_2,param_1);
  return;
}

