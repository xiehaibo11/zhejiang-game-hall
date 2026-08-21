
/* cocos2d::CSLoader::loadNode(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

long * __thiscall cocos2d::CSLoader::loadNode(CSLoader *this,GenericValue *param_1)

{
  ulong uVar1;
  CSLoader *__s1;
  CSLoader CVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  DictionaryHelper *pDVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  GenericValue *pGVar10;
  GenericValue *pGVar11;
  Ref *this_00;
  PageView *this_01;
  ListView *this_02;
  Widget *pWVar12;
  long *plVar13;
  float *pfVar14;
  Size *pSVar15;
  code *pcVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_f8;
  float fStack_f4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f0 [16];
  void *local_e0;
  undefined8 local_d8;
  long alStack_d0 [4];
  long *local_b0;
  long local_a0;
  
  lVar3 = tpidr_el0;
  local_a0 = *(long *)(lVar3 + 0x28);
  pDVar6 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  pcVar7 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (pDVar6,param_1,"classname",(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_f0,pcVar7);
  local_d8 = local_f0;
  lVar8 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocos2d::Node*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocos2d::Node*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocos2d::Node*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<cocos2d::Node*(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)this,(piecewise_construct_t *)local_f0,(tuple *)&DAT_01416200,
                     (tuple *)&local_d8);
  plVar9 = *(long **)(lVar8 + 0x50);
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x0;
    local_b0 = (long *)0x0;
  }
  else {
    if ((long *)(lVar8 + 0x30) == plVar9) {
      local_b0 = alStack_d0;
      (**(code **)(*plVar9 + 0x18))(plVar9,alStack_d0);
    }
    else {
      local_b0 = (long *)(**(code **)(*plVar9 + 0x10))();
    }
    if (local_b0 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      pDVar6 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
      pGVar10 = (GenericValue *)
                cocostudio::DictionaryHelper::getSubDictionary_json(pDVar6,param_1,"options");
      if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      plVar9 = (long *)(**(code **)(*local_b0 + 0x30))(local_b0,pGVar10);
      if (plVar9 != (long *)0x0) {
        pDVar6 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
        pGVar11 = (GenericValue *)
                  cocostudio::DictionaryHelper::getSubDictionary_json(pDVar6,pGVar10,"components");
        pDVar6 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
        iVar4 = cocostudio::DictionaryHelper::getArrayCount_json(pDVar6,pGVar10,"components",0);
        if (0 < iVar4) {
          iVar17 = 0;
          do {
            pDVar6 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
            pGVar10 = (GenericValue *)
                      cocostudio::DictionaryHelper::getSubDictionary_json
                                (pDVar6,pGVar11,"components",iVar17);
            lVar8 = loadComponent(this,pGVar10);
            if (lVar8 != 0) {
              (**(code **)(*plVar9 + 0x460))(plVar9);
            }
            iVar17 = iVar17 + 1;
          } while (iVar4 != iVar17);
        }
        pDVar6 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
        iVar4 = cocostudio::DictionaryHelper::getArrayCount_json(pDVar6,param_1,"children",0);
        if (0 < iVar4) {
          iVar17 = 0;
          do {
            pDVar6 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
            pGVar10 = (GenericValue *)
                      cocostudio::DictionaryHelper::getSubDictionary_json
                                (pDVar6,param_1,"children",iVar17);
            this_00 = (Ref *)loadNode(this,pGVar10);
            if (this_00 != (Ref *)0x0) {
              this_01 = (PageView *)
                        __dynamic_cast(plVar9,&Node::typeinfo,&cocos2d::ui::PageView::typeinfo,0);
              this_02 = (ListView *)
                        __dynamic_cast(plVar9,&Node::typeinfo,&cocos2d::ui::ListView::typeinfo,0);
              if (this_01 == (PageView *)0x0) {
                if (this_02 == (ListView *)0x0) {
                  CVar2 = this[0x70];
                  uVar1 = (ulong)((byte)CVar2 >> 1);
                  if (((byte)CVar2 & 1) != 0) {
                    uVar1 = *(ulong *)(this + 0x78);
                  }
                  if (uVar1 == 3) {
                    __s1 = this + 0x71;
                    if (((byte)CVar2 & 1) != 0) {
                      __s1 = *(CSLoader **)(this + 0x80);
                    }
                    iVar5 = memcmp(__s1,&DAT_01415f04,3);
                    if (iVar5 != 0) goto LAB_00cb1164;
                  }
                  else {
LAB_00cb1164:
                    pWVar12 = (Widget *)
                              __dynamic_cast(this_00,&Node::typeinfo,&cocos2d::ui::Widget::typeinfo,
                                             0);
                    plVar13 = (long *)__dynamic_cast(plVar9,&Node::typeinfo,
                                                     &cocos2d::ui::Widget::typeinfo,0);
                    if (((pWVar12 != (Widget *)0x0) && (plVar13 != (long *)0x0)) &&
                       (lVar8 = __dynamic_cast(plVar13,&cocos2d::ui::Widget::typeinfo,
                                               &cocos2d::ui::Layout::typeinfo,0), lVar8 == 0)) {
                      iVar5 = cocos2d::ui::Widget::getPositionType(pWVar12);
                      if (iVar5 == 1) {
                        pfVar14 = (float *)cocos2d::ui::Widget::getPositionPercent(pWVar12);
                        fVar19 = *pfVar14;
                        pfVar14 = (float *)(**(code **)(*plVar13 + 0x150))(plVar13);
                        fVar20 = *pfVar14;
                        lVar8 = cocos2d::ui::Widget::getPositionPercent(pWVar12);
                        fVar21 = *(float *)(lVar8 + 4);
                        lVar8 = (**(code **)(*plVar13 + 0x150))(plVar13);
                        local_d8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)CONCAT44(fVar21 + *(float *)(lVar8 + 4),fVar19 + fVar20);
                        cocos2d::ui::Widget::setPositionPercent(pWVar12,(Vec2 *)&local_d8);
                        fVar19 = (float)(**(code **)(*(long *)pWVar12 + 0xe0))(pWVar12);
                        pfVar14 = (float *)(**(code **)(*plVar13 + 0x158))(plVar13);
                        fVar21 = *pfVar14;
                        fVar20 = (float)(**(code **)(*(long *)pWVar12 + 0xf0))(pWVar12);
                        lVar8 = (**(code **)(*plVar13 + 0x158))(plVar13);
                        local_d8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)CONCAT44(fVar20 + *(float *)(lVar8 + 4),fVar19 + fVar21);
                        (**(code **)(*(long *)pWVar12 + 0x98))(pWVar12,&local_d8);
                      }
                      else {
                        pSVar15 = (Size *)(**(code **)(*plVar13 + 0x168))(plVar13);
                        Size::Size((Size *)&local_d8,pSVar15);
                        fVar21 = (float)(**(code **)(*(long *)pWVar12 + 0xe0))(pWVar12);
                        fVar19 = (float)local_d8;
                        pfVar14 = (float *)(**(code **)(*plVar13 + 0x150))(plVar13);
                        fVar22 = *pfVar14;
                        fVar18 = (float)(**(code **)(*(long *)pWVar12 + 0xf0))(pWVar12);
                        fVar20 = local_d8._4_4_;
                        lVar8 = (**(code **)(*plVar13 + 0x150))(plVar13);
                        local_f8 = fVar21 + fVar19 * fVar22;
                        fStack_f4 = fVar18 + fVar20 * *(float *)(lVar8 + 4);
                        (**(code **)(*(long *)pWVar12 + 0x98))(pWVar12,&local_f8);
                      }
                    }
                  }
                  (**(code **)(*plVar9 + 0x208))(plVar9,this_00);
                }
                else {
                  pWVar12 = (Widget *)
                            __dynamic_cast(this_00,&Node::typeinfo,&cocos2d::ui::Widget::typeinfo,0)
                  ;
                  if (pWVar12 != (Widget *)0x0) {
                    cocos2d::ui::ListView::pushBackCustomItem(this_02,pWVar12);
                  }
                }
              }
              else {
                pWVar12 = (Widget *)
                          __dynamic_cast(this_00,&Node::typeinfo,&cocos2d::ui::Layout::typeinfo,0);
                if (pWVar12 != (Widget *)0x0) {
                  cocos2d::ui::PageView::addPage(this_01,pWVar12);
                }
              }
              Ref::release(this_00);
            }
            iVar17 = iVar17 + 1;
          } while (iVar4 != iVar17);
        }
      }
      if (alStack_d0 == local_b0) {
        pcVar16 = *(code **)(*local_b0 + 0x20);
      }
      else {
        if (local_b0 == (long *)0x0) goto joined_r0x00cb0ff0;
        pcVar16 = *(code **)(*local_b0 + 0x28);
      }
      (*pcVar16)();
    }
  }
joined_r0x00cb0ff0:
  if (((byte)local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  if (*(long *)(lVar3 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar9;
}

