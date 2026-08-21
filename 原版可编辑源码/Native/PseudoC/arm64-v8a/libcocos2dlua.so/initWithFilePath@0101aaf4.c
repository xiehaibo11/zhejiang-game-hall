
/* cocos2d::NavMesh::initWithFilePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

undefined8 __thiscall
cocos2d::NavMesh::initWithFilePath(NavMesh *this,basic_string *param_1,basic_string *param_2)

{
  basic_string *pbVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x160) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar2 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar2 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x160),(char *)pbVar1,uVar2);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x178) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar2 = *(ulong *)(param_2 + 8);
    pbVar1 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar1 = param_2 + 1;
      uVar2 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x178),(char *)pbVar1,uVar2);
  }
  uVar2 = loadGeomFile(this);
  if ((uVar2 & 1) != 0) {
    uVar3 = loadNavMeshFile(this);
    return uVar3;
  }
                    /* try { // try from 0101ab74 to 0111abbb has its CatchHandler @ 0101ab74
                       catch() { ... } // from try @ 0101ab74 with catch @ 0101ab74
                       catch() { ... } // from try @ 0101abc4 with catch @ 0101ab74 */
  return 0;
}

