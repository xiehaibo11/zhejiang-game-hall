
/* cocostudio::Armature::changeBoneParent(cocostudio::Bone*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocostudio::Armature::changeBoneParent(Armature *this,Bone *param_1,basic_string *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  Bone *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar5 = Bone::getParentBone(param_1);
  if (lVar5 != 0) {
    plVar6 = (long *)Bone::getParentBone(param_1);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x240))();
    puVar8 = (undefined8 *)*plVar6;
    puVar9 = (undefined8 *)plVar6[1];
    if (puVar8 != puVar9) {
      if ((Bone *)*puVar8 != param_1) {
        do {
          if (puVar9 + -1 == puVar8) goto LAB_00c37a4c;
          puVar7 = puVar8 + 1;
          puVar8 = puVar8 + 1;
        } while ((Bone *)*puVar7 != param_1);
      }
      if (puVar8 != puVar9) {
        sVar3 = (long)puVar9 - (long)(puVar8 + 1);
        if (sVar3 != 0) {
          memmove(puVar8,puVar8 + 1,sVar3);
        }
        plVar6[1] = (long)(puVar8 + ((long)sVar3 >> 3));
        cocos2d::Ref::release((Ref *)param_1);
      }
    }
LAB_00c37a4c:
    Bone::setParentBone(param_1,(Bone *)0x0);
  }
  uVar2 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  if (uVar2 != 0) {
    lVar5 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>>>
                        *)(this + 800),param_2);
    if ((lVar5 == 0) || (*(Bone **)(lVar5 + 0x28) == (Bone *)0x0)) {
      puVar8 = *(undefined8 **)(this + 0x350);
      local_60 = param_1;
      if (puVar8 == *(undefined8 **)(this + 0x358)) {
        std::__ndk1::vector<cocostudio::Bone*,std::__ndk1::allocator<cocostudio::Bone*>>::
        __push_back_slow_path<cocostudio::Bone*const&>
                  ((vector<cocostudio::Bone*,std::__ndk1::allocator<cocostudio::Bone*>> *)
                   (this + 0x348),&local_60);
      }
      else {
        *puVar8 = param_1;
        *(undefined8 **)(this + 0x350) = puVar8 + 1;
      }
      cocos2d::Ref::retain((Ref *)local_60);
    }
    else {
      Bone::addChildBone(*(Bone **)(lVar5 + 0x28),param_1);
      puVar9 = *(undefined8 **)(this + 0x348);
      puVar7 = *(undefined8 **)(this + 0x350);
      puVar8 = puVar9;
      if ((puVar9 != puVar7) && ((Bone *)*puVar9 != param_1)) {
        do {
          if (puVar7 + -1 == puVar8) goto LAB_00c37b80;
          puVar1 = puVar8 + 1;
          puVar8 = puVar8 + 1;
        } while ((Bone *)*puVar1 != param_1);
      }
      if (puVar8 != puVar7) {
        if ((puVar9 != puVar7) && ((Bone *)*puVar9 != param_1)) {
          do {
            if (puVar7 + -1 == puVar9) goto LAB_00c37b80;
            puVar8 = puVar9 + 1;
            puVar9 = puVar9 + 1;
          } while ((Bone *)*puVar8 != param_1);
        }
        if (puVar9 != puVar7) {
          sVar3 = (long)puVar7 - (long)(puVar9 + 1);
          if (sVar3 != 0) {
            memmove(puVar9,puVar9 + 1,sVar3);
          }
          *(undefined8 **)(this + 0x350) = puVar9 + ((long)sVar3 >> 3);
          cocos2d::Ref::release((Ref *)param_1);
        }
      }
    }
  }
LAB_00c37b80:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

