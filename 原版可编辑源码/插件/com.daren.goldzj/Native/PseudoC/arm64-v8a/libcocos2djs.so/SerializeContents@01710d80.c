
/* v8::internal::compiler::FixedArrayData::SerializeContents(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::FixedArrayData::SerializeContents
          (FixedArrayData *this,JSHeapBroker *param_1)

{
  undefined8 *puVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined8 uVar4;
  basic_ostream *pbVar5;
  ulong uVar6;
  Zone *pZVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  long local_70;
  char local_64 [4];
  
  if (this[0x1c] == (FixedArrayData)0x0) {
    this[0x1c] = (FixedArrayData)0x1;
    TraceScope::TraceScope((TraceScope *)&local_70,param_1,this,"FixedArrayData::SerializeContents")
    ;
    puVar14 = *(ulong **)this;
    iVar11 = *(int *)(*puVar14 + 3) >> 1;
    if (iVar11 != *(int *)(this + 0x18)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","array->length() == length()");
    }
    lVar15 = *(long *)(this + 0x20);
    lVar16 = *(long *)(this + 0x28);
    if (lVar15 != lVar16) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","contents_.empty()");
    }
    uVar13 = (ulong)iVar11;
    if ((ulong)(*(long *)(this + 0x30) - lVar15 >> 3) < uVar13) {
      pZVar7 = *(Zone **)(this + 0x38);
      uVar6 = uVar13 * 8;
      lVar8 = *(long *)(pZVar7 + 0x10);
      if (uVar6 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar8) ||
          uVar6 - (*(long *)(pZVar7 + 0x18) - lVar8) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar8 + uVar6;
      }
      else {
        lVar8 = Zone::NewExpand(pZVar7,uVar6);
      }
      puVar1 = *(undefined8 **)(this + 0x20);
      puVar12 = *(undefined8 **)(this + 0x28);
      puVar9 = (undefined8 *)(lVar8 + (lVar16 - lVar15 >> 3) * 8);
      puVar10 = puVar9;
      while (puVar12 != puVar1) {
        puVar12 = puVar12 + -1;
        puVar10 = puVar10 + -1;
        *puVar10 = *puVar12;
      }
      iVar11 = *(int *)(this + 0x18);
      *(undefined8 **)(this + 0x20) = puVar10;
      *(undefined8 **)(this + 0x28) = puVar9;
      *(ulong *)(this + 0x30) = lVar8 + uVar13 * 8;
    }
    if (0 < iVar11) {
      lVar15 = 0;
      do {
        uVar13 = *puVar14;
        pIVar2 = *(Isolate **)param_1;
        uVar13 = uVar13 & 0xffffffff00000000 |
                 (ulong)*(uint *)(uVar13 + (long)((int)lVar15 << 2) + 7);
        if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(pIVar2 + 0x95a0);
          if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
            puVar3 = (ulong *)HandleScope::Extend(pIVar2);
          }
          *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar13;
        }
        else {
          puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar13);
        }
        uVar4 = JSHeapBroker::GetOrCreateData(param_1,puVar3);
        puVar9 = *(undefined8 **)(this + 0x28);
        if (puVar9 < *(undefined8 **)(this + 0x30)) {
          *puVar9 = uVar4;
          *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
        }
        else {
          lVar16 = (long)puVar9 - *(long *)(this + 0x20) >> 3;
          uVar13 = lVar16 + 1;
          if (uVar13 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar8 = (long)*(undefined8 **)(this + 0x30) - *(long *)(this + 0x20);
          uVar6 = lVar8 >> 2;
          if (uVar13 <= uVar6) {
            uVar13 = uVar6;
          }
          if (0x7fffffe < (ulong)(lVar8 >> 3)) {
            uVar13 = 0xfffffff;
          }
          if (uVar13 == 0) {
            lVar8 = 0;
          }
          else {
            pZVar7 = *(Zone **)(this + 0x38);
            uVar6 = uVar13 * 8;
            lVar8 = *(long *)(pZVar7 + 0x10);
            if (uVar6 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar8) ||
                uVar6 - (*(long *)(pZVar7 + 0x18) - lVar8) == 0) {
              *(ulong *)(pZVar7 + 0x10) = lVar8 + uVar6;
            }
            else {
              lVar8 = Zone::NewExpand(pZVar7,uVar6);
            }
          }
          puVar9 = (undefined8 *)(lVar8 + lVar16 * 8);
          puVar10 = puVar9 + 1;
          *puVar9 = uVar4;
          puVar1 = *(undefined8 **)(this + 0x20);
          puVar12 = *(undefined8 **)(this + 0x28);
          while (puVar12 != puVar1) {
            puVar12 = puVar12 + -1;
            puVar9 = puVar9 + -1;
            *puVar9 = *puVar12;
          }
          *(undefined8 **)(this + 0x20) = puVar9;
          *(undefined8 **)(this + 0x28) = puVar10;
          *(ulong *)(this + 0x30) = lVar8 + uVar13 * 8;
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(this + 0x18));
    }
    if ((param_1[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
      pbVar5 = (basic_ostream *)JSHeapBroker::Trace(param_1);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,"Copied ",7);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5," elements",9);
      local_64[0] = '\n';
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,local_64,1);
    }
    *(int *)(local_70 + 0x170) = *(int *)(local_70 + 0x170) + -1;
  }
  return;
}

