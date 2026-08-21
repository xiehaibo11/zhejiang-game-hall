
/* v8::internal::compiler::JSObjectData::SerializeRecursiveAsBoilerplate(v8::internal::compiler::JSHeapBroker*,
   int) */

void __thiscall
v8::internal::compiler::JSObjectData::SerializeRecursiveAsBoilerplate
          (JSObjectData *this,JSHeapBroker *param_1,int param_2)

{
  Isolate *pIVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong *puVar8;
  FixedArrayData *this_00;
  ulong *puVar9;
  FixedDoubleArrayData *this_01;
  Isolate *pIVar10;
  JSObjectData *pJVar11;
  basic_ostream *pbVar12;
  undefined8 uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  Zone *this_02;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  Isolate *pIVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  int iVar25;
  MapData *pMVar26;
  long lVar27;
  Isolate *pIVar28;
  ulong uVar29;
  long local_70;
  ulong local_68;
  
  if (this[0x21] != (JSObjectData)0x0) {
    return;
  }
  this[0x21] = (JSObjectData)0x1;
  TraceScope::TraceScope
            ((TraceScope *)&local_70,param_1,this,"JSObjectData::SerializeRecursiveAsBoilerplate");
  if (param_2 < 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","depth > 0");
  }
  puVar14 = *(ulong **)this;
  uVar19 = *puVar14;
  if ((*(uint *)((uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(uVar19 - 1)) + 0xb) >> 0x18 & 1) !=
      0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!boilerplate->map().is_deprecated()");
  }
  pIVar21 = *(Isolate **)param_1;
  pIVar1 = pIVar21 + 0x95a0;
  uVar19 = uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(uVar19 + 7);
  if (*(CanonicalHandleScope **)(pIVar21 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pIVar1;
    if (puVar8 == *(ulong **)(pIVar21 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar21);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar19;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar21 + 0x95b8),uVar19);
    uVar19 = *puVar8;
  }
  if ((*(uint *)(uVar19 + 3) < 2) || (*(int *)(uVar19 - 1) == *(int *)(pIVar21 + 0xe8))) {
    if (((uVar19 & 1) != 0) && ((*(byte *)((uVar19 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
      puVar8 = (ulong *)Factory::CopyAndTenureFixedCOWArray((Factory *)pIVar21,puVar8);
      uVar19 = *puVar8;
      uVar29 = *puVar14;
      *(int *)(uVar29 + 7) = (int)uVar19;
      if ((uVar19 & 1) != 0) {
        uVar15 = *(ulong *)((uVar19 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar15 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar29,uVar29 + 7,uVar19);
          uVar15 = *(ulong *)(uVar19 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar29 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar29,uVar29 + 7,uVar19);
        }
      }
    }
    bVar5 = true;
    this[0x20] = (JSObjectData)0x1;
  }
  else {
    bVar5 = false;
  }
  this_00 = (FixedArrayData *)JSHeapBroker::GetOrCreateData(param_1,puVar8);
  if (*(int *)(this_00 + 8) != 1) goto LAB_01714d54;
  if (0x11 < *(ushort *)(*(long *)(this_00 + 0x10) + 0x18) - 0x76) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsFixedArrayBase()");
  }
  *(FixedArrayData **)(this + 0x18) = this_00;
  if (!bVar5) {
    uVar19 = *puVar14;
    uVar29 = uVar19 & 0xffffffff00000000 | 10;
    if (*(byte *)(uVar29 + *(uint *)(uVar19 - 1)) < 0x20) {
      if (*(int *)(this_00 + 8) != 1) goto LAB_01714d54;
      if (0xe < *(ushort *)(*(long *)(this_00 + 0x10) + 0x18) - 0x76) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsFixedArray()");
      }
      FixedArrayData::SerializeContents(this_00,param_1);
      uVar19 = *puVar8;
      uVar3 = *(uint *)(uVar19 + 3);
      if (1 < (int)uVar3) {
        iVar7 = 0;
        uVar29 = 1;
        do {
          uVar18 = *(uint *)(uVar19 + (long)iVar7 + 7);
          uVar19 = uVar19 & 0xffffffff00000000 | (ulong)uVar18;
          if (*(CanonicalHandleScope **)(pIVar21 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar9 = *(ulong **)pIVar1;
            if (puVar9 == *(ulong **)(pIVar21 + 0x95a8)) {
              puVar9 = (ulong *)HandleScope::Extend(pIVar21);
            }
            *(ulong **)pIVar1 = puVar9 + 1;
            *puVar9 = uVar19;
            if ((uVar18 & 1) != 0) goto LAB_0171474c;
          }
          else {
            puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar21 + 0x95b8),uVar19);
            uVar19 = *puVar9;
            if ((uVar19 & 1) != 0) {
LAB_0171474c:
              if (0xa9 < *(ushort *)
                          ((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1))) {
                pJVar11 = (JSObjectData *)JSHeapBroker::GetOrCreateData(param_1,puVar9);
                if (*(int *)(pJVar11 + 8) != 1) goto LAB_01714d54;
                if (*(ushort *)(*(long *)(pJVar11 + 0x10) + 0x18) < 0xaa) goto LAB_01714d6c;
                SerializeRecursiveAsBoilerplate(pJVar11,param_1,param_2 + -1);
              }
            }
          }
          if (uVar3 >> 1 <= uVar29) break;
          uVar19 = *puVar8;
          iVar7 = iVar7 + 4;
          uVar29 = uVar29 + 1;
        } while( true );
      }
    }
    else {
      if ((*(byte *)(uVar29 + *(uint *)(uVar19 - 1)) & 0xf0) != 0x20) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","boilerplate->HasDoubleElements()");
      }
      local_68 = *puVar8;
      iVar7 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_68,
                         local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1));
      if (0x20000 < iVar7) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","elements_object->Size() <= kMaxRegularHeapObjectSize");
      }
      this_01 = *(FixedDoubleArrayData **)(this + 0x18);
      if (*(int *)(this_01 + 8) != 1) goto LAB_01714d54;
      if (*(short *)(*(long *)(this_01 + 0x10) + 0x18) != 0x87) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsFixedDoubleArray()");
      }
      FixedDoubleArrayData::SerializeContents(this_01,param_1);
    }
  }
  uVar29 = *puVar14;
  uVar19 = uVar29 & 0xffffffff00000000;
  if ((*(uint *)((uVar19 | 0xb) + (ulong)*(uint *)(uVar29 - 1)) >> 0x15 & 1) == 0) {
    uVar3 = *(uint *)(uVar29 + 3);
    if (((uVar3 & 1) == 0) || (uVar3 == *(uint *)(uVar19 + 0x168))) {
      uVar15 = *(ulong *)(uVar19 + 0x3b8);
    }
    else {
      uVar15 = uVar19 | uVar3;
    }
    if ((*(ushort *)(uVar15 + 3) & 0x7fe) == 0) {
      if (*(long *)(this + 0x30) != *(long *)(this + 0x28)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","inobject_fields_.size() == 0u");
      }
      uVar19 = uVar19 | *(uint *)((uVar19 | *(uint *)(uVar29 - 1)) + 0x17);
      if (*(CanonicalHandleScope **)(pIVar21 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar1;
        if (puVar8 == *(ulong **)(pIVar21 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar21);
        }
        *(ulong **)pIVar1 = puVar8 + 1;
        *puVar8 = uVar19;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar21 + 0x95b8),uVar19);
      }
      uVar19 = (ulong)(*(uint *)((*puVar14 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar14 - 1)) +
                                0xb) >> 10) & 0x3ff;
      if ((int)uVar19 != 0) {
        uVar29 = 0;
        do {
          uVar15 = uVar29 * 0xc00000000 + 0x1000000000 >> 0x20 | 3;
          uVar3 = *(uint *)(*puVar8 + uVar15);
          if ((uVar3 >> 2 & 1) == 0) {
            uVar20 = *puVar14;
            uVar16 = uVar20 & 0xffffffff00000000;
            uVar22 = uVar16 | *(uint *)(uVar20 - 1);
            uVar18 = *(int *)((uVar16 | uVar15) + (ulong)*(uint *)(uVar22 + 0x17)) >> 1;
            uVar4 = uVar18 >> 0x13 & 0x3ff;
            iVar7 = (uint)*(byte *)(uVar22 + 3) - (uint)*(byte *)(uVar22 + 4);
            if ((int)uVar4 < iVar7) {
              uVar15 = (ulong)*(byte *)(uVar22 + 4) << 0x1c;
              iVar25 = (uVar4 + *(byte *)(uVar22 + 4)) * 4;
            }
            else {
              iVar25 = (uVar4 - iVar7) * 4 + 8;
              uVar15 = 0x20000000;
            }
            uVar18 = uVar18 >> 6 & 7;
            local_68 = CONCAT71(local_68._1_7_,(char)uVar18);
            if (4 < uVar18) {
              uVar13 = Representation::Mnemonic((Representation *)&local_68);
              PrintF("%s\n",uVar13);
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            uVar22 = (ulong)iVar25;
            uVar24 = (ulong)((int)uVar4 < iVar7) << 0xd | (long)iVar7 << 0x10 | uVar22;
            if (((uint)uVar24 >> 0xd & 1) == 0) {
              uVar18 = *(uint *)(uVar20 + 3);
              if (((uVar18 & 1) == 0) || (uVar18 == *(uint *)(uVar16 + 0x168))) {
                uVar20 = *(ulong *)(uVar16 + 0x3b8);
              }
              else {
                uVar20 = uVar16 | uVar18;
              }
              uVar18 = *(uint *)(((uVar22 & 0x1ffc) - ((uVar24 | uVar15) >> 0x1a & 0x7c)) + uVar20 +
                                7);
            }
            else {
              uVar18 = *(uint *)((uVar20 - 1) + (uVar22 & 0x1fff));
            }
            if (*(CanonicalHandleScope **)(pIVar21 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              pIVar10 = *(Isolate **)pIVar1;
              if (pIVar10 == *(Isolate **)(pIVar21 + 0x95a8)) {
                pIVar10 = (Isolate *)HandleScope::Extend(pIVar21);
              }
              *(Isolate **)pIVar1 = pIVar10 + 8;
              *(ulong *)pIVar10 = uVar16 | uVar18;
            }
            else {
              pIVar10 = (Isolate *)
                        CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar21 + 0x95b8),uVar16 | uVar18);
            }
            pIVar28 = pIVar10;
            if (((((uVar3 & 0x380) != 0x100) && (uVar15 = *(ulong *)pIVar10, (uVar15 & 1) != 0)) &&
                (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) ==
                 0x42)) && (pIVar28 = pIVar21 + 0x98, *(long *)(uVar15 + 3) != -0x8000000080001)) {
              pIVar28 = pIVar10;
            }
            pJVar11 = (JSObjectData *)JSHeapBroker::GetOrCreateData(param_1,pIVar28);
            uVar15 = *(ulong *)pIVar28;
            if (((uVar15 & 1) != 0) &&
               (0xa9 < *(ushort *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1))
               )) {
              if (*(int *)(pJVar11 + 8) != 1) goto LAB_01714d54;
              if (*(ushort *)(*(long *)(pJVar11 + 0x10) + 0x18) < 0xaa) {
LAB_01714d6c:
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","IsJSObject()");
              }
              SerializeRecursiveAsBoilerplate(pJVar11,param_1,param_2 + -1);
            }
            puVar2 = *(undefined8 **)(this + 0x30);
            if (puVar2 < *(undefined8 **)(this + 0x38)) {
              *puVar2 = pJVar11;
              puVar2[1] = 0;
              *(long *)(this + 0x30) = *(long *)(this + 0x30) + 0x10;
            }
            else {
              lVar27 = (long)puVar2 - *(long *)(this + 0x28) >> 4;
              uVar15 = lVar27 + 1;
              if (uVar15 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar17 = (long)*(undefined8 **)(this + 0x38) - *(long *)(this + 0x28);
              uVar16 = lVar17 >> 3;
              if (uVar15 <= uVar16) {
                uVar15 = uVar16;
              }
              if (0x3fffffe < (ulong)(lVar17 >> 4)) {
                uVar15 = 0x7ffffff;
              }
              if (uVar15 == 0) {
                lVar17 = 0;
              }
              else {
                this_02 = *(Zone **)(this + 0x40);
                uVar16 = uVar15 * 0x10;
                lVar17 = *(long *)(this_02 + 0x10);
                if (uVar16 < (ulong)(*(long *)(this_02 + 0x18) - lVar17) ||
                    uVar16 - (*(long *)(this_02 + 0x18) - lVar17) == 0) {
                  *(ulong *)(this_02 + 0x10) = lVar17 + uVar16;
                }
                else {
                  lVar17 = Zone::NewExpand(this_02,uVar16);
                }
              }
              puVar2 = (undefined8 *)(lVar17 + lVar27 * 0x10);
              *puVar2 = pJVar11;
              puVar2[1] = 0;
              lVar27 = *(long *)(this + 0x28);
              puVar6 = puVar2;
              for (lVar23 = *(long *)(this + 0x30); lVar23 != lVar27; lVar23 = lVar23 + -0x10) {
                uVar13 = *(undefined8 *)(lVar23 + -0x10);
                puVar6[-1] = *(undefined8 *)(lVar23 + -8);
                puVar6[-2] = uVar13;
                puVar6 = puVar6 + -2;
              }
              *(undefined8 **)(this + 0x28) = puVar6;
              *(undefined8 **)(this + 0x30) = puVar2 + 2;
              *(ulong *)(this + 0x38) = lVar17 + uVar15 * 0x10;
            }
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 != uVar19);
      }
      if ((param_1[0x74] != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
        pbVar12 = (basic_ostream *)JSHeapBroker::Trace(param_1);
        pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar12,"Copied ",7);
        pbVar12 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                             *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 4);
        pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar12," in-object fields",0x11);
        local_68 = CONCAT71(local_68._1_7_,10);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar12,(char *)&local_68,1);
      }
      pMVar26 = *(MapData **)(this + 0x10);
      if (pMVar26[0x68] == (MapData)0x0) {
        pMVar26[0x68] = (MapData)0x1;
        TraceScope::TraceScope
                  ((TraceScope *)&local_68,param_1,pMVar26,"MapData::SerializeOwnDescriptors");
        uVar19 = (ulong)(*(uint *)(**(long **)pMVar26 + 0xb) >> 10) & 0x3ff;
        if ((int)uVar19 != 0) {
          uVar29 = 0;
          do {
            MapData::SerializeOwnDescriptor(pMVar26,param_1,uVar29);
            uVar29 = uVar29 + 1;
          } while (uVar19 != uVar29);
        }
        *(int *)(local_68 + 0x170) = *(int *)(local_68 + 0x170) + -1;
        iVar7 = *(int *)(this + 8);
      }
      else {
        iVar7 = *(int *)(this + 8);
      }
      if (iVar7 != 0) {
        if (iVar7 == 2) {
          uVar19 = **(ulong **)this;
          if (((uVar19 & 1) != 0) &&
             (*(short *)((uVar19 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar19 - 1)) == 0x423)
             ) {
LAB_01714d54:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
          }
        }
        else if (*(short *)(*(long *)(this + 0x10) + 0x18) == 0x423) {
          if (iVar7 != 1) goto LAB_01714d54;
          JSArrayData::Serialize((JSArrayData *)this,param_1);
        }
      }
      *(int *)(local_70 + 0x170) = *(int *)(local_70 + 0x170) + -1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "boilerplate->HasFastProperties() && boilerplate->property_array().length() == 0");
}

