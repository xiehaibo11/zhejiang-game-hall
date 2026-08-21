
/* cocos2d::LabelAtlas::initWithString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Texture2D*, int,
   int, int) */

bool __thiscall
cocos2d::LabelAtlas::initWithString
          (LabelAtlas *this,basic_string *param_1,Texture2D *param_2,int param_3,int param_4,
          int param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  
                    /* try { // try from 00f10a74 to 01010a7b has its CatchHandler @ 00f10b44 */
  uVar2 = (uint)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 8);
  }
  uVar3 = AtlasNode::initWithTexture((AtlasNode *)this,param_2,param_3,param_4,uVar2);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
                    /* try { // try from 00f10aa8 to 01010aaf has its CatchHandler @ 00f10b28 */
    *(int *)(this + 0x408) = param_5;
                    /* try { // try from 00f10ab0 to 01010b67 has its CatchHandler @ 00f109ec */
    (**(code **)(*(long *)this + 0x558))(this,param_1);
  }
  return bVar1;
}

