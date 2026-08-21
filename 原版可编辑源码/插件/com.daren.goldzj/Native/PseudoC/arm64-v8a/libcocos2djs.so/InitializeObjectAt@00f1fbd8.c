
/* v8::internal::TranslatedState::InitializeObjectAt(v8::internal::TranslatedValue*) */

undefined8 __thiscall
v8::internal::TranslatedState::InitializeObjectAt(TranslatedState *this,TranslatedValue *param_1)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  void *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  long local_40;
  long local_38;
  PerThreadAssertScopeDebugOnly aPStack_18 [8];
  undefined8 *puVar9;
  
  while (*param_1 == (TranslatedValue)0x9) {
    if (*(ulong *)(this + 0x58) <= (ulong)(long)*(int *)(param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<size_t>(object_index) < object_positions_.size()");
    }
    uVar1 = *(long *)(this + 0x50) + (long)*(int *)(param_1 + 0x18);
    piVar2 = (int *)(*(long *)(*(long *)(this + 0x38) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                    (uVar1 & 0x1ff) * 8);
    lVar7 = *(long *)this + (long)*piVar2 * 0x58;
    uVar1 = *(long *)(lVar7 + 0x48) + (long)piVar2[1];
    param_1 = (TranslatedValue *)
              (*(long *)(*(long *)(lVar7 + 0x30) + (uVar1 >> 4 & 0xffffffffffffff8)) +
              (uVar1 & 0x7f) * 0x20);
  }
  if (*param_1 != (TranslatedValue)0x8) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","TranslatedValue::kCapturedObject == slot->kind()");
  }
  if (param_1[1] != (TranslatedValue)0x2) {
    uStack_48 = 0;
    local_50 = (undefined8 *)0x0;
    local_38 = 0;
    local_40 = 0;
    puStack_58 = (undefined8 *)0x0;
    local_60 = (void *)0x0;
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    std::__ndk1::deque<int,std::__ndk1::allocator<int>>::__add_back_capacity
              ((deque<int,std::__ndk1::allocator<int>> *)&local_60);
    *(undefined4 *)
     (*(long *)((long)puStack_58 + ((ulong)(local_40 + local_38) >> 7 & 0x1fffffffffffff8)) +
     (local_40 + local_38 & 0x3ffU) * 4) = uVar4;
    param_1[1] = (TranslatedValue)0x2;
    lVar7 = local_38 + 1;
    while (lVar7 != 0) {
      local_38 = lVar7 + -1;
      lVar3 = 0;
      if ((long)local_50 - (long)puStack_58 != 0) {
        lVar3 = ((long)local_50 - (long)puStack_58) * 0x80 + -1;
      }
      iVar5 = *(int *)(*(long *)((long)puStack_58 +
                                ((ulong)(local_40 + local_38) >> 7 & 0x1fffffffffffff8)) +
                      (local_40 + local_38 & 0x3ffU) * 4);
      if (0x7ff < (lVar3 - (lVar7 + local_40)) + 1U) {
        operator_delete((void *)local_50[-1]);
        local_50 = local_50 + -1;
      }
      InitializeCapturedObjectAt(this,iVar5,(stack *)&local_60,aPStack_18);
      lVar7 = local_38;
    }
    local_38 = 0;
    lVar7 = (long)local_50 - (long)puStack_58;
    puVar6 = local_50;
    while (uVar1 = lVar7 >> 3, local_50 = puVar6, 2 < uVar1) {
      operator_delete((void *)*puStack_58);
      puStack_58 = puStack_58 + 1;
      puVar6 = local_50;
      lVar7 = (long)local_50 - (long)puStack_58;
    }
    if (uVar1 == 1) {
      local_40 = 0x200;
    }
    else if (uVar1 == 2) {
      local_40 = 0x400;
    }
    puVar8 = puStack_58;
    if (puStack_58 != puVar6) {
      do {
        puVar9 = puVar8 + 1;
        operator_delete((void *)*puVar8);
        puVar8 = puVar9;
      } while (puVar6 != puVar9);
      if ((long)local_50 - (long)puStack_58 != 0) {
        local_50 = local_50 + (((long)local_50 - (long)puStack_58) - 8U >> 3 ^ 0xffffffffffffffff);
      }
    }
    if (local_60 != (void *)0x0) {
      operator_delete(local_60);
    }
  }
  return *(undefined8 *)(param_1 + 0x10);
}

