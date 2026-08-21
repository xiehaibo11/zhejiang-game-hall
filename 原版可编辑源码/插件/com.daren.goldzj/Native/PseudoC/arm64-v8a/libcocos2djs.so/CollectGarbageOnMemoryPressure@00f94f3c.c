
/* v8::internal::Heap::CollectGarbageOnMemoryPressure() */

void __thiscall v8::internal::Heap::CollectGarbageOnMemoryPressure(Heap *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  
  plVar1 = (long *)V8::GetCurrentPlatform();
  dVar11 = (double)(**(code **)(*plVar1 + 0x78))();
  *(undefined4 *)(this + 0xad4) = 1;
  CollectGarbage(this,2,0x10,0x10);
  *(undefined4 *)(this + 0xad4) = 0;
  EagerlyFreeExternalMemory(this);
  plVar1 = (long *)V8::GetCurrentPlatform();
  dVar12 = (double)(**(code **)(*plVar1 + 0x78))();
  lVar2 = CommittedMemory(this);
  lVar3 = (**(code **)(**(long **)(this + 0x130) + 0x50))(*(long **)(this + 0x130));
  lVar4 = (**(code **)(**(long **)(this + 0x138) + 0x50))(*(long **)(this + 0x138));
  lVar5 = (**(code **)(**(long **)(this + 0x140) + 0x50))(*(long **)(this + 0x140));
  lVar6 = (**(code **)(**(long **)(this + 0x148) + 0x50))(*(long **)(this + 0x148));
  lVar7 = (**(code **)(**(long **)(this + 0x150) + 0x50))(*(long **)(this + 0x150));
  lVar8 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
  lVar9 = (**(code **)(**(long **)(this + 0x160) + 0x50))(*(long **)(this + 0x160));
  lVar2 = (((((((lVar2 - lVar3) - lVar4) - lVar5) - lVar6) - lVar7) - lVar8) - lVar9) +
          *(long *)(this + -0x8830);
  if ((0x7fffff < lVar2) && (uVar10 = CommittedMemory(this), (double)uVar10 * 0.1 <= (double)lVar2))
  {
    if (50.0 <= dVar12 * 1000.0 - dVar11 * 1000.0) {
      if ((FLAG_incremental_marking != '\0') &&
         (*(int *)(*(IncrementalMarking **)(this + 0x828) + 0x58) == 0)) {
        *(undefined8 *)(this + 0xad4) = 1;
        IncrementalMarking::Start(*(IncrementalMarking **)(this + 0x828),0x10);
        return;
      }
    }
    else {
      *(undefined4 *)(this + 0xad4) = 1;
      CollectGarbage(this,2,0x10,0x10);
      *(undefined4 *)(this + 0xad4) = 0;
    }
  }
  return;
}

