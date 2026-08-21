
/* cocos2d::ParticleBatchNode::initWithTexture(cocos2d::Texture2D*, int) */

undefined8 __thiscall
cocos2d::ParticleBatchNode::initWithTexture(ParticleBatchNode *this,Texture2D *param_1,int param_2)

{
  long lVar1;
  TextureAtlas *this_00;
  undefined8 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* try { // try from 00f2ce64 to 0102ce6b has its CatchHandler @ 00f2d040 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this_00 != (TextureAtlas *)0x0) {
    TextureAtlas::TextureAtlas(this_00);
  }
  *(TextureAtlas **)(this + 0x300) = this_00;
  TextureAtlas::initWithTexture(this_00,param_1,(long)param_2);
  std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::reserve
            ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0x178),
             (long)param_2);
  *(undefined8 *)(this + 0x308) = 0x30300000001;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR);
                    /* try { // try from 00f2cef8 to 0102cf07 has its CatchHandler @ 00f2d044 */
  uVar2 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_60,param_1);
                    /* try { // try from 00f2cf0c to 0102cf13 has its CatchHandler @ 00f2d03c */
  (**(code **)(*(long *)this + 0x310))(this,uVar2);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

