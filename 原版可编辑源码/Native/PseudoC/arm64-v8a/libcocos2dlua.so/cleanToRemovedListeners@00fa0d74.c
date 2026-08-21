
/* cocos2d::EventDispatcher::cleanToRemovedListeners() */

void __thiscall cocos2d::EventDispatcher::cleanToRemovedListeners(EventDispatcher *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  size_t sVar5;
  bool bVar6;
  long lVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  
  plVar12 = *(long **)(this + 0x108);
  plVar3 = *(long **)(this + 0x110);
  if (plVar12 != plVar3) {
    do {
      lVar7 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
                          *)(this + 0x28),(basic_string *)(*plVar12 + 0x68));
      if (lVar7 == 0) {
LAB_00fa0f80:
        if ((Ref *)*plVar12 != (Ref *)0x0) {
          Ref::release((Ref *)*plVar12);
        }
      }
      else {
        plVar13 = *(long **)(lVar7 + 0x28);
        plVar2 = (long *)*plVar13;
        plVar4 = (long *)plVar13[1];
        if (plVar4 == (long *)0x0) {
LAB_00fa0e78:
          bVar6 = false;
          if (plVar2 == (long *)0x0) goto LAB_00fa0f14;
LAB_00fa0e80:
          plVar10 = (long *)*plVar2;
          plVar9 = (long *)plVar2[1];
          if ((plVar10 != plVar9) && (*plVar10 != *plVar12)) {
            do {
              if (plVar9 + -1 == plVar10) goto LAB_00fa0f14;
              plVar1 = plVar10 + 1;
              plVar10 = plVar10 + 1;
            } while (*plVar1 != *plVar12);
          }
          if (plVar10 == plVar9) goto LAB_00fa0f14;
          if ((Ref *)*plVar12 != (Ref *)0x0) {
            Ref::release((Ref *)*plVar12);
            plVar9 = (long *)plVar2[1];
          }
          sVar5 = (long)plVar9 - (long)(plVar10 + 1);
          if (sVar5 != 0) {
            memmove(plVar10,plVar10 + 1,sVar5);
          }
          plVar2[1] = (long)(plVar10 + ((long)sVar5 >> 3));
        }
        else {
          plVar10 = (long *)*plVar4;
          plVar9 = (long *)plVar4[1];
          if ((plVar10 != plVar9) && (*plVar10 != *plVar12)) {
            do {
              if (plVar9 + -1 == plVar10) goto LAB_00fa0e78;
              plVar1 = plVar10 + 1;
              plVar10 = plVar10 + 1;
            } while (*plVar1 != *plVar12);
          }
          if (plVar10 == plVar9) goto LAB_00fa0e78;
          if ((Ref *)*plVar12 != (Ref *)0x0) {
            Ref::release((Ref *)*plVar12);
            plVar9 = (long *)plVar4[1];
          }
          sVar5 = (long)plVar9 - (long)(plVar10 + 1);
          if (sVar5 != 0) {
            memmove(plVar10,plVar10 + 1,sVar5);
          }
          bVar6 = true;
          plVar4[1] = (long)(plVar10 + ((long)sVar5 >> 3));
          if (plVar2 != (long *)0x0) goto LAB_00fa0e80;
LAB_00fa0f14:
          if (!bVar6) goto LAB_00fa0f80;
        }
        if (((plVar4 != (long *)0x0) && (*plVar4 == plVar4[1])) &&
           (puVar11 = (undefined8 *)plVar13[1], puVar11 != (undefined8 *)0x0)) {
          pvVar8 = (void *)*puVar11;
          puVar11[1] = pvVar8;
          if (pvVar8 != (void *)0x0) {
            puVar11[1] = pvVar8;
            operator_delete(pvVar8);
          }
          operator_delete(puVar11);
          plVar13[1] = 0;
        }
        if (((plVar2 != (long *)0x0) && (*plVar2 == plVar2[1])) &&
           (puVar11 = (undefined8 *)*plVar13, puVar11 != (undefined8 *)0x0)) {
          pvVar8 = (void *)*puVar11;
          puVar11[1] = pvVar8;
          if (pvVar8 != (void *)0x0) {
            puVar11[1] = pvVar8;
            operator_delete(pvVar8);
          }
          operator_delete(puVar11);
          *plVar13 = 0;
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar3);
    plVar12 = *(long **)(this + 0x108);
  }
  *(long **)(this + 0x110) = plVar12;
  return;
}

