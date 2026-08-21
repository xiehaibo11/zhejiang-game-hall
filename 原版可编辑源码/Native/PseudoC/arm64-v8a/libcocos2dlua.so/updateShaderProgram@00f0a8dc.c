
/* cocos2d::Label::updateShaderProgram() */

void __thiscall cocos2d::Label::updateShaderProgram(Label *this)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  Texture2D *pTVar7;
  void *pvVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  void *local_60 [2];
  void *local_50;
  long local_48;
  long local_38;
  
                    /* catch() { ... } // from try @ 00f0a8ac with catch @ 00f0a8f0 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(this + 0x49c);
  if (iVar1 == 3) {
    if (this[0x60c] != (Label)0x0) {
                    /* catch() { ... } // from try @ 00f0a954 with catch @ 00f0a9e0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_60,GLProgram::SHADER_NAME_LABEL_DISTANCEFIELD_GLOW);
      uVar5 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_60);
      (**(code **)(*(long *)this + 0x310))(this,uVar5);
      if (((ulong)local_60[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00f0a944 with catch @ 00f0aa10 */
        operator_delete(local_50);
      }
      lVar6 = Node::getGLProgram((Node *)this);
                    /* catch() { ... } // from try @ 00f0aa5c with catch @ 00f0aa2c */
      uVar4 = glGetUniformLocation(*(undefined4 *)(lVar6 + 0x24),"u_effectColor");
      *(undefined4 *)(this + 0x600) = uVar4;
    }
  }
  else {
                    /* try { // try from 00f0a90c to 0100a943 has its CatchHandler @ 00f0a90c
                       catch() { ... } // from try @ 00f0a90c with catch @ 00f0a90c
                       catch() { ... } // from try @ 00f0a974 with catch @ 00f0a90c */
    if (iVar1 == 1) {
                    /* try { // try from 00f0a954 to 0100a973 has its CatchHandler @ 00f0a9e0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_60,GLProgram::SHADER_NAME_LABEL_OUTLINE);
      uVar5 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_60);
                    /* try { // try from 00f0a974 to 0100aa2b has its CatchHandler @ 00f0a90c */
      (**(code **)(*(long *)this + 0x310))(this,uVar5);
      if (((ulong)local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      lVar6 = Node::getGLProgram((Node *)this);
      uVar4 = glGetUniformLocation(*(undefined4 *)(lVar6 + 0x24),"u_effectColor");
      *(undefined4 *)(this + 0x600) = uVar4;
      lVar6 = Node::getGLProgram((Node *)this);
      uVar4 = glGetUniformLocation(*(undefined4 *)(lVar6 + 0x24),"u_effectType");
      *(undefined4 *)(this + 0x604) = uVar4;
    }
    else {
      if (iVar1 != 0) goto LAB_00f0aa9c;
      if (this[0x60c] == (Label)0x0) {
        if (this[0x60d] != (Label)0x0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)local_60,GLProgram::SHADER_NAME_LABEL_NORMAL);
                    /* try { // try from 00f0aa54 to 0100aa5b has its CatchHandler @ 00f0aa88 */
          uVar5 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_60);
                    /* try { // try from 00f0aa5c to 0100aaa3 has its CatchHandler @ 00f0aa2c */
          (**(code **)(*(long *)this + 0x310))(this,uVar5);
          goto LAB_00f0aa70;
        }
        if (this[0x60f] == (Label)0x0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    (local_78,GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR_NO_MVP);
          if (*(long *)(this + 0x3d0) == 0) {
            pTVar7 = (Texture2D *)0x0;
          }
          else {
            std::__ndk1::
            unordered_map<long,cocos2d::Texture2D*,std::__ndk1::hash<long>,std::__ndk1::equal_to<long>,std::__ndk1::allocator<std::__ndk1::pair<long_const,cocos2d::Texture2D*>>>
            ::unordered_map((unordered_map<long,cocos2d::Texture2D*,std::__ndk1::hash<long>,std::__ndk1::equal_to<long>,std::__ndk1::allocator<std::__ndk1::pair<long_const,cocos2d::Texture2D*>>>
                             *)local_60,(unordered_map *)(*(long *)(this + 0x3d0) + 0x28));
            pvVar3 = local_60[0];
            if (local_48 == 0) {
              pTVar7 = (Texture2D *)0x0;
            }
            else {
              pTVar7 = *(Texture2D **)((long)local_50 + 0x18);
            }
            while (local_50 != (void *)0x0) {
              pvVar8 = *(void **)local_50;
              local_60[0] = pvVar3;
              operator_delete(local_50);
              pvVar3 = local_60[0];
              local_50 = pvVar8;
            }
            local_60[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
          }
          uVar5 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_78,pTVar7);
          (**(code **)(*(long *)this + 0x310))(this,uVar5);
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_78,GLProgram::SHADER_NAME_POSITION_TEXTURE_COLOR);
          if (*(long *)(this + 0x3d0) == 0) {
            pTVar7 = (Texture2D *)0x0;
          }
          else {
            std::__ndk1::
            unordered_map<long,cocos2d::Texture2D*,std::__ndk1::hash<long>,std::__ndk1::equal_to<long>,std::__ndk1::allocator<std::__ndk1::pair<long_const,cocos2d::Texture2D*>>>
            ::unordered_map((unordered_map<long,cocos2d::Texture2D*,std::__ndk1::hash<long>,std::__ndk1::equal_to<long>,std::__ndk1::allocator<std::__ndk1::pair<long_const,cocos2d::Texture2D*>>>
                             *)local_60,(unordered_map *)(*(long *)(this + 0x3d0) + 0x28));
            pvVar3 = local_60[0];
            if (local_48 == 0) {
              pTVar7 = (Texture2D *)0x0;
            }
            else {
              pTVar7 = *(Texture2D **)((long)local_50 + 0x18);
            }
            while (local_50 != (void *)0x0) {
              pvVar8 = *(void **)local_50;
              local_60[0] = pvVar3;
              operator_delete(local_50);
              pvVar3 = local_60[0];
              local_50 = pvVar8;
            }
            local_60[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
          }
          uVar5 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_78,pTVar7);
          (**(code **)(*(long *)this + 0x310))(this,uVar5);
        }
        if (((byte)local_78[0] & 1) == 0) goto LAB_00f0aa80;
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_60,GLProgram::SHADER_NAME_LABEL_DISTANCEFIELD_NORMAL);
        uVar5 = GLProgramState::getOrCreateWithGLProgramName((basic_string *)local_60);
                    /* try { // try from 00f0a944 to 0100a953 has its CatchHandler @ 00f0aa10 */
        (**(code **)(*(long *)this + 0x310))(this,uVar5);
LAB_00f0aa70:
        local_68 = local_50;
        if (((ulong)local_60[0] & 1) == 0) goto LAB_00f0aa80;
      }
      operator_delete(local_68);
    }
  }
LAB_00f0aa80:
  lVar6 = Node::getGLProgram((Node *)this);
                    /* catch() { ... } // from try @ 00f0aa54 with catch @ 00f0aa88 */
  uVar4 = glGetUniformLocation(*(undefined4 *)(lVar6 + 0x24),"u_textColor");
  *(undefined4 *)(this + 0x608) = uVar4;
LAB_00f0aa9c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

