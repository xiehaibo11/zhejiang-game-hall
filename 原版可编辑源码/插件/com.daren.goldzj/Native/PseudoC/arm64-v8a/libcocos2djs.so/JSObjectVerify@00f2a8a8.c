
/* v8::internal::JSObject::JSObjectVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::JSObject::JSObjectVerify(JSObject *this,Isolate *param_1)

{
  Isolate *pIVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong local_68;
  
  TorqueGeneratedClassVerifiers::JSObjectVerify(*(undefined8 *)this);
  uVar2 = *(uint *)(*(ulong *)this + 7);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","p.IsHeapObject()");
  }
  uVar19 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar2;
  uVar10 = ReadOnlyHeap::Contains(uVar19);
  if (((uVar10 & 1) == 0) &&
     (uVar10 = Heap::Contains((Heap *)(param_1 + 0x8850),uVar19), (uVar10 & 1) == 0)) {
LAB_00f2afd0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
  }
  uVar10 = *(ulong *)this;
  uVar19 = uVar10 & 0xffffffff00000000;
  if (((byte)((*(byte *)((uVar19 | 10) + (ulong)*(uint *)(uVar10 - 1)) >> 3) - 0xd) < 2) &&
     (*(short *)((uVar19 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x422)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","HasSloppyArgumentsElements() implies IsJSArgumentsObject()");
  }
  if ((*(uint *)((uVar19 | 0xb) + (ulong)*(uint *)(uVar10 - 1)) >> 0x15 & 1) == 0) {
    uVar14 = uVar19 | *(uint *)(uVar10 - 1);
    bVar3 = *(byte *)(uVar14 + 3);
    bVar4 = *(byte *)(uVar14 + 4);
    uVar2 = *(uint *)(uVar10 + 3);
    if (((uVar2 & 1) == 0) || (uVar2 == *(uint *)(uVar19 + 0x168))) {
      uVar14 = *(ulong *)(uVar19 + 0x3b8);
    }
    else {
      uVar14 = uVar19 | uVar2;
    }
    uVar2 = *(uint *)(uVar14 + 3);
    local_68 = uVar19 | *(uint *)(uVar10 - 1);
    iVar7 = Map::NextFreePropertyIndex((Map *)&local_68);
    uVar10 = *(ulong *)this;
    uVar2 = (((uint)bVar3 - (uint)bVar4) + (uVar2 >> 1 & 0x3ff)) - iVar7;
    uVar14 = uVar10 & 0xffffffff00000000;
    uVar19 = uVar14 | *(uint *)(uVar10 - 1);
    bVar3 = *(byte *)(uVar19 + 5);
    uVar12 = (uint)bVar3;
    puVar13 = (uint *)(uVar10 - 1);
    if (2 < bVar3) {
      uVar12 = (uint)*(byte *)(uVar19 + 3) - (uint)bVar3;
    }
    if (uVar12 != uVar2) {
      bVar3 = *(byte *)((uVar14 | *puVar13) + 5);
      uVar12 = (uint)bVar3;
      if (2 < bVar3) {
        uVar12 = (uint)*(byte *)((uVar14 | *puVar13) + 3) - (uint)bVar3;
      }
      if ((int)uVar2 <= (int)uVar12) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","actual_unused_property_fields > map().UnusedPropertyFields()")
        ;
      }
      bVar3 = *(byte *)((uVar14 | *puVar13) + 5);
      uVar12 = (uint)bVar3;
      if (2 < bVar3) {
        uVar12 = (uint)*(byte *)((uVar14 | *puVar13) + 3) - (uint)bVar3;
      }
      if (0x55555554 < (uVar2 - uVar12) * -0x55555555 + 0x2aaaaaaa) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","0 == delta % JSObject::kFieldsAdded");
      }
    }
    uVar20 = uVar14 | *(uint *)((uVar14 | *puVar13) + 0x17);
    bVar3 = *(byte *)((uVar14 | *puVar13) + 10);
    uVar15 = (ulong)(*(uint *)((uVar14 | *puVar13) + 0xb) >> 10) & 0x3ff;
    uVar19 = uVar14;
    if ((int)uVar15 != 0) {
      lVar21 = 0;
      do {
        uVar2 = *(uint *)(uVar20 + lVar21 + 0x13);
        if ((uVar2 >> 2 & 1) == 0) {
          uVar19 = *(ulong *)this;
          uVar10 = uVar19 & 0xffffffff00000000;
          uVar16 = uVar10 | *(uint *)(uVar19 - 1);
          uVar12 = *(int *)((uVar10 | lVar21 + 0x13U) + (ulong)*(uint *)(uVar16 + 0x17)) >> 1;
          uVar5 = uVar12 >> 0x13 & 0x3ff;
          iVar7 = (uint)*(byte *)(uVar16 + 3) - (uint)*(byte *)(uVar16 + 4);
          if ((int)uVar5 < iVar7) {
            uVar17 = (ulong)*(byte *)(uVar16 + 4) << 0x1c;
            iVar8 = (uVar5 + *(byte *)(uVar16 + 4)) * 4;
          }
          else {
            iVar8 = (uVar5 - iVar7) * 4 + 8;
            uVar17 = 0x20000000;
          }
          uVar12 = uVar12 >> 6 & 7;
          local_68 = CONCAT71(local_68._1_7_,(char)uVar12);
          if (4 < uVar12) {
            uVar11 = Representation::Mnemonic((Representation *)&local_68);
            PrintF("%s\n",uVar11);
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          uVar16 = (ulong)iVar8;
          uVar18 = (ulong)((int)uVar5 < iVar7) << 0xd | (long)iVar7 << 0x10 | uVar16;
          if (((uint)uVar18 >> 0xd & 1) == 0) {
            uVar12 = *(uint *)(uVar19 + 3);
            if (((uVar12 & 1) == 0) || (uVar12 == *(uint *)(uVar10 + 0x168))) {
              uVar19 = *(ulong *)(uVar10 + 0x3b8);
            }
            else {
              uVar19 = uVar10 | uVar12;
            }
            uVar12 = *(uint *)(((uVar16 & 0x1ffc) - ((uVar18 | uVar17) >> 0x1a & 0x7c)) + uVar19 + 7
                              );
          }
          else {
            pIVar1 = param_1 + *(uint *)((uVar19 - 1) + (uVar16 & 0x1fff));
            if (((((ulong)pIVar1 & 1) != 0) &&
                (uVar10 = ReadOnlyHeap::Contains(pIVar1), (uVar10 & 1) == 0)) &&
               (uVar10 = Heap::Contains((Heap *)(param_1 + 0x8850),pIVar1), (uVar10 & 1) == 0))
            goto LAB_00f2afd0;
            uVar12 = *(uint *)((uVar16 & 0x1fff) + *(ulong *)this + -1);
            uVar10 = *(ulong *)this & 0xffffffff00000000;
          }
          if (((uVar12 & 1) == 0) || (uVar12 != *(uint *)(param_1 + 0x98))) {
            uVar2 = uVar2 >> 7 & 7;
            local_68 = Map::UnwrapFieldType(uVar14 | *(uint *)(uVar20 + lVar21 + 0x17));
            iVar8 = FieldType::None();
            iVar7 = (int)local_68;
            iVar9 = FieldType::Any();
            if (uVar2 == 0) {
              if (iVar7 != iVar8) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","type_is_none");
              }
            }
            else {
              if ((((uVar2 != 3 || iVar7 != iVar8) && ((int)local_68 != iVar9)) &&
                  (uVar19 = FieldType::NowStable((FieldType *)&local_68), (uVar19 & 1) != 0)) &&
                 (uVar10 = FieldType::NowContains((FieldType *)&local_68,uVar10 | uVar12),
                 (uVar10 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.",
                         "!field_type.NowStable() || field_type.NowContains(value)");
              }
              if ((bVar3 < 0x30 && (bVar3 & 0xf8) != 0x18) && uVar2 == 3) {
                iVar7 = (int)local_68;
                iVar8 = FieldType::Any();
                if (iVar7 != iVar8) {
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("Check failed: %s.",
                           "is_transitionable_fast_elements_kind implies Map::IsMostGeneralFieldType(r, field_type)"
                          );
                }
              }
            }
          }
        }
        lVar21 = lVar21 + 0xc;
      } while (uVar15 * 0xc - lVar21 != 0);
      uVar10 = *(ulong *)this;
      puVar13 = (uint *)(uVar10 - 1);
      uVar19 = uVar10 & 0xffffffff00000000;
    }
    if ((~*(uint *)((uVar19 | *(uint *)(uVar10 - 1)) + 0xb) & 0x3ff) != 0) {
      uVar15 = uVar14 | *(uint *)(uVar20 + 0xb);
      uVar2 = *(uint *)(uVar15 + 7);
      iVar7 = *(int *)((uVar14 | *(uint *)(uVar15 + 3)) + 3) >> 1;
      if (iVar7 < (int)(*(uint *)((uVar19 | *puVar13) + 0xb) & 0x3ff)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","map().EnumLength() <= keys.length()");
      }
      if ((uVar2 != *(uint *)(param_1 + 0x168)) && (iVar7 != *(int *)((uVar14 | uVar2) + 3) >> 1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "indices != ReadOnlyRoots(isolate).empty_fixed_array() implies keys.length() == indices.length()"
                );
      }
    }
  }
  uVar2 = *(uint *)(uVar10 + 7);
  if (uVar2 + (int)param_1 != *(int *)(param_1 + 0x88)) {
    uVar19 = uVar10 & 0xffffffff00000000;
    if (((*(byte *)((uVar19 | *(uint *)(uVar10 - 1)) + 10) < 0x20) ||
        ((byte)((*(byte *)((uVar19 | *(uint *)(uVar10 - 1)) + 10) >> 3) - 6) < 6)) ||
       (uVar2 == *(uint *)(uVar19 + 0x168))) {
      bVar6 = true;
    }
    else {
      bVar6 = (*(byte *)((uVar19 | 10) + (ulong)*(uint *)(uVar10 - 1)) & 0xf8) == 0x78;
    }
    uVar14 = uVar19 | uVar2;
    if (*(int *)(uVar14 - 1) == *(int *)(uVar19 + 0xe0)) {
      if (!bVar6) {
LAB_00f2adc4:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "(map().has_fast_smi_or_object_elements() || map().has_any_nonextensible_elements() || (elements() == GetReadOnlyRoots().empty_fixed_array()) || HasFastStringWrapperElements()) == (elements().map() == GetReadOnlyRoots().fixed_array_map() || elements().map() == GetReadOnlyRoots().fixed_cow_array_map())"
                );
      }
    }
    else if ((bool)(bVar6 ^ *(int *)(uVar14 - 1) == *(int *)(uVar19 + 0xe8))) goto LAB_00f2adc4;
    uVar15 = uVar19 | 10;
    if (((*(byte *)((uVar19 | *(uint *)(uVar10 - 1)) + 10) & 0xf0) != 0x10) ==
        ((*(byte *)(uVar15 + *(uint *)(uVar10 - 1)) & 0xf0) == 0x10)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","map().has_fast_object_elements() == HasObjectElements()");
    }
    uVar19 = uVar19 | 7;
    if (*(short *)(uVar19 + *(uint *)(uVar10 - 1)) != 0x41b) {
      if (*(short *)(uVar19 + *(uint *)(uVar14 - 1)) == 0x85) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!object.elements().IsByteArray()");
      }
      if ((*(byte *)(uVar15 + *(uint *)(uVar10 - 1)) & 0xf0) == 0x20) {
        if ((1 < *(int *)(uVar14 + 3)) && (*(short *)(uVar19 + *(uint *)(uVar14 - 1)) != 0x87)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","object.elements().IsFixedDoubleArray()");
        }
      }
      else if (*(byte *)(uVar15 + *(uint *)(uVar10 - 1)) < 0x10) {
        if (1 < (int)*(uint *)(uVar14 + 3)) {
          iVar7 = 0;
          uVar10 = 0;
          uVar2 = *(uint *)(uVar14 + 7);
          while( true ) {
            if (((uVar2 & 1) != 0) && (uVar2 != *(uint *)(param_1 + 0xa8))) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","value.IsSmi() || value.IsTheHole(isolate)");
            }
            uVar10 = uVar10 + 1;
            iVar7 = iVar7 + 4;
            if (*(uint *)(uVar14 + 3) >> 1 <= uVar10) break;
            uVar2 = *(uint *)((long)(uVar14 + 7) + (long)iVar7);
          }
        }
      }
      else if (((*(byte *)(uVar15 + *(uint *)(uVar10 - 1)) & 0xf0) == 0x10) &&
              (1 < (int)*(uint *)(uVar14 + 3))) {
        iVar7 = 0;
        uVar10 = 0;
        do {
          if ((~*(uint *)(uVar14 + 7 + (long)iVar7) & 3) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","!HasWeakHeapObjectTag(element)");
          }
          uVar10 = uVar10 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar10 < *(uint *)(uVar14 + 3) >> 1);
      }
    }
  }
  return;
}

