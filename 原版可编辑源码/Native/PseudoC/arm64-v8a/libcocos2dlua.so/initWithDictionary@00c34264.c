
/* cocostudio::ActionManagerEx::initWithDictionary(char const*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, cocos2d::Ref*, int) */

void __thiscall
cocostudio::ActionManagerEx::initWithDictionary
          (ActionManagerEx *this,char *param_1,GenericValue *param_2,Ref *param_3,int param_4)

{
  vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>> *this_00;
  void *pvVar1;
  ulong __n;
  undefined8 *puVar2;
  long lVar3;
  ActionObject **ppAVar4;
  ActionObject **ppAVar5;
  ActionObject **ppAVar6;
  int iVar7;
  DictionaryHelper *pDVar8;
  ActionObject *this_01;
  GenericValue *pGVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  void *__dest;
  ulong uVar14;
  ActionObject **ppAStack_c0;
  ActionObject **ppAStack_b8;
  ActionObject **ppAStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  void *pvStack_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> abStack_90 [8];
  ulong uStack_88;
  void *pvStack_80;
  ActionObject *pAStack_70;
  long lStack_68;
  
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(abStack_90,param_1);
  *(int *)(this + 0x50) = param_4;
  pvVar1 = (void *)((ulong)abStack_90 | 1);
  uVar14 = (ulong)((byte)abStack_90[0] >> 1);
  if (((byte)abStack_90[0] & 1) != 0) {
    pvVar1 = pvStack_80;
    uVar14 = uStack_88;
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
  uStack_a0 = 0;
  pvStack_98 = (void *)0x0;
  uStack_a8 = 0;
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
    __dest = (void *)((ulong)&uStack_a8 | 1);
    uStack_a8 = (ulong)(byte)((int)__n << 1);
    if (__n == 0) goto LAB_00c34368;
  }
  else {
    uVar14 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar14);
    uStack_a8 = uVar14 | 1;
    uStack_a0 = __n;
    pvStack_98 = __dest;
  }
  memcpy(__dest,(void *)((long)pvVar1 + uVar11),__n);
LAB_00c34368:
  *(undefined1 *)((long)__dest + __n) = 0;
  ppAStack_b8 = (ActionObject **)0x0;
  ppAStack_b0 = (ActionObject **)0x0;
  ppAStack_c0 = (ActionObject **)0x0;
  pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar7 = DictionaryHelper::getArrayCount_json(pDVar8,param_2,"actionlist",0);
  if (0 < iVar7) {
    iVar13 = 0;
    do {
      this_01 = operator_new(0x80,(nothrow_t *)&std::nothrow);
      if (this_01 != (ActionObject *)0x0) {
        ActionObject::ActionObject(this_01);
      }
      cocos2d::Ref::autorelease((Ref *)this_01);
      pDVar8 = (DictionaryHelper *)DictionaryHelper::getInstance();
      pGVar9 = (GenericValue *)
               DictionaryHelper::getDictionaryFromArray_json(pDVar8,param_2,"actionlist",iVar13);
      ActionObject::initWithDictionary(this_01,pGVar9,param_3);
      pAStack_70 = this_01;
      if (ppAStack_b8 == ppAStack_b0) {
        std::__ndk1::
        vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>::
        __push_back_slow_path<cocostudio::ActionObject*const&>
                  ((vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>
                    *)&ppAStack_c0,&pAStack_70);
      }
      else {
        *ppAStack_b8 = this_01;
        ppAStack_b8 = ppAStack_b8 + 1;
      }
      cocos2d::Ref::retain((Ref *)pAStack_70);
      iVar13 = iVar13 + 1;
    } while (iVar7 != iVar13);
  }
  pAStack_70 = (ActionObject *)&uStack_a8;
  lVar10 = std::__ndk1::
           __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Vector<cocostudio::ActionObject*>>>>
           ::
           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                     ((basic_string *)(this + 0x28),(piecewise_construct_t *)&uStack_a8,
                      (tuple *)&DAT_0141274d,(tuple *)&pAStack_70);
  this_00 = (vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>> *)
            (lVar10 + 0x28);
  ppAVar4 = ppAStack_c0;
  ppAVar5 = ppAStack_b8;
  if (this_00 !=
      (vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>> *)
      &ppAStack_c0) {
    puVar12 = *(undefined8 **)(lVar10 + 0x28);
    puVar2 = *(undefined8 **)(lVar10 + 0x30);
    if (puVar12 != puVar2) {
      do {
        cocos2d::Ref::release((Ref *)*puVar12);
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar12 = *(undefined8 **)this_00;
    }
    *(undefined8 **)(lVar10 + 0x30) = puVar12;
    std::__ndk1::vector<cocostudio::ActionObject*,std::__ndk1::allocator<cocostudio::ActionObject*>>
    ::assign<cocostudio::ActionObject**>(this_00,ppAStack_c0,ppAStack_b8);
    puVar2 = *(undefined8 **)(lVar10 + 0x30);
    for (puVar12 = *(undefined8 **)(lVar10 + 0x28); ppAVar4 = ppAStack_c0, ppAVar5 = ppAStack_b8,
        puVar12 != puVar2; puVar12 = puVar12 + 1) {
      cocos2d::Ref::retain((Ref *)*puVar12);
    }
  }
  for (; ppAVar6 = ppAStack_b8, ppAVar4 != ppAStack_b8; ppAVar4 = ppAVar4 + 1) {
    ppAStack_b8 = ppAVar5;
    cocos2d::Ref::release((Ref *)*ppAVar4);
    ppAVar5 = ppAStack_b8;
    ppAStack_b8 = ppAVar6;
  }
  ppAStack_b8 = ppAStack_c0;
  if (ppAStack_c0 != (ActionObject **)0x0) {
    operator_delete(ppAStack_c0);
  }
  if ((uStack_a8 & 1) != 0) {
    operator_delete(pvStack_98);
  }
  if (((byte)abStack_90[0] & 1) != 0) {
    operator_delete(pvStack_80);
  }
  if (*(long *)(lVar3 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

