
/* v8::internal::TranslatedState::EnsureChildrenAllocated(int, v8::internal::TranslatedFrame*, int*,
   std::__ndk1::stack<int, std::__ndk1::deque<int, std::__ndk1::allocator<int> > >*) */

void __thiscall
v8::internal::TranslatedState::EnsureChildrenAllocated
          (TranslatedState *this,int param_1,TranslatedFrame *param_2,int *param_3,stack *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  TranslatedValue TVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  TranslatedValue *this_00;
  int iVar8;
  
  if (0 < param_1) {
    uVar4 = (ulong)(uint)*param_3;
    iVar8 = 0;
    do {
      uVar4 = *(long *)(param_2 + 0x48) + (long)(int)uVar4;
      this_00 = (TranslatedValue *)
                (*(long *)(*(long *)(param_2 + 0x30) + (uVar4 >> 4 & 0xffffffffffffff8)) +
                (uVar4 & 0x7f) * 0x20);
      TVar3 = *this_00;
      if (((byte)TVar3 & 0xfe) == 8) {
        while( true ) {
          if (TVar3 != (TranslatedValue)0x9) break;
          if (*(ulong *)(this + 0x58) <= (ulong)(long)*(int *)(this_00 + 0x18)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "static_cast<size_t>(object_index) < object_positions_.size()");
          }
          uVar4 = *(long *)(this + 0x50) + (long)*(int *)(this_00 + 0x18);
          piVar1 = (int *)(*(long *)(*(long *)(this + 0x38) + (uVar4 >> 6 & 0x3fffffffffffff8)) +
                          (uVar4 & 0x1ff) * 8);
          lVar6 = *(long *)this + (long)*piVar1 * 0x58;
          uVar4 = *(long *)(lVar6 + 0x48) + (long)piVar1[1];
          this_00 = (TranslatedValue *)
                    (*(long *)(*(long *)(lVar6 + 0x30) + (uVar4 >> 4 & 0xffffffffffffff8)) +
                    (uVar4 & 0x7f) * 0x20);
          TVar3 = *this_00;
        }
        if (TVar3 != (TranslatedValue)0x8) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","TranslatedValue::kCapturedObject == slot->kind()");
        }
        if (this_00[1] == (TranslatedValue)0x0) {
          lVar6 = *(long *)(param_4 + 8);
          uVar2 = *(undefined4 *)(this_00 + 0x18);
          uVar4 = 0;
          if (*(long *)(param_4 + 0x10) - lVar6 != 0) {
            uVar4 = (*(long *)(param_4 + 0x10) - lVar6) * 0x80 - 1;
          }
          uVar7 = *(long *)(param_4 + 0x28) + *(long *)(param_4 + 0x20);
          if (uVar4 == uVar7) {
            std::__ndk1::deque<int,std::__ndk1::allocator<int>>::__add_back_capacity
                      ((deque<int,std::__ndk1::allocator<int>> *)param_4);
            lVar6 = *(long *)(param_4 + 8);
            uVar7 = *(long *)(param_4 + 0x20) + *(long *)(param_4 + 0x28);
          }
          *(undefined4 *)(*(long *)(lVar6 + (uVar7 >> 7 & 0x1fffffffffffff8)) + (uVar7 & 0x3ff) * 4)
               = uVar2;
          *(long *)(param_4 + 0x28) = *(long *)(param_4 + 0x28) + 1;
          this_00[1] = (TranslatedValue)0x1;
        }
      }
      else {
        TranslatedValue::MaterializeSimple(this_00);
      }
      uVar4 = (ulong)*param_3;
      iVar5 = 1;
      do {
        iVar5 = iVar5 + -1;
        lVar6 = *(long *)(*(long *)(param_2 + 0x30) +
                         (uVar4 + *(long *)(param_2 + 0x48) >> 4 & 0xffffffffffffff8));
        uVar7 = uVar4 + *(long *)(param_2 + 0x48) & 0x7f;
        *param_3 = (int)uVar4 + 1;
        uVar4 = uVar4 + 1;
        if (*(char *)(lVar6 + uVar7 * 0x20) == '\b') {
          iVar5 = *(int *)(lVar6 + uVar7 * 0x20 + 0x1c) + iVar5;
        }
      } while (0 < iVar5);
      iVar8 = iVar8 + 1;
    } while (iVar8 != param_1);
  }
  return;
}

