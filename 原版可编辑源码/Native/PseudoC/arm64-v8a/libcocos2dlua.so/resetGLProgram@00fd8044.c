
/* cocos2d::GLProgramState::resetGLProgram() */

void __thiscall cocos2d::GLProgramState::resetGLProgram(GLProgramState *this)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  
  if (*(long *)(this + 0x68) != 0) {
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
    ::__deallocate_node((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
                         *)(this + 0x50),*(__hash_node_base **)(this + 0x60));
    lVar3 = *(long *)(this + 0x58);
    *(undefined8 *)(this + 0x60) = 0;
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x50) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
    }
                    /* catch() { ... } // from try @ 00fd8030 with catch @ 00fd8094 */
    *(undefined8 *)(this + 0x68) = 0;
  }
  if (*(long *)(this + 0x90) != 0) {
    puVar1 = *(void **)(this + 0x88);
                    /* catch() { ... } // from try @ 00fd8008 with catch @ 00fd80a4 */
    while (puVar1 != (void *)0x0) {
      pvVar7 = (void *)*puVar1;
      if ((*(char *)(puVar1 + 6) != '\0') && (plVar6 = (long *)puVar1[7], plVar6 != (long *)0x0)) {
        plVar2 = (long *)plVar6[4];
        if (plVar6 == plVar2) {
          pcVar4 = *(code **)(*plVar2 + 0x20);
LAB_00fd80f4:
          (*pcVar4)();
        }
        else if (plVar2 != (long *)0x0) {
          pcVar4 = *(code **)(*plVar2 + 0x28);
          goto LAB_00fd80f4;
        }
        operator_delete(plVar6);
      }
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar7;
    }
    lVar3 = *(long *)(this + 0x80);
    *(undefined8 *)(this + 0x88) = 0;
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x78) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
    }
    *(undefined8 *)(this + 0x90) = 0;
  }
  if (*(Ref **)(this + 0xd0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xd0));
  }
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 200) = 1;
  return;
}

