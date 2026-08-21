
/* v8::internal::compiler::FixedDoubleArrayData::SerializeContents(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::FixedDoubleArrayData::SerializeContents
          (FixedDoubleArrayData *this,JSHeapBroker *param_1)

{
  basic_ostream *pbVar1;
  ulong uVar2;
  undefined8 *puVar3;
  Zone *pZVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long local_68;
  char local_44 [4];
  
  if (this[0x1c] == (FixedDoubleArrayData)0x0) {
    this[0x1c] = (FixedDoubleArrayData)0x1;
    TraceScope::TraceScope
              ((TraceScope *)&local_68,param_1,this,"FixedDoubleArrayData::SerializeContents");
    plVar11 = *(long **)this;
    iVar8 = *(int *)(*plVar11 + 3) >> 1;
    if (iVar8 != *(int *)(this + 0x18)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","self->length() == length()");
    }
    puVar6 = *(undefined8 **)(this + 0x20);
    puVar7 = *(undefined8 **)(this + 0x28);
    if (puVar6 != puVar7) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","contents_.empty()");
    }
    puVar3 = *(undefined8 **)(this + 0x30);
    uVar12 = (ulong)iVar8;
    if ((ulong)((long)puVar3 - (long)puVar6 >> 3) < uVar12) {
      pZVar4 = *(Zone **)(this + 0x38);
      uVar2 = uVar12 * 8;
      lVar13 = *(long *)(pZVar4 + 0x10);
      if (uVar2 < (ulong)(*(long *)(pZVar4 + 0x18) - lVar13) ||
          uVar2 - (*(long *)(pZVar4 + 0x18) - lVar13) == 0) {
        *(ulong *)(pZVar4 + 0x10) = lVar13 + uVar2;
      }
      else {
        lVar13 = Zone::NewExpand(pZVar4,uVar2);
      }
      puVar10 = *(undefined8 **)(this + 0x20);
      puVar9 = *(undefined8 **)(this + 0x28);
      puVar6 = (undefined8 *)(lVar13 + ((long)puVar7 - (long)puVar6 >> 3) * 8);
      puVar3 = (undefined8 *)(lVar13 + uVar12 * 8);
      puVar7 = puVar6;
      while (puVar9 != puVar10) {
        puVar9 = puVar9 + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar9;
      }
      iVar8 = *(int *)(this + 0x18);
      *(undefined8 **)(this + 0x20) = puVar7;
      *(undefined8 **)(this + 0x28) = puVar6;
      *(undefined8 **)(this + 0x30) = puVar3;
      puVar7 = puVar6;
    }
    if (0 < iVar8) {
      lVar13 = 0;
      while( true ) {
        uVar14 = *(undefined8 *)(*plVar11 + ((ulong)(uint)((int)lVar13 << 3) | 7));
        if (puVar6 < puVar3) {
          *puVar6 = uVar14;
          puVar6 = (undefined8 *)(*(long *)(this + 0x28) + 8);
          *(undefined8 **)(this + 0x28) = puVar6;
        }
        else {
          lVar15 = (long)puVar7 - *(long *)(this + 0x20) >> 3;
          uVar12 = lVar15 + 1;
          if (uVar12 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar5 = (long)puVar3 - *(long *)(this + 0x20);
          uVar2 = lVar5 >> 2;
          if (uVar12 <= uVar2) {
            uVar12 = uVar2;
          }
          if (0x7fffffe < (ulong)(lVar5 >> 3)) {
            uVar12 = 0xfffffff;
          }
          if (uVar12 == 0) {
            lVar5 = 0;
          }
          else {
            pZVar4 = *(Zone **)(this + 0x38);
            uVar2 = uVar12 * 8;
            lVar5 = *(long *)(pZVar4 + 0x10);
            if (uVar2 < (ulong)(*(long *)(pZVar4 + 0x18) - lVar5) ||
                uVar2 - (*(long *)(pZVar4 + 0x18) - lVar5) == 0) {
              *(ulong *)(pZVar4 + 0x10) = lVar5 + uVar2;
            }
            else {
              lVar5 = Zone::NewExpand(pZVar4,uVar2);
            }
          }
          puVar7 = (undefined8 *)(lVar5 + lVar15 * 8);
          puVar6 = puVar7 + 1;
          *puVar7 = uVar14;
          puVar3 = *(undefined8 **)(this + 0x20);
          puVar10 = *(undefined8 **)(this + 0x28);
          while (puVar10 != puVar3) {
            puVar10 = puVar10 + -1;
            puVar7 = puVar7 + -1;
            *puVar7 = *puVar10;
          }
          *(ulong *)(this + 0x30) = lVar5 + uVar12 * 8;
          *(undefined8 **)(this + 0x20) = puVar7;
          *(undefined8 **)(this + 0x28) = puVar6;
        }
        lVar13 = lVar13 + 1;
        if (*(int *)(this + 0x18) <= lVar13) break;
        puVar3 = *(undefined8 **)(this + 0x30);
        puVar7 = puVar6;
      }
    }
    if ((param_1[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
      pbVar1 = (basic_ostream *)JSHeapBroker::Trace(param_1);
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar1,"Copied ",7);
      pbVar1 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                          *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3);
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar1," elements",9);
      local_44[0] = '\n';
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,local_44,1);
    }
    *(int *)(local_68 + 0x170) = *(int *)(local_68 + 0x170) + -1;
  }
  return;
}

