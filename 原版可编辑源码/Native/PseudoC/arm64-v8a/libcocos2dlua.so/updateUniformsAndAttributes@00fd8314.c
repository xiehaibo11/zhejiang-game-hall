
/* cocos2d::GLProgramState::updateUniformsAndAttributes() */

void __thiscall cocos2d::GLProgramState::updateUniformsAndAttributes(GLProgramState *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint *puVar4;
  long *plVar5;
  piecewise_construct_t *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0x21] != (GLProgramState)0x0) {
    plVar5 = *(long **)(this + 0x38);
    if (plVar5 != (long *)0x0) {
      do {
        uVar2 = GLProgram::getUniform(*(GLProgram **)(this + 0xd0),(basic_string *)(plVar5 + 2));
        local_50 = (piecewise_construct_t *)(plVar5 + 5);
        lVar3 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
                ::
                __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                          ((int *)(this + 0x50),local_50,(tuple *)&DAT_0144cee0,(tuple *)&local_50);
        *(undefined8 *)(lVar3 + 0x18) = uVar2;
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    plVar5 = *(long **)(this + 0x88);
    *(undefined4 *)(this + 0xcc) = 0;
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      puVar4 = (uint *)GLProgram::getVertexAttrib
                                 (*(GLProgram **)(this + 0xd0),(basic_string *)(plVar5 + 2));
      plVar5[5] = (long)puVar4;
      if (*(char *)((long)plVar5 + 0x31) != '\0') {
        *(uint *)(this + 0xcc) = *(uint *)(this + 0xcc) | 1 << (ulong)(*puVar4 & 0x1f);
      }
    }
    this[0x21] = (GLProgramState)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

