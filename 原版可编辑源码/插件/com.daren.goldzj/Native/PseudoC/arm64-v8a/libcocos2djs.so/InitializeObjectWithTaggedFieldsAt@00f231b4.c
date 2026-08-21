
/* v8::internal::TranslatedState::InitializeObjectWithTaggedFieldsAt(v8::internal::TranslatedFrame*,
   int*, v8::internal::TranslatedValue*, v8::internal::Handle<v8::internal::Map>,
   v8::internal::PerThreadAssertScopeDebugOnly<(v8::internal::PerThreadAssertType)0, false> const&)
    */

void __thiscall
v8::internal::TranslatedState::InitializeObjectWithTaggedFieldsAt
          (TranslatedState *this,TranslatedFrame *param_1,int *param_2,char *param_3,ulong *param_5,
          undefined8 param_6)

{
  char cVar1;
  int *piVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  puVar7 = *(ulong **)(param_3 + 0x10);
  if ((int)*puVar7 == *(int *)(*(long *)(this + 0x18) + 0x168)) {
    if ((*param_3 != '\b') || (*(int *)(param_3 + 0x1c) != 2)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","2 == slot->GetChildrenCount()");
    }
    piVar2 = (int *)GetValueAndAdvance(this,param_1,param_2);
    if (*piVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*length_value == Smi::FromInt(0)");
    }
  }
  else {
    Heap::NotifyObjectLayoutChange((Heap *)(*(long *)(this + 0x18) + 0x8850),*puVar7,param_6,0);
    uVar8 = 1;
    uVar9 = 4;
    while (*param_3 != '\b') {
      if (-1 < (long)uVar8) goto LAB_00f2335c;
LAB_00f23294:
      puVar3 = (ulong *)GetValueAndAdvance(this,param_1,param_2);
      cVar1 = *(char *)(*puVar7 + (uVar9 & 0xfffffffc) + -1);
      if ((uVar8 < 2) || (cVar1 != '\x02')) {
        if ((uVar8 != 1) && (cVar1 != '\0')) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","marker == kStoreTagged || i == 1");
        }
        uVar6 = *puVar3;
      }
      else {
        uVar6 = *puVar3;
        if (((uVar6 & 1) == 0) ||
           (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","field_value->IsHeapNumber()");
        }
      }
      lVar10 = (uVar9 & 0xfffffffc) - 1;
      *(int *)(lVar10 + *puVar7) = (int)uVar6;
      uVar6 = *puVar3;
      if ((uVar6 & 1) != 0) {
        uVar4 = *puVar7;
        lVar5 = uVar4 + lVar10;
        if ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar4,lVar5);
          uVar6 = *puVar3;
          if ((uVar6 & 1) == 0) goto LAB_00f23264;
          uVar4 = *puVar7;
          lVar5 = uVar4 + lVar10;
        }
        if (((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
           ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar4,lVar5);
        }
      }
LAB_00f23264:
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 4;
    }
    if ((long)uVar8 < (long)*(int *)(param_3 + 0x1c)) goto LAB_00f23294;
LAB_00f2335c:
    uVar8 = *param_5;
    uVar9 = *puVar7;
    if ((int)uVar8 == 0) {
      *(undefined4 *)(uVar9 - 1) = 0;
    }
    else {
      Heap::VerifyObjectLayoutChange((Heap *)(uVar9 & 0xffffffff00000000 | 0x8850),uVar9,uVar8);
      *(int *)(uVar9 - 1) = (int)uVar8;
      if (((uVar8 & 1) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
        Heap_MarkingBarrierSlow(uVar9,0,uVar8);
        return;
      }
    }
  }
  return;
}

