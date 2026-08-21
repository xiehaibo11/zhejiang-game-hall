
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
           (this + 0x50);
  if (pbVar1 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_1) {
    uVar4 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar4 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(pbVar1,(char *)pbVar2,uVar4);
  }
  AVar3 = this[0x50];
  uVar4 = (ulong)((byte)AVar3 >> 1);
  if (((byte)AVar3 & 1) != 0) {
    uVar4 = *(ulong *)(this + 0x58);
  }
  if (uVar4 != 0) {
    pAVar5 = *(AssetsManagerEx **)(this + 0x60);
                    /* try { // try from 00a63a3c to 00b63a9b has its CatchHandler @ 00a638f4 */
    if (((byte)AVar3 & 1) == 0) {
      pAVar5 = this + 0x51;
    }
    if (pAVar5[uVar4 - 1] != (AssetsManagerEx)0x2f) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(pbVar1,"/",1);
    }
  }
                    /* catch() { ... } // from try @ 00a63954 with catch @ 00a63a74 */
                    /* catch() { ... } // from try @ 00a63948 with catch @ 00a63a78 */
                    /* catch() { ... } // from try @ 00a6395c with catch @ 00a63a80 */
  (**(code **)(**(long **)(this + 0x28) + 0x128))(*(long **)(this + 0x28),pbVar1);
  pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x68);
                    /* try { // try from 00a63a9c to 00b63af3 has its CatchHandler @ 00a63a9c
                       catch() { ... } // from try @ 00a63a9c with catch @ 00a63a9c
                       catch() { ... } // from try @ 00a63c94 with catch @ 00a63a9c */
  uVar4 = (ulong)((byte)this[0x50] >> 1);
  pAVar5 = this + 0x51;
  if (((byte)this[0x50] & 1) != 0) {
    uVar4 = *(ulong *)(this + 0x58);
    pAVar5 = *(AssetsManagerEx **)(this + 0x60);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(pbVar1,(char *)pAVar5,uVar4);
  if (((byte)this[0x50] & 1) == 0) {
    uVar4 = (ulong)((byte)this[0x50] >> 1);
  }
  else {
    uVar4 = *(ulong *)(this + 0x58);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  insert(pbVar1,uVar4 - 1,"_temp",5);
                    /* WARNING: Could not recover jumptable at 0x00a63af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00a63af4 to 00b63afb has its CatchHandler @ 00a63d24 */
  (**(code **)(**(long **)(this + 0x28) + 0x128))(*(long **)(this + 0x28),pbVar1);
  return;
}

