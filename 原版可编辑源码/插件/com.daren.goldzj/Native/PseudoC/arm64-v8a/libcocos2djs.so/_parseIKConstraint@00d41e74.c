
/* dragonBones::JSONDataParser::_parseIKConstraint(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

IKConstraintData * dragonBones::JSONDataParser::_parseIKConstraint(GenericValue *param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  JSONDataParser *in_x1;
  basic_string *in_x3;
  long lVar5;
  IKConstraintData *pIVar6;
  long lVar7;
  IKConstraintData *pIVar8;
  undefined4 uVar9;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x30);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  _getString(in_x1,(GenericValue *)DataParser::BONE,(char *)&local_78,in_x3);
  lVar4 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                      *)(lVar7 + 0xc0),(basic_string *)&local_60);
  if (lVar7 + 200 == lVar4) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x38);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (void *)0x0;
    _getString(in_x1,(GenericValue *)DataParser::TARGET,(char *)&local_78,in_x3);
    lVar7 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                        *)(lVar5 + 0xc0),(basic_string *)&local_60);
    if (lVar5 + 200 == lVar7) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x38);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if (lVar7 != 0) {
      pIVar6 = BaseObject::borrowObject<dragonBones::IKConstraintData>();
      bVar2 = _getBoolean((GenericValue *)in_x1,DataParser::SCALE,false);
      pIVar6[0x48] = (IKConstraintData)(bVar2 & 1);
      bVar2 = _getBoolean((GenericValue *)in_x1,DataParser::BEND_POSITIVE,true);
      pIVar6[0x49] = (IKConstraintData)(bVar2 & 1);
      uVar9 = _getNumber((GenericValue *)in_x1,DataParser::WEIGHT,1.0);
      *(undefined4 *)(pIVar6 + 0x4c) = uVar9;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = (void *)0x0;
      _getString(in_x1,(GenericValue *)DataParser::NAME,(char *)&local_78,in_x3);
      pIVar8 = pIVar6 + 0x18;
      if (((byte)*pIVar8 & 1) == 0) {
        *(undefined2 *)pIVar8 = 0;
      }
      else {
        **(undefined1 **)(pIVar6 + 0x28) = 0;
        *(undefined8 *)(pIVar6 + 0x20) = 0;
        if (((byte)pIVar6[0x18] & 1) != 0) {
          operator_delete(*(void **)(pIVar6 + 0x28));
          *(undefined8 *)(pIVar6 + 0x18) = 0;
        }
      }
      *(void **)(pIVar6 + 0x28) = local_50;
      *(undefined8 *)(pIVar6 + 0x20) = uStack_58;
      *(ulong *)pIVar8 = local_60;
      uStack_58 = 0;
      local_50 = (void *)0x0;
      local_60 = 0;
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      *(long *)(pIVar6 + 0x40) = lVar4;
      *(long *)(pIVar6 + 0x30) = lVar7;
      iVar3 = _getNumber((GenericValue *)in_x1,DataParser::CHAIN,0);
      if ((iVar3 == 0) ||
         (lVar7 = *(long *)(lVar4 + 0x50), lVar5 = lVar4, *(long *)(lVar4 + 0x50) == 0)) {
        lVar5 = 0;
        lVar7 = lVar4;
      }
      *(long *)(pIVar6 + 0x38) = lVar7;
      *(long *)(pIVar6 + 0x40) = lVar5;
      goto LAB_00d420c0;
    }
  }
  pIVar6 = (IKConstraintData *)0x0;
LAB_00d420c0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pIVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

