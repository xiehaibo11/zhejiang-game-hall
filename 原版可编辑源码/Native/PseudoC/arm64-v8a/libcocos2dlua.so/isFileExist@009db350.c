
/* universe::TanGaoXiong::isFileExist(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

ulong __thiscall universe::TanGaoXiong::isFileExist(TanGaoXiong *this,basic_string *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = (**(code **)(*(long *)this + 0x40))();
  uVar2 = (**(code **)(*(long *)this + 0x48))(this,param_1);
  if (((uVar1 & 1) == 0) && ((uVar2 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x009db3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(long *)this + 0x28))(this,param_1);
    return uVar3;
  }
  return (ulong)((uVar2 | uVar1 ^ 1) & 1);
}

