
/* cocostudio::Armature::init(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocostudio::Bone*) */

void __thiscall cocostudio::Armature::init(Armature *this,basic_string *param_1,Bone *param_2)

{
  *(Bone **)(this + 0x310) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c37658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x530))();
  return;
}

