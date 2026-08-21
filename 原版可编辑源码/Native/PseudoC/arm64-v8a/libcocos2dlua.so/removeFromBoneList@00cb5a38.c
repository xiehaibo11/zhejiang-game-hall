
/* cocostudio::timeline::BoneNode::removeFromBoneList(cocostudio::timeline::BoneNode*) */

void __thiscall cocostudio::timeline::BoneNode::removeFromBoneList(BoneNode *this,BoneNode *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  BoneNode *pBVar6;
  long *plVar7;
  long lVar8;
  basic_string *pbVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *__dest;
  long *plVar13;
  long *local_88;
  long *local_80;
  long *plStack_78;
  BoneNode *local_70 [2];
  char local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar11 = *(long *)(this + 0x3a8);
  if (lVar11 != 0) {
    if ((param_1 == (BoneNode *)0x0) ||
       (lVar8 = __dynamic_cast(param_1,&typeinfo,&SkeletonNode::typeinfo,0), lVar8 == 0)) {
      getAllSubBones();
      local_70[0] = param_1;
      if (local_80 == plStack_78) {
        std::__ndk1::
        vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
        ::__push_back_slow_path<cocostudio::timeline::BoneNode*const&>
                  ((vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                    *)&local_88,local_70);
      }
      else {
        *local_80 = (long)param_1;
        local_80 = local_80 + 1;
      }
      cocos2d::Ref::retain((Ref *)local_70[0]);
      plVar4 = local_80;
      plVar12 = local_88;
      plVar13 = local_88;
      if (local_88 != local_80) {
        do {
          if (*(long *)(*plVar12 + 0x3a8) != 0) {
            *(undefined8 *)(*plVar12 + 0x3a8) = 0;
            lVar11 = *(long *)(this + 0x3a8);
            pbVar9 = (basic_string *)(**(code **)(*(long *)*plVar12 + 0x2c8))();
            lVar11 = std::__ndk1::
                     __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>>>
                                 *)(lVar11 + 0x440),pbVar9);
            if (lVar11 != 0) {
              lVar8 = *(long *)(this + 0x3a8);
              cocos2d::Ref::release(*(Ref **)(lVar11 + 0x28));
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>>>
              ::remove(local_70,lVar8 + 0x440,lVar11);
              pBVar6 = local_70[0];
              local_70[0] = (BoneNode *)0x0;
              if (pBVar6 != (BoneNode *)0x0) {
                if ((local_60 != '\0') && (((byte)*(Ref *)(pBVar6 + 0x10) & 1) != 0)) {
                  operator_delete(*(void **)(pBVar6 + 0x20));
                }
                operator_delete(pBVar6);
              }
              *(undefined2 *)(*(long *)(this + 0x3a8) + 0x5b8) = 0x101;
            }
          }
          plVar5 = local_80;
          plVar12 = plVar12 + 1;
          plVar3 = local_88;
          plVar13 = local_88;
          plVar7 = local_80;
        } while (plVar4 != plVar12);
        for (; local_88 = plVar7, plVar3 != plVar5; plVar3 = plVar3 + 1) {
          local_88 = plVar13;
          cocos2d::Ref::release((Ref *)*plVar3);
          plVar13 = local_88;
          plVar7 = local_88;
        }
      }
      local_80 = plVar13;
      if (local_88 != (long *)0x0) {
        local_80 = local_88;
        operator_delete(local_88);
      }
    }
    else {
      *(undefined2 *)(lVar11 + 0x5b8) = 0x101;
    }
  }
  __dest = *(undefined8 **)(this + 0x378);
  puVar10 = *(undefined8 **)(this + 0x380);
  if (__dest != puVar10) {
    if ((BoneNode *)*__dest != param_1) {
      do {
        if (puVar10 + -1 == __dest) goto LAB_00cb5c34;
        puVar1 = __dest + 1;
        __dest = __dest + 1;
      } while ((BoneNode *)*puVar1 != param_1);
    }
    if (__dest != puVar10) {
      __n = (long)puVar10 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(undefined8 **)(this + 0x380) = __dest + ((long)__n >> 3);
      cocos2d::Ref::release((Ref *)param_1);
    }
  }
LAB_00cb5c34:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

