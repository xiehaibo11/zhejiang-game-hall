
/* cocos2d::Terrain::initProperties() */

undefined8 __thiscall cocos2d::Terrain::initProperties(Terrain *this)

{
  long lVar1;
  GLProgramCache *this_00;
  GLProgram *pGVar2;
  undefined8 uVar3;
  undefined8 local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (GLProgramCache *)GLProgramCache::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_50,GLProgram::SHADER_3D_TERRAIN);
  pGVar2 = (GLProgram *)GLProgramCache::getGLProgram(this_00,(basic_string *)local_50);
  if (((byte)local_50[0]._0_1_ & 1) != 0) {
    operator_delete(local_40);
  }
  uVar3 = GLProgramState::create(pGVar2);
  (**(code **)(*(long *)this + 0x310))(this,uVar3);
  RenderState::StateBlock::setBlend(*(StateBlock **)(this + 0x80628),false);
  RenderState::StateBlock::setDepthWrite(*(StateBlock **)(this + 0x80628),true);
  RenderState::StateBlock::setDepthTest(*(StateBlock **)(this + 0x80628),true);
  RenderState::StateBlock::setCullFace(*(StateBlock **)(this + 0x80628),true);
  this[0x438] = (Terrain)0x0;
  this[0x80538] = (Terrain)0x1;
  local_50[0] = 0;
  (**(code **)(*(long *)this + 0x148))(this,local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

