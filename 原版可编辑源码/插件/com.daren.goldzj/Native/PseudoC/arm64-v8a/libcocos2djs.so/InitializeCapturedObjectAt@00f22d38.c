
/* v8::internal::TranslatedState::InitializeCapturedObjectAt(int, std::__ndk1::stack<int,
   std::__ndk1::deque<int, std::__ndk1::allocator<int> > >*,
   v8::internal::PerThreadAssertScopeDebugOnly<(v8::internal::PerThreadAssertType)0, false> const&)
    */

void __thiscall
v8::internal::TranslatedState::InitializeCapturedObjectAt
          (TranslatedState *this,int param_1,stack *param_2,PerThreadAssertScopeDebugOnly *param_3)

{
  int *piVar1;
  char *pcVar2;
  TranslatedValue *this_00;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  char cVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  byte *pbVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  int local_64;
  
  if (*(ulong *)(this + 0x58) <= (ulong)(long)param_1) {
LAB_00f230d4:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","static_cast<size_t>(object_index) < object_positions_.size()");
  }
  uVar18 = *(long *)(this + 0x50) + (long)param_1;
  piVar1 = (int *)(*(long *)(*(long *)(this + 0x38) + (uVar18 >> 6 & 0x3fffffffffffff8)) +
                  (uVar18 & 0x1ff) * 8);
  iVar3 = piVar1[1];
  lVar15 = *(long *)this + (long)*piVar1 * 0x58;
  lVar7 = *(long *)(lVar15 + 0x48);
  lVar8 = *(long *)(lVar15 + 0x30);
  uVar18 = (long)iVar3 + 1;
  uVar13 = lVar7 + iVar3;
  lVar11 = *(long *)(lVar8 + (uVar13 >> 4 & 0xffffffffffffff8));
  uVar13 = uVar13 & 0x7f;
  local_64 = (int)uVar18;
  pcVar2 = (char *)(lVar11 + uVar13 * 0x20);
  if (pcVar2[1] != '\x02') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","TranslatedValue::kFinished == slot->materialization_state()");
  }
  if (*pcVar2 != '\b') {
LAB_00f230c0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","TranslatedValue::kCapturedObject == slot->kind()");
  }
  iVar16 = 0;
  cVar10 = '\b';
  uVar20 = uVar18;
  do {
    iVar19 = (int)uVar20;
    if (cVar10 == '\b') {
      if (*(int *)(lVar11 + uVar13 * 0x20 + 0x1c) <= iVar16) break;
    }
    else if (-1 < iVar16) break;
    uVar12 = lVar7 + iVar19;
    pbVar17 = (byte *)(*(long *)(lVar8 + (uVar12 >> 4 & 0xffffffffffffff8)) + (uVar12 & 0x7f) * 0x20
                      );
    bVar5 = *pbVar17;
    if ((bVar5 & 0xfe) == 8) {
      while (bVar5 == 9) {
        if (*(ulong *)(this + 0x58) <= (ulong)(long)*(int *)(pbVar17 + 0x18)) goto LAB_00f230d4;
        uVar12 = *(long *)(this + 0x50) + (long)*(int *)(pbVar17 + 0x18);
        piVar1 = (int *)(*(long *)(*(long *)(this + 0x38) + (uVar12 >> 6 & 0x3fffffffffffff8)) +
                        (uVar12 & 0x1ff) * 8);
        lVar14 = *(long *)this + (long)*piVar1 * 0x58;
        uVar12 = *(long *)(lVar14 + 0x48) + (long)piVar1[1];
        pbVar17 = (byte *)(*(long *)(*(long *)(lVar14 + 0x30) + (uVar12 >> 4 & 0xffffffffffffff8)) +
                          (uVar12 & 0x7f) * 0x20);
        bVar5 = *pbVar17;
      }
      if (bVar5 != 8) goto LAB_00f230c0;
      if (pbVar17[1] != 2) {
        lVar7 = *(long *)(param_2 + 8);
        uVar4 = *(undefined4 *)(pbVar17 + 0x18);
        uVar12 = 0;
        if (*(long *)(param_2 + 0x10) - lVar7 != 0) {
          uVar12 = (*(long *)(param_2 + 0x10) - lVar7) * 0x80 - 1;
        }
        uVar9 = *(long *)(param_2 + 0x28) + *(long *)(param_2 + 0x20);
        if (uVar12 == uVar9) {
          std::__ndk1::deque<int,std::__ndk1::allocator<int>>::__add_back_capacity
                    ((deque<int,std::__ndk1::allocator<int>> *)param_2);
          lVar7 = *(long *)(param_2 + 8);
          uVar9 = *(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x28);
        }
        *(undefined4 *)(*(long *)(lVar7 + (uVar9 >> 7 & 0x1fffffffffffff8)) + (uVar9 & 0x3ff) * 4) =
             uVar4;
        *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + 1;
        pbVar17[1] = 2;
        lVar7 = *(long *)(lVar15 + 0x48);
        lVar8 = *(long *)(lVar15 + 0x30);
      }
    }
    uVar12 = lVar7 + iVar19;
    iVar19 = 1;
    do {
      lVar14 = *(long *)(lVar8 + (uVar12 >> 4 & 0xffffffffffffff8));
      iVar19 = iVar19 + -1;
      if (*(char *)(lVar14 + (uVar12 & 0x7f) * 0x20) == '\b') {
        iVar19 = *(int *)(lVar14 + (uVar12 & 0x7f) * 0x20 + 0x1c) + iVar19;
      }
      uVar12 = uVar12 + 1;
      uVar20 = (ulong)((int)uVar20 + 1);
    } while (0 < iVar19);
    cVar10 = *pcVar2;
    iVar16 = iVar16 + 1;
  } while( true );
  lVar8 = *(long *)(lVar8 + (lVar7 + uVar18 >> 4 & 0xffffffffffffff8));
  uVar18 = lVar7 + uVar18 & 0x7f;
  this_00 = (TranslatedValue *)(lVar8 + uVar18 * 0x20);
  if (*this_00 != (TranslatedValue)0x1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","frame->values_[value_index].kind() == TranslatedValue::kTagged");
  }
  if (this_00[1] != (TranslatedValue)0x2) {
    TranslatedValue::MaterializeSimple(this_00);
  }
  puVar6 = *(ulong **)(lVar8 + uVar18 * 0x20 + 0x10);
  uVar18 = *puVar6;
  if (*(short *)((uVar18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar18 - 1)) != 0xa2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map->IsMap()");
  }
  local_64 = iVar3 + 2;
  switch(*(ushort *)(uVar18 + 7)) {
  case 0x42:
  case 0x87:
    goto switchD_00f2305c_caseD_42;
  default:
    if (*(ushort *)(uVar18 + 7) < 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","map->IsJSObjectMap()");
    }
    InitializeJSObjectAt(this,lVar15,&local_64,pcVar2,puVar6,param_3);
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
  case 0x82:
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
  case 0xa4:
    InitializeObjectWithTaggedFieldsAt(this,lVar15,&local_64,pcVar2,puVar6,param_3);
  }
  if (local_64 != iVar19) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","value_index == children_init_index");
  }
switchD_00f2305c_caseD_42:
  return;
}

