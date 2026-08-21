
/* cocos2d::renderer::BaseRenderer::draw(cocos2d::renderer::BaseRenderer::StageItem const&) */

void __thiscall cocos2d::renderer::BaseRenderer::draw(BaseRenderer *this,StageItem *param_1)

{
  BaseRenderer *pBVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  Program *pPVar13;
  Parameter *pPVar14;
  long lVar15;
  InputAssembler *this_00;
  DeviceGraphics *pDVar16;
  long *plVar17;
  BaseRenderer *local_78;
  ulong local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar15 = *(long *)param_1;
  DeviceGraphics::setUniformMat4(*(ulong *)(this + 0x10),cc_matWorld);
  Mat4::set(*(Mat4 **)(this + 0x70),(Mat4 *)(lVar15 + 8));
  Mat4::inverse(*(Mat4 **)(this + 0x70));
  Mat4::transpose(*(Mat4 **)(this + 0x70));
  DeviceGraphics::setUniformMat4(*(ulong *)(this + 0x10),cc_matWorldIT);
  plVar17 = *(long **)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar17 != plVar2) {
    this_00 = *(InputAssembler **)(param_1 + 8);
    pBVar1 = this + 0x78;
    do {
      DeviceGraphics::setVertexBuffer
                (*(DeviceGraphics **)(this + 0x10),0,*(VertexBuffer **)this_00,0);
      if (*(IndexBuffer **)(this_00 + 8) != (IndexBuffer *)0x0) {
        DeviceGraphics::setIndexBuffer
                  (*(DeviceGraphics **)(this + 0x10),*(IndexBuffer **)(this_00 + 8));
      }
      DeviceGraphics::setPrimitiveType
                (*(DeviceGraphics **)(this + 0x10),*(undefined2 *)(this_00 + 0x10));
      DAT_01d38198 = __tmp_defines__;
      local_70 = *(ulong *)(this + 0x90);
      Pass::extractDefines((Pass *)*plVar17,&local_70,(vector *)&__tmp_defines__);
      local_78 = pBVar1;
      if (DAT_01d38198 < DAT_01d381a0) {
        *DAT_01d38198 = (long)pBVar1;
        DAT_01d38198 = DAT_01d38198 + 1;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>const*,std::__ndk1::allocator<std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>const*>>
        ::
        __push_back_slow_path<std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>const*>
                  ((vector<std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>const*,std::__ndk1::allocator<std::__ndk1::map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>const*>>
                    *)&__tmp_defines__,(map **)&local_78);
      }
      pPVar13 = (Program *)
                ProgramLib::switchProgram
                          (*(ProgramLib **)(this + 0x18),*(ulong *)(*plVar17 + 0x28),local_70,
                           (vector *)&__tmp_defines__);
      *(Program **)(this + 0x20) = pPVar13;
      DeviceGraphics::setProgram(*(DeviceGraphics **)(this + 0x10),pPVar13);
      lVar3 = *(long *)(*(long *)(this + 0x20) + 0x38);
      for (lVar15 = *(long *)(*(long *)(this + 0x20) + 0x30); lVar15 != lVar3;
          lVar15 = lVar15 + 0x38) {
        pPVar14 = (Parameter *)Pass::getProperty((Pass *)*plVar17,*(ulong *)(lVar15 + 0x18));
        if (pPVar14 != (Parameter *)0x0) {
          setProperty(this,pPVar14);
        }
      }
      pDVar16 = *(DeviceGraphics **)(this + 0x10);
      uVar6 = Pass::getState((Pass *)*plVar17,0);
      DeviceGraphics::setCullMode(pDVar16,uVar6);
      iVar7 = Pass::getState((Pass *)*plVar17,1);
      if (iVar7 != 0) {
        DeviceGraphics::enableBlend(*(DeviceGraphics **)(this + 0x10));
        pDVar16 = *(DeviceGraphics **)(this + 0x10);
        uVar6 = Pass::getState((Pass *)*plVar17,3);
        uVar8 = Pass::getState((Pass *)*plVar17,4);
        uVar9 = Pass::getState((Pass *)*plVar17,6);
        uVar10 = Pass::getState((Pass *)*plVar17,7);
        DeviceGraphics::setBlendFuncSeparate(pDVar16,uVar6,uVar8,uVar9,uVar10);
        pDVar16 = *(DeviceGraphics **)(this + 0x10);
        uVar6 = Pass::getState((Pass *)*plVar17,2);
        uVar8 = Pass::getState((Pass *)*plVar17,5);
        DeviceGraphics::setBlendEquationSeparate(pDVar16,uVar6,uVar8);
        pDVar16 = *(DeviceGraphics **)(this + 0x10);
                    /* try { // try from 009bc524 to 00abc59b has its CatchHandler @ 009bc0bc */
        uVar11 = Pass::getState((Pass *)*plVar17,8);
                    /* catch() { ... } // from try @ 009bc140 with catch @ 009bc52c */
                    /* catch() { ... } // from try @ 009bc134 with catch @ 009bc530 */
                    /* catch() { ... } // from try @ 009bc114 with catch @ 009bc534 */
        DeviceGraphics::setBlendColor(pDVar16,uVar11);
      }
      iVar7 = Pass::getState((Pass *)*plVar17,9);
                    /* catch() { ... } // from try @ 009bc14c with catch @ 009bc544 */
      if (iVar7 != 0) {
        DeviceGraphics::enableDepthTest(*(DeviceGraphics **)(this + 0x10));
        pDVar16 = *(DeviceGraphics **)(this + 0x10);
        uVar6 = Pass::getState((Pass *)*plVar17,0xb);
        DeviceGraphics::setDepthFunc(pDVar16,uVar6);
      }
      iVar7 = Pass::getState((Pass *)*plVar17,10);
      if (iVar7 != 0) {
        DeviceGraphics::enableDepthWrite(*(DeviceGraphics **)(this + 0x10));
      }
      iVar7 = Pass::getState((Pass *)*plVar17,0xc);
      if (iVar7 != 0) {
        DeviceGraphics::enableStencilTest(*(DeviceGraphics **)(this + 0x10));
                    /* try { // try from 009bc59c to 00abc5ef has its CatchHandler @ 009bc59c
                       catch() { ... } // from try @ 009bc59c with catch @ 009bc59c
                       catch() { ... } // from try @ 009bc88c with catch @ 009bc59c */
        pDVar16 = *(DeviceGraphics **)(this + 0x10);
        uVar6 = Pass::getState((Pass *)*plVar17,0xd);
        uVar8 = Pass::getState((Pass *)*plVar17,0xe);
        uVar5 = Pass::getState((Pass *)*plVar17,0xf);
        DeviceGraphics::setStencilFuncFront(pDVar16,uVar6,uVar8,uVar5);
        pDVar16 = *(DeviceGraphics **)(this + 0x10);
                    /* try { // try from 009bc5f0 to 00abc607 has its CatchHandler @ 009bc89c */
        uVar6 = Pass::getState((Pass *)*plVar17,0x10);
        uVar8 = Pass::getState((Pass *)*plVar17,0x11);
                    /* try { // try from 009bc610 to 00abc61b has its CatchHandler @ 009bc898 */
                    /* try { // try from 009bc61c to 00abc627 has its CatchHandler @ 009bc894 */
        uVar9 = Pass::getState((Pass *)*plVar17,0x12);
                    /* try { // try from 009bc628 to 00abc88b has its CatchHandler @ 009bc8ac */
        uVar5 = Pass::getState((Pass *)*plVar17,0x13);
        DeviceGraphics::setStencilOpFront(pDVar16,uVar6,uVar8,uVar9,uVar5);
        pDVar16 = *(DeviceGraphics **)(this + 0x10);
        uVar6 = Pass::getState((Pass *)*plVar17,0x14);
        uVar8 = Pass::getState((Pass *)*plVar17,0x15);
        uVar5 = Pass::getState((Pass *)*plVar17,0x16);
        DeviceGraphics::setStencilFuncBack(pDVar16,uVar6,uVar8,uVar5);
        pDVar16 = *(DeviceGraphics **)(this + 0x10);
        uVar6 = Pass::getState((Pass *)*plVar17,0x17);
        uVar8 = Pass::getState((Pass *)*plVar17,0x18);
        uVar9 = Pass::getState((Pass *)*plVar17,0x19);
        uVar5 = Pass::getState((Pass *)*plVar17,0x1a);
        DeviceGraphics::setStencilOpBack(pDVar16,uVar6,uVar8,uVar9,uVar5);
      }
      pDVar16 = *(DeviceGraphics **)(this + 0x10);
      iVar7 = *(int *)(this_00 + 0x14);
      iVar12 = InputAssembler::getPrimitiveCount(this_00);
      DeviceGraphics::draw(pDVar16,(long)iVar7,iVar12);
      plVar17 = plVar17 + 1;
      *(undefined4 *)(this + 0xc) = 0;
    } while (plVar17 != plVar2);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

