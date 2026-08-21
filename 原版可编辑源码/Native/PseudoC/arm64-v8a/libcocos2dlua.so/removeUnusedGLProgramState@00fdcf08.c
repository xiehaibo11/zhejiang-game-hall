
/* cocos2d::GLProgramStateCache::removeUnusedGLProgramState() */

void __thiscall cocos2d::GLProgramStateCache::removeUnusedGLProgramState(GLProgramStateCache *this)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  void *local_50 [3];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)*(long *)(this + 0x10);
  while (plVar4 != (long *)0x0) {
    while (iVar3 = Ref::getReferenceCount((Ref *)plVar4[3]), iVar3 != 1) {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_00fdcf84;
    }
    Ref::release((Ref *)plVar4[3]);
    plVar5 = (long *)*plVar4;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::__unordered_map_hasher<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::hash<cocos2d::GLProgram*>,true>,std::__ndk1::__unordered_map_equal<cocos2d::GLProgram*,std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>,std::__ndk1::equal_to<cocos2d::GLProgram*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<cocos2d::GLProgram*,cocos2d::GLProgramState*>>>
    ::remove(local_50,this,plVar4);
    pvVar2 = local_50[0];
    local_50[0] = (void *)0x0;
    plVar4 = plVar5;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
LAB_00fdcf84:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

