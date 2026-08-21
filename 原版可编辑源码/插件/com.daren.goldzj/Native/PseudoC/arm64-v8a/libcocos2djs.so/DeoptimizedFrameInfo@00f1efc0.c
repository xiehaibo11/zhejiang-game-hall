
/* v8::internal::DeoptimizedFrameInfo::DeoptimizedFrameInfo(v8::internal::TranslatedState*,
   std::__ndk1::__wrap_iter<v8::internal::TranslatedFrame*>, v8::internal::Isolate*) */

void __thiscall
v8::internal::DeoptimizedFrameInfo::DeoptimizedFrameInfo
          (DeoptimizedFrameInfo *this,undefined8 param_2,long param_3,undefined8 param_4)

{
  TranslatedValue TVar1;
  ushort uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  TranslatedValue *this_00;
  long *plVar13;
  ulong uVar14;
  ulong local_b8;
  long *local_b0;
  TranslatedValue *pTStack_a8;
  int local_a0;
  long *local_98;
  TranslatedValue *pTStack_90;
  int local_88;
  long *local_80;
  TranslatedValue *pTStack_78;
  int local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  uVar2 = *(ushort *)(**(long **)(param_3 + 0x10) + 0x15);
  uVar14 = (ulong)uVar2;
  plVar13 = (long *)(*(long *)(param_3 + 0x30) +
                    (*(ulong *)(param_3 + 0x48) >> 4 & 0xffffffffffffff8));
  if (*(long *)(param_3 + 0x38) == *(long *)(param_3 + 0x30)) {
    this_00 = (TranslatedValue *)0x0;
  }
  else {
    this_00 = (TranslatedValue *)(*plVar13 + (*(ulong *)(param_3 + 0x48) & 0x7f) * 0x20);
  }
  if (this_00[1] == (TranslatedValue)0x2) {
LAB_00f1f06c:
    uVar5 = *(undefined8 *)(this_00 + 0x10);
  }
  else {
    TVar1 = *this_00;
    if ((byte)TVar1 - 1 < 7) {
      TranslatedValue::MaterializeSimple(this_00);
      goto LAB_00f1f06c;
    }
    if (1 < (byte)TVar1 - 8) {
      if (TVar1 != (TranslatedValue)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("internal error: value missing");
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unexpected case");
    }
    TranslatedState::EnsureObjectAllocatedAt(*(TranslatedState **)(this_00 + 8),this_00);
    uVar5 = TranslatedState::InitializeObjectAt(*(TranslatedState **)(this_00 + 8),this_00);
  }
  iVar6 = 1;
  *(undefined8 *)this = uVar5;
  do {
    if (*this_00 == (TranslatedValue)0x8) {
      iVar7 = *(int *)(this_00 + 0x1c);
    }
    else {
      iVar7 = 0;
    }
    this_00 = this_00 + 0x20;
    iVar6 = iVar6 + -1 + iVar7;
    if ((long)this_00 - *plVar13 == 0x1000) {
      plVar13 = plVar13 + 1;
      this_00 = (TranslatedValue *)*plVar13;
    }
  } while (0 < iVar6);
  iVar6 = 1;
  do {
    if (*this_00 == (TranslatedValue)0x8) {
      iVar7 = *(int *)(this_00 + 0x1c);
    }
    else {
      iVar7 = 0;
    }
    this_00 = this_00 + 0x20;
    iVar6 = iVar6 + -1 + iVar7;
    if ((long)this_00 - *plVar13 == 0x1000) {
      plVar13 = plVar13 + 1;
      this_00 = (TranslatedValue *)*plVar13;
    }
  } while (0 < iVar6);
  uVar10 = **(ulong **)(param_3 + 0x10);
  local_b8 = uVar10 & 0xffffffff00000000;
  uVar12 = local_b8 | *(uint *)(uVar10 + 0xf);
  uVar11 = local_b8 | 7;
  if ((*(short *)(uVar11 + *(uint *)(uVar12 - 1)) == 0x5b) &&
     (*(short *)(uVar11 + *(uint *)((local_b8 | *(uint *)(uVar12 + 0x13)) - 1)) == 0x86)) {
    uVar8 = *(uint *)(uVar12 + 0xf);
  }
  else {
    uVar8 = *(uint *)(uVar10 + 3);
    if (((uVar8 & 1) == 0) || (*(short *)(uVar11 + *(uint *)((local_b8 | uVar8) - 1)) != 0x86)) {
      uVar8 = *(uint *)((local_b8 | *(uint *)(uVar10 + 3)) + 3);
    }
    else {
      uVar8 = *(uint *)(uVar10 + 3);
    }
  }
  local_b8 = local_b8 | uVar8;
  uVar4 = AbstractCode::SourcePosition((AbstractCode *)&local_b8,*(int *)(param_3 + 4));
  *(undefined4 *)(this + 0x40) = uVar4;
  uVar10 = *(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3;
  if (uVar10 < uVar14) {
    std::__ndk1::
    vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
    ::__append((vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
                *)(this + 0x10),uVar14 - uVar10);
    if (uVar2 != 0) goto LAB_00f1f1e4;
LAB_00f1f268:
    iVar6 = 2;
  }
  else {
    if (uVar10 != uVar14) {
      *(ulong *)(this + 0x18) = *(long *)(this + 0x10) + uVar14 * 8;
    }
    if (uVar2 == 0) goto LAB_00f1f268;
LAB_00f1f1e4:
    uVar10 = 0;
    iVar6 = 2;
    do {
      local_80 = plVar13;
      pTStack_78 = this_00;
      local_70 = iVar6;
      uVar5 = FUN_00f1f550(&local_80,param_4);
      *(undefined8 *)(*(long *)(this + 0x10) + uVar10 * 8) = uVar5;
      iVar7 = 1;
      do {
        if (*this_00 == (TranslatedValue)0x8) {
          iVar9 = *(int *)(this_00 + 0x1c);
        }
        else {
          iVar9 = 0;
        }
        this_00 = this_00 + 0x20;
        iVar7 = iVar7 + -1 + iVar9;
        if ((long)this_00 - *plVar13 == 0x1000) {
          plVar13 = plVar13 + 1;
          this_00 = (TranslatedValue *)*plVar13;
        }
      } while (0 < iVar7);
      uVar10 = uVar10 + 1;
      iVar6 = iVar6 + 1;
    } while (uVar10 != uVar14);
  }
  local_98 = plVar13;
  pTStack_90 = this_00;
  local_88 = iVar6;
  uVar5 = FUN_00f1f550(&local_98,param_4);
  iVar7 = 1;
  *(undefined8 *)(this + 8) = uVar5;
  do {
    if (*this_00 == (TranslatedValue)0x8) {
      iVar9 = *(int *)(this_00 + 0x1c);
    }
    else {
      iVar9 = 0;
    }
    this_00 = this_00 + 0x20;
    iVar7 = iVar7 + -1 + iVar9;
    if ((long)this_00 - *plVar13 == 0x1000) {
      plVar13 = plVar13 + 1;
      this_00 = (TranslatedValue *)*plVar13;
    }
  } while (0 < iVar7);
  uVar8 = *(uint *)(param_3 + 0x18);
  uVar10 = (ulong)(int)uVar8;
  uVar14 = *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
  if (uVar14 < uVar10) {
    std::__ndk1::
    vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
    ::__append((vector<v8::internal::Handle<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Object>>>
                *)(this + 0x28),uVar10 - uVar14);
  }
  else if (uVar14 != uVar10) {
    *(ulong *)(this + 0x30) = *(long *)(this + 0x28) + uVar10 * 8;
  }
  if (0 < (int)uVar8) {
    uVar14 = 0;
    do {
      iVar6 = iVar6 + 1;
      local_b0 = plVar13;
      pTStack_a8 = this_00;
      local_a0 = iVar6;
      uVar5 = FUN_00f1f550(&local_b0,param_4);
      *(undefined8 *)(*(long *)(this + 0x28) + uVar14 * 8) = uVar5;
      iVar7 = 1;
      do {
        if (*this_00 == (TranslatedValue)0x8) {
          iVar9 = *(int *)(this_00 + 0x1c);
        }
        else {
          iVar9 = 0;
        }
        this_00 = this_00 + 0x20;
        iVar7 = iVar7 + -1 + iVar9;
        if ((long)this_00 - *plVar13 == 0x1000) {
          plVar13 = plVar13 + 1;
          this_00 = (TranslatedValue *)*plVar13;
        }
      } while (0 < iVar7);
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar8);
  }
  iVar6 = 1;
  do {
    if (*this_00 == (TranslatedValue)0x8) {
      iVar7 = *(int *)(this_00 + 0x1c);
    }
    else {
      iVar7 = 0;
    }
    this_00 = this_00 + 0x20;
    iVar6 = iVar6 + -1 + iVar7;
    if ((long)this_00 - *plVar13 == 0x1000) {
      plVar13 = plVar13 + 1;
      this_00 = (TranslatedValue *)*plVar13;
    }
  } while (0 < iVar6);
  if (*(long *)(param_3 + 0x38) == *(long *)(param_3 + 0x30)) {
    if (this_00 != (TranslatedValue *)0x0) goto LAB_00f1f450;
  }
  else {
    uVar14 = *(long *)(param_3 + 0x48) + *(long *)(param_3 + 0x50);
    if ((TranslatedValue *)
        (*(long *)(*(long *)(param_3 + 0x30) + (uVar14 >> 4 & 0xffffffffffffff8)) +
        (uVar14 & 0x7f) * 0x20) != this_00) {
LAB_00f1f450:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","stack_it == frame_it->end()");
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

