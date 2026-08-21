
/* spine::SkeletonTwoColorBatch::SkeletonTwoColorBatch() */

void __thiscall spine::SkeletonTwoColorBatch::SkeletonTwoColorBatch(SkeletonTwoColorBatch *this)

{
  Vec3 *pVVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  TwoColorTrianglesCommand *this_00;
  undefined4 *puVar5;
  long lVar6;
  GLProgram *pGVar7;
  Ref *this_01;
  Vec3 *pVVar8;
  void *pvVar9;
  code *pcVar10;
  EventDispatcher *this_02;
  int iVar11;
  Vec3 *this_03;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  TwoColorTrianglesCommand *local_90;
  SkeletonTwoColorBatch *pSStack_88;
  void *local_80;
  TwoColorTrianglesCommand **local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(undefined ***)this = &PTR__SkeletonTwoColorBatch_016d5d50;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  iVar11 = 10000;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  do {
    this_00 = operator_new(0xd0);
    TwoColorTrianglesCommand::TwoColorTrianglesCommand(this_00);
    puVar2 = *(undefined8 **)(this + 0x10);
    local_90 = this_00;
    if (puVar2 < *(undefined8 **)(this + 0x18)) {
      *puVar2 = this_00;
      *(undefined8 **)(this + 0x10) = puVar2 + 1;
    }
    else {
      std::__ndk1::
      vector<spine::TwoColorTrianglesCommand*,std::__ndk1::allocator<spine::TwoColorTrianglesCommand*>>
      ::__push_back_slow_path<spine::TwoColorTrianglesCommand*>
                ((vector<spine::TwoColorTrianglesCommand*,std::__ndk1::allocator<spine::TwoColorTrianglesCommand*>>
                  *)(this + 8),&local_90);
    }
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  puVar5 = (undefined4 *)spUnsignedShortArray_create(8);
  *(undefined4 **)(this + 0x48) = puVar5;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *puVar5 = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  lVar6 = cocos2d::Director::getInstance();
  this_02 = *(EventDispatcher **)(lVar6 + 0xb0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"director_after_draw");
  local_90 = (TwoColorTrianglesCommand *)&PTR_FUN_016d5e18;
  pSStack_88 = this;
  local_70 = &local_90;
  cocos2d::EventDispatcher::addCustomEventListener
            (this_02,(basic_string *)local_a8,(function *)&local_90);
  if (&local_90 == local_70) {
    pcVar10 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (TwoColorTrianglesCommand **)0x0) goto LAB_00d538e0;
    pcVar10 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar10)();
LAB_00d538e0:
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  pGVar7 = (GLProgram *)
           cocos2d::GLProgram::createWithByteArrays
                     (TWO_COLOR_TINT_VERTEX_SHADER,TWO_COLOR_TINT_FRAGMENT_SHADER);
  *(GLProgram **)(this + 0x50) = pGVar7;
  this_01 = (Ref *)cocos2d::GLProgramState::getOrCreateWithGLProgram(pGVar7);
  *(Ref **)(this + 0x58) = this_01;
  cocos2d::Ref::retain(this_01);
  glGenBuffers(1,this + 0x60);
  pVVar8 = operator_new__(0x1b5800);
  this_03 = pVVar8;
  do {
    cocos2d::Vec3::Vec3(this_03);
    cocos2d::Color4B::Color4B((Color4B *)(this_03 + 0xc));
    cocos2d::Color4B::Color4B((Color4B *)(this_03 + 0x10));
    pVVar1 = this_03 + 0x1c;
    *(undefined4 *)(this_03 + 0x14) = 0;
    *(undefined4 *)(this_03 + 0x18) = 0;
    this_03 = pVVar1;
  } while (pVVar1 != pVVar8 + 0x1b5800);
  *(Vec3 **)(this + 0x68) = pVVar8;
  glGenBuffers(1,this + 0x74);
  pvVar9 = operator_new__(0x1f400);
  pGVar7 = *(GLProgram **)(this + 0x50);
  *(void **)(this + 0x80) = pvVar9;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,"a_position");
  uVar4 = cocos2d::GLProgram::getAttribLocation(pGVar7,(basic_string *)&local_90);
  *(undefined4 *)(this + 0x88) = uVar4;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  pGVar7 = *(GLProgram **)(this + 0x50);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,"a_color");
  uVar4 = cocos2d::GLProgram::getAttribLocation(pGVar7,(basic_string *)&local_90);
  *(undefined4 *)(this + 0x8c) = uVar4;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  pGVar7 = *(GLProgram **)(this + 0x50);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,"a_color2");
  uVar4 = cocos2d::GLProgram::getAttribLocation(pGVar7,(basic_string *)&local_90);
  *(undefined4 *)(this + 0x90) = uVar4;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  pGVar7 = *(GLProgram **)(this + 0x50);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,"a_texCoords");
  uVar4 = cocos2d::GLProgram::getAttribLocation(pGVar7,(basic_string *)&local_90);
  *(undefined4 *)(this + 0x94) = uVar4;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00d53ad4 with catch @ 00d53a90 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

