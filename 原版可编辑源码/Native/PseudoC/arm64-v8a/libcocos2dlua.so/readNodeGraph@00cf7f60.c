
/* WARNING: Type propagation algorithm not settling */
/* cocosbuilder::CCBReader::readNodeGraph(cocos2d::Node*) */

Node * __thiscall cocosbuilder::CCBReader::readNodeGraph(CCBReader *this,Node *param_1)

{
  bool bVar1;
  bool bVar2;
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
  *this_00;
  ulong uVar3;
  ulong *puVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  CCBKeyframe *pCVar8;
  undefined4 uVar9;
  long *plVar10;
  Node *pNVar11;
  long lVar12;
  Node *pNVar13;
  undefined8 *puVar14;
  CCBSequenceProperty *this_01;
  char *pcVar15;
  __tree_node_base **pp_Var16;
  __tree_node_base *p_Var17;
  Ref *pRVar18;
  vector<cocosbuilder::CCBKeyframe*,std::__ndk1::allocator<cocosbuilder::CCBKeyframe*>> *this_02;
  undefined8 uVar19;
  long *plVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  CCBReader *pCVar29;
  undefined8 *puVar30;
  int iVar31;
  long *plVar32;
  CCBAnimationManager *pCVar33;
  long *plVar34;
  void *pvVar35;
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *p_Var36;
  int iVar37;
  CCBReader *pCVar38;
  int local_174;
  void *local_170;
  ulong uStack_168;
  undefined8 *local_160;
  CCBKeyframe *local_150;
  undefined8 uStack_148;
  char *local_140;
  int local_134;
  void *local_130;
  ulong uStack_128;
  undefined8 *local_120;
  void *local_110;
  ulong uStack_108;
  undefined8 *local_100;
  byte local_f0 [16];
  char *local_e0;
  CCBSequenceProperty *local_d8;
  Node *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  void *local_a0;
  ulong uStack_98;
  undefined8 *local_90;
  long local_88;
  undefined4 local_80;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  readCachedString();
  uStack_108 = 0;
  local_100 = (undefined8 *)0x0;
  local_110 = (void *)0x0;
  if (this[0x180] != (CCBReader)0x0) {
    readCachedString();
    if (((ulong)local_110 & 1) != 0) {
      *(undefined1 *)local_100 = 0;
      uStack_108 = 0;
      if (((ulong)local_110 & 1) != 0) {
        operator_delete(local_100);
      }
    }
    uStack_108 = uStack_98;
    local_110 = local_a0;
    local_100 = local_90;
  }
  pCVar38 = this + 0x40;
  iVar21 = *(int *)pCVar38;
  uVar23 = 0xffffffffffffffff;
  pCVar29 = this + 0x44;
  uVar24 = *(uint *)pCVar29;
  do {
    bVar5 = *(byte *)(*(long *)(this + 0x38) + (long)iVar21);
    uVar25 = uVar24 & 0x1f;
    *(uint *)pCVar29 = uVar24 + 1;
    bVar1 = 6 < (int)uVar24;
    uVar24 = uVar24 + 1;
    if (bVar1) {
      uVar24 = 0;
      iVar21 = iVar21 + 1;
      *(int *)pCVar29 = 0;
      *(int *)pCVar38 = iVar21;
    }
    uVar23 = uVar23 + 1;
  } while ((1 << (ulong)uVar25 & (uint)bVar5) == 0);
  if ((int)uVar23 == 0) {
    uVar23 = 0;
    uVar25 = 0;
  }
  else {
    uVar27 = 0;
    uVar28 = uVar23;
    do {
      bVar5 = *(byte *)(*(long *)(this + 0x38) + (long)iVar21);
      uVar25 = uVar24 & 0x1f;
      uVar28 = uVar28 - 1;
      *(uint *)pCVar29 = uVar24 + 1;
      bVar1 = 6 < (int)uVar24;
      uVar24 = uVar24 + 1;
      if (bVar1) {
        uVar24 = 0;
        iVar21 = iVar21 + 1;
        *(int *)pCVar29 = 0;
        *(int *)pCVar38 = iVar21;
      }
      uVar3 = 0;
      if ((1 << (ulong)uVar25 & (uint)bVar5) != 0) {
        uVar3 = 1L << (uVar28 & 0x3f);
      }
      uVar27 = uVar3 | uVar27;
      uVar25 = (uint)uVar27;
    } while (0 < (long)uVar28);
  }
  uVar25 = uVar25 | (uint)(1L << (uVar23 & 0x3f));
  if (uVar24 != 0) {
    *(int *)pCVar29 = 0;
    *(int *)pCVar38 = iVar21 + 1;
  }
  uStack_128 = 0;
  local_120 = (undefined8 *)0x0;
  local_130 = (void *)0x0;
  if (uVar25 != 1) {
    readCachedString();
    if (((ulong)local_130 & 1) != 0) {
      *(undefined1 *)local_120 = 0;
      uStack_128 = 0;
      if (((ulong)local_130 & 1) != 0) {
        operator_delete(local_120);
      }
    }
    uStack_128 = uStack_98;
    local_130 = local_a0;
    local_120 = local_90;
  }
  pcVar15 = (char *)((ulong)local_f0 | 1);
  if ((local_f0[0] & 1) != 0) {
    pcVar15 = local_e0;
  }
  plVar10 = (long *)NodeLoaderLibrary::getNodeLoader(*(NodeLoaderLibrary **)(this + 0xa0),pcVar15);
  if (plVar10 == (long *)0x0) {
    pcVar15 = (char *)((ulong)local_f0 | 1);
    if ((local_f0[0] & 1) != 0) {
      pcVar15 = local_e0;
    }
    cocos2d::log("no corresponding node loader for %s",pcVar15);
    pNVar13 = (Node *)0x0;
    goto joined_r0x00cf8e74;
  }
  pNVar11 = (Node *)(**(code **)(*plVar10 + 0x10))(plVar10,param_1,this);
  lVar12 = CCBAnimationManager::getRootNode(*(CCBAnimationManager **)(this + 0x80));
  if (lVar12 == 0) {
    CCBAnimationManager::setRootNode(*(CCBAnimationManager **)(this + 0x80),pNVar11);
  }
  if ((this[0x180] != (CCBReader)0x0) &&
     (pNVar13 = (Node *)CCBAnimationManager::getRootNode(*(CCBAnimationManager **)(this + 0x80)),
     pNVar11 == pNVar13)) {
    CCBAnimationManager::setDocumentControllerName
              (*(CCBAnimationManager **)(this + 0x80),(basic_string *)&local_110);
  }
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  local_88 = 0;
  local_90 = (undefined8 *)0x0;
  local_80 = 0x3f800000;
  puVar14 = operator_new(0x18);
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = puVar14 + 1;
  lVar12 = *(long *)(this + 0x38);
  iVar21 = *(int *)(this + 0x40);
  uVar24 = *(uint *)(this + 0x44);
  uVar23 = 0xffffffffffffffff;
  *(undefined8 **)(this + 0x98) = puVar14;
  do {
    bVar5 = *(byte *)(lVar12 + iVar21);
    uVar26 = uVar24 & 0x1f;
    *(uint *)pCVar29 = uVar24 + 1;
    bVar1 = 6 < (int)uVar24;
    uVar24 = uVar24 + 1;
    if (bVar1) {
      uVar24 = 0;
      iVar21 = iVar21 + 1;
      *(int *)pCVar29 = 0;
      *(int *)pCVar38 = iVar21;
    }
    uVar23 = uVar23 + 1;
  } while ((1 << (ulong)uVar26 & (uint)bVar5) == 0);
  if ((int)uVar23 == 0) {
    uVar23 = 0;
    uVar26 = 0;
  }
  else {
    uVar27 = 0;
    uVar28 = uVar23;
    do {
      bVar5 = *(byte *)(lVar12 + iVar21);
      uVar26 = uVar24 & 0x1f;
      uVar28 = uVar28 - 1;
      *(uint *)pCVar29 = uVar24 + 1;
      bVar1 = 6 < (int)uVar24;
      uVar24 = uVar24 + 1;
      if (bVar1) {
        uVar24 = 0;
        iVar21 = iVar21 + 1;
        *(int *)pCVar29 = 0;
        *(int *)pCVar38 = iVar21;
      }
      uVar3 = 0;
      if ((1 << (ulong)uVar26 & (uint)bVar5) != 0) {
        uVar3 = 1L << (uVar28 & 0x3f);
      }
      uVar27 = uVar3 | uVar27;
      uVar26 = (uint)uVar27;
    } while (0 < (long)uVar28);
  }
  iVar31 = (uVar26 | (uint)(1L << (uVar23 & 0x3f))) - 1;
  if (uVar24 != 0) {
    iVar21 = iVar21 + 1;
    *(int *)pCVar29 = 0;
    *(int *)pCVar38 = iVar21;
  }
  if (0 < iVar31) {
    uVar24 = 0;
    local_174 = 0;
    while( true ) {
      uVar23 = 0xffffffffffffffff;
      do {
        bVar5 = *(byte *)(lVar12 + iVar21);
        uVar26 = uVar24 & 0x1f;
        *(uint *)pCVar29 = uVar24 + 1;
        bVar1 = 6 < (int)uVar24;
        uVar24 = uVar24 + 1;
        if (bVar1) {
          uVar24 = 0;
          iVar21 = iVar21 + 1;
          *(int *)pCVar29 = 0;
          *(int *)pCVar38 = iVar21;
        }
        uVar23 = uVar23 + 1;
      } while ((1 << (ulong)uVar26 & (uint)bVar5) == 0);
      if ((int)uVar23 == 0) {
        uVar23 = 0;
        uVar26 = 0;
      }
      else {
        uVar27 = 0;
        uVar28 = uVar23;
        do {
          bVar5 = *(byte *)(lVar12 + iVar21);
          uVar26 = uVar24 & 0x1f;
          uVar28 = uVar28 - 1;
          *(uint *)pCVar29 = uVar24 + 1;
          bVar1 = 6 < (int)uVar24;
          uVar24 = uVar24 + 1;
          if (bVar1) {
            uVar24 = 0;
            iVar21 = iVar21 + 1;
            *(int *)pCVar29 = 0;
            *(int *)pCVar38 = iVar21;
          }
          uVar3 = 0;
          if ((1 << (ulong)uVar26 & (uint)bVar5) != 0) {
            uVar3 = 1L << (uVar28 & 0x3f);
          }
          uVar27 = uVar3 | uVar27;
          uVar26 = (uint)uVar27;
        } while (0 < (long)uVar28);
      }
      local_134 = (uVar26 | (uint)(1L << (uVar23 & 0x3f))) - 1;
      if (uVar24 != 0) {
        iVar21 = iVar21 + 1;
        *(int *)pCVar29 = 0;
        *(int *)pCVar38 = iVar21;
      }
      uVar24 = 0;
      local_b0 = 0x3f800000;
      uVar23 = 0xffffffffffffffff;
      uStack_c8 = 0;
      local_d0 = (Node *)0x0;
      uStack_b8 = 0;
      local_c0 = 0;
      do {
        bVar5 = *(byte *)(lVar12 + iVar21);
        uVar26 = uVar24 & 0x1f;
        *(uint *)pCVar29 = uVar24 + 1;
        bVar1 = 6 < (int)uVar24;
        uVar24 = uVar24 + 1;
        if (bVar1) {
          uVar24 = 0;
          iVar21 = iVar21 + 1;
          *(int *)pCVar29 = 0;
          *(int *)pCVar38 = iVar21;
        }
        uVar23 = uVar23 + 1;
      } while ((1 << (ulong)uVar26 & (uint)bVar5) == 0);
      if ((int)uVar23 == 0) {
        uVar23 = 0;
        uVar26 = 0;
      }
      else {
        uVar27 = 0;
        uVar28 = uVar23;
        do {
          bVar5 = *(byte *)(lVar12 + iVar21);
          uVar26 = uVar24 & 0x1f;
          uVar28 = uVar28 - 1;
          *(uint *)pCVar29 = uVar24 + 1;
          bVar1 = 6 < (int)uVar24;
          uVar24 = uVar24 + 1;
          if (bVar1) {
            uVar24 = 0;
            iVar21 = iVar21 + 1;
            *(int *)pCVar29 = 0;
            *(int *)pCVar38 = iVar21;
          }
          uVar3 = 0;
          if ((1 << (ulong)uVar26 & (uint)bVar5) != 0) {
            uVar3 = 1L << (uVar28 & 0x3f);
          }
          uVar27 = uVar3 | uVar27;
          uVar26 = (uint)uVar27;
        } while (0 < (long)uVar28);
      }
      iVar6 = (uVar26 | (uint)(1L << (uVar23 & 0x3f))) - 1;
      if (uVar24 != 0) {
        *(int *)pCVar29 = 0;
        *(int *)pCVar38 = iVar21 + 1;
      }
      if (0 < iVar6) {
        iVar21 = 0;
        do {
          this_01 = operator_new(0x60,(nothrow_t *)&std::nothrow);
          if (this_01 != (CCBSequenceProperty *)0x0) {
            CCBSequenceProperty::CCBSequenceProperty(this_01);
          }
          cocos2d::Ref::autorelease((Ref *)this_01);
          readCachedString();
          pcVar15 = (char *)((ulong)&local_150 | 1);
          if (((ulong)local_150 & 1) != 0) {
            pcVar15 = local_140;
          }
          CCBSequenceProperty::setName(this_01,pcVar15);
          if (((ulong)local_150 & 1) != 0) {
            operator_delete(local_140);
          }
          iVar22 = *(int *)(this + 0x40);
          uVar24 = *(uint *)(this + 0x44);
          uVar23 = 0xffffffffffffffff;
          do {
            bVar5 = *(byte *)(*(long *)(this + 0x38) + (long)iVar22);
            uVar26 = uVar24 & 0x1f;
            *(uint *)pCVar29 = uVar24 + 1;
            bVar1 = 6 < (int)uVar24;
            uVar24 = uVar24 + 1;
            if (bVar1) {
              uVar24 = 0;
              iVar22 = iVar22 + 1;
              *(int *)pCVar29 = 0;
              *(int *)pCVar38 = iVar22;
            }
            uVar23 = uVar23 + 1;
          } while ((1 << (ulong)uVar26 & (uint)bVar5) == 0);
          if ((int)uVar23 == 0) {
            uVar23 = 0;
            uVar26 = 0;
          }
          else {
            uVar27 = 0;
            uVar28 = uVar23;
            do {
              bVar5 = *(byte *)(*(long *)(this + 0x38) + (long)iVar22);
              uVar26 = uVar24 & 0x1f;
              uVar28 = uVar28 - 1;
              *(uint *)pCVar29 = uVar24 + 1;
              bVar1 = 6 < (int)uVar24;
              uVar24 = uVar24 + 1;
              if (bVar1) {
                uVar24 = 0;
                iVar22 = iVar22 + 1;
                *(int *)pCVar29 = 0;
                *(int *)pCVar38 = iVar22;
              }
              uVar3 = 0;
              if ((1 << (ulong)uVar26 & (uint)bVar5) != 0) {
                uVar3 = 1L << (uVar28 & 0x3f);
              }
              uVar27 = uVar3 | uVar27;
              uVar26 = (uint)uVar27;
            } while (0 < (long)uVar28);
          }
          if (uVar24 != 0) {
            *(int *)pCVar29 = 0;
            *(int *)pCVar38 = iVar22 + 1;
          }
          CCBSequenceProperty::setType(this_01,(uVar26 | (uint)(1L << (uVar23 & 0x3f))) - 1);
          p_Var36 = *(__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      **)(this + 0x98);
          pcVar15 = (char *)CCBSequenceProperty::getName(this_01);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_150,pcVar15);
          pp_Var16 = std::__ndk1::
                     __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                     ::
                     __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               (p_Var36,(__tree_end_node **)&local_d8,(basic_string *)&local_150);
          if (*pp_Var16 == (__tree_node_base *)0x0) {
            p_Var17 = operator_new(0x38);
            pcVar15 = local_140;
            uVar19 = uStack_148;
            pCVar8 = local_150;
            uStack_148 = 0;
            local_140 = (char *)0x0;
            local_150 = (CCBKeyframe *)0x0;
            *(undefined8 *)p_Var17 = 0;
            *(undefined8 *)(p_Var17 + 8) = 0;
            *(char **)(p_Var17 + 0x30) = pcVar15;
            *(undefined8 *)(p_Var17 + 0x28) = uVar19;
            *(CCBKeyframe **)(p_Var17 + 0x20) = pCVar8;
            *(CCBSequenceProperty **)(p_Var17 + 0x10) = local_d8;
            *pp_Var16 = p_Var17;
            if (**(long **)p_Var36 != 0) {
              *(long *)p_Var36 = **(long **)p_Var36;
              p_Var17 = *pp_Var16;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(p_Var36 + 8),p_Var17);
            *(long *)(p_Var36 + 0x10) = *(long *)(p_Var36 + 0x10) + 1;
          }
          if (((ulong)local_150 & 1) != 0) {
            operator_delete(local_140);
          }
          iVar22 = *(int *)(this + 0x40);
          uVar24 = *(uint *)(this + 0x44);
          uVar23 = 0xffffffffffffffff;
          do {
            bVar5 = *(byte *)(*(long *)(this + 0x38) + (long)iVar22);
            uVar26 = uVar24 & 0x1f;
            *(uint *)pCVar29 = uVar24 + 1;
            bVar1 = 6 < (int)uVar24;
            uVar24 = uVar24 + 1;
            if (bVar1) {
              uVar24 = 0;
              iVar22 = iVar22 + 1;
              *(int *)pCVar29 = 0;
              *(int *)pCVar38 = iVar22;
            }
            uVar23 = uVar23 + 1;
          } while ((1 << (ulong)uVar26 & (uint)bVar5) == 0);
          if ((int)uVar23 == 0) {
            uVar23 = 0;
            uVar26 = 0;
          }
          else {
            uVar27 = 0;
            uVar28 = uVar23;
            do {
              bVar5 = *(byte *)(*(long *)(this + 0x38) + (long)iVar22);
              uVar26 = uVar24 & 0x1f;
              uVar28 = uVar28 - 1;
              *(uint *)pCVar29 = uVar24 + 1;
              bVar1 = 6 < (int)uVar24;
              uVar24 = uVar24 + 1;
              if (bVar1) {
                uVar24 = 0;
                iVar22 = iVar22 + 1;
                *(int *)pCVar29 = 0;
                *(int *)pCVar38 = iVar22;
              }
              uVar3 = 0;
              if ((1 << (ulong)uVar26 & (uint)bVar5) != 0) {
                uVar3 = 1L << (uVar28 & 0x3f);
              }
              uVar27 = uVar3 | uVar27;
              uVar26 = (uint)uVar27;
            } while (0 < (long)uVar28);
          }
          iVar37 = (uVar26 | (uint)(1L << (uVar23 & 0x3f))) - 1;
          if (uVar24 != 0) {
            *(int *)pCVar29 = 0;
            *(int *)pCVar38 = iVar22 + 1;
          }
          if (0 < iVar37) {
            do {
              uVar9 = CCBSequenceProperty::getType(this_01);
              pRVar18 = (Ref *)readKeyframe(this,uVar9);
              this_02 = (vector<cocosbuilder::CCBKeyframe*,std::__ndk1::allocator<cocosbuilder::CCBKeyframe*>>
                         *)CCBSequenceProperty::getKeyframes(this_01);
              puVar14 = *(undefined8 **)(this_02 + 8);
              local_150 = (CCBKeyframe *)pRVar18;
              if (puVar14 == *(undefined8 **)(this_02 + 0x10)) {
                std::__ndk1::
                vector<cocosbuilder::CCBKeyframe*,std::__ndk1::allocator<cocosbuilder::CCBKeyframe*>>
                ::__push_back_slow_path<cocosbuilder::CCBKeyframe*const&>(this_02,&local_150);
              }
              else {
                *puVar14 = pRVar18;
                *(undefined8 **)(this_02 + 8) = puVar14 + 1;
              }
              cocos2d::Ref::retain((Ref *)local_150);
              iVar37 = iVar37 + -1;
            } while (iVar37 != 0);
          }
          pcVar15 = (char *)CCBSequenceProperty::getName(this_01);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_150,pcVar15);
          local_d8 = this_01;
          cocos2d::Ref::retain((Ref *)this_01);
          cocos2d::
          Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
          ::erase((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
                   *)&local_d0,(basic_string *)&local_150);
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocosbuilder::CCBSequenceProperty*&>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>
                      *)&local_d0,(basic_string *)&local_150,(basic_string *)&local_150,&local_d8);
          if (((ulong)local_150 & 1) != 0) {
            operator_delete(local_140);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 != iVar6);
      }
      local_150 = (CCBKeyframe *)&local_134;
      lVar12 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>>
               ::
               __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
                         ((int *)&local_a0,(piecewise_construct_t *)&local_134,
                          (tuple *)&DAT_01417f21,(tuple *)&local_150);
      this_00 = (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
                 *)(lVar12 + 0x18);
      if (this_00 !=
          (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
           *)&local_d0) {
        cocos2d::
        Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
        ::clear(this_00);
        *(undefined4 *)(lVar12 + 0x38) = local_b0;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>
        ::
        __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,void*>*>>
                  ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>>>
                    *)this_00,local_c0,0);
        for (plVar32 = *(long **)(lVar12 + 0x28); plVar32 != (long *)0x0; plVar32 = (long *)*plVar32
            ) {
          cocos2d::Ref::retain((Ref *)plVar32[5]);
        }
      }
      cocos2d::
      Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
      ::~Map((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
              *)&local_d0);
      local_174 = local_174 + 1;
      if (local_174 == iVar31) break;
      lVar12 = *(long *)(this + 0x38);
      iVar21 = *(int *)(this + 0x40);
      uVar24 = *(uint *)(this + 0x44);
    }
    if (local_88 != 0) {
      CCBAnimationManager::addNode
                (*(CCBAnimationManager **)(this + 0x80),pNVar11,(unordered_map *)&local_a0);
    }
  }
  (**(code **)(*plVar10 + 0x18))(plVar10,pNVar11,param_1,this);
  if (pNVar11 == (Node *)0x0) {
    bVar1 = false;
    pNVar13 = (Node *)0x0;
    uVar23 = uStack_128;
    puVar14 = local_120;
  }
  else {
    lVar12 = __dynamic_cast(pNVar11,&cocos2d::Node::typeinfo,&CCBFile::typeinfo,0);
    if (lVar12 == 0) {
      bVar1 = false;
      pNVar13 = pNVar11;
      uVar23 = uStack_128;
      puVar14 = local_120;
    }
    else {
      pNVar13 = *(Node **)(pNVar11 + 0x2f8);
      uVar19 = (**(code **)(*(long *)pNVar11 + 0xb0))(pNVar11);
      (**(code **)(*(long *)pNVar13 + 0x98))(pNVar13,uVar19);
      (**(code **)(*(long *)pNVar11 + 0x188))(pNVar11);
      (**(code **)(*(long *)pNVar13 + 0x180))(pNVar13);
      (**(code **)(*(long *)pNVar11 + 0x58))(pNVar11);
      (**(code **)(*(long *)pNVar13 + 0x50))(pNVar13);
      (**(code **)(*(long *)pNVar11 + 0x68))(pNVar11);
      (**(code **)(*(long *)pNVar13 + 0x60))(pNVar13);
      uVar9 = (**(code **)(*(long *)pNVar11 + 0x2b8))(pNVar11);
      (**(code **)(*(long *)pNVar13 + 0x2c0))(pNVar13,uVar9);
      (**(code **)(*(long *)pNVar13 + 0x170))(pNVar13,1);
      CCBAnimationManager::moveAnimationsFromNode
                (*(CCBAnimationManager **)(this + 0x80),pNVar11,pNVar13);
      if (*(Ref **)(pNVar11 + 0x2f8) != (Ref *)0x0) {
        cocos2d::Ref::release(*(Ref **)(pNVar11 + 0x2f8));
      }
      *(undefined8 *)(pNVar11 + 0x2f8) = 0;
      bVar1 = true;
      uVar23 = uStack_128;
      puVar14 = local_120;
    }
  }
  uStack_128 = uVar23;
  local_120 = puVar14;
  if (uVar25 != 1) {
    if (this[0x180] == (CCBReader)0x0) {
      if (uVar25 == 2) {
        lVar12 = CCBAnimationManager::getRootNode(*(CCBAnimationManager **)(this + 0x80));
      }
      else {
        if (uVar25 != 3) goto LAB_00cf8c94;
        lVar12 = *(long *)(this + 0x78);
      }
      if (lVar12 != 0) {
        plVar32 = (long *)__dynamic_cast(lVar12,&cocos2d::Ref::typeinfo,
                                         &CCBMemberVariableAssigner::typeinfo,0xfffffffffffffffe);
        if (plVar32 != (long *)0x0) {
          puVar14 = (undefined8 *)((ulong)&local_130 | 1);
          if (((ulong)local_130 & 1) != 0) {
            puVar14 = local_120;
          }
          uVar23 = (**(code **)(*plVar32 + 0x10))(plVar32,lVar12,puVar14,pNVar13);
          if ((uVar23 & 1) != 0) goto LAB_00cf8c94;
        }
        plVar32 = *(long **)(this + 0xb0);
        if (plVar32 != (long *)0x0) {
          puVar14 = (undefined8 *)((ulong)&local_130 | 1);
          if (((ulong)local_130 & 1) != 0) {
            puVar14 = local_120;
          }
          (**(code **)(*plVar32 + 0x10))(plVar32,lVar12,puVar14,pNVar13);
        }
      }
    }
    else if (uVar25 == 2) {
      pCVar33 = *(CCBAnimationManager **)(this + 0x80);
      uStack_168 = 0;
      local_160 = (undefined8 *)0x0;
      local_170 = (void *)0x0;
      pvVar35 = local_130;
      if (((ulong)local_130 & 1) != 0) {
        if (0xffffffffffffffef < uVar23) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar23 < 0x17) {
          puVar30 = (undefined8 *)((ulong)&local_170 | 1);
          local_170 = (void *)(ulong)(byte)((int)uVar23 << 1);
          if (uVar23 != 0) goto LAB_00cf8be8;
        }
        else {
          uVar28 = uVar23 + 0x10 & 0xfffffffffffffff0;
          puVar30 = operator_new(uVar28);
          local_170 = (void *)(uVar28 | 1);
          uStack_168 = uVar23;
          local_160 = puVar30;
LAB_00cf8be8:
          memcpy(puVar30,puVar14,uVar23);
        }
        *(undefined1 *)((long)puVar30 + uVar23) = 0;
        pvVar35 = local_170;
        uVar23 = uStack_168;
        puVar14 = local_160;
      }
      local_160 = puVar14;
      uStack_168 = uVar23;
      local_170 = pvVar35;
      CCBAnimationManager::addDocumentOutletName(pCVar33,&local_170);
      if (((ulong)local_170 & 1) != 0) {
        operator_delete(local_160);
      }
      CCBAnimationManager::addDocumentOutletNode(*(CCBAnimationManager **)(this + 0x80),pNVar13);
    }
    else {
      puVar4 = *(ulong **)(this + 200);
      if (puVar4 == *(ulong **)(this + 0xd0)) {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)(this + 0xc0),(basic_string *)&local_130);
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        if (((ulong)local_130 & 1) == 0) {
          puVar4[2] = (ulong)puVar14;
          puVar4[1] = uVar23;
          *puVar4 = (ulong)local_130;
        }
        else {
          if (0xffffffffffffffef < uVar23) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar23 < 0x17) {
            pvVar35 = (void *)((long)puVar4 + 1);
            *(char *)puVar4 = (char)((int)uVar23 << 1);
            if (uVar23 != 0) goto LAB_00cf8c48;
          }
          else {
            uVar28 = uVar23 + 0x10 & 0xfffffffffffffff0;
            pvVar35 = operator_new(uVar28);
            puVar4[1] = uVar23;
            puVar4[2] = (ulong)pvVar35;
            *puVar4 = uVar28 | 1;
LAB_00cf8c48:
            memcpy(pvVar35,puVar14,uVar23);
          }
          *(undefined1 *)((long)pvVar35 + uVar23) = 0;
        }
        *(ulong **)(this + 200) = puVar4 + 3;
      }
      puVar14 = *(undefined8 **)(this + 0xe0);
      local_d0 = pNVar13;
      if (puVar14 == *(undefined8 **)(this + 0xe8)) {
        std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
        __push_back_slow_path<cocos2d::Node*const&>
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0xd8),
                   &local_d0);
      }
      else {
        *puVar14 = pNVar13;
        *(undefined8 **)(this + 0xe0) = puVar14 + 1;
      }
      cocos2d::Ref::retain((Ref *)local_d0);
    }
  }
LAB_00cf8c94:
  lVar12 = (**(code **)(*plVar10 + 0x20))();
  if ((((*(long *)(lVar12 + 0x18) != 0) && (this[0x180] == (CCBReader)0x0)) &&
      (pNVar13 != (Node *)0x0)) &&
     (plVar32 = (long *)__dynamic_cast(pNVar13,&cocos2d::Ref::typeinfo,
                                       &CCBMemberVariableAssigner::typeinfo,0xfffffffffffffffe),
     plVar32 != (long *)0x0)) {
    lVar12 = (**(code **)(*plVar10 + 0x20))();
    for (plVar34 = *(long **)(lVar12 + 0x10); plVar34 != (long *)0x0; plVar34 = (long *)*plVar34) {
      if ((*(byte *)(plVar34 + 2) & 1) == 0) {
        lVar12 = (long)plVar34 + 0x11;
      }
      else {
        lVar12 = plVar34[4];
      }
      uVar23 = (**(code **)(*plVar32 + 0x18))(plVar32,pNVar13,lVar12,plVar34 + 5);
      if (((uVar23 & 1) == 0) && (plVar20 = *(long **)(this + 0xb0), plVar20 != (long *)0x0)) {
        if ((*(byte *)(plVar34 + 2) & 1) == 0) {
          lVar12 = (long)plVar34 + 0x11;
        }
        else {
          lVar12 = plVar34[4];
        }
        (**(code **)(*plVar20 + 0x18))(plVar20,pNVar13,lVar12,plVar34 + 5);
      }
    }
  }
  p_Var36 = *(__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              **)(this + 0x98);
  if (p_Var36 !=
      (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
       *)0x0) {
    std::__ndk1::
    __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::destroy(p_Var36,*(__tree_node **)(p_Var36 + 8));
    operator_delete(p_Var36);
  }
  iVar21 = *(int *)(this + 0x40);
  uVar24 = *(uint *)(this + 0x44);
  uVar23 = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x98) = 0;
  do {
    bVar5 = *(byte *)(*(long *)(this + 0x38) + (long)iVar21);
    uVar25 = uVar24 & 0x1f;
    *(uint *)pCVar29 = uVar24 + 1;
    bVar2 = 6 < (int)uVar24;
    uVar24 = uVar24 + 1;
    if (bVar2) {
      uVar24 = 0;
      iVar21 = iVar21 + 1;
      *(int *)pCVar29 = 0;
      *(int *)pCVar38 = iVar21;
    }
    uVar23 = uVar23 + 1;
  } while ((1 << (ulong)uVar25 & (uint)bVar5) == 0);
  if ((int)uVar23 == 0) {
    uVar23 = 0;
    uVar25 = 0;
  }
  else {
    uVar27 = 0;
    uVar28 = uVar23;
    do {
      bVar5 = *(byte *)(*(long *)(this + 0x38) + (long)iVar21);
      uVar25 = uVar24 & 0x1f;
      uVar28 = uVar28 - 1;
      *(uint *)pCVar29 = uVar24 + 1;
      bVar2 = 6 < (int)uVar24;
      uVar24 = uVar24 + 1;
      if (bVar2) {
        uVar24 = 0;
        iVar21 = iVar21 + 1;
        *(int *)pCVar29 = 0;
        *(int *)pCVar38 = iVar21;
      }
      uVar3 = 0;
      if ((1 << (ulong)uVar25 & (uint)bVar5) != 0) {
        uVar3 = 1L << (uVar28 & 0x3f);
      }
      uVar27 = uVar3 | uVar27;
      uVar25 = (uint)uVar27;
    } while (0 < (long)uVar28);
  }
  iVar31 = (uVar25 | (uint)(1L << (uVar23 & 0x3f))) - 1;
  if (uVar24 != 0) {
    *(int *)pCVar29 = 0;
    *(int *)pCVar38 = iVar21 + 1;
  }
  if (0 < iVar31) {
    do {
      uVar19 = readNodeGraph(this,pNVar13);
      (**(code **)(*(long *)pNVar13 + 0x208))(pNVar13,uVar19);
      iVar31 = iVar31 + -1;
    } while (iVar31 != 0);
  }
  pvVar35 = local_a0;
  puVar14 = local_90;
  if (!bVar1) {
    if ((pNVar13 == (Node *)0x0) ||
       (plVar32 = (long *)__dynamic_cast(pNVar13,&cocos2d::Node::typeinfo,
                                         &NodeLoaderListener::typeinfo,0xfffffffffffffffe),
       plVar32 == (long *)0x0)) {
      plVar32 = *(long **)(this + 0xa8);
      pvVar35 = local_a0;
      puVar14 = local_90;
      if (plVar32 != (long *)0x0) {
        (**(code **)(*plVar32 + 0x10))(plVar32,pNVar13,plVar10);
        pvVar35 = local_a0;
        puVar14 = local_90;
      }
    }
    else {
      (**(code **)(*plVar32 + 0x10))(plVar32,pNVar13,plVar10);
      pvVar35 = local_a0;
      puVar14 = local_90;
    }
  }
  while (puVar14 != (undefined8 *)0x0) {
    puVar30 = (undefined8 *)*puVar14;
    local_a0 = pvVar35;
    cocos2d::
    Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
    ::~Map((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocosbuilder::CCBSequenceProperty*>
            *)(puVar14 + 3));
    operator_delete(puVar14);
    pvVar35 = local_a0;
    puVar14 = puVar30;
  }
  local_a0 = (void *)0x0;
  if (pvVar35 != (void *)0x0) {
    operator_delete(pvVar35);
  }
joined_r0x00cf8e74:
  if (((ulong)local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if (((ulong)local_110 & 1) != 0) {
    operator_delete(local_100);
  }
  if ((local_f0[0] & 1) != 0) {
    operator_delete(local_e0);
  }
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pNVar13;
}

