
/* v8::internal::AllocationTracker::PrepareForSerialization() */

void __thiscall v8::internal::AllocationTracker::PrepareForSerialization(AllocationTracker *this)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar7 = *(undefined8 **)(this + 0x178);
  puVar4 = *(undefined8 **)(this + 0x180);
  if (puVar7 != puVar4) {
    do {
      plVar8 = (long *)*puVar7;
      if (*plVar8 == 0) {
        if (plVar8 != (long *)0x0) goto LAB_0152c3d0;
      }
      else {
        uVar5 = *(uint *)(*plVar8 + 4);
        piVar1 = (int *)((ulong)uVar5 << 0x20 | 0x95b0);
        puVar2 = (undefined8 *)((ulong)uVar5 << 0x20 | 0x95a0);
        plVar3 = (long *)((ulong)uVar5 << 0x20 | 0x95a8);
        uVar9 = *puVar2;
        lVar10 = *plVar3;
        *piVar1 = *piVar1 + 1;
        uVar6 = Script::GetLineNumber(*plVar8,(int)plVar8[1]);
        *(undefined4 *)(plVar8[2] + 0x1c) = uVar6;
        uVar6 = Script::GetColumnNumber(*plVar8,(int)plVar8[1]);
        *(undefined4 *)(plVar8[2] + 0x20) = uVar6;
        if (uVar5 != 0) {
          *puVar2 = uVar9;
          *piVar1 = *piVar1 + -1;
          if (*plVar3 != lVar10) {
            *plVar3 = lVar10;
            HandleScope::DeleteExtensions((Isolate *)((ulong)uVar5 << 0x20));
          }
        }
        if ((ulong *)*plVar8 != (ulong *)0x0) {
          GlobalHandles::Destroy((ulong *)*plVar8);
        }
LAB_0152c3d0:
        operator_delete(plVar8);
      }
      puVar7 = puVar7 + 1;
    } while (puVar4 != puVar7);
    puVar7 = *(undefined8 **)(this + 0x178);
  }
  *(undefined8 **)(this + 0x180) = puVar7;
  if (*(undefined8 **)(this + 0x188) != puVar7) {
    *(undefined8 *)(this + 0x178) = 0;
    *(undefined8 *)(this + 0x180) = 0;
    *(undefined8 *)(this + 0x188) = 0;
    if (puVar7 != (undefined8 *)0x0) {
      operator_delete(puVar7);
      return;
    }
  }
  return;
}

