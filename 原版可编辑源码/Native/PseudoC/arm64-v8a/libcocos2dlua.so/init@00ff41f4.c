
/* cocos2d::VertexAttribBinding::init(cocos2d::MeshIndexData*, cocos2d::GLProgramState*) */

void __thiscall
cocos2d::VertexAttribBinding::init
          (VertexAttribBinding *this,MeshIndexData *param_1,GLProgramState *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  Configuration *this_00;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  void *pvVar17;
  long lVar18;
  long lVar19;
  int local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 00ff4220 to 010f4253 has its CatchHandler @ 00ff43a8 */
  if (DAT_01792a98 == 0) {
    glGetIntegerv(0x8869,&local_6c);
    DAT_01792a98 = local_6c;
    if (local_6c == 0) {
      uVar11 = 0;
      goto LAB_00ff4440;
    }
  }
                    /* try { // try from 00ff4254 to 010f43c3 has its CatchHandler @ 00ff41d0 */
  *(MeshIndexData **)(this + 0x28) = param_1;
  Ref::retain((Ref *)param_1);
  *(GLProgramState **)(this + 0x30) = param_2;
  Ref::retain((Ref *)param_2);
  lVar19 = *(long *)(param_1 + 0x30);
  lVar12 = *(long *)(lVar19 + 0x58) - *(long *)(lVar19 + 0x50);
  parseAttributes(this);
  if (0 < lVar12) {
    lVar18 = 0;
    lVar15 = 0;
    pvVar17 = (void *)0x0;
    do {
      piVar1 = (int *)(*(long *)(lVar19 + 0x50) + lVar18);
      iVar2 = *piVar1;
      uVar14 = piVar1[1];
      iVar3 = piVar1[2];
      iVar4 = piVar1[3];
      iVar7 = VertexBuffer::getSizePerVertex(*(VertexBuffer **)(lVar19 + 0x30));
      lVar9 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttribValue>>>
                          *)(this + 0x38),(basic_string *)(&s_attributeNames + (long)iVar3 * 0x18));
      if (lVar9 != 0) {
        VertexAttribValue::setPointer
                  ((VertexAttribValue *)(lVar9 + 0x28),iVar2,uVar14,'\0',iVar7,pvVar17);
        *(uint *)(this + 0x60) =
             *(uint *)(this + 0x60) | 1 << (ulong)(**(uint **)(lVar9 + 0x28) & 0x1f);
      }
      lVar15 = lVar15 + 1;
      pvVar17 = (void *)((long)pvVar17 + (long)iVar4);
      lVar18 = lVar18 + 0x10;
    } while (lVar15 < lVar12 >> 4);
  }
  this_00 = (Configuration *)Configuration::getInstance();
  uVar10 = Configuration::supportsShareableVAO(this_00);
  if ((uVar10 & 1) == 0) {
    uVar11 = 1;
  }
  else {
    (*glGenVertexArraysOESEXT)(1,this + 0x24);
    GL::bindVAO(*(uint *)(this + 0x24));
    uVar8 = VertexBuffer::getVBO(*(VertexBuffer **)(lVar19 + 0x30),0);
    glBindBuffer(0x8892,uVar8);
    uVar14 = *(uint *)(this + 0x60);
    if (uVar14 != 0) {
      uVar16 = 0;
                    /* catch() { ... } // from try @ 00ff4220 with catch @ 00ff43a8 */
      do {
        uVar5 = 1 << (ulong)(uVar16 & 0x1f);
        if ((uVar5 & uVar14) != 0) {
                    /* try { // try from 00ff43c4 to 010f4407 has its CatchHandler @ 00ff43c4
                       catch() { ... } // from try @ 00ff43c4 with catch @ 00ff43c4
                       catch() { ... } // from try @ 00ff4414 with catch @ 00ff43c4
                       catch() { ... } // from try @ 00ff4480 with catch @ 00ff43c4 */
          glEnableVertexAttribArray(uVar16);
        }
        uVar14 = uVar14 & (uVar5 ^ 0xffffffff);
        uVar16 = uVar16 + 1;
      } while (uVar14 != 0);
    }
    uVar8 = IndexBuffer::getVBO(*(IndexBuffer **)(param_1 + 0x28),0);
    glBindBuffer(0x8893,uVar8);
    for (plVar13 = *(long **)(this + 0x48); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
                    /* try { // try from 00ff4408 to 010f4413 has its CatchHandler @ 00ff45dc */
      VertexAttribValue::apply((VertexAttribValue *)(plVar13 + 5));
    }
                    /* try { // try from 00ff4414 to 010f444b has its CatchHandler @ 00ff43c4 */
    GL::bindVAO(0);
    glBindBuffer(0x8892,0);
    glBindBuffer(0x8893,0);
    uVar11 = 1;
  }
LAB_00ff4440:
                    /* try { // try from 00ff444c to 010f447f has its CatchHandler @ 00ff45e0 */
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

