
/* v8::internal::IncrementalMarking::UpdateMarkingWorklistAfterScavenge() */

void __thiscall
v8::internal::IncrementalMarking::UpdateMarkingWorklistAfterScavenge(IncrementalMarking *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (*(int *)(this + 0x58) < 2) {
    return;
  }
  lVar3 = *(long *)(this + 0x10);
  uVar2 = *(undefined8 *)(*(long *)this + -0x87c8);
  lVar1 = *(long *)(*(long *)this + 0x808) + 0x68;
  FUN_00fa9600(lVar3,uVar2,lVar1);
  FUN_00fa9600(lVar3 + 0x2b8,uVar2,lVar1);
  if (0 < *(int *)(lVar3 + 0x820)) {
    lVar4 = 0;
    puVar7 = (undefined8 *)(lVar3 + 0x578);
    do {
      FUN_00fa98d0(*puVar7,uVar2,lVar1);
      FUN_00fa98d0(puVar7[-1],uVar2,lVar1);
      lVar4 = lVar4 + 1;
      puVar7 = puVar7 + 10;
    } while (lVar4 < *(int *)(lVar3 + 0x820));
  }
  base::Mutex::Lock((Mutex *)(lVar3 + 0x7f0));
  if (*(undefined8 **)(lVar3 + 0x818) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x818);
    puVar6 = (undefined8 *)0x0;
    do {
      while (puVar5 = puVar7, FUN_00fa98d0(puVar5,uVar2,lVar1), puVar5[1] != 0) {
        puVar7 = (undefined8 *)*puVar5;
        puVar6 = puVar5;
        if ((undefined8 *)*puVar5 == (undefined8 *)0x0) goto LAB_00fa7228;
      }
      puVar7 = (undefined8 *)(lVar3 + 0x818);
      if (puVar6 != (undefined8 *)0x0) {
        puVar7 = puVar6;
      }
      *puVar7 = *puVar5;
      puVar7 = (undefined8 *)*puVar5;
      operator_delete(puVar5);
    } while (puVar7 != (undefined8 *)0x0);
  }
LAB_00fa7228:
  base::Mutex::Unlock((Mutex *)(lVar3 + 0x7f0));
  UpdateWeakReferencesAfterScavenge(this);
  return;
}

