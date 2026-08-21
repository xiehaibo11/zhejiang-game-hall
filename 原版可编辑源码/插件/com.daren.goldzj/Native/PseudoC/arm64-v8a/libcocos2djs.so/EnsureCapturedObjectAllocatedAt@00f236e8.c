
/* v8::internal::TranslatedState::EnsureCapturedObjectAllocatedAt(int, std::__ndk1::stack<int,
   std::__ndk1::deque<int, std::__ndk1::allocator<int> > >*) */

void __thiscall
v8::internal::TranslatedState::EnsureCapturedObjectAllocatedAt
          (TranslatedState *this,int param_1,stack *param_2)

{
  int *piVar1;
  TranslatedValue *pTVar2;
  TranslatedValue *this_00;
  char *pcVar3;
  TranslatedValue TVar4;
  int iVar5;
  uint uVar6;
  Factory *pFVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  TranslatedFrame *pTVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  TranslatedFrame *pTVar17;
  TranslatedFrame *pTVar18;
  int local_64;
  
  if (*(ulong *)(this + 0x58) <= (ulong)(long)param_1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","static_cast<size_t>(object_index) < object_positions_.size()");
  }
  uVar16 = *(long *)(this + 0x50) + (long)param_1;
  piVar1 = (int *)(*(long *)(*(long *)(this + 0x38) + (uVar16 >> 6 & 0x3fffffffffffff8)) +
                  (uVar16 & 0x1ff) * 8);
  iVar5 = piVar1[1];
  lVar11 = (long)iVar5;
  pTVar12 = (TranslatedFrame *)(*(long *)this + (long)*piVar1 * 0x58);
  pTVar18 = pTVar12 + 0x48;
  pTVar17 = pTVar12 + 0x30;
  uVar16 = *(long *)pTVar18 + lVar11;
  lVar15 = *(long *)(*(long *)pTVar17 + (uVar16 >> 4 & 0xffffffffffffff8));
  uVar16 = uVar16 & 0x7f;
  local_64 = (int)(lVar11 + 1);
  pTVar2 = (TranslatedValue *)(lVar15 + uVar16 * 0x20);
  if (pTVar2[1] != (TranslatedValue)0x1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","TranslatedValue::kAllocated == slot->materialization_state()");
  }
  if (*pTVar2 != (TranslatedValue)0x8) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","TranslatedValue::kCapturedObject == slot->kind()");
  }
  uVar13 = *(long *)pTVar18 + lVar11 + 1;
  lVar10 = *(long *)(*(long *)pTVar17 + (uVar13 >> 4 & 0xffffffffffffff8));
  uVar13 = uVar13 & 0x7f;
  this_00 = (TranslatedValue *)(lVar10 + uVar13 * 0x20);
  if (*this_00 != (TranslatedValue)0x1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","frame->values_[value_index].kind() == TranslatedValue::kTagged");
  }
  if (this_00[1] != (TranslatedValue)0x2) {
    TranslatedValue::MaterializeSimple(this_00);
  }
  puVar14 = *(ulong **)(lVar10 + uVar13 * 0x20 + 0x10);
  uVar13 = *puVar14;
  if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0xa2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map->IsMap()");
  }
  iVar9 = (int)(lVar11 + 2);
  local_64 = iVar9;
  switch(*(ushort *)(uVar13 + 7)) {
  case 0x42:
    MaterializeHeapNumber(this,pTVar12,&local_64,pTVar2);
    return;
  default:
    if (*(ushort *)(uVar13 + 7) < 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","map->IsJSObjectMap()");
    }
    EnsureJSObjectAllocated(this,pTVar2,puVar14);
    lVar11 = *(long *)(*(long *)pTVar17 +
                      ((ulong)(*(long *)pTVar18 + (long)iVar9) >> 4 & 0xffffffffffffff8));
    local_64 = iVar5 + 3;
    uVar13 = *(long *)pTVar18 + (long)iVar9 & 0x7f;
    pcVar3 = (char *)(lVar11 + uVar13 * 0x20);
    if (*pcVar3 == '\b') {
      EnsurePropertiesAllocatedAndMarked(this,pcVar3,puVar14);
      if (*pcVar3 == '\b') {
        iVar5 = *(int *)(lVar11 + uVar13 * 0x20 + 0x1c);
      }
      else {
        iVar5 = 0;
      }
      EnsureChildrenAllocated(this,iVar5,pTVar12,&local_64,param_2);
    }
    if (*pTVar2 == (TranslatedValue)0x8) {
      iVar5 = *(int *)(lVar15 + uVar16 * 0x20 + 0x1c) + -2;
    }
    else {
      iVar5 = -2;
    }
    break;
  case 0x76:
  case 0x77:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7f:
  case 0x80:
  case 0x84:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
    uVar13 = *(long *)pTVar18 + lVar11 + 2;
    iVar5 = TranslatedValue::GetRawValue
                      ((TranslatedValue *)
                       (*(long *)(*(long *)pTVar17 + (uVar13 >> 4 & 0xffffffffffffff8)) +
                       (uVar13 & 0x7f) * 0x20));
    TVar4 = *pTVar2;
    if (TVar4 == (TranslatedValue)0x8) {
      iVar9 = *(int *)(lVar15 + uVar16 * 0x20 + 0x1c) << 2;
    }
    else {
      iVar9 = 0;
    }
    if ((iVar5 >> 1) * 4 + 8 != iVar9) {
LAB_00f23b90:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instance_size == slot->GetChildrenCount() * kTaggedSize");
    }
    pFVar7 = *(Factory **)(this + 0x18);
    if ((iVar5 >> 1 == 0) && (*(int *)(*(long *)(pFVar7 + 0x168) + -1) == (int)*puVar14)) {
      *(Factory **)(lVar15 + uVar16 * 0x20 + 0x10) = pFVar7 + 0x168;
    }
    else {
      if (TVar4 == (TranslatedValue)0x8) {
        iVar5 = *(int *)(lVar15 + uVar16 * 0x20 + 0x1c) * 4 + -8;
      }
      else {
        iVar5 = -8;
      }
      plVar8 = (long *)Factory::NewByteArray(pFVar7,iVar5,1);
      lVar11 = *plVar8;
      if (1 < *(int *)(lVar11 + 3)) {
        lVar10 = 0;
        do {
          *(undefined1 *)(lVar11 + lVar10 + 7) = 0;
          lVar11 = *plVar8;
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)(lVar11 + 3) >> 1);
      }
      *(long **)(lVar15 + uVar16 * 0x20 + 0x10) = plVar8;
      TVar4 = *pTVar2;
    }
    if (TVar4 == (TranslatedValue)0x8) {
      iVar5 = *(int *)(lVar15 + uVar16 * 0x20 + 0x1c) + -1;
    }
    else {
      iVar5 = -1;
    }
    break;
  case 0x87:
    MaterializeFixedDoubleArray(this,pTVar12,&local_64,pTVar2);
    return;
  case 0xa4:
    uVar6 = TranslatedValue::GetRawValue
                      ((TranslatedValue *)
                       (*(long *)(*(long *)pTVar17 +
                                 ((ulong)(*(long *)pTVar18 + (long)iVar9) >> 4 & 0xffffffffffffff8))
                       + (*(long *)pTVar18 + (long)iVar9 & 0x7fU) * 0x20));
    if ((*pTVar2 != (TranslatedValue)0x8) ||
       (lVar11 = lVar15 + uVar16 * 0x20, (uVar6 & 0x7fe) * 2 + 8 != *(int *)(lVar11 + 0x1c) * 4))
    goto LAB_00f23b90;
    plVar8 = (long *)Factory::NewByteArray
                               (*(Factory **)(this + 0x18),*(int *)(lVar11 + 0x1c) * 4 + -8,1);
    lVar11 = *plVar8;
    if (1 < *(int *)(lVar11 + 3)) {
      lVar10 = 0;
      do {
        *(undefined1 *)(lVar11 + lVar10 + 7) = 0;
        lVar11 = *plVar8;
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(lVar11 + 3) >> 1);
    }
    lVar15 = lVar15 + uVar16 * 0x20;
    *(long **)(lVar15 + 0x10) = plVar8;
    if (*pTVar2 == (TranslatedValue)0x8) {
      iVar5 = *(int *)(lVar15 + 0x1c) + -1;
    }
    else {
      iVar5 = -1;
    }
  }
  EnsureChildrenAllocated(this,iVar5,pTVar12,&local_64,param_2);
  return;
}

