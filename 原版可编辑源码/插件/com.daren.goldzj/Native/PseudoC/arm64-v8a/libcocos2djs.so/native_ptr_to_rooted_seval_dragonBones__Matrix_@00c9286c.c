
/* bool 
   native_ptr_to_rooted_seval<dragonBones::Matrix>(std::__ndk1::enable_if<!std::is_base_of<cocos2d::Ref,
   dragonBones::Matrix>::value, dragonBones::Matrix>::type const*, se::Value*, bool*) */

bool native_ptr_to_rooted_seval<dragonBones::Matrix>(type *param_1,Value *param_2,bool *param_3)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  Object *this;
  Class *pCVar8;
  basic_string local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined6 uStack_77;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined6 uStack_6f;
  undefined1 uStack_69;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_1 == (type *)0x0) {
    se::Value::setNull(param_2);
    goto LAB_00c92a44;
  }
  lVar4 = se::NativePtrToObjectMap::find(param_1);
  lVar5 = se::NativePtrToObjectMap::end();
  if (lVar4 == lVar5) {
    local_80 = (basic_string)0x2c;
    uStack_6f = 0x457869727461;
    uStack_77 = 0x73656e6f426e;
    uStack_71 = 0x36;
    uStack_70 = 0x4d;
    uStack_7f = 0x6761726431314e;
    uStack_78 = 0x6f;
    uStack_69 = 0;
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (JSBClassType::__jsbClassTypeMap,&local_80);
    if (lVar4 == 0) {
      if (((byte)local_80 & 1) == 0) {
        pcVar6 = (char *)((ulong)&local_80 | 1);
LAB_00c929c4:
        builtin_strncpy(pcVar6,"N11dragonBones6MatrixE",0x17);
        if (((byte)local_80 & 1) == 0) {
          local_80 = (basic_string)0x2c;
        }
        else {
          uStack_78 = 0x16;
          uStack_77 = 0;
          uStack_71 = 0;
        }
      }
      else {
        uVar7 = CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe;
        if (0x15 < uVar7 - 1) {
          pcVar6 = (char *)CONCAT17(uStack_69,CONCAT61(uStack_6f,uStack_70));
          goto LAB_00c929c4;
        }
        if (-uVar7 - 0x11 < 0x17 - uVar7) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar7 = (uVar7 - 1) * 2;
        if (uVar7 < 0x17) {
          uVar7 = 0x16;
        }
        pvVar3 = (void *)CONCAT17(uStack_69,CONCAT61(uStack_6f,uStack_70));
        uVar1 = 0x17;
        if (0x16 < uVar7) {
          uVar1 = uVar7 + 0x10 & 0xfffffffffffffff0;
        }
        pcVar6 = operator_new(uVar1);
        builtin_strncpy(pcVar6,"N11dragonBones6MatrixE",0x16);
        operator_delete(pvVar3);
        local_80 = (basic_string)((byte)uVar1 | 1);
        uStack_78 = 0x16;
        uStack_77 = 0;
        uStack_71 = 0;
        uStack_70 = SUB81(pcVar6,0);
        uStack_6f = (undefined6)((ulong)pcVar6 >> 8);
        uStack_69 = (undefined1)((ulong)pcVar6 >> 0x38);
        uStack_7f = (undefined7)(uVar1 >> 8);
        pcVar6[0x16] = '\0';
      }
      lVar4 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (JSBClassType::__jsbClassTypeMap,&local_80);
      if (lVar4 != 0) goto LAB_00c929fc;
      pCVar8 = (Class *)0x0;
    }
    else {
LAB_00c929fc:
      pCVar8 = *(Class **)(lVar4 + 0x28);
    }
    if (((byte)local_80 & 1) != 0) {
      operator_delete((void *)CONCAT17(uStack_69,CONCAT61(uStack_6f,uStack_70)));
    }
    this = (Object *)se::Object::createObjectWithClass(pCVar8);
    se::Object::root(this);
    se::Object::setPrivateData(this,param_1);
    if (param_3 != (bool *)0x0) {
      *param_3 = false;
    }
  }
  else {
    this = *(Object **)(lVar4 + 0x18);
    if (param_3 != (bool *)0x0) {
      *param_3 = true;
    }
  }
  se::Value::setObject(param_2,this,false);
LAB_00c92a44:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return true;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

