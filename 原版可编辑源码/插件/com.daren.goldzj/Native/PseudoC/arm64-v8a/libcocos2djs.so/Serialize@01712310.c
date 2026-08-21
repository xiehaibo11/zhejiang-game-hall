
/* v8::internal::compiler::SourceTextModuleData::Serialize(v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::SourceTextModuleData::Serialize
          (SourceTextModuleData *this,JSHeapBroker *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  basic_ostream *pbVar9;
  ulong uVar10;
  ulong *puVar11;
  Zone *pZVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  long local_70;
  char local_68 [4];
  char local_64 [4];
  
  if (this[0x18] == (SourceTextModuleData)0x0) {
    this[0x18] = (SourceTextModuleData)0x1;
    TraceScope::TraceScope((TraceScope *)&local_70,param_1,this,"SourceTextModuleData::Serialize");
    puVar11 = *(ulong **)this;
    pIVar5 = *(Isolate **)param_1;
    uVar15 = *puVar11;
    uVar15 = uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 + 0x1f);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar15;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar15);
      uVar15 = *puVar6;
    }
    uVar4 = *(uint *)(uVar15 + 3);
    lVar16 = *(long *)(this + 0x20);
    uVar15 = (long)((ulong)uVar4 << 0x20) >> 0x21;
    if ((ulong)(*(long *)(this + 0x30) - lVar16 >> 3) < uVar15) {
      pZVar12 = *(Zone **)(this + 0x38);
      lVar18 = *(long *)(this + 0x28);
      uVar10 = uVar15 * 8;
      lVar8 = *(long *)(pZVar12 + 0x10);
      if (uVar10 < (ulong)(*(long *)(pZVar12 + 0x18) - lVar8) ||
          uVar10 - (*(long *)(pZVar12 + 0x18) - lVar8) == 0) {
        *(ulong *)(pZVar12 + 0x10) = lVar8 + uVar10;
      }
      else {
        lVar8 = Zone::NewExpand(pZVar12,uVar10);
      }
      puVar2 = *(undefined8 **)(this + 0x20);
      puVar21 = *(undefined8 **)(this + 0x28);
      puVar1 = (undefined8 *)(lVar8 + (lVar18 - lVar16 >> 3) * 8);
      puVar19 = puVar1;
      while (puVar21 != puVar2) {
        puVar21 = puVar21 + -1;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar21;
      }
      *(undefined8 **)(this + 0x20) = puVar19;
      *(undefined8 **)(this + 0x28) = puVar1;
      *(ulong *)(this + 0x30) = lVar8 + uVar15 * 8;
    }
    if (1 < (int)uVar4) {
      lVar16 = 0;
      do {
        pIVar5 = *(Isolate **)param_1;
        uVar10 = *puVar6 & 0xffffffff00000000 |
                 (ulong)*(uint *)(*puVar6 + (long)((int)lVar16 << 2) + 7);
        if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)(pIVar5 + 0x95a0);
          if (puVar7 == *(ulong **)(pIVar5 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(pIVar5);
          }
          *(ulong **)(pIVar5 + 0x95a0) = puVar7 + 1;
          *puVar7 = uVar10;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar10);
        }
        lVar8 = JSHeapBroker::GetOrCreateData(param_1,puVar7);
        if (*(int *)(lVar8 + 8) != 1) goto LAB_01712900;
        if (*(short *)(*(long *)(lVar8 + 0x10) + 0x18) != 0x99) goto LAB_01712914;
        plVar14 = *(long **)(this + 0x28);
        if (plVar14 < *(long **)(this + 0x30)) {
          *plVar14 = lVar8;
          *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
        }
        else {
          lVar18 = (long)plVar14 - *(long *)(this + 0x20) >> 3;
          uVar10 = lVar18 + 1;
          if (uVar10 >> 0x1c != 0) goto LAB_01712928;
          lVar13 = (long)*(long **)(this + 0x30) - *(long *)(this + 0x20);
          uVar20 = lVar13 >> 2;
          if (uVar10 <= uVar20) {
            uVar10 = uVar20;
          }
          if (0x7fffffe < (ulong)(lVar13 >> 3)) {
            uVar10 = 0xfffffff;
          }
          if (uVar10 == 0) {
            lVar13 = 0;
          }
          else {
            pZVar12 = *(Zone **)(this + 0x38);
            uVar20 = uVar10 * 8;
            lVar13 = *(long *)(pZVar12 + 0x10);
            if (uVar20 < (ulong)(*(long *)(pZVar12 + 0x18) - lVar13) ||
                uVar20 - (*(long *)(pZVar12 + 0x18) - lVar13) == 0) {
              *(ulong *)(pZVar12 + 0x10) = lVar13 + uVar20;
            }
            else {
              lVar13 = Zone::NewExpand(pZVar12,uVar20);
            }
          }
          plVar14 = (long *)(lVar13 + lVar18 * 8);
          plVar17 = plVar14 + 1;
          *plVar14 = lVar8;
          plVar3 = *(long **)(this + 0x20);
          plVar22 = *(long **)(this + 0x28);
          while (plVar22 != plVar3) {
            plVar22 = plVar22 + -1;
            plVar14 = plVar14 + -1;
            *plVar14 = *plVar22;
          }
          *(long **)(this + 0x20) = plVar14;
          *(long **)(this + 0x28) = plVar17;
          *(ulong *)(this + 0x30) = lVar13 + uVar10 * 8;
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < (long)uVar15);
    }
    if ((param_1[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
      pbVar9 = (basic_ostream *)JSHeapBroker::Trace(param_1);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9,"Copied ",7);
      pbVar9 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,
                          *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9," imports",8);
      local_64[0] = '\n';
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar9,local_64,1);
    }
    pIVar5 = *(Isolate **)param_1;
    uVar15 = *puVar11;
    uVar15 = uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 + 0x1b);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar11 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar11 + 1;
      *puVar11 = uVar15;
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar15);
      uVar15 = *puVar11;
    }
    uVar4 = *(uint *)(uVar15 + 3);
    lVar16 = *(long *)(this + 0x40);
    uVar15 = (long)((ulong)uVar4 << 0x20) >> 0x21;
    if ((ulong)(*(long *)(this + 0x50) - lVar16 >> 3) < uVar15) {
      pZVar12 = *(Zone **)(this + 0x58);
      lVar18 = *(long *)(this + 0x48);
      uVar10 = uVar15 * 8;
      lVar8 = *(long *)(pZVar12 + 0x10);
      if (uVar10 < (ulong)(*(long *)(pZVar12 + 0x18) - lVar8) ||
          uVar10 - (*(long *)(pZVar12 + 0x18) - lVar8) == 0) {
        *(ulong *)(pZVar12 + 0x10) = lVar8 + uVar10;
      }
      else {
        lVar8 = Zone::NewExpand(pZVar12,uVar10);
      }
      puVar2 = *(undefined8 **)(this + 0x40);
      puVar21 = *(undefined8 **)(this + 0x48);
      puVar1 = (undefined8 *)(lVar8 + (lVar18 - lVar16 >> 3) * 8);
      puVar19 = puVar1;
      while (puVar21 != puVar2) {
        puVar21 = puVar21 + -1;
        puVar19 = puVar19 + -1;
        *puVar19 = *puVar21;
      }
      *(undefined8 **)(this + 0x40) = puVar19;
      *(undefined8 **)(this + 0x48) = puVar1;
      *(ulong *)(this + 0x50) = lVar8 + uVar15 * 8;
    }
    if (1 < (int)uVar4) {
      lVar16 = 0;
      do {
        pIVar5 = *(Isolate **)param_1;
        uVar10 = *puVar11 & 0xffffffff00000000 |
                 (ulong)*(uint *)(*puVar11 + (long)((int)lVar16 << 2) + 7);
        if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)(pIVar5 + 0x95a0);
          if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(pIVar5);
          }
          *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
          *puVar6 = uVar10;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar10);
        }
        lVar8 = JSHeapBroker::GetOrCreateData(param_1,puVar6);
        if (*(int *)(lVar8 + 8) != 1) {
LAB_01712900:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
        }
        if (*(short *)(*(long *)(lVar8 + 0x10) + 0x18) != 0x99) {
LAB_01712914:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsCell()");
        }
        plVar14 = *(long **)(this + 0x48);
        if (plVar14 < *(long **)(this + 0x50)) {
          *plVar14 = lVar8;
          *(long *)(this + 0x48) = *(long *)(this + 0x48) + 8;
        }
        else {
          lVar18 = (long)plVar14 - *(long *)(this + 0x40) >> 3;
          uVar10 = lVar18 + 1;
          if (uVar10 >> 0x1c != 0) {
LAB_01712928:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar13 = (long)*(long **)(this + 0x50) - *(long *)(this + 0x40);
          uVar20 = lVar13 >> 2;
          if (uVar10 <= uVar20) {
            uVar10 = uVar20;
          }
          if (0x7fffffe < (ulong)(lVar13 >> 3)) {
            uVar10 = 0xfffffff;
          }
          if (uVar10 == 0) {
            lVar13 = 0;
          }
          else {
            pZVar12 = *(Zone **)(this + 0x58);
            uVar20 = uVar10 * 8;
            lVar13 = *(long *)(pZVar12 + 0x10);
            if (uVar20 < (ulong)(*(long *)(pZVar12 + 0x18) - lVar13) ||
                uVar20 - (*(long *)(pZVar12 + 0x18) - lVar13) == 0) {
              *(ulong *)(pZVar12 + 0x10) = lVar13 + uVar20;
            }
            else {
              lVar13 = Zone::NewExpand(pZVar12,uVar20);
            }
          }
          plVar14 = (long *)(lVar13 + lVar18 * 8);
          plVar17 = plVar14 + 1;
          *plVar14 = lVar8;
          plVar3 = *(long **)(this + 0x40);
          plVar22 = *(long **)(this + 0x48);
          while (plVar22 != plVar3) {
            plVar22 = plVar22 + -1;
            plVar14 = plVar14 + -1;
            *plVar14 = *plVar22;
          }
          *(long **)(this + 0x40) = plVar14;
          *(long **)(this + 0x48) = plVar17;
          *(ulong *)(this + 0x50) = lVar13 + uVar10 * 8;
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < (long)uVar15);
    }
    if ((param_1[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
      pbVar9 = (basic_ostream *)JSHeapBroker::Trace(param_1);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9,"Copied ",7);
      pbVar9 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar9,
                          *(long *)(this + 0x48) - *(long *)(this + 0x40) >> 3);
      pbVar9 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar9," exports",8);
      local_68[0] = '\n';
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar9,local_68,1);
    }
    *(int *)(local_70 + 0x170) = *(int *)(local_70 + 0x170) + -1;
  }
  return;
}

