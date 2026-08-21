
/* v8::internal::DescriptorArray::DescriptorArrayVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::DescriptorArray::DescriptorArrayVerify(DescriptorArray *this,Isolate *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  
  TorqueGeneratedClassVerifiers::DescriptorArrayVerify(*(undefined8 *)this);
  uVar3 = *(ulong *)this;
  if (*(short *)(uVar3 + 3) == 0) {
    if (*(int *)(param_1 + 0x170) != (int)uVar3) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","ReadOnlyRoots(isolate).empty_descriptor_array() == *this");
    }
    if (*(short *)(uVar3 + 3) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == number_of_all_descriptors()");
    }
    if (*(short *)(uVar3 + 5) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == number_of_descriptors()");
    }
    if (*(int *)(uVar3 + 0xb) != *(int *)(param_1 + 0x3b0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","ReadOnlyRoots(isolate).empty_enum_cache() == enum_cache()");
    }
  }
  else {
    if (*(short *)(uVar3 + 3) < 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 < number_of_all_descriptors()");
    }
    if (*(short *)(uVar3 + 3) < *(short *)(uVar3 + 5)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","number_of_descriptors() <= number_of_all_descriptors()");
    }
    if (*(short *)(uVar3 + 5) != 0) {
      lVar4 = (long)*(short *)(uVar3 + 5);
      lVar9 = 0;
      uVar10 = 0;
      while( true ) {
        lVar4 = lVar4 + -1;
        puVar5 = (uint *)(uVar3 + (lVar9 >> 0x20) + 0xf);
        uVar2 = *puVar5;
        if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
          uVar8 = (ulong)puVar5 & 0xffffffff00000000;
          uVar6 = lVar9 + 0x1000000000 >> 0x20;
          uVar7 = uVar8 | uVar2;
          uVar2 = *(uint *)(uVar3 + (uVar6 | 3));
          if ((*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x40) &&
             (((uVar2 >> 5 & 1) == 0 && ((*(uint *)(uVar7 + 7) & 1) != 0)))) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","details.attributes() & DONT_ENUM != 0");
          }
          uVar1 = *(uint *)(uVar6 + uVar3 + 7);
          uVar3 = uVar3 & 0xffffffff00000000;
          if ((uVar2 >> 2 & 1) == 0) {
            if ((uVar2 >> 0x14 & 0x3ff) != uVar10) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","details.field_index() == expected_field_index");
            }
            uVar2 = FieldType::None();
            if ((((uVar1 != uVar2) && (uVar2 = FieldType::Any(), uVar1 != 3)) && (uVar1 != uVar2))
               && (((~uVar1 & 3) != 0 ||
                   (*(short *)((uVar3 | 7) +
                              (ulong)*(uint *)((uVar3 | (ulong)uVar1 & 0xfffffffffffffffd) - 1)) !=
                    0xa2)))) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.",
                       "value == MaybeObject::FromObject(FieldType::None()) || value == MaybeObject::FromObject(FieldType::Any()) || value->IsCleared() || (value->GetHeapObjectIfWeak(&heap_object) && heap_object.IsMap())"
                      );
            }
            uVar10 = uVar10 + 1;
          }
          else {
            if ((~uVar1 & 3) == 0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","!value->IsWeakOrCleared()");
            }
            if (((uVar1 & 1) != 0) &&
               (*(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) == 0xa2)) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","!value->cast<Object>().IsMap()");
            }
          }
        }
        if (lVar4 == 0) break;
        uVar3 = *(ulong *)this;
        lVar9 = lVar9 + 0xc00000000;
      }
    }
  }
  return;
}

