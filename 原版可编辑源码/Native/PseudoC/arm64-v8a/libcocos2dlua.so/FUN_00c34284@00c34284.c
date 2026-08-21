
void FUN_00c34284(long param_1,char *param_2,GenericValue *param_3,Ref *param_4,undefined4 param_5)

{
  vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>> *this;
  void *pvVar1;
  ulong __n;
  undefined8 *puVar2;
  long lVar3;
  ActionObject **ppAVar4;
  ActionObject **ppAVar5;
  ActionObject **ppAVar6;
  int iVar7;
  DictionaryHelper *pDVar8;
  ActionObject *this_00;
  GenericValue *pGVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  void *__dest;
  ulong uVar14;
  ActionObject **in_stack_00000000;
  ActionObject **in_stack_00000008;
  ActionObject **in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  void *in_stack_00000028;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> in_stack_00000030;
  ulong in_stack_00000038;
  void *in_stack_00000040;
  ActionObject *in_stack_00000050;
  long lStack0000000000000058;
  
  lVar3 = tpidr_el0;
  lStack0000000000000058 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&stack0x00000030,param_2);
  *(undefined4 *)(param_1 + 0x50) = param_5;
  pvVar1 = (void *)((ulong)&stack0x00000030 | 1);
  uVar14 = (ulong)((byte)in_stack_00000030 >> 1);
  if (((byte)in_stack_00000030 & 1) != 0) {
    pvVar1 = in_stack_00000040;
    uVar14 = in_stack_00000038;
  }
  uVar11 = uVar14;
  if (uVar14 == 0) {
LAB_00c342f0:
    uVar11 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar11 == 0) goto LAB_00c342f0;
      lVar10 = uVar11 - 1;
      uVar11 = uVar11 - 1;
    } while (*(char *)((long)pvVar1 + lVar10) != '/');
  }
  uVar11 = uVar11 + 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = (void *)0x0;
  in_stack_00000018 = 0;
  if (uVar14 < uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  __n = uVar14 - uVar11;
  if (uVar14 <= uVar14 - uVar11) {
    __n = uVar14;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&stack0x00000018 | 1);
    in_stack_00000018 = (ulong)(byte)((int)__n << 1);
    if (__n == 0) goto LAB_00c34368;
  }
  else {
    uVar14 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar14);
    in_stack_00000018 = uVar14 | 1;
    in_stack_00000020 = __n;
    in_stack_00000028 = __dest;
  }
  memcpy(__dest,(void *)((long)pvVar1 + uVar11),__n);
LAB_00c34368:
  *(undefined1 *)((long)__dest + __n) = 0;
  in_stack_00000008 = (ActionObject **)0x0;
  in_stack_00000010 = (ActionObject **)0x0;
  in_stack_00000000 = (ActionObject **)0x0;
  pDVar8 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  iVar7 = cocostudio::DictionaryHelper::getArrayCount_json(pDVar8,param_3,"actionlist",0);
  if (0 < iVar7) {
    iVar13 = 0;
    do {
      this_00 = operator_new(0x80,(nothrow_t *)&std::nothrow);
      if (this_00 != (ActionObject *)0x0) {
        cocostudio::ActionObject::ActionObject(this_00);
      }
      cocos2d::Ref::autorelease((Ref *)this_00);
      pDVar8 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
      pGVar9 = (GenericValue *)
               cocostudio::DictionaryHelper::getDictionaryFromArray_json
                         (pDVar8,param_3,"actionlist",iVar13);
      cocostudio::ActionObject::initWithDictionary(this_00,pGVar9,param_4);
      in_stack_00000050 = this_00;
      if (in_stack_00000008 == in_stack_00000010) {
        std::__ndk1::
        vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>::
        __push_back_slow_path<cocostudio::ActionObject*const&>
                  ((vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>
                    *)&stack0x00000000,&stack0x00000050);
      }
      else {
        *in_stack_00000008 = this_00;
        in_stack_00000008 = in_stack_00000008 + 1;
      }
      cocos2d::Ref::retain((Ref *)in_stack_00000050);
      iVar13 = iVar13 + 1;
    } while (iVar7 != iVar13);
  }
  in_stack_00000050 = (ActionObject *)&stack0x00000018;
  lVar10 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>>>
           ::
           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                     ((basic_string *)(param_1 + 0x28),(piecewise_construct_t *)&stack0x00000018,
                      (tuple *)&DAT_0141274d,(tuple *)&stack0x00000050);
  this = (vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>> *)
         (lVar10 + 0x28);
  ppAVar4 = in_stack_00000000;
  ppAVar5 = in_stack_00000008;
  if (this != (vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>> *
              )&stack0x00000000) {
    puVar12 = *(undefined8 **)(lVar10 + 0x28);
    puVar2 = *(undefined8 **)(lVar10 + 0x30);
    if (puVar12 != puVar2) {
      do {
        cocos2d::Ref::release((Ref *)*puVar12);
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar12 = *(undefined8 **)this;
    }
    *(undefined8 **)(lVar10 + 0x30) = puVar12;
    std::__ndk1::vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>
    ::assign<cocostudio::ActionObject**>(this,in_stack_00000000,in_stack_00000008);
    puVar2 = *(undefined8 **)(lVar10 + 0x30);
    for (puVar12 = *(undefined8 **)(lVar10 + 0x28); ppAVar4 = in_stack_00000000,
        ppAVar5 = in_stack_00000008, puVar12 != puVar2; puVar12 = puVar12 + 1) {
      cocos2d::Ref::retain((Ref *)*puVar12);
    }
  }
  for (; ppAVar6 = in_stack_00000008, ppAVar4 != in_stack_00000008; ppAVar4 = ppAVar4 + 1) {
    in_stack_00000008 = ppAVar5;
    cocos2d::Ref::release((Ref *)*ppAVar4);
    ppAVar5 = in_stack_00000008;
    in_stack_00000008 = ppAVar6;
  }
  in_stack_00000008 = in_stack_00000000;
  if (in_stack_00000000 != (ActionObject **)0x0) {
    operator_delete(in_stack_00000000);
  }
  if ((in_stack_00000018 & 1) != 0) {
    operator_delete(in_stack_00000028);
  }
  if (((byte)in_stack_00000030 & 1) != 0) {
    operator_delete(in_stack_00000040);
  }
  if (*(long *)(lVar3 + 0x28) != lStack0000000000000058) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

