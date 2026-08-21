
/* cocos2d::PUBillboardChain::render(cocos2d::Renderer*, cocos2d::Mat4 const&,
   cocos2d::ParticleSystem3D*) */

void __thiscall
cocos2d::PUBillboardChain::render
          (PUBillboardChain *this,Renderer *param_1,Mat4 *param_2,ParticleSystem3D *param_3)

{
  MeshCommand *this_00;
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  BlendFunc *pBVar6;
  GLProgramState *pGVar7;
  StateBlock *pSVar8;
  Vec4 aVStack_d0 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  void *local_b0;
  Mat4 aMStack_a8 [64];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)Camera::getVisitingCamera();
  (**(code **)(*plVar5 + 0x430))(aMStack_a8);
  if (*(long *)(this + 0x58) != *(long *)(this + 0x60)) {
    (**(code **)(*(long *)this + 0xd0))(this,aMStack_a8);
    (**(code **)(*(long *)this + 0xd8))(this);
    if ((*(long *)(this + 0xa0) != *(long *)(this + 0xa8)) &&
       (*(long *)(this + 0xb8) != *(long *)(this + 0xc0))) {
      uVar2 = getTextureName(this);
      pSVar8 = *(StateBlock **)(this + 0x78);
      pBVar6 = (BlendFunc *)(**(code **)(*(long *)param_3 + 0x538))(param_3);
      RenderState::StateBlock::setBlendFunc(pSVar8,pBVar6);
      pGVar7 = *(GLProgramState **)(this + 0x88);
      this_00 = *(MeshCommand **)(this + 0x70);
      pSVar8 = *(StateBlock **)(this + 0x78);
      uVar3 = VertexBuffer::getVBO(*(VertexBuffer **)(this + 0x98),0);
      uVar4 = IndexBuffer::getVBO(*(IndexBuffer **)(this + 0x90),0);
      MeshCommand::init(this_00,0.0,uVar2,pGVar7,pSVar8,uVar3,uVar4,4,0x1403,
                        *(long *)(this + 0xc0) - *(long *)(this + 0xb8) >> 1,param_2,8);
      *(undefined2 *)(*(long *)(this + 0x70) + 0x10) = 0x101;
      pGVar7 = *(GLProgramState **)(this + 0x88);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c0,"u_color");
      Vec4::Vec4(aVStack_d0,1.0,1.0,1.0,1.0);
      GLProgramState::setUniformVec4(pGVar7,(basic_string *)local_c0,aVStack_d0);
      Vec4::~Vec4(aVStack_d0);
      if (((byte)local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      Renderer::addCommand(param_1,*(RenderCommand **)(this + 0x70));
    }
  }
  Mat4::~Mat4(aMStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

