
/* v8::internal::compiler::FeedbackVectorData::Serialize(v8::internal::compiler::JSHeapBroker*) */

void __thiscall
v8::internal::compiler::FeedbackVectorData::Serialize
          (FeedbackVectorData *this,JSHeapBroker *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 uVar5;
  basic_ostream *pbVar6;
  ulong uVar7;
  ulong uVar8;
  Zone *pZVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong *puVar16;
  long lVar17;
  long local_70;
  char local_64 [4];
  
  if (this[0x20] == (FeedbackVectorData)0x0) {
    this[0x20] = (FeedbackVectorData)0x1;
    TraceScope::TraceScope((TraceScope *)&local_70,param_1,this,"FeedbackVectorData::Serialize");
    puVar16 = *(ulong **)this;
    uVar8 = *puVar16;
    uVar2 = *(uint *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb)) + 3);
    lVar11 = *(long *)(this + 0x28);
    uVar8 = (long)((ulong)uVar2 << 0x20) >> 0x21;
    if ((ulong)(*(long *)(this + 0x38) - lVar11 >> 3) < uVar8) {
      pZVar9 = *(Zone **)(this + 0x40);
      lVar12 = *(long *)(this + 0x30);
      uVar7 = uVar8 * 8;
      lVar17 = *(long *)(pZVar9 + 0x10);
      if (uVar7 < (ulong)(*(long *)(pZVar9 + 0x18) - lVar17) ||
          uVar7 - (*(long *)(pZVar9 + 0x18) - lVar17) == 0) {
        *(ulong *)(pZVar9 + 0x10) = lVar17 + uVar7;
      }
      else {
        lVar17 = Zone::NewExpand(pZVar9,uVar7);
      }
      puVar1 = *(undefined8 **)(this + 0x28);
      puVar15 = *(undefined8 **)(this + 0x30);
      puVar10 = (undefined8 *)(lVar17 + (lVar12 - lVar11 >> 3) * 8);
      puVar13 = puVar10;
      while (puVar15 != puVar1) {
        puVar15 = puVar15 + -1;
        puVar13 = puVar13 + -1;
        *puVar13 = *puVar15;
      }
      *(undefined8 **)(this + 0x28) = puVar13;
      *(undefined8 **)(this + 0x30) = puVar10;
      *(ulong *)(this + 0x38) = lVar17 + uVar8 * 8;
    }
    if (1 < (int)uVar2) {
      lVar11 = 0;
      do {
        uVar7 = *puVar16;
        pIVar3 = (Isolate *)(uVar7 & 0xffffffff00000000);
        uVar7 = (ulong)pIVar3 |
                (ulong)*(uint *)(((ulong)pIVar3 | (ulong)*(uint *)(uVar7 + 0xb)) +
                                 (long)((int)lVar11 << 2) + 7);
        if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)(pIVar3 + 0x95a0);
          if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(pIVar3);
          }
          *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
          *puVar4 = uVar7;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar7);
        }
        uVar5 = JSHeapBroker::GetOrCreateData(param_1,puVar4);
        puVar10 = *(undefined8 **)(this + 0x30);
        if (puVar10 == *(undefined8 **)(this + 0x38)) {
          lVar17 = (long)puVar10 - *(long *)(this + 0x28) >> 3;
          uVar7 = lVar17 + 1;
          if (uVar7 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar12 = (long)*(undefined8 **)(this + 0x38) - *(long *)(this + 0x28);
          uVar14 = lVar12 >> 2;
          if (uVar7 <= uVar14) {
            uVar7 = uVar14;
          }
          if (0x7fffffe < (ulong)(lVar12 >> 3)) {
            uVar7 = 0xfffffff;
          }
          if (uVar7 == 0) {
            lVar12 = 0;
          }
          else {
            pZVar9 = *(Zone **)(this + 0x40);
            uVar14 = uVar7 * 8;
            lVar12 = *(long *)(pZVar9 + 0x10);
            if (uVar14 < (ulong)(*(long *)(pZVar9 + 0x18) - lVar12) ||
                uVar14 - (*(long *)(pZVar9 + 0x18) - lVar12) == 0) {
              *(ulong *)(pZVar9 + 0x10) = lVar12 + uVar14;
            }
            else {
              lVar12 = Zone::NewExpand(pZVar9,uVar14);
            }
          }
          puVar10 = (undefined8 *)(lVar12 + lVar17 * 8);
          puVar13 = puVar10 + 1;
          *puVar10 = uVar5;
          puVar1 = *(undefined8 **)(this + 0x28);
          puVar15 = *(undefined8 **)(this + 0x30);
          while (puVar15 != puVar1) {
            puVar15 = puVar15 + -1;
            puVar10 = puVar10 + -1;
            *puVar10 = *puVar15;
          }
          *(undefined8 **)(this + 0x28) = puVar10;
          *(undefined8 **)(this + 0x30) = puVar13;
          *(ulong *)(this + 0x38) = lVar12 + uVar7 * 8;
        }
        else {
          *puVar10 = uVar5;
          *(long *)(this + 0x30) = *(long *)(this + 0x30) + 8;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < (long)uVar8);
    }
    if ((param_1[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
      pbVar6 = (basic_ostream *)JSHeapBroker::Trace(param_1);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,"Copied ",7);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          (int)uVar2 >> 1);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6," feedback cells",0xf);
      local_64[0] = '\n';
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,local_64,1);
    }
    *(int *)(local_70 + 0x170) = *(int *)(local_70 + 0x170) + -1;
  }
  return;
}

