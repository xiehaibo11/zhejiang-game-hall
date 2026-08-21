
/* cocostudio::timeline::BoneNode::addToBoneList(cocostudio::timeline::BoneNode*) */

void __thiscall cocostudio::timeline::BoneNode::addToBoneList(BoneNode *this,BoneNode *param_1)

{
  long lVar1;
  Ref *pRVar2;
  Ref *pRVar3;
  Ref *pRVar4;
  long lVar5;
  basic_string *pbVar6;
  undefined8 *puVar7;
  Ref *pRVar8;
  Ref *pRVar9;
  long lVar10;
  BoneNode *local_90 [2];
  void *local_80;
  BoneNode *local_78;
  Ref *local_70;
  Ref *pRStack_68;
  Ref *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar7 = *(undefined8 **)(this + 0x380);
  local_78 = param_1;
  if (puVar7 == *(undefined8 **)(this + 0x388)) {
    std::__ndk1::
    vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
    ::__push_back_slow_path<cocostudio::timeline::BoneNode*const&>
              ((vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                *)(this + 0x378),&local_78);
  }
  else {
    *puVar7 = param_1;
    *(undefined8 **)(this + 0x380) = puVar7 + 1;
  }
  cocos2d::Ref::retain((Ref *)local_78);
  lVar10 = *(long *)(this + 0x3a8);
  if (lVar10 != 0) {
    if (((param_1 == (BoneNode *)0x0) ||
        (lVar5 = __dynamic_cast(param_1,&typeinfo,&SkeletonNode::typeinfo,0), lVar5 == 0)) &&
       (*(long *)(param_1 + 0x3a8) == 0)) {
      getAllSubBones();
      local_90[0] = param_1;
      if (local_70 == pRStack_68) {
        std::__ndk1::
        vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
        ::__push_back_slow_path<cocostudio::timeline::BoneNode*const&>
                  ((vector<cocostudio::timeline::BoneNode*,std::__ndk1::allocator<cocostudio::timeline::BoneNode*>>
                    *)&local_78,local_90);
      }
      else {
        *(BoneNode **)local_70 = param_1;
        local_70 = local_70 + 8;
      }
      cocos2d::Ref::retain((Ref *)local_90[0]);
      pRVar3 = local_70;
      pRVar9 = (Ref *)local_78;
      pRVar8 = (Ref *)local_78;
      if (local_78 != (BoneNode *)local_70) {
        do {
          *(undefined8 *)(*(long *)pRVar8 + 0x3a8) = *(undefined8 *)(this + 0x3a8);
          pbVar6 = (basic_string *)(**(code **)(**(long **)pRVar8 + 0x2c8))();
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_90,pbVar6);
          lVar10 = std::__ndk1::
                   __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>>>
                               *)(*(long *)(this + 0x3a8) + 0x440),(basic_string *)local_90);
          if (lVar10 == 0) {
            lVar10 = *(long *)(this + 0x3a8);
            pbVar6 = (basic_string *)(**(code **)(**(long **)pRVar8 + 0x2c8))();
            local_60 = *(Ref **)pRVar8;
            cocos2d::Ref::retain(local_60);
            cocos2d::
            Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>
            ::erase((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>
                     *)(lVar10 + 0x440),pbVar6);
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocostudio::timeline::BoneNode*&>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::timeline::BoneNode*>>>
                        *)(lVar10 + 0x440),pbVar6,pbVar6,(BoneNode **)&local_60);
            *(undefined2 *)(*(long *)(this + 0x3a8) + 0x5b8) = 0x101;
          }
          if (((ulong)local_90[0] & 1) != 0) {
            operator_delete(local_80);
          }
          pRVar4 = local_70;
          pRVar8 = pRVar8 + 8;
          pRVar2 = (Ref *)local_78;
          pRVar9 = local_70;
        } while (pRVar3 != pRVar8);
        for (; pRVar2 != pRVar4; pRVar2 = pRVar2 + 8) {
          cocos2d::Ref::release(*(Ref **)pRVar2);
          pRVar9 = (Ref *)local_78;
        }
      }
      local_70 = (Ref *)local_78;
      if (pRVar9 != (Ref *)0x0) {
        local_70 = pRVar9;
        operator_delete(pRVar9);
      }
    }
    else {
      *(undefined2 *)(lVar10 + 0x5b8) = 0x101;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

