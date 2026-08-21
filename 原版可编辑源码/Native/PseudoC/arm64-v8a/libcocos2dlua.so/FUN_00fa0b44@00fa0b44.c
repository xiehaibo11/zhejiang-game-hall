
void FUN_00fa0b44(long *param_1,basic_string *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  size_t sVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 *puVar9;
  Ref *pRVar10;
  long *plVar11;
  long lVar12;
  
  lVar12 = *param_1;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
                      *)(lVar12 + 0x28),param_2);
  if (lVar6 != 0) {
    plVar11 = *(long **)(lVar6 + 0x28);
    plVar2 = (long *)*plVar11;
    plVar3 = (long *)plVar11[1];
    if (plVar3 != (long *)0x0) {
      puVar9 = (undefined8 *)*plVar3;
      while (puVar9 != (undefined8 *)plVar3[1]) {
        pRVar10 = (Ref *)*puVar9;
        if (pRVar10[0x80] == (Ref)0x0) {
          sVar5 = plVar3[1] - (long)(puVar9 + 1);
          if (sVar5 != 0) {
            memmove(puVar9,puVar9 + 1,sVar5);
          }
          plVar3[1] = (long)(puVar9 + ((long)sVar5 >> 3));
          plVar8 = *(long **)(lVar12 + 0x108);
          plVar4 = *(long **)(lVar12 + 0x110);
          if ((plVar8 != plVar4) && ((Ref *)*plVar8 != pRVar10)) {
            do {
              if (plVar4 + -1 == plVar8) goto LAB_00fa0c20;
              plVar1 = plVar8 + 1;
              plVar8 = plVar8 + 1;
            } while ((Ref *)*plVar1 != pRVar10);
          }
          if (plVar8 != plVar4) {
            sVar5 = (long)plVar4 - (long)(plVar8 + 1);
            if (sVar5 != 0) {
              memmove(plVar8,plVar8 + 1,sVar5);
            }
            *(long **)(lVar12 + 0x110) = plVar8 + ((long)sVar5 >> 3);
          }
LAB_00fa0c20:
          if (pRVar10 != (Ref *)0x0) {
            cocos2d::Ref::release(pRVar10);
          }
        }
        else {
          puVar9 = puVar9 + 1;
        }
      }
    }
    if (plVar2 != (long *)0x0) {
      puVar9 = (undefined8 *)*plVar2;
      while (puVar9 != (undefined8 *)plVar2[1]) {
        pRVar10 = (Ref *)*puVar9;
        if (pRVar10[0x80] == (Ref)0x0) {
          sVar5 = plVar2[1] - (long)(puVar9 + 1);
          if (sVar5 != 0) {
            memmove(puVar9,puVar9 + 1,sVar5);
          }
          plVar2[1] = (long)(puVar9 + ((long)sVar5 >> 3));
          plVar8 = *(long **)(lVar12 + 0x108);
          plVar4 = *(long **)(lVar12 + 0x110);
          if ((plVar8 != plVar4) && ((Ref *)*plVar8 != pRVar10)) {
            do {
              if (plVar4 + -1 == plVar8) goto LAB_00fa0cdc;
              plVar1 = plVar8 + 1;
              plVar8 = plVar8 + 1;
            } while ((Ref *)*plVar1 != pRVar10);
          }
          if (plVar8 != plVar4) {
            sVar5 = (long)plVar4 - (long)(plVar8 + 1);
            if (sVar5 != 0) {
              memmove(plVar8,plVar8 + 1,sVar5);
            }
            *(long **)(lVar12 + 0x110) = plVar8 + ((long)sVar5 >> 3);
          }
LAB_00fa0cdc:
          if (pRVar10 != (Ref *)0x0) {
            cocos2d::Ref::release(pRVar10);
          }
        }
        else {
          puVar9 = puVar9 + 1;
        }
      }
    }
    if (((plVar3 != (long *)0x0) && (*plVar3 == plVar3[1])) &&
       (puVar9 = (undefined8 *)plVar11[1], puVar9 != (undefined8 *)0x0)) {
      pvVar7 = (void *)*puVar9;
      puVar9[1] = pvVar7;
      if (pvVar7 != (void *)0x0) {
        puVar9[1] = pvVar7;
        operator_delete(pvVar7);
      }
      operator_delete(puVar9);
      plVar11[1] = 0;
    }
    if (((plVar2 != (long *)0x0) && (*plVar2 == plVar2[1])) &&
       (puVar9 = (undefined8 *)*plVar11, puVar9 != (undefined8 *)0x0)) {
      pvVar7 = (void *)*puVar9;
      puVar9[1] = pvVar7;
      if (pvVar7 != (void *)0x0) {
        puVar9[1] = pvVar7;
        operator_delete(pvVar7);
      }
      operator_delete(puVar9);
      *plVar11 = 0;
    }
  }
  return;
}

