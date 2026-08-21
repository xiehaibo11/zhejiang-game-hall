
/* cocos2d::EventDispatcher::removeEventListener(cocos2d::EventListener*) */

void __thiscall
cocos2d::EventDispatcher::removeEventListener(EventDispatcher *this,EventListener *param_1)

{
  undefined8 *puVar1;
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
  *this_00;
  undefined8 uVar2;
  size_t __n;
  long lVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  basic_string *pbVar10;
  undefined8 *puVar11;
  Ref **local_a8;
  EventDispatcher *pEStack_a0;
  char *local_98;
  char local_8c [4];
  Ref *local_88;
  void *local_80 [2];
  char local_70;
  long local_68;
  
                    /* try { // try from 00f9e9cc to 0109e9d3 has its CatchHandler @ 00f9ea0c */
  lVar3 = tpidr_el0;
                    /* try { // try from 00f9e9d4 to 0109ea1f has its CatchHandler @ 00f9e8cc */
  local_68 = *(long *)(lVar3 + 0x28);
  local_88 = (Ref *)param_1;
  if (param_1 != (EventListener *)0x0) {
    puVar11 = *(undefined8 **)(this + 0x108);
    puVar9 = *(undefined8 **)(this + 0x110);
    if ((puVar11 != puVar9) && ((EventListener *)*puVar11 != param_1)) {
      do {
        if (puVar9 + -1 == puVar11) goto LAB_00f9ea30;
        puVar1 = puVar11 + 1;
                    /* catch() { ... } // from try @ 00f9e9cc with catch @ 00f9ea0c */
        puVar11 = puVar11 + 1;
      } while ((EventListener *)*puVar1 != param_1);
    }
    if (puVar11 == puVar9) {
LAB_00f9ea30:
      local_a8 = &local_88;
      local_98 = local_8c;
      local_8c[0] = '\0';
      this_00 = (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                 *)(this + 0x50);
      plVar4 = (long *)*(long *)(this + 0x38);
      pEStack_a0 = this;
      do {
        if (plVar4 == (long *)0x0) {
          puVar11 = *(undefined8 **)(this + 0xf0);
          puVar9 = *(undefined8 **)(this + 0xf8);
          if (puVar9 == puVar11) goto LAB_00f9eca8;
          if ((Ref *)*puVar11 == local_88) goto LAB_00f9ec60;
          goto LAB_00f9ec44;
        }
        uVar2 = *(undefined8 *)plVar4[5];
        FUN_00f9f570(&local_a8,((undefined8 *)plVar4[5])[1]);
        if (local_8c[0] == '\0') {
          FUN_00f9f570(&local_a8,uVar2);
          if (local_8c[0] != '\0') {
            local_80[0] = (void *)CONCAT44(local_80[0]._4_4_,1);
            pbVar10 = (basic_string *)(local_88 + 0x68);
            lVar5 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                    ::
                    find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                              (this_00,pbVar10);
            if (lVar5 == 0) goto LAB_00f9eaf4;
            uVar7 = *(uint *)(lVar5 + 0x28) | 1;
            goto LAB_00f9eaec;
          }
        }
        else {
          local_80[0] = (void *)CONCAT44(local_80[0]._4_4_,2);
          pbVar10 = (basic_string *)(local_88 + 0x68);
          lVar5 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                  ::
                  find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            (this_00,pbVar10);
          if (lVar5 == 0) {
LAB_00f9eaf4:
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::EventDispatcher::DirtyFlag&>
                      (this_00,pbVar10,pbVar10,(DirtyFlag *)local_80);
          }
          else {
            uVar7 = *(uint *)(lVar5 + 0x28) | 2;
LAB_00f9eaec:
            *(uint *)(lVar5 + 0x28) = uVar7;
          }
        }
                    /* try { // try from 00f9eb08 to 0109eb0f has its CatchHandler @ 00f9eb44 */
        plVar8 = (long *)((undefined8 *)plVar4[5])[1];
                    /* try { // try from 00f9eb10 to 0109eb57 has its CatchHandler @ 00f9ea20 */
        if (((plVar8 == (long *)0x0) || (*plVar8 == plVar8[1])) &&
           ((plVar8 = *(long **)plVar4[5], plVar8 == (long *)0x0 || (*plVar8 == plVar8[1])))) {
          lVar5 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
                  ::
                  find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            (this_00,(basic_string *)(local_88 + 0x68));
                    /* catch() { ... } // from try @ 00f9eb08 with catch @ 00f9eb44 */
          if (lVar5 != 0) {
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::DirtyFlag>>>
            ::remove(local_80,this_00,lVar5);
            pvVar6 = local_80[0];
            local_80[0] = (void *)0x0;
            if (pvVar6 != (void *)0x0) {
              if ((local_70 != '\0') && ((*(byte *)((long)pvVar6 + 0x10) & 1) != 0)) {
                operator_delete(*(void **)((long)pvVar6 + 0x20));
              }
              operator_delete(pvVar6);
            }
          }
          puVar11 = (undefined8 *)plVar4[5];
          lVar5 = *plVar4;
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::EventDispatcher::EventListenerVector*>>>
          ::remove(local_80,this + 0x28,plVar4);
          pvVar6 = local_80[0];
          local_80[0] = (void *)0x0;
          if (pvVar6 != (void *)0x0) {
            if ((local_70 != '\0') && ((*(byte *)((long)pvVar6 + 0x10) & 1) != 0)) {
              operator_delete(*(void **)((long)pvVar6 + 0x20));
            }
            operator_delete(pvVar6);
          }
          if (puVar11 != (undefined8 *)0x0) {
            puVar9 = (undefined8 *)puVar11[1];
            if (puVar9 != (undefined8 *)0x0) {
              pvVar6 = (void *)*puVar9;
              if (pvVar6 != (void *)0x0) {
                puVar9[1] = pvVar6;
                operator_delete(pvVar6);
              }
              operator_delete(puVar9);
            }
            puVar9 = (undefined8 *)*puVar11;
                    /* try { // try from 00f9ebf0 to 0109ed2b has its CatchHandler @ 00f9ebf0
                       catch() { ... } // from try @ 00f9ebf0 with catch @ 00f9ebf0
                       catch() { ... } // from try @ 00f9ed3c with catch @ 00f9ebf0
                       catch() { ... } // from try @ 00f9eeb8 with catch @ 00f9ebf0
                       catch() { ... } // from try @ 00f9efdc with catch @ 00f9ebf0 */
            puVar11[1] = 0;
            if (puVar9 != (undefined8 *)0x0) {
              pvVar6 = (void *)*puVar9;
              if (pvVar6 != (void *)0x0) {
                puVar9[1] = pvVar6;
                operator_delete(pvVar6);
              }
              operator_delete(puVar9);
            }
            operator_delete(puVar11);
          }
        }
        else {
          lVar5 = *plVar4;
        }
        plVar4 = (long *)lVar5;
      } while (local_8c[0] == '\0');
      if (local_88 != (Ref *)0x0) {
        Ref::release(local_88);
      }
    }
  }
  goto LAB_00f9eca8;
  while (puVar1 = puVar11 + 1, puVar11 = puVar11 + 1, (Ref *)*puVar1 != local_88) {
LAB_00f9ec44:
    if (puVar9 + -1 == puVar11) goto LAB_00f9eca8;
  }
LAB_00f9ec60:
  local_88[0x80] = (Ref)0x0;
  if (local_88 != (Ref *)0x0) {
    Ref::release(local_88);
    puVar9 = *(undefined8 **)(this + 0xf8);
  }
  __n = (long)puVar9 - (long)(puVar11 + 1);
  if (__n != 0) {
    memmove(puVar11,puVar11 + 1,__n);
  }
  *(undefined8 **)(this + 0xf8) = puVar11 + ((long)__n >> 3);
LAB_00f9eca8:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

