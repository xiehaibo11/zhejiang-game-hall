
/* cocos2d::extension::AssetsManagerEx::setStoragePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::extension::AssetsManagerEx::setStoragePath(AssetsManagerEx *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string *pbVar2;
  AssetsManagerEx AVar3;
  ulong uVar4;
  AssetsManagerEx *pAVar5;
  
  pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x70);
  if (pbVar1 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_1) {
                    /* try { // try from 00e01f50 to 00f01f67 has its CatchHandler @ 00e020fc */
    uVar4 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar4 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(pbVar1,(char *)pbVar2,uVar4);
  }
  AVar3 = this[0x70];
  uVar4 = (ulong)((byte)AVar3 >> 1);
  if (((byte)AVar3 & 1) != 0) {
    uVar4 = *(ulong *)(this + 0x78);
  }
  if (uVar4 != 0) {
    pAVar5 = *(AssetsManagerEx **)(this + 0x80);
    if (((byte)AVar3 & 1) == 0) {
      pAVar5 = this + 0x71;
    }
                    /* try { // try from 00e01f9c to 00f01faf has its CatchHandler @ 00e020dc */
    if (pAVar5[uVar4 - 1] != (AssetsManagerEx)0x2f) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(pbVar1,"/",1);
    }
  }
  (**(code **)(**(long **)(this + 0x48) + 0x158))(*(long **)(this + 0x48),pbVar1);
  uVar4 = *(ulong *)(this + 0x78);
  pAVar5 = *(AssetsManagerEx **)(this + 0x80);
                    /* try { // try from 00e01fd4 to 00f0201f has its CatchHandler @ 00e02138 */
  pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x88);
  if (((byte)this[0x70] & 1) == 0) {
    pAVar5 = this + 0x71;
    uVar4 = (ulong)((byte)this[0x70] >> 1);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(pbVar1,(char *)pAVar5,uVar4);
  if (((byte)this[0x70] & 1) == 0) {
    uVar4 = (ulong)((byte)this[0x70] >> 1);
  }
  else {
    uVar4 = *(ulong *)(this + 0x78);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  insert(pbVar1,uVar4 - 1,"_temp",5);
                    /* try { // try from 00e02024 to 00f02033 has its CatchHandler @ 00e021a0 */
                    /* WARNING: Could not recover jumptable at 0x00e02038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x48) + 0x158))(*(long **)(this + 0x48),pbVar1);
  return;
}

