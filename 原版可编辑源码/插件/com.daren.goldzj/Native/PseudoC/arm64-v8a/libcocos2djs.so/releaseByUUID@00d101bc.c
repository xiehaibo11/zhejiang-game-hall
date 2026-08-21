
/* spine::SkeletonDataMgr::releaseByUUID(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall spine::SkeletonDataMgr::releaseByUUID(SkeletonDataMgr *this,basic_string *param_1)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>>>
  *this_00;
  long lVar1;
  int iVar2;
  __tree_node_base *p_Var3;
  long *plVar4;
  long *plVar5;
  __tree_node_base *p_Var6;
  long lVar7;
  Ref *this_01;
  undefined4 *puVar8;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>>>
             *)(this + 0x40);
  p_Var3 = (__tree_node_base *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,spine::SkeletonDataInfo*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     (this_00,param_1);
  if (this + 0x48 != (SkeletonDataMgr *)p_Var3) {
    this_01 = *(Ref **)(p_Var3 + 0x38);
    iVar2 = cocos2d::Ref::getReferenceCount(this_01);
    if (iVar2 == 1) {
      plVar4 = *(long **)(p_Var3 + 8);
      if (*(long **)(p_Var3 + 8) == (long *)0x0) {
        p_Var6 = p_Var3 + 0x10;
        plVar5 = *(long **)p_Var6;
        if ((__tree_node_base *)*plVar5 != p_Var3) {
          do {
            lVar7 = *(long *)p_Var6;
            p_Var6 = (__tree_node_base *)(lVar7 + 0x10);
            plVar5 = *(long **)p_Var6;
          } while (*plVar5 != lVar7);
        }
      }
      else {
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if (*(__tree_node_base **)this_00 == p_Var3) {
        *(long **)this_00 = plVar5;
      }
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x48),p_Var3);
      if (((byte)p_Var3[0x20] & 1) != 0) {
        operator_delete(*(void **)(p_Var3 + 0x30));
      }
      operator_delete(p_Var3);
      plVar4 = *(long **)(this + 0x30);
      if ((plVar4 != (long *)0x0) &&
         (puVar8 = *(undefined4 **)(this_01 + 0x28), puVar8 != *(undefined4 **)(this_01 + 0x30))) {
        local_4c = *puVar8;
        while( true ) {
          puVar8 = puVar8 + 1;
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_4c);
          if (puVar8 == *(undefined4 **)(this_01 + 0x30)) break;
          plVar4 = *(long **)(this + 0x30);
          local_4c = *puVar8;
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_008589d0();
          }
        }
      }
    }
    cocos2d::Ref::release(this_01);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

