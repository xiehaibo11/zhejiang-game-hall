
/* v8::internal::TranslatedState::InitializeJSObjectAt(v8::internal::TranslatedFrame*, int*,
   v8::internal::TranslatedValue*, v8::internal::Handle<v8::internal::Map>,
   v8::internal::PerThreadAssertScopeDebugOnly<(v8::internal::PerThreadAssertType)0, false> const&)
    */

void __thiscall
v8::internal::TranslatedState::InitializeJSObjectAt
          (TranslatedState *this,TranslatedFrame *param_1,int *param_2,char *param_3,ulong *param_5,
          undefined8 param_6)

{
  char cVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  double dVar10;
  
  if ((*param_3 != '\b') || (*(int *)(param_3 + 0x1c) < 2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","slot->GetChildrenCount() >= 2");
  }
  puVar8 = *(ulong **)(param_3 + 0x10);
  Heap::NotifyObjectLayoutChange((Heap *)(*(long *)(this + 0x18) + 0x8850),*puVar8,param_6,0);
  puVar2 = (ulong *)GetValueAndAdvance(this,param_1,param_2);
  *(int *)(*puVar8 + 3) = (int)*puVar2;
  uVar5 = *puVar2;
  if ((uVar5 & 1) != 0) {
    uVar3 = *puVar8;
    lVar9 = uVar3 + 3;
    if ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar9);
      uVar5 = *puVar2;
      if ((uVar5 & 1) == 0) goto LAB_00f234fc;
      uVar3 = *puVar8;
      lVar9 = uVar3 + 3;
    }
    if (((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar9);
    }
  }
LAB_00f234fc:
  lVar9 = 2;
  uVar5 = 8;
  do {
    if (*param_3 == '\b') {
      if (*(int *)(param_3 + 0x1c) <= lVar9) {
LAB_00f23638:
        uVar5 = *param_5;
        uVar3 = *puVar8;
        if ((int)uVar5 == 0) {
          *(undefined4 *)(uVar3 - 1) = 0;
        }
        else {
          Heap::VerifyObjectLayoutChange((Heap *)(uVar3 & 0xffffffff00000000 | 0x8850),uVar3,uVar5);
          *(int *)(uVar3 - 1) = (int)uVar5;
          if (((uVar5 & 1) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0))
          {
            Heap_MarkingBarrierSlow(uVar3,0,uVar5);
          }
        }
        return;
      }
    }
    else if (-1 < lVar9) goto LAB_00f23638;
    puVar2 = (ulong *)GetValueAndAdvance(this,param_1,param_2);
    uVar3 = uVar5 & 0xfffffffc;
    lVar6 = *puVar8 - 1;
    cVar1 = *(char *)(lVar6 + uVar3);
    if (cVar1 == '\x01') {
      uVar7 = *puVar2;
      if ((uVar7 & 1) == 0) {
        dVar10 = (double)((int)uVar7 >> 1);
      }
      else {
        if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42)
        goto LAB_00f236c0;
        dVar10 = *(double *)(uVar7 + 3);
      }
      *(double *)(uVar3 + lVar6) = dVar10;
    }
    else {
      if (cVar1 == '\x02') {
        uVar7 = *puVar2;
        if (((uVar7 & 1) == 0) ||
           (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x42)) {
LAB_00f236c0:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","field_value->IsHeapNumber()");
        }
        *(int *)(uVar3 + lVar6) = (int)uVar7;
        uVar7 = *puVar2;
      }
      else {
        if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","kStoreTagged == marker");
        }
        *(int *)(uVar3 + lVar6) = (int)*puVar2;
        uVar7 = *puVar2;
      }
      if ((uVar7 & 1) != 0) {
        uVar4 = *puVar8;
        lVar6 = uVar4 + (uVar3 - 1);
        if ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar4,lVar6);
          uVar7 = *puVar2;
          if ((uVar7 & 1) == 0) goto LAB_00f23514;
          uVar4 = *puVar8;
          lVar6 = uVar4 + (uVar3 - 1);
        }
        if (((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
           ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar4,lVar6);
        }
      }
    }
LAB_00f23514:
    lVar9 = lVar9 + 1;
    uVar5 = uVar5 + 4;
  } while( true );
}

