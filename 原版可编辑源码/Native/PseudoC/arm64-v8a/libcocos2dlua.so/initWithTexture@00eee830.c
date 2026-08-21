
/* cocos2d::AtlasNode::initWithTexture(cocos2d::Texture2D*, int, int, int) */

void __thiscall
cocos2d::AtlasNode::initWithTexture
          (AtlasNode *this,Texture2D *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  undefined2 uVar3;
  AtlasNode AVar4;
  byte bVar5;
  TextureAtlas *this_00;
  Texture2D *pTVar6;
  ulong uVar7;
  undefined8 uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(int *)(this + 0x308) = param_2;
  *(int *)(this + 0x30c) = param_3;
  AVar4 = DAT_01792432;
  uVar3 = Color3B::WHITE;
  this[800] = (AtlasNode)0x1;
  this[0x312] = AVar4;
  *(undefined2 *)(this + 0x310) = uVar3;
  *(undefined8 *)(this + 0x324) = 0x30300000001;
  this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this_00 == (TextureAtlas *)0x0) {
    *(undefined8 *)(this + 0x318) = 0;
    uVar8 = 0;
  }
  else {
    TextureAtlas::TextureAtlas(this_00);
    *(TextureAtlas **)(this + 0x318) = this_00;
    TextureAtlas::initWithTexture(this_00,param_1,(long)param_4);
    pTVar6 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x318));
                    /* try { // try from 00eee8dc to 00fee91b has its CatchHandler @ 00eee8dc
                       catch() { ... } // from try @ 00eee8dc with catch @ 00eee8dc
                       catch() { ... } // from try @ 00eee978 with catch @ 00eee8dc */
    uVar7 = Texture2D::hasPremultipliedAlpha(pTVar6);
    bVar1 = (uVar7 & 1) == 0;
    if (bVar1) {
      uVar8 = 0x30300000302;
    }
    else {
      uVar8 = 0x30300000001;
    }
    *(undefined8 *)(this + 0x324) = uVar8;
                    /* try { // try from 00eee91c to 00fee927 has its CatchHandler @ 00eeea24 */
    (**(code **)(*(long *)this + 0x4e0))(this,!bVar1);
    pTVar6 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x318));
    bVar5 = Texture2D::hasPremultipliedAlpha(pTVar6);
    this[800] = (AtlasNode)(bVar5 & 1);
    calculateMaxItems(this);
    *(long *)(this + 0x330) = (long)param_4;
                    /* try { // try from 00eee94c to 00fee95b has its CatchHandler @ 00eeea28 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP);
    uVar8 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_70,param_1);
                    /* try { // try from 00eee970 to 00fee977 has its CatchHandler @ 00eeea20 */
    (**(code **)(*(long *)this + 0x310))(this,uVar8);
                    /* try { // try from 00eee978 to 00feea43 has its CatchHandler @ 00eee8dc */
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    uVar8 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

