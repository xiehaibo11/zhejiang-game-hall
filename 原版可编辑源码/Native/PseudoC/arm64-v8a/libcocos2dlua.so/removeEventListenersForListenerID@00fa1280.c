
/* cocos2d::EventDispatcher::removeEventListenersForListenerID(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::EventDispatcher::removeEventListenersForListenerID
          (EventDispatcher *this,basic_string *param_1)

{
  size_t sVar1;
  basic_string *__s2;
  Ref RVar2;
  basic_string bVar3;
  size_t sVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  ulong uVar10;
  Ref *__s1;
  long *plVar11;
  undefined8 *__dest;
  undefined8 *puVar12;
  undefined8 *puVar13;
  Ref *pRVar14;
  void *local_80 [2];
  char local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
                      *)(this + 0x28),param_1);
  if (lVar7 != 0) {
    plVar11 = *(long **)(lVar7 + 0x28);
    puVar13 = (undefined8 *)*plVar11;
    puVar12 = (undefined8 *)plVar11[1];
    if (puVar12 != (undefined8 *)0x0) {
      __dest = (undefined8 *)*puVar12;
      while ((undefined8 *)puVar12[1] != __dest) {
        pRVar14 = (Ref *)*__dest;
        pRVar14[0x80] = (Ref)0x0;
        if (*(Node **)(pRVar14 + 0x88) != (Node *)0x0) {
          dissociateNodeAndEventListener(this,*(Node **)(pRVar14 + 0x88),(EventListener *)pRVar14);
          *(undefined8 *)(pRVar14 + 0x88) = 0;
        }
        if (*(int *)(this + 0x138) == 0) {
          sVar4 = puVar12[1] - (long)(__dest + 1);
          if (sVar4 != 0) {
            memmove(__dest,__dest + 1,sVar4);
          }
          puVar12[1] = __dest + ((long)sVar4 >> 3);
          if (pRVar14 != (Ref *)0x0) {
            Ref::release(pRVar14);
          }
        }
        else {
          __dest = __dest + 1;
        }
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)*puVar13;
      while ((undefined8 *)puVar13[1] != puVar12) {
        pRVar14 = (Ref *)*puVar12;
        pRVar14[0x80] = (Ref)0x0;
        if (*(Node **)(pRVar14 + 0x88) != (Node *)0x0) {
          dissociateNodeAndEventListener(this,*(Node **)(pRVar14 + 0x88),(EventListener *)pRVar14);
          *(undefined8 *)(pRVar14 + 0x88) = 0;
        }
        if (*(int *)(this + 0x138) == 0) {
          sVar4 = puVar13[1] - (long)(puVar12 + 1);
          if (sVar4 != 0) {
            memmove(puVar12,puVar12 + 1,sVar4);
          }
          puVar13[1] = puVar12 + ((long)sVar4 >> 3);
          if (pRVar14 != (Ref *)0x0) {
            Ref::release(pRVar14);
          }
        }
        else {
          puVar12 = puVar12 + 1;
        }
      }
    }
                    /* try { // try from 00fa13cc to 010a1427 has its CatchHandler @ 00fa13cc
                       catch() { ... } // from try @ 00fa13cc with catch @ 00fa13cc
                       catch() { ... } // from try @ 00fa142c with catch @ 00fa13cc */
    lVar8 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                        *)(this + 0x50),param_1);
    if (lVar8 != 0) {
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
      ::remove(local_80,(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                         *)(this + 0x50),lVar8);
      pvVar9 = local_80[0];
      local_80[0] = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
        if ((local_70 != '\0') && ((*(byte *)((long)pvVar9 + 0x10) & 1) != 0)) {
          operator_delete(*(void **)((long)pvVar9 + 0x20));
        }
        operator_delete(pvVar9);
      }
    }
    if (*(int *)(this + 0x138) == 0) {
      puVar13 = (undefined8 *)plVar11[1];
      if (puVar13 != (undefined8 *)0x0) {
                    /* try { // try from 00fa1428 to 010a142b has its CatchHandler @ 00fa1440 */
        pvVar9 = (void *)*puVar13;
                    /* try { // try from 00fa142c to 010a148b has its CatchHandler @ 00fa13cc */
        puVar13[1] = pvVar9;
        if (pvVar9 != (void *)0x0) {
          puVar13[1] = pvVar9;
          operator_delete(pvVar9);
        }
                    /* catch() { ... } // from try @ 00fa1428 with catch @ 00fa1440 */
        operator_delete(puVar13);
        plVar11[1] = 0;
      }
      puVar13 = (undefined8 *)*plVar11;
      if (puVar13 != (undefined8 *)0x0) {
        pvVar9 = (void *)*puVar13;
        puVar13[1] = pvVar9;
        if (pvVar9 != (void *)0x0) {
          puVar13[1] = pvVar9;
          operator_delete(pvVar9);
        }
        operator_delete(puVar13);
        puVar13 = (undefined8 *)plVar11[1];
        *plVar11 = 0;
        if (puVar13 != (undefined8 *)0x0) {
          pvVar9 = (void *)*puVar13;
          if (pvVar9 != (void *)0x0) {
            puVar13[1] = pvVar9;
            operator_delete(pvVar9);
          }
                    /* catch() { ... } // from try @ 00fa14e0 with catch @ 00fa148c */
          operator_delete(puVar13);
          puVar13 = (undefined8 *)*plVar11;
          plVar11[1] = 0;
          if (puVar13 != (undefined8 *)0x0) {
            pvVar9 = (void *)*puVar13;
            if (pvVar9 != (void *)0x0) {
              puVar13[1] = pvVar9;
              operator_delete(pvVar9);
            }
            operator_delete(puVar13);
          }
        }
      }
      operator_delete(plVar11);
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
      ::remove(local_80,(__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
                         *)(this + 0x28),lVar7);
      pvVar9 = local_80[0];
      local_80[0] = (void *)0x0;
      if (pvVar9 != (void *)0x0) {
                    /* try { // try from 00fa14d8 to 010a14df has its CatchHandler @ 00fa14ec */
                    /* try { // try from 00fa14e0 to 010a152f has its CatchHandler @ 00fa148c */
        if ((local_70 != '\0') && ((*(byte *)((long)pvVar9 + 0x10) & 1) != 0)) {
                    /* catch() { ... } // from try @ 00fa14d8 with catch @ 00fa14ec */
          operator_delete(*(void **)((long)pvVar9 + 0x20));
        }
        operator_delete(pvVar9);
      }
    }
  }
  puVar13 = *(undefined8 **)(this + 0xf0);
  puVar12 = *(undefined8 **)(this + 0xf8);
  if (puVar12 != puVar13) {
    do {
      pRVar14 = (Ref *)*puVar13;
      RVar2 = pRVar14[0x68];
      bVar3 = *param_1;
      sVar4 = (ulong)((byte)RVar2 >> 1);
      if (((byte)RVar2 & 1) != 0) {
        sVar4 = *(size_t *)(pRVar14 + 0x70);
      }
      sVar1 = (ulong)((byte)bVar3 >> 1);
      if (((byte)bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 8);
      }
      if (sVar4 == sVar1) {
        __s1 = *(Ref **)(pRVar14 + 0x78);
        if (((byte)RVar2 & 1) == 0) {
          __s1 = pRVar14 + 0x69;
        }
        __s2 = param_1 + 1;
        if (((byte)bVar3 & 1) != 0) {
          __s2 = *(basic_string **)(param_1 + 0x10);
        }
        if (((byte)RVar2 & 1) != 0) {
          if ((sVar4 == 0) || (iVar6 = memcmp(__s1,__s2,sVar4), iVar6 == 0)) goto LAB_00fa15ac;
          goto LAB_00fa150c;
        }
        if (sVar4 == 0) {
LAB_00fa15ac:
          pRVar14[0x80] = (Ref)0x0;
LAB_00fa15b0:
          Ref::release(pRVar14);
          puVar12 = *(undefined8 **)(this + 0xf8);
        }
        else {
          uVar10 = 0;
          do {
            if (*(basic_string *)(pRVar14 + uVar10 + 0x69) != __s2[uVar10]) goto LAB_00fa150c;
            uVar10 = uVar10 + 1;
          } while ((byte)RVar2 >> 1 != uVar10);
          pRVar14[0x80] = (Ref)0x0;
          if (pRVar14 != (Ref *)0x0) goto LAB_00fa15b0;
        }
        sVar4 = (long)puVar12 - (long)(puVar13 + 1);
        if (sVar4 != 0) {
          memmove(puVar13,puVar13 + 1,sVar4);
        }
        puVar12 = puVar13 + ((long)sVar4 >> 3);
        *(undefined8 **)(this + 0xf8) = puVar12;
      }
      else {
LAB_00fa150c:
        puVar13 = puVar13 + 1;
      }
    } while (puVar12 != puVar13);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

