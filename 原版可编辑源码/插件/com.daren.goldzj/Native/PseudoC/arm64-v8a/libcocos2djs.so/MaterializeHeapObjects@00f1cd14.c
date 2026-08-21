
/* v8::internal::Deoptimizer::MaterializeHeapObjects() */

void __thiscall v8::internal::Deoptimizer::MaterializeHeapObjects(Deoptimizer *this)

{
  undefined8 *puVar1;
  TranslatedValue TVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  long lVar6;
  TranslatedState *this_00;
  TranslatedFrame *this_01;
  ulong uVar7;
  undefined8 uVar8;
  TranslatedFrame *pTVar9;
  TranslatedValue *this_02;
  long *plVar10;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_38;
  
  this_00 = (TranslatedState *)(this + 0x80);
  pTVar9 = *(TranslatedFrame **)(this + 0x88);
  uVar8 = *(undefined8 *)(this + 0x78);
  for (this_01 = *(TranslatedFrame **)this_00; this_01 != pTVar9; this_01 = this_01 + 0x58) {
    TranslatedFrame::Handlify(this_01);
  }
  uVar7 = *(ulong *)(this + 0xe8);
  if ((int)uVar7 != 0) {
    pIVar5 = *(Isolate **)(this + 0x98);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar7);
    }
    *(ulong **)(this + 0xe0) = puVar4;
    *(undefined8 *)(this + 0xe8) = 0;
  }
  *(undefined8 *)(this + 0xa0) = uVar8;
  TranslatedState::UpdateFromPreviouslyMaterializedObjects(this_00);
  if (0 < FLAG_deopt_every_n_times) {
    Heap::CollectAllGarbage(*(long *)this + 0x8850,0,0x15,0);
  }
  puVar1 = *(undefined8 **)(this + 0x100);
  puVar3 = *(undefined8 **)(this + 0xf8);
  do {
    if (puVar3 == puVar1) {
      TranslatedState::VerifyMaterializedObjects(this_00);
      if (*(long *)(this + 0xe0) != 0) {
        if (*(int *)(this + 0xf0) == -1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","!feedback_slot_.IsInvalid()");
        }
        Isolate::CountUsage(*(undefined8 *)(this + 0x98),0x2f);
        local_68 = *(undefined8 **)(this + 0xe0);
        local_58 = *(undefined4 *)(this + 0xf0);
        uStack_60 = 0;
        if (local_68 == (undefined8 *)0x0) {
          local_54 = 0;
        }
        else {
          local_38 = *local_68;
          local_54 = FeedbackVector::GetKind((FeedbackVector *)&local_38);
        }
        FeedbackNexus::SetSpeculationMode((FeedbackNexus *)&local_68,1);
        if (*(long **)(this + 0x110) != (long *)0x0) {
          PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),"Feedback updated");
          Code::PrintDeoptLocation
                    ((Code *)(this + 0x10),*(__sFILE **)(**(long **)(this + 0x110) + 0x90),
                     " from deoptimization at ",*(ulong *)(this + 0x20));
        }
      }
      MaterializedObjectStore::Remove
                (*(MaterializedObjectStore **)(*(long *)this + 0x9580),*(ulong *)(this + 0x78));
      return;
    }
    this_02 = (TranslatedValue *)puVar3[2];
    if (this_02[1] == (TranslatedValue)0x2) {
LAB_00f1ce48:
      plVar10 = *(long **)(this_02 + 0x10);
      lVar6 = *(long *)(this + 0x110);
    }
    else {
      TVar2 = *this_02;
      if ((byte)TVar2 - 1 < 7) {
        TranslatedValue::MaterializeSimple(this_02);
        goto LAB_00f1ce48;
      }
      if (1 < (byte)TVar2 - 8) {
        if (TVar2 != (TranslatedValue)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("internal error: value missing");
        }
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unexpected case");
      }
      TranslatedState::EnsureObjectAllocatedAt(*(TranslatedState **)(this_02 + 8),this_02);
      plVar10 = (long *)TranslatedState::InitializeObjectAt
                                  (*(TranslatedState **)(this_02 + 8),this_02);
      lVar6 = *(long *)(this + 0x110);
    }
    if (lVar6 != 0) {
      PrintF("Materialization [0x%012lx] <- 0x%012lx ;  ",*puVar3,*plVar10);
      local_68 = (undefined8 *)*plVar10;
      Object::ShortPrint((Object *)&local_68,*(__sFILE **)(**(long **)(this + 0x110) + 0x90));
      PrintF(*(__sFILE **)(**(long **)(this + 0x110) + 0x90),"\n");
    }
    *(long *)*puVar3 = *plVar10;
    puVar3 = puVar3 + 4;
  } while( true );
}

