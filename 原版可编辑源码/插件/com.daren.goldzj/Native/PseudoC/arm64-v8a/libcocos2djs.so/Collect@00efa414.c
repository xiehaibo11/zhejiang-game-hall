
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00efa5bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Coverage::Collect(v8::internal::Isolate*, v8::debug::CoverageMode) */

void __thiscall v8::internal::Coverage::Collect(long *param_1,Coverage *this,int param_3)

{
  Coverage *pCVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  long lVar6;
  CoverageBlock *pCVar7;
  bool bVar8;
  bool bVar9;
  uint extraout_w0;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong *puVar13;
  CoverageBlock *pCVar14;
  vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>> *this_00;
  void *pvVar15;
  void *pvVar16;
  CoverageBlock *pCVar17;
  size_t sVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  void *pvVar22;
  long lVar23;
  long lVar24;
  TemplateHashMapEntry *pTVar25;
  long lVar26;
  int *piVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  ulong *puVar31;
  int iVar32;
  ulong uVar33;
  vector<v8::internal::CoverageScript,std::__ndk1::allocator<v8::internal::CoverageScript>> *this_01
  ;
  ulong *puVar34;
  void *pvVar35;
  uint uVar36;
  ulong *__dest;
  undefined4 uVar37;
  ulong local_6c0;
  CoverageBlock *local_6b8;
  CoverageBlock *local_6b0;
  CoverageBlock *local_6a8;
  ulong *local_6a0;
  ulong local_698;
  Iterator aIStack_690 [16];
  uint local_680;
  uint local_67c;
  ulong local_678;
  code *local_670;
  TemplateHashMapEntry *local_668;
  int local_660;
  undefined4 local_65c;
  undefined8 local_650;
  uint uStack_648;
  undefined4 uStack_644;
  ulong *local_640;
  CoverageBlock *local_638;
  CoverageBlock *pCStack_630;
  CoverageBlock *local_628;
  undefined1 local_620;
  long *local_c8;
  CoverageBlock *local_b0;
  CoverageBlock *pCStack_a8;
  CoverageBlock *local_a0;
  undefined8 local_98;
  undefined1 uStack_8f;
  undefined8 local_8c;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  local_668 = malloc(0xc0);
  if (local_668 == (TemplateHashMapEntry *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  pCVar1 = this + 0x95a0;
  local_660 = 8;
  local_668[0x10] = (TemplateHashMapEntry)0x0;
  local_668[0x28] = (TemplateHashMapEntry)0x0;
  local_668[0x40] = (TemplateHashMapEntry)0x0;
  local_668[0x58] = (TemplateHashMapEntry)0x0;
  uVar19 = 4;
  lVar23 = 0x70;
  do {
    uVar19 = uVar19 + 1;
    local_668[lVar23] = (TemplateHashMapEntry)0x0;
    lVar23 = lVar23 + 0x18;
  } while (uVar19 < 8);
  local_65c = 0;
  if (*(int *)(this + 0xb810) - 1U < 4) {
    lVar23 = 0;
    iVar32 = 4;
    pTVar25 = local_668;
    do {
      uVar19 = *(ulong *)(this + 0xf80);
      if (*(uint *)(uVar19 + 3) < 2) {
        if (-1 < lVar23) goto LAB_00efa858;
      }
      else if (*(int *)(uVar19 + 7) >> 1 <= lVar23) goto LAB_00efa858;
      uVar12 = uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(uVar19 + (long)iVar32 + 7);
      uVar36 = *(uint *)(uVar12 + 0x13);
      local_650 = uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 3);
      if (param_3 != 0) {
        *(undefined4 *)(uVar12 + 0x13) = 0;
      }
      pTVar25 = base::
                TemplateHashMapImpl<v8::internal::SharedFunctionInfo,unsigned_int,v8::base::KeyEqualityMatcher<v8::internal::Object>,v8::base::DefaultAllocationPolicy>
                ::
                LookupOrInsert<v8::internal::SharedToCounterMap::Add(v8::internal::SharedFunctionInfo,unsigned_int)::_lambda()_1_>
                          (pTVar25,&local_650,(ulong)*(uint *)(uVar12 + 3),&local_b0);
      lVar23 = lVar23 + 1;
      iVar32 = iVar32 + 4;
      iVar4 = uVar36 + *(uint *)(pTVar25 + 8);
      if (CARRY4(uVar36,*(uint *)(pTVar25 + 8))) {
        iVar4 = -1;
      }
      *(int *)(pTVar25 + 8) = iVar4;
    } while( true );
  }
  if (*(int *)(this + 0xb810) == 0) {
    HeapObjectIterator::HeapObjectIterator((HeapObjectIterator *)&local_b0,this + 0x8850,0);
    uVar19 = HeapObjectIterator::Next((HeapObjectIterator *)&local_b0);
    iVar32 = (int)uVar19;
    uVar12 = local_650;
    while (iVar32 != 0) {
      uVar28 = uVar19 & 0xffffffff00000000;
      uVar33 = uVar28 | 7;
      if (*(short *)(uVar33 + *(uint *)(uVar19 - 1)) == 0x439) {
        uVar36 = *(uint *)(uVar19 + 0xb);
        uVar29 = uVar28 | uVar36;
        local_650 = uVar28 | *(uint *)(uVar29 + 0xf);
        if (*(short *)(uVar33 + *(uint *)(local_650 - 1)) == 0x5b) {
          local_650 = uVar28 | *(uint *)(local_650 + 0xb);
        }
        if (((((local_650 & 1) == 0) ||
             ((int)local_650 != *(int *)((local_650 & 0xffffffff00000000) + 0xa0))) &&
            (uVar10 = Script::IsUserJavaScript((Script *)&local_650), uVar12 = local_650,
            (uVar10 & 1) != 0)) &&
           (((*(uint *)(uVar29 + 3) & 1) == 0 ||
            (*(short *)(uVar33 + *(uint *)((uVar28 | *(uint *)(uVar29 + 3)) - 1)) != 0x57)))) {
          uVar30 = *(uint *)((uVar28 | *(uint *)(uVar19 + 0xb)) + 3);
          if (((uVar30 == 0x84) ||
              (((uVar30 & 1) != 0 &&
               (*(ushort *)(uVar33 + *(uint *)((uVar28 | uVar30) - 1)) - 0x95 < 2)))) ||
             (*(short *)(uVar33 + *(uint *)((uVar28 | *(uint *)((uVar28 | *(uint *)(uVar19 + 0x13))
                                                               + 3)) - 1)) != 0x9f)) {
            uVar30 = *(uint *)((uVar28 | *(uint *)(uVar19 + 0xb)) + 3);
            if ((uVar30 == 0x84) ||
               ((((uVar30 & 1) != 0 &&
                 (*(ushort *)(uVar33 + *(uint *)((uVar28 | uVar30) - 1)) - 0x95 < 2)) ||
                (*(short *)(uVar33 + *(uint *)((uVar28 | *(uint *)((uVar28 | *(uint *)(uVar19 + 0x13
                                                                                      )) + 3)) - 1))
                 != 0x81)))) goto LAB_00efa5d0;
          }
          uVar30 = *(uint *)((uVar28 | *(uint *)(uVar19 + 0xb)) + 3);
          if ((uVar30 == 0x84) ||
             ((((uVar30 & 1) != 0 &&
               (*(ushort *)(uVar33 + *(uint *)((uVar28 | uVar30) - 1)) - 0x95 < 2)) ||
              (uVar12 = uVar28 | *(uint *)((uVar28 | *(uint *)(uVar19 + 0x13)) + 3),
              *(short *)(uVar33 + *(uint *)(uVar12 - 1)) != 0x9f)))) {
            uVar30 = (uint)(*(int *)((uVar28 | *(uint *)(uVar19 + 0x13)) + 7) <
                           FLAG_budget_for_feedback_vector_allocation);
          }
          else {
            uVar30 = *(uint *)(uVar12 + 0x13);
          }
          local_650 = uVar29;
          pTVar25 = base::
                    TemplateHashMapImpl<v8::internal::SharedFunctionInfo,unsigned_int,v8::base::KeyEqualityMatcher<v8::internal::Object>,v8::base::DefaultAllocationPolicy>
                    ::
                    LookupOrInsert<v8::internal::SharedToCounterMap::Add(v8::internal::SharedFunctionInfo,unsigned_int)::_lambda()_1_>
                              (uVar10,&local_650,(ulong)uVar36,&local_6b8);
          iVar32 = uVar30 + *(uint *)(pTVar25 + 8);
          if (CARRY4(uVar30,*(uint *)(pTVar25 + 8))) {
            iVar32 = -1;
          }
          *(int *)(pTVar25 + 8) = iVar32;
          uVar12 = local_650;
        }
      }
LAB_00efa5d0:
      local_650 = uVar12;
      uVar19 = HeapObjectIterator::Next((HeapObjectIterator *)&local_b0);
      uVar12 = local_650;
      iVar32 = (int)uVar19;
    }
    local_650 = uVar12;
    StackFrameIterator::StackFrameIterator((StackFrameIterator *)&local_650,(Isolate *)this);
    if (local_c8 != (long *)0x0) {
      JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_650);
      while (local_c8 != (long *)0x0) {
        uVar19 = (**(code **)(*local_c8 + 0x98))();
        uVar36 = *(uint *)(uVar19 + 0xb);
        uVar12 = (ulong)(local_660 - 1U & uVar36);
        pTVar25 = local_668 + uVar12 * 0x18;
        if ((pTVar25[0x10] != (TemplateHashMapEntry)0x0) &&
           (uVar36 != *(uint *)(local_668 + uVar12 * 0x18))) {
          do {
            uVar12 = (ulong)((int)uVar12 + 1U & local_660 - 1U);
            if (local_668[uVar12 * 0x18 + 0x10] == (TemplateHashMapEntry)0x0) break;
          } while (uVar36 != *(uint *)(local_668 + uVar12 * 0x18));
          pTVar25 = local_668 + uVar12 * 0x18;
        }
        if (((pTVar25 == (TemplateHashMapEntry *)0x0) ||
            (pTVar25[0x10] == (TemplateHashMapEntry)0x0)) || (*(int *)(pTVar25 + 8) == 0)) {
          local_6b8 = (CoverageBlock *)(uVar19 & 0xffffffff00000000 | (ulong)uVar36);
          pTVar25 = base::
                    TemplateHashMapImpl<v8::internal::SharedFunctionInfo,unsigned_int,v8::base::KeyEqualityMatcher<v8::internal::Object>,v8::base::DefaultAllocationPolicy>
                    ::
                    LookupOrInsert<v8::internal::SharedToCounterMap::Add(v8::internal::SharedFunctionInfo,unsigned_int)::_lambda()_1_>
                              (uVar19,&local_6b8,(ulong)uVar36,aIStack_690);
          iVar32 = *(int *)(pTVar25 + 8) + 1;
          if (*(int *)(pTVar25 + 8) == -1) {
            iVar32 = -1;
          }
          *(int *)(pTVar25 + 8) = iVar32;
        }
        JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)&local_650);
      }
    }
    HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)&local_b0);
  }
LAB_00efa858:
  puVar11 = operator_new(0x18);
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  *param_1 = (long)puVar11;
  Script::Iterator::Iterator(aIStack_690,(Isolate *)this);
  local_698 = Script::Iterator::Next(aIStack_690);
  if ((int)local_698 != 0) {
    do {
      uVar12 = Script::IsUserJavaScript((Script *)&local_698);
      uVar19 = local_698;
      if ((uVar12 & 1) != 0) {
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar13 = *(ulong **)pCVar1;
          if (puVar13 == *(ulong **)(this + 0x95a8)) {
            puVar13 = (ulong *)HandleScope::Extend((Isolate *)this);
          }
          *(ulong **)pCVar1 = puVar13 + 1;
          *puVar13 = uVar19;
        }
        else {
          puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(this + 0x95b8),local_698);
        }
        this_01 = (vector<v8::internal::CoverageScript,std::__ndk1::allocator<v8::internal::CoverageScript>>
                   *)*param_1;
        plVar2 = *(long **)(this_01 + 8);
        local_6a0 = puVar13;
        if (plVar2 < *(long **)(this_01 + 0x10)) {
          *plVar2 = (long)puVar13;
          plVar2[1] = 0;
          plVar2[2] = 0;
          plVar2[3] = 0;
          lVar23 = *(long *)(this_01 + 8) + 0x20;
          *(long *)(this_01 + 8) = lVar23;
        }
        else {
          std::__ndk1::
          vector<v8::internal::CoverageScript,std::__ndk1::allocator<v8::internal::CoverageScript>>
          ::__emplace_back_slow_path<v8::internal::Handle<v8::internal::Script>&>
                    (this_01,(Handle *)&local_6a0);
          lVar23 = *(long *)(this_01 + 8);
        }
        SharedFunctionInfo::ScriptIterator::ScriptIterator
                  ((ScriptIterator *)&local_650,this,*local_6a0);
        pCVar14 = (CoverageBlock *)
                  SharedFunctionInfo::ScriptIterator::Next((ScriptIterator *)&local_650);
        if ((int)pCVar14 == 0) {
          puVar13 = (ulong *)0x0;
          __dest = (ulong *)0x0;
        }
        else {
          puVar13 = (ulong *)0x0;
          puVar31 = (ulong *)0x0;
          puVar34 = (ulong *)0x0;
          do {
            uVar36 = (uint)pCVar14;
            uVar19 = (ulong)(local_660 - 1U & uVar36);
            pTVar25 = local_668 + uVar19 * 0x18;
            if ((pTVar25[0x10] != (TemplateHashMapEntry)0x0) &&
               (uVar36 != *(uint *)(local_668 + uVar19 * 0x18))) {
              do {
                uVar19 = (ulong)((int)uVar19 + 1U & local_660 - 1U);
                if (local_668[uVar19 * 0x18 + 0x10] == (TemplateHashMapEntry)0x0) break;
              } while (uVar36 != *(uint *)(local_668 + uVar19 * 0x18));
              pTVar25 = local_668 + uVar19 * 0x18;
            }
            uVar37 = 0;
            if ((pTVar25 != (TemplateHashMapEntry *)0x0) &&
               (pTVar25[0x10] != (TemplateHashMapEntry)0x0)) {
              uVar37 = *(undefined4 *)(pTVar25 + 8);
            }
            if (puVar13 < puVar31) {
              *puVar13 = (ulong)pCVar14;
              *(undefined4 *)(puVar13 + 1) = uVar37;
              uVar5 = *(ushort *)(pCVar14 + 0x19);
              local_6b8 = pCVar14;
              local_b0 = pCVar14;
              if ((uVar5 == 0xffff) ||
                 (SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_b0),
                 (int)(SharedFunctionInfo *)&local_b0 - (uint)uVar5 == -1)) {
                SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_b0);
              }
              *(int *)((long)puVar13 + 0xc) = (int)&local_b0;
              SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_6b8);
              *(int *)(puVar13 + 2) = (int)&local_b0;
              __dest = puVar34;
            }
            else {
              sVar18 = (long)puVar13 - (long)puVar34;
              lVar24 = (long)sVar18 >> 3;
              uVar19 = lVar24 * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar19) goto LAB_00efb964;
              lVar26 = (long)puVar31 - (long)puVar34 >> 3;
              uVar12 = lVar26 * 0x5555555555555556;
              if (uVar19 <= uVar12) {
                uVar19 = uVar12;
              }
              if (0x555555555555554 < (ulong)(lVar26 * -0x5555555555555555)) {
                uVar19 = 0xaaaaaaaaaaaaaaa;
              }
              if (uVar19 == 0) {
                pvVar15 = (void *)0x0;
              }
              else {
                if (0xaaaaaaaaaaaaaaa < uVar19) goto LAB_00efb964;
                pvVar15 = operator_new(uVar19 * 0x18);
              }
              puVar13 = (ulong *)((long)pvVar15 + lVar24 * 8);
              *puVar13 = (ulong)pCVar14;
              *(undefined4 *)(puVar13 + 1) = uVar37;
              uVar5 = *(ushort *)(pCVar14 + 0x19);
              local_6b8 = pCVar14;
              local_b0 = pCVar14;
              if ((uVar5 == 0xffff) ||
                 (SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_b0),
                 (int)(SharedFunctionInfo *)&local_b0 - (uint)uVar5 == -1)) {
                SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_b0);
              }
              *(int *)((long)puVar13 + 0xc) = (int)&local_b0;
              puVar31 = (ulong *)((long)pvVar15 + uVar19 * 0x18);
              SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_6b8);
              __dest = (ulong *)((long)puVar13 - sVar18);
              *(int *)((long)pvVar15 + lVar24 * 8 + 0x10) = (int)&local_b0;
              if (0 < (long)sVar18) {
                memcpy(__dest,puVar34,sVar18);
              }
              if (puVar34 != (ulong *)0x0) {
                operator_delete(puVar34);
              }
            }
            puVar13 = puVar13 + 3;
            pCVar14 = (CoverageBlock *)
                      SharedFunctionInfo::ScriptIterator::Next((ScriptIterator *)&local_650);
            puVar34 = __dest;
          } while ((int)pCVar14 != 0);
        }
        FUN_00efdc18(__dest,puVar13);
        local_6b0 = (CoverageBlock *)0x0;
        local_6a8 = (CoverageBlock *)0x0;
        local_6b8 = (CoverageBlock *)0x0;
        if (__dest != puVar13) {
          puVar34 = __dest;
          do {
            local_6c0 = *puVar34;
            uVar19 = *(ulong *)((long)puVar34 + 0xc);
            uVar36 = (uint)puVar34[1];
            if (local_6b8 != local_6b0) {
              do {
                pCVar14 = local_6b0 + -8;
                uVar12 = *(ulong *)pCVar14;
                uVar28 = (*(long *)(lVar23 + -0x10) - *(long *)(lVar23 + -0x18) >> 3) *
                         0x6db6db6db6db6db7;
                if (uVar28 < uVar12 || uVar28 - uVar12 == 0) goto LAB_00efb964;
              } while ((*(int *)(*(long *)(lVar23 + -0x18) + uVar12 * 0x38 + 4) <= (int)uVar19) &&
                      (local_6b0 = pCVar14, local_6b8 != pCVar14));
            }
            if (uVar36 != 0) {
              if (param_3 == 0) {
                uVar36 = 1;
              }
              else if ((param_3 == 4) || (param_3 == 2)) {
                uVar36 = (*(uint *)(local_6c0 + 0x1b) >> 0x1b ^ 0xffffffff) & 1;
                *(uint *)(local_6c0 + 0x1b) = *(uint *)(local_6c0 + 0x1b) | 0x8000000;
              }
            }
            uVar12 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_6c0);
            if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar31 = *(ulong **)pCVar1;
              if (puVar31 == *(ulong **)(this + 0x95a8)) {
                puVar31 = (ulong *)HandleScope::Extend((Isolate *)this);
              }
              *(ulong **)pCVar1 = puVar31 + 1;
              *puVar31 = uVar12;
            }
            else {
              puVar31 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(this + 0x95b8),uVar12);
            }
            local_638 = (CoverageBlock *)0x0;
            pCStack_630 = (CoverageBlock *)0x0;
            local_620 = 0;
            local_628 = (CoverageBlock *)0x0;
            local_650 = uVar19;
            uStack_648 = uVar36;
            local_640 = puVar31;
            if ((param_3 - 3U < 2) &&
               (this_00 = (vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                           *)SharedFunctionInfo::HasCoverageInfo((SharedFunctionInfo *)&local_6c0),
               uVar19 = local_6c0, ((ulong)this_00 & 1) != 0)) {
              if ((-1 < (int)local_650) && ((int)local_650 < local_650._4_4_)) {
                local_620 = 1;
                local_b0 = (CoverageBlock *)0x0;
                pCStack_a8 = (CoverageBlock *)0x0;
                local_a0 = (CoverageBlock *)0x0;
                local_678 = local_6c0 & 0xffffffff00000000 |
                            (ulong)*(uint *)((local_6c0 & 0xffffffff00000000 |
                                             (ulong)*(uint *)(local_6c0 + 0xf)) + 0x1f);
                CoverageInfo::SlotCount((CoverageInfo *)&local_678);
                if ((int)this_00 != 0) {
                  CoverageInfo::SlotCount((CoverageInfo *)&local_678);
                  if ((int)this_00 < 1) {
                    pCVar14 = (CoverageBlock *)0x0;
                    pCVar17 = (CoverageBlock *)0x0;
                  }
                  else {
                    iVar32 = 0;
                    do {
                      CoverageInfo::StartSourcePosition((CoverageInfo *)&local_678,iVar32);
                      extraout_w0 = (uint)this_00;
                      local_670 = (code *)CONCAT44(local_670._4_4_,extraout_w0);
                      CoverageInfo::EndSourcePosition((CoverageInfo *)&local_678,iVar32);
                      local_67c = extraout_w0;
                      CoverageInfo::BlockCount((CoverageInfo *)&local_678,iVar32);
                      local_680 = extraout_w0;
                      if (pCStack_a8 < local_a0) {
                        *(uint *)(pCStack_a8 + 8) = extraout_w0;
                        *(uint *)pCStack_a8 = (uint)local_670;
                        *(uint *)(pCStack_a8 + 4) = local_67c;
                        pCStack_a8 = pCStack_a8 + 0xc;
                      }
                      else {
                        this_00 = (vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                                   *)&local_b0;
                        std::__ndk1::
                        vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                        ::__emplace_back_slow_path<int_const&,int_const&,int_const&>
                                  (this_00,(int *)&local_670,(int *)&local_67c,(int *)&local_680);
                      }
                      iVar32 = iVar32 + 1;
                      CoverageInfo::SlotCount((CoverageInfo *)&local_678);
                      pCVar14 = local_b0;
                      pCVar17 = pCStack_a8;
                    } while (iVar32 < (int)this_00);
                  }
                  local_670 = FUN_00efc75c;
                  std::__ndk1::
                  __sort<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
                            (pCVar14,pCVar17,
                             (_func_bool_CoverageBlock_ptr_CoverageBlock_ptr *)&local_670);
                }
                if (local_638 != (CoverageBlock *)0x0) {
                  pCStack_630 = local_638;
                  operator_delete(local_638);
                }
                pCStack_630 = pCStack_a8;
                local_638 = local_b0;
                local_628 = local_a0;
                if (param_3 == 4) {
                  local_b0 = (CoverageBlock *)&local_650;
                  pCStack_a8 = (void *)0x0;
                  local_a0 = (CoverageBlock *)0x0;
                  uStack_8f = 0;
                  local_98 = 0;
                  local_8c = 0xffffffffffffffff;
                  while (uVar12 = FUN_00efc17c(&local_b0), (uVar12 & 1) != 0) {
                    piVar20 = (int *)(*(long *)(local_b0 + 0x18) + (long)(int)local_8c * 0xc + 8);
                    if (*piVar20 != 0) {
                      *piVar20 = 1;
                    }
                  }
                  do {
                    uVar12 = FUN_00efc17c(&local_b0);
                  } while ((uVar12 & 1) != 0);
                  lVar24 = *(long *)(local_b0 + 0x18);
                  uVar12 = (ulong)local_8c._4_4_;
                  lVar26 = *(long *)(local_b0 + 0x20) - lVar24 >> 2;
                  uVar28 = lVar26 * -0x5555555555555555;
                  if (uVar28 < uVar12) {
                    std::__ndk1::
                    vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                    ::__append((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                                *)(local_b0 + 0x18),uVar12 + lVar26 * 0x5555555555555555);
                  }
                  else if (uVar28 - uVar12 != 0) {
                    *(ulong *)(local_b0 + 0x20) = lVar24 + uVar12 * 0xc;
                  }
                  if (pCStack_a8 != (void *)0x0) {
                    local_a0 = pCStack_a8;
                    operator_delete(pCStack_a8);
                  }
                }
                local_b0 = (CoverageBlock *)&local_650;
                pCStack_a8 = (void *)0x0;
                local_a0 = (void *)0x0;
                uStack_8f = 0;
                local_98 = 0;
                local_8c = 0xffffffffffffffff;
                uVar12 = FUN_00efc17c(&local_b0);
                if ((uVar12 & 1) != 0) {
                  lVar24 = (long)(int)local_8c;
                  lVar26 = *(long *)(local_b0 + 0x18);
                  if ((*(int *)(lVar26 + lVar24 * 0xc) == -2) &&
                     (*(int *)(lVar26 + lVar24 * 0xc + 4) == -2)) {
                    uStack_648 = *(uint *)(lVar26 + lVar24 * 0xc + 8);
                    uStack_8f = 1;
                  }
                }
                do {
                  uVar12 = FUN_00efc17c(&local_b0);
                } while ((uVar12 & 1) != 0);
                lVar24 = *(long *)(local_b0 + 0x18);
                uVar12 = (ulong)local_8c._4_4_;
                lVar26 = *(long *)(local_b0 + 0x20) - lVar24 >> 2;
                uVar28 = lVar26 * -0x5555555555555555;
                if (uVar28 < uVar12) {
                  std::__ndk1::
                  vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                  ::__append((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                              *)(local_b0 + 0x18),uVar12 + lVar26 * 0x5555555555555555);
                }
                else if (uVar28 - uVar12 != 0) {
                  *(ulong *)(local_b0 + 0x20) = lVar24 + uVar12 * 0xc;
                }
                if (pCStack_a8 != (void *)0x0) {
                  local_a0 = pCStack_a8;
                  operator_delete(pCStack_a8);
                }
                if (local_638 != pCStack_630) {
                  local_b0 = (CoverageBlock *)&local_650;
                  pCStack_a8 = (void *)0x0;
                  local_a0 = (CoverageBlock *)0x0;
                  uStack_8f = 0;
                  local_98 = 0;
                  local_8c = 0xffffffffffffffff;
                  FUN_00efc17c(&local_b0);
                  while (uVar12 = FUN_00efc17c(&local_b0), (uVar12 & 1) != 0) {
                    if ((*(int *)(*(long *)(local_b0 + 0x18) + (long)(int)local_8c * 0xc + 4) == -1)
                       && (piVar20 = (int *)(*(long *)(local_b0 + 0x18) + (long)(int)local_8c * 0xc)
                          , *piVar20 == piVar20[-3])) {
                      uStack_8f = 1;
                    }
                  }
                  do {
                    uVar12 = FUN_00efc17c(&local_b0);
                  } while ((uVar12 & 1) != 0);
                  lVar24 = *(long *)(local_b0 + 0x18);
                  uVar12 = (ulong)local_8c._4_4_;
                  lVar26 = *(long *)(local_b0 + 0x20) - lVar24 >> 2;
                  uVar28 = lVar26 * -0x5555555555555555;
                  if (uVar28 < uVar12) {
                    std::__ndk1::
                    vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                    ::__append((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                                *)(local_b0 + 0x18),uVar12 + lVar26 * 0x5555555555555555);
                  }
                  else if (uVar28 - uVar12 != 0) {
                    *(ulong *)(local_b0 + 0x20) = lVar24 + uVar12 * 0xc;
                  }
                  if (pCStack_a8 != (void *)0x0) {
                    local_a0 = pCStack_a8;
                    operator_delete(pCStack_a8);
                  }
                  local_b0 = (CoverageBlock *)&local_650;
                  pCStack_a8 = (void *)0x0;
                  local_a0 = (void *)0x0;
                  uStack_8f = 0;
                  local_98 = 0;
                  local_8c = 0xffffffffffffffff;
LAB_00efb110:
                  uVar12 = FUN_00efc17c(&local_b0);
                  if ((uVar12 & 1) != 0) {
                    lVar26 = (long)(int)local_8c;
                    lVar24 = *(long *)(local_b0 + 0x18);
                    if (*(int *)(lVar24 + lVar26 * 0xc) < local_650._4_4_) {
                      piVar20 = (int *)(lVar24 + lVar26 * 0xc + 4);
                      if (*piVar20 == -1) {
                        if ((int)(lVar26 + 1) <
                            (int)((ulong)(*(long *)(local_b0 + 0x20) - lVar24) >> 2) * -0x55555555)
                        {
                          iVar4 = *(int *)(lVar24 + (lVar26 + 1) * 0xc);
                          iVar32 = *(int *)((long)local_a0 + -8);
                          if (iVar4 < iVar32) {
                            *piVar20 = iVar4;
                            goto LAB_00efb110;
                          }
                        }
                        else {
                          iVar32 = *(int *)((long)local_a0 + -8);
                        }
                        if ((long)local_a0 - (long)pCStack_a8 == 0xc) {
                          *piVar20 = iVar32 + -1;
                        }
                        else {
                          *piVar20 = iVar32;
                        }
                      }
                    }
                    else {
                      uStack_8f = 1;
                    }
                    goto LAB_00efb110;
                  }
                  do {
                    uVar12 = FUN_00efc17c(&local_b0);
                  } while ((uVar12 & 1) != 0);
                  lVar24 = *(long *)(local_b0 + 0x18);
                  uVar12 = (ulong)local_8c._4_4_;
                  lVar26 = *(long *)(local_b0 + 0x20) - lVar24 >> 2;
                  uVar28 = lVar26 * -0x5555555555555555;
                  if (uVar28 < uVar12) {
                    std::__ndk1::
                    vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                    ::__append((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                                *)(local_b0 + 0x18),uVar12 + lVar26 * 0x5555555555555555);
                  }
                  else if (uVar28 - uVar12 != 0) {
                    *(ulong *)(local_b0 + 0x20) = lVar24 + uVar12 * 0xc;
                  }
                  if (pCStack_a8 != (void *)0x0) {
                    local_a0 = pCStack_a8;
                    operator_delete(pCStack_a8);
                  }
                  FUN_00efbee0(&local_650);
                  local_b0 = (CoverageBlock *)FUN_00efc75c;
                  std::__ndk1::
                  __sort<bool(*&)(v8::internal::CoverageBlock_const&,v8::internal::CoverageBlock_const&),v8::internal::CoverageBlock*>
                            (local_638,pCStack_630,
                             (_func_bool_CoverageBlock_ptr_CoverageBlock_ptr *)&local_b0);
                  local_b0 = (CoverageBlock *)&local_650;
                  pCStack_a8 = (void *)0x0;
                  local_a0 = (CoverageBlock *)0x0;
                  uStack_8f = 0;
                  local_98 = 0;
                  local_8c = 0xffffffffffffffff;
                  while (uVar12 = FUN_00efc17c(&local_b0), (uVar12 & 1) != 0) {
                    lVar21 = (long)(int)local_8c;
                    lVar26 = *(long *)(local_b0 + 0x18);
                    lVar24 = lVar21 + 1;
                    if ((int)((ulong)(*(long *)(local_b0 + 0x20) - lVar26) >> 2) * -0x55555555 <=
                        (int)lVar24) break;
                    piVar20 = (int *)(lVar26 + lVar21 * 0xc);
                    piVar27 = (int *)(lVar26 + lVar24 * 0xc);
                    if ((*piVar20 == *piVar27) && (piVar20[1] == piVar27[1])) {
                      lVar24 = lVar26 + lVar24 * 0xc;
                      uVar3 = *(uint *)(lVar26 + lVar21 * 0xc + 8);
                      uVar30 = *(uint *)(lVar24 + 8);
                      if (uVar30 <= uVar3) {
                        uVar30 = uVar3;
                      }
                      *(uint *)(lVar24 + 8) = uVar30;
                      uStack_8f = 1;
                    }
                  }
                  do {
                    uVar12 = FUN_00efc17c(&local_b0);
                  } while ((uVar12 & 1) != 0);
                  lVar24 = *(long *)(local_b0 + 0x18);
                  uVar12 = (ulong)local_8c._4_4_;
                  lVar26 = *(long *)(local_b0 + 0x20) - lVar24 >> 2;
                  uVar28 = lVar26 * -0x5555555555555555;
                  if (uVar28 < uVar12) {
                    std::__ndk1::
                    vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                    ::__append((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                                *)(local_b0 + 0x18),uVar12 + lVar26 * 0x5555555555555555);
                  }
                  else if (uVar28 - uVar12 != 0) {
                    *(ulong *)(local_b0 + 0x20) = lVar24 + uVar12 * 0xc;
                  }
                  if (pCStack_a8 != (void *)0x0) {
                    local_a0 = pCStack_a8;
                    operator_delete(pCStack_a8);
                  }
                  local_b0 = (CoverageBlock *)&local_650;
                  pCStack_a8 = (void *)0x0;
                  local_a0 = (void *)0x0;
                  uStack_8f = 0;
                  local_98 = 0;
                  local_8c = 0xffffffffffffffff;
                  while (uVar12 = FUN_00efc17c(&local_b0), (uVar12 & 1) != 0) {
                    if (*(int *)((long)local_a0 + -4) ==
                        *(int *)(*(long *)(local_b0 + 0x18) + (long)(int)local_8c * 0xc + 8)) {
                      uStack_8f = 1;
                    }
                  }
                  do {
                    uVar12 = FUN_00efc17c(&local_b0);
                  } while ((uVar12 & 1) != 0);
                  lVar24 = *(long *)(local_b0 + 0x18);
                  uVar12 = (ulong)local_8c._4_4_;
                  lVar26 = *(long *)(local_b0 + 0x20) - lVar24 >> 2;
                  uVar28 = lVar26 * -0x5555555555555555;
                  if (uVar28 < uVar12) {
                    std::__ndk1::
                    vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                    ::__append((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                                *)(local_b0 + 0x18),uVar12 + lVar26 * 0x5555555555555555);
                  }
                  else if (uVar28 - uVar12 != 0) {
                    *(ulong *)(local_b0 + 0x20) = lVar24 + uVar12 * 0xc;
                  }
                  if (pCStack_a8 != (void *)0x0) {
                    local_a0 = pCStack_a8;
                    operator_delete(pCStack_a8);
                  }
                  FUN_00efbee0(&local_650);
                  local_b0 = (CoverageBlock *)&local_650;
                  pCStack_a8 = (void *)0x0;
                  local_a0 = (CoverageBlock *)0x0;
                  uStack_8f = 0;
                  local_98 = 0;
                  local_8c = 0xffffffffffffffff;
                  while (uVar12 = FUN_00efc17c(&local_b0), (uVar12 & 1) != 0) {
                    if ((*(int *)(*(long *)(local_b0 + 0x18) + (long)(int)local_8c * 0xc + 8) == 0)
                       && (*(int *)((long)local_a0 + -4) == 0)) {
                      uStack_8f = 1;
                    }
                  }
                  do {
                    uVar12 = FUN_00efc17c(&local_b0);
                  } while ((uVar12 & 1) != 0);
                  lVar24 = *(long *)(local_b0 + 0x18);
                  uVar12 = (ulong)local_8c._4_4_;
                  lVar26 = *(long *)(local_b0 + 0x20) - lVar24 >> 2;
                  uVar28 = lVar26 * -0x5555555555555555;
                  if (uVar28 < uVar12) {
                    std::__ndk1::
                    vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                    ::__append((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                                *)(local_b0 + 0x18),uVar12 + lVar26 * 0x5555555555555555);
                  }
                  else if (uVar28 - uVar12 != 0) {
                    *(ulong *)(local_b0 + 0x20) = lVar24 + uVar12 * 0xc;
                  }
                  if (pCStack_a8 != (void *)0x0) {
                    local_a0 = pCStack_a8;
                    operator_delete(pCStack_a8);
                  }
                  local_b0 = (CoverageBlock *)&local_650;
                  pCStack_a8 = (void *)0x0;
                  local_a0 = (void *)0x0;
                  uStack_8f = 0;
                  local_98 = 0;
                  local_8c = 0xffffffffffffffff;
                  while (uVar12 = FUN_00efc17c(&local_b0), (uVar12 & 1) != 0) {
                    piVar20 = (int *)(*(long *)(local_b0 + 0x18) + (long)(int)local_8c * 0xc);
                    if (*piVar20 == piVar20[1]) {
                      uStack_8f = 1;
                    }
                  }
                  do {
                    uVar12 = FUN_00efc17c(&local_b0);
                  } while ((uVar12 & 1) != 0);
                  lVar24 = *(long *)(local_b0 + 0x18);
                  uVar12 = (ulong)local_8c._4_4_;
                  lVar26 = *(long *)(local_b0 + 0x20) - lVar24 >> 2;
                  uVar28 = lVar26 * -0x5555555555555555;
                  if (uVar28 < uVar12) {
                    std::__ndk1::
                    vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                    ::__append((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
                                *)(local_b0 + 0x18),uVar12 + lVar26 * 0x5555555555555555);
                  }
                  else if (uVar28 - uVar12 != 0) {
                    *(ulong *)(local_b0 + 0x20) = lVar24 + uVar12 * 0xc;
                  }
                  if (pCStack_a8 != (void *)0x0) {
                    local_a0 = pCStack_a8;
                    operator_delete(pCStack_a8);
                  }
                }
              }
              uVar12 = uVar19 & 0xffffffff00000000;
              local_b0 = (CoverageBlock *)
                         (uVar12 | *(uint *)((uVar12 | *(uint *)(uVar19 + 0xf)) + 0x1f));
              CoverageInfo::SlotCount((CoverageInfo *)&local_b0);
              if (0 < (int)(CoverageInfo *)&local_b0) {
                iVar32 = 0;
                do {
                  CoverageInfo::ResetBlockCount((CoverageInfo *)&local_b0,iVar32);
                  iVar32 = iVar32 + 1;
                  CoverageInfo::SlotCount((CoverageInfo *)&local_b0);
                } while (iVar32 < (int)(CoverageInfo *)&local_b0);
              }
            }
            if (local_6b8 == local_6b0) {
              bVar9 = local_638 != pCStack_630;
            }
            else {
              uVar19 = *(ulong *)(local_6b0 + -8);
              uVar12 = (*(long *)(lVar23 + -0x10) - *(long *)(lVar23 + -0x18) >> 3) *
                       0x6db6db6db6db6db7;
              if (uVar12 < uVar19 || uVar12 - uVar19 == 0) goto LAB_00efb964;
              bVar9 = *(int *)(*(long *)(lVar23 + -0x18) + uVar19 * 0x38 + 8) != 0 ||
                      local_638 != pCStack_630;
            }
            uVar36 = (uint)(byte)(uVar36 != 0 | bVar9);
            bVar9 = (int)local_650 < local_650._4_4_;
            bVar8 = -1 < (int)local_650;
            if ((uVar36 == 1) && (bVar8 && bVar9)) {
              local_b0 = (CoverageBlock *)
                         ((*(long *)(lVar23 + -0x10) - *(long *)(lVar23 + -0x18) >> 3) *
                         0x6db6db6db6db6db7);
              if (local_6b0 < local_6a8) {
                *(CoverageBlock **)local_6b0 = local_b0;
                local_6b0 = local_6b0 + 8;
              }
              else {
                std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
                __push_back_slow_path<unsigned_long>
                          ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)&local_6b8
                           ,(ulong *)&local_b0);
              }
              puVar31 = *(ulong **)(lVar23 + -0x10);
              if (puVar31 < *(ulong **)(lVar23 + -8)) {
                puVar31[4] = 0;
                puVar31[5] = 0;
                puVar31[1] = CONCAT44(uStack_644,uStack_648);
                *puVar31 = local_650;
                puVar31[2] = (ulong)local_640;
                puVar31[3] = 0;
                uVar19 = (long)pCStack_630 - (long)local_638;
                if (uVar19 != 0) {
                  if (0x1555555555555555 < (ulong)(((long)uVar19 >> 2) * -0x5555555555555555)) {
LAB_00efb964:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  pvVar15 = operator_new(uVar19);
                  puVar31[3] = (ulong)pvVar15;
                  puVar31[4] = (ulong)pvVar15;
                  puVar31[5] = (ulong)((long)pvVar15 + ((long)uVar19 >> 2) * 4);
                  sVar18 = (long)pCStack_630 - (long)local_638;
                  if (0 < (long)sVar18) {
                    memcpy(pvVar15,local_638,sVar18);
                    puVar31[4] = puVar31[4] + (sVar18 / 0xc) * 0xc;
                  }
                }
                *(undefined1 *)(puVar31 + 6) = local_620;
                *(long *)(lVar23 + -0x10) = *(long *)(lVar23 + -0x10) + 0x38;
              }
              else {
                std::__ndk1::
                vector<v8::internal::CoverageFunction,std::__ndk1::allocator<v8::internal::CoverageFunction>>
                ::__emplace_back_slow_path<v8::internal::CoverageFunction&>
                          ((vector<v8::internal::CoverageFunction,std::__ndk1::allocator<v8::internal::CoverageFunction>>
                            *)(lVar23 + -0x18),(CoverageFunction *)&local_650);
              }
            }
            uVar19 = local_6c0;
            if (FLAG_trace_block_coverage != '\0') {
              local_670 = (code *)*local_640;
              String::ToCString(&local_b0,&local_670,1,0,0);
              PrintF("Coverage for function=\'%s\', SFI=%p, has_nonempty_source_range=%d, function_is_relevant=%d\n"
                     ,local_b0,uVar19,(ulong)(bVar8 && bVar9),(ulong)uVar36);
              PrintF("{start: %d, end: %d, count: %d}\n",local_650 & 0xffffffff,local_650 >> 0x20,
                     (ulong)uStack_648);
              pCVar7 = pCStack_630;
              pCVar17 = local_b0;
              for (pCVar14 = local_638; pCVar14 != pCVar7; pCVar14 = pCVar14 + 0xc) {
                local_b0 = pCVar17;
                PrintF("{start: %d, end: %d, count: %d}\n",(ulong)*(uint *)pCVar14,
                       (ulong)*(uint *)(pCVar14 + 4),(ulong)*(uint *)(pCVar14 + 8));
                pCVar17 = local_b0;
              }
              local_b0 = (CoverageBlock *)0x0;
              if (pCVar17 != (CoverageBlock *)0x0) {
                operator_delete__(pCVar17);
              }
            }
            if (local_638 != (CoverageBlock *)0x0) {
              pCStack_630 = local_638;
              operator_delete(local_638);
            }
            puVar34 = puVar34 + 3;
          } while (puVar34 != puVar13);
        }
        if (*(long *)(lVar23 + -0x18) == *(long *)(lVar23 + -0x10)) {
          lVar23 = *param_1;
          lVar24 = *(long *)(lVar23 + 8);
          pvVar15 = *(void **)(lVar24 + -0x18);
          if (pvVar15 != (void *)0x0) {
            pvVar16 = pvVar15;
            pvVar22 = *(void **)(lVar24 + -0x10);
            if (*(void **)(lVar24 + -0x10) != pvVar15) {
              do {
                pvVar16 = *(void **)((long)pvVar22 + -0x20);
                pvVar35 = (void *)((long)pvVar22 + -0x38);
                if (pvVar16 != (void *)0x0) {
                  *(void **)((long)pvVar22 + -0x18) = pvVar16;
                  operator_delete(pvVar16);
                }
                pvVar22 = pvVar35;
              } while (pvVar15 != pvVar35);
              pvVar16 = *(void **)(lVar24 + -0x18);
            }
            *(void **)(lVar24 + -0x10) = pvVar15;
            operator_delete(pvVar16);
          }
          *(long *)(lVar23 + 8) = lVar24 + -0x20;
        }
        if (local_6b8 != (CoverageBlock *)0x0) {
          local_6b0 = local_6b8;
          operator_delete(local_6b8);
        }
        if (__dest != (ulong *)0x0) {
          operator_delete(__dest);
        }
      }
      local_698 = Script::Iterator::Next(aIStack_690);
    } while ((int)local_698 != 0);
  }
  free(local_668);
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

