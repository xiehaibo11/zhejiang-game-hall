
/* cocos2d::Animation3DCache::removeUnusedAnimation() */

void __thiscall cocos2d::Animation3DCache::removeUnusedAnimation(Animation3DCache *this)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)*(long *)(this + 0x10);
  while (plVar4 != (long *)0x0) {
    while (iVar3 = Ref::getReferenceCount((Ref *)plVar4[5]), iVar3 != 1) {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_00d0e158;
    }
    Ref::release((Ref *)plVar4[5]);
    plVar5 = (long *)*plVar4;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>>>
    ::remove(local_50,this,plVar4);
    pvVar2 = local_50[0];
    local_50[0] = (void *)0x0;
    plVar4 = plVar5;
    if (pvVar2 != (void *)0x0) {
      if ((local_40 != '\0') && ((*(byte *)((long)pvVar2 + 0x10) & 1) != 0)) {
        operator_delete(*(void **)((long)pvVar2 + 0x20));
      }
      operator_delete(pvVar2);
    }
  }
LAB_00d0e158:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

