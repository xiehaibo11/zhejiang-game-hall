
/* v8::internal::Map::MapVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::Map::MapVerify(Map *this,Isolate *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  
  TorqueGeneratedClassVerifiers::MapVerify(*(undefined8 *)this);
  uVar4 = *(ulong *)this;
  if (((uVar4 & 1) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!ObjectInYoungGeneration(*this)");
  }
  if (0x439 < *(ushort *)(uVar4 + 7)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","FIRST_TYPE <= instance_type() && instance_type() <= LAST_TYPE");
  }
  if (*(char *)(uVar4 + 3) != '\0') {
    if ((*(char *)(uVar4 + 3) == '\0') ||
       (bVar1 = *(byte *)(uVar4 + 3), uVar4 = Heap::Capacity((Heap *)(param_1 + 0x8850)),
       uVar4 <= (ulong)bVar1 * 4)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "instance_size() == kVariableSizeSentinel || (kTaggedSize <= instance_size() && static_cast<size_t>(instance_size()) < heap->Capacity())"
              );
    }
    uVar4 = *(ulong *)this;
  }
  uVar2 = *(ushort *)(uVar4 + 7);
  uVar5 = uVar4 & 0xffffffff00000000;
  if (uVar2 - 0x88 < 10) {
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | *(uint *)(uVar4 + 0x13)) - 1)) != 0x8f) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","native_context().IsNativeContext()");
    }
  }
  else {
    uVar3 = *(uint *)(uVar4 + 0x13);
    uVar6 = uVar5 | uVar3;
    if (((uVar3 & 1) == 0) ||
       (uVar7 = uVar6, *(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0xa2)) {
      uVar7 = *(ulong *)(uVar5 + 0xa0);
    }
    if ((int)uVar7 == *(int *)(param_1 + 0xa0)) {
      if ((*(uint *)(uVar4 + 0xb) >> 10 & 0x3ff) !=
          (int)*(short *)((uVar5 | *(uint *)(uVar4 + 0x17)) + 5)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "NumberOfOwnDescriptors() == instance_descriptors().number_of_descriptors()");
      }
    }
    else {
      if (((uVar3 & 1) == 0) || (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0xa2)) {
        uVar6 = *(ulong *)(uVar5 + 0xa0);
      }
      if ((*(uint *)(uVar6 + 0xb) >> 0x19 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!parent.is_stable()");
      }
      if (*(int *)(uVar4 + 0x17) == *(int *)(uVar6 + 0x17)) {
        if ((*(uint *)(uVar4 + 0xb) >> 10 & 0x3ff) == (*(uint *)(uVar6 + 0xb) >> 10 & 0x3ff) + 1) {
          if ((*(uint *)(uVar6 + 0xb) >> 0x16 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","!parent.owns_descriptors()");
          }
        }
        else {
          if (((*(uint *)(uVar6 + 0xb) ^ *(uint *)(uVar4 + 0xb)) & 0xffc00) != 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "NumberOfOwnDescriptors() == parent.NumberOfOwnDescriptors()");
          }
          if (*(int *)(uVar4 + 0x17) != *(int *)(param_1 + 0x170)) {
            if (((*(uint *)(uVar4 + 0xb) >> 0x16 & 1) != 0) &&
               ((*(uint *)(uVar6 + 0xb) >> 0x16 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","owns_descriptors() implies !parent.owns_descriptors()");
            }
            if (((*(uint *)(uVar6 + 0xb) >> 0x16 & 1) != 0) &&
               ((*(uint *)(uVar4 + 0xb) >> 0x16 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","parent.owns_descriptors() implies !owns_descriptors()");
            }
          }
        }
      }
    }
  }
  uVar3 = (uint)*(char *)(uVar4 + 9);
  if ((uVar2 != 0x439) && ((int)uVar3 < 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","has_prototype_slot() implies instance_type() == JS_FUNCTION_TYPE")
    ;
  }
  if ((*(uint *)(uVar4 + 0xb) >> 0x1c & 1) == 0) {
    if ((uVar3 >> 2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!has_named_interceptor()");
    }
    if ((*(uint *)(uVar4 + 0xb) >> 0x15 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!is_dictionary_map()");
    }
    if ((uVar3 >> 5 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!is_access_check_needed()");
    }
    uVar6 = (ulong)(*(uint *)(uVar4 + 0xb) >> 10) & 0x3ff;
    if ((int)uVar6 != 0) {
      puVar8 = (uint *)((uVar5 | *(uint *)(uVar4 + 0x17)) + 0xf);
      do {
        if ((*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | *puVar8) - 1)) == 0x40) &&
           ((*(byte *)((uVar5 | *puVar8) + 7) >> 3 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!descriptors.GetKey(i).IsInterestingSymbol()");
        }
        uVar6 = uVar6 - 1;
        puVar8 = puVar8 + 3;
      } while (uVar6 != 0);
    }
  }
  else if (((uVar3 >> 2 & 1) != 0) && ((*(uint *)(uVar4 + 0xb) >> 0x1c & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","has_named_interceptor() implies may_have_interesting_symbols()");
  }
  if (((*(uint *)(uVar4 + 0xb) >> 0x15 & 1) != 0) && ((*(uint *)(uVar4 + 0xb) >> 0x1c & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","is_dictionary_map() implies may_have_interesting_symbols()");
  }
  if (((uVar3 >> 5 & 1) != 0) && ((*(uint *)(uVar4 + 0xb) >> 0x1c & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","is_access_check_needed() implies may_have_interesting_symbols()");
  }
  if ((0xa9 < uVar2) &&
     ((uVar3 = uVar2 - 0x411, 0x12 < uVar3 || ((1 << (ulong)(uVar3 & 0x1f) & 0x60001U) == 0)))) {
    bVar1 = *(byte *)(uVar4 + 10) >> 3;
    if ((bVar1 != 0xc) &&
       (((bVar1 != 3 && (10 < (byte)(bVar1 - 0x11))) &&
        ((0xb < bVar1 || ((1 << (ulong)bVar1 & 0xa80U) == 0)))))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "IsJSObjectMap() && !CanHaveFastTransitionableElementsKind() implies IsDictionaryElementsKind(elements_kind()) || IsTerminalElementsKind(elements_kind()) || IsAnyHoleyNonextensibleElementsKind(elements_kind())"
              );
    }
  }
  if (((*(uint *)(uVar4 + 0xb) >> 0x18 & 1) != 0) && ((*(uint *)(uVar4 + 0xb) >> 0x19 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","is_deprecated() implies !is_stable()");
  }
  return;
}

