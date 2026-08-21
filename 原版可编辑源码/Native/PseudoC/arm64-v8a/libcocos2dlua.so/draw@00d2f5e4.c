
/* cocos2d::Mesh::draw(cocos2d::Renderer*, float, cocos2d::Mat4 const&, unsigned int, unsigned int,
   cocos2d::Vec4 const&, bool) */

void __thiscall
cocos2d::Mesh::draw(Mesh *this,Renderer *param_1,float param_2,Mat4 *param_3,uint param_4,
                   uint param_5,Vec4 *param_6,bool param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  Mesh MVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  VertexBuffer *this_00;
  StateBlock *pSVar10;
  long lVar11;
  GLProgramState *this_01;
  Vec4 *pVVar12;
  Material *pMVar13;
  undefined8 *puVar14;
  Vec4 *pVVar15;
  Pass *this_02;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (this[0x48] != (Mesh)0x0) {
    pMVar13 = *(Material **)(this + 0x148);
    MVar5 = (Mesh)(this[0x49] != (Mesh)0x0 || *(float *)(param_6 + 0xc) < 1.0);
    uVar1 = param_4 | 8;
    fVar6 = 0.0;
    if (this[0x49] == (Mesh)0x0 && *(float *)(param_6 + 0xc) >= 1.0) {
      uVar1 = param_4;
      fVar6 = param_2;
    }
    this_00 = (VertexBuffer *)MeshIndexData::getVertexBuffer(*(MeshIndexData **)(this + 0x128));
    uVar7 = VertexBuffer::getVBO(this_00,0);
    uVar8 = IndexBuffer::getVBO(*(IndexBuffer **)(*(long *)(this + 0x128) + 0x28),0);
    uVar3 = *(uint *)(*(long *)(this + 0x128) + 0x68);
    iVar9 = IndexBuffer::getIndexNumber(*(IndexBuffer **)(*(long *)(this + 0x128) + 0x28),0);
    MeshCommand::init((MeshCommand *)(this + 0x68),fVar6,pMVar13,uVar7,uVar8,uVar3,0x1403,
                      (long)iVar9,param_3,uVar1);
    pSVar10 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x148));
    RenderState::StateBlock::setDepthWrite(pSVar10,(bool)(param_7 | ((byte)MVar5 ^ 0xff) & 1));
    this[0x79] = MVar5;
    this[0x78] = MVar5;
    this[0x7a] = (Mesh)((byte)this[0x4a] ^ 1);
    pSVar10 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x148));
    RenderState::StateBlock::setBlend(pSVar10,(bool)MVar5 || this[0x4a] != (Mesh)0x0);
    lVar11 = Director::getInstance();
    puVar14 = *(undefined8 **)(*(long *)(*(long *)(this + 0x148) + 0x90) + 0x78);
    puVar2 = *(undefined8 **)(*(long *)(*(long *)(this + 0x148) + 0x90) + 0x80);
    if (puVar14 != puVar2) {
      pVVar15 = *(Vec4 **)(lVar11 + 0x158);
      do {
        this_02 = (Pass *)*puVar14;
        this_01 = (GLProgramState *)Pass::getGLProgramState(this_02);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_90,"u_color");
        GLProgramState::setUniformVec4(this_01,(basic_string *)local_90,param_6);
        if (((byte)local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
        if (*(long *)(this + 0x40) != 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_90,"u_matrixPalette");
          iVar9 = MeshSkin::getMatrixPaletteSize(*(MeshSkin **)(this + 0x40));
          pVVar12 = (Vec4 *)MeshSkin::getMatrixPalette(*(MeshSkin **)(this + 0x40));
          GLProgramState::setUniformVec4v(this_01,(basic_string *)local_90,(long)iVar9,pVVar12);
          if (((byte)local_90[0] & 1) != 0) {
            operator_delete(local_80);
          }
        }
        if ((pVVar15 != (Vec4 *)0x0) && (*(long *)(pVVar15 + 0x338) != *(long *)(pVVar15 + 0x330)))
        {
          setLightUniforms((Pass *)this,(Scene *)this_02,pVVar15,(uint)param_6);
        }
        puVar14 = puVar14 + 1;
      } while (puVar2 != puVar14);
    }
    Renderer::addCommand(param_1,(RenderCommand *)(this + 0x68));
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

