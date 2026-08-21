
/* v8::internal::TranslatedState::GetValueAndAdvance(v8::internal::TranslatedFrame*, int*) */

undefined8 __thiscall
v8::internal::TranslatedState::GetValueAndAdvance
          (TranslatedState *this,TranslatedFrame *param_1,int *param_2)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  iVar7 = *param_2;
  lVar3 = (long)iVar7;
  lVar9 = *(long *)(param_1 + 0x48);
  lVar10 = *(long *)(param_1 + 0x30);
  iVar8 = 1;
  uVar1 = lVar9 + lVar3;
  lVar4 = *(long *)(lVar10 + (uVar1 >> 4 & 0xffffffffffffff8));
  while( true ) {
    iVar7 = iVar7 + 1;
    lVar10 = *(long *)(lVar10 + ((ulong)(lVar9 + lVar3) >> 4 & 0xffffffffffffff8));
    uVar11 = lVar9 + lVar3 & 0x7f;
    *param_2 = iVar7;
    iVar8 = iVar8 + -1;
    if (*(char *)(lVar10 + uVar11 * 0x20) == '\b') {
      iVar8 = *(int *)(lVar10 + uVar11 * 0x20 + 0x1c) + iVar8;
    }
    if (iVar8 < 1) break;
    lVar9 = *(long *)(param_1 + 0x48);
    lVar10 = *(long *)(param_1 + 0x30);
    lVar3 = lVar3 + 1;
  }
  pcVar5 = (char *)(lVar4 + (uVar1 & 0x7f) * 0x20);
  if (*pcVar5 == '\t') {
    cVar6 = '\t';
    while (cVar6 == '\t') {
      if (*(ulong *)(this + 0x58) <= (ulong)(long)*(int *)(pcVar5 + 0x18)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","static_cast<size_t>(object_index) < object_positions_.size()")
        ;
      }
      uVar1 = *(long *)(this + 0x50) + (long)*(int *)(pcVar5 + 0x18);
      piVar2 = (int *)(*(long *)(*(long *)(this + 0x38) + (uVar1 >> 6 & 0x3fffffffffffff8)) +
                      (uVar1 & 0x1ff) * 8);
      lVar3 = *(long *)this + (long)*piVar2 * 0x58;
      uVar1 = *(long *)(lVar3 + 0x48) + (long)piVar2[1];
      pcVar5 = (char *)(*(long *)(*(long *)(lVar3 + 0x30) + (uVar1 >> 4 & 0xffffffffffffff8)) +
                       (uVar1 & 0x7f) * 0x20);
      cVar6 = *pcVar5;
    }
    if (cVar6 != '\b') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","TranslatedValue::kCapturedObject == slot->kind()");
    }
  }
  if (pcVar5[1] != '\0') {
    return *(undefined8 *)(pcVar5 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","TranslatedValue::kUninitialized != slot->materialization_state()");
}

