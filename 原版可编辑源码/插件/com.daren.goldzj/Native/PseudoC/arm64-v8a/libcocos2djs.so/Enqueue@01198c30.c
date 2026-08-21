
/* v8::internal::ProfilerEventsProcessor::Enqueue(v8::internal::CodeEventsContainer const&) */

void __thiscall
v8::internal::ProfilerEventsProcessor::Enqueue
          (ProfilerEventsProcessor *this,CodeEventsContainer *param_1)

{
  ProfilerEventsProcessor *pPVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  pPVar1 = this + 0x168;
  do {
    iVar2 = *(int *)pPVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pPVar1,0x10);
    if (bVar4) {
      *(int *)pPVar1 = iVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(int *)(param_1 + 4) = iVar2 + 1;
  puVar5 = Malloced::operator_new((Malloced *)0x48,(ulong)param_1);
  *(undefined4 *)puVar5 = 0;
  puVar5[8] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar9 = *(undefined8 *)param_1;
    uVar12 = *(undefined8 *)(param_1 + 0x18);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    puVar5[5] = *(undefined8 *)(param_1 + 0x28);
    puVar5[4] = uVar6;
    puVar5[7] = uVar8;
    puVar5[6] = uVar7;
    puVar5[1] = uVar10;
    *puVar5 = uVar9;
    puVar5[3] = uVar12;
    puVar5[2] = uVar11;
    base::Mutex::Lock((Mutex *)(this + 0xd0));
    *(undefined8 **)(*(long *)(this + 0x100) + 0x40) = puVar5;
    *(undefined8 **)(this + 0x100) = puVar5;
    base::Mutex::Unlock((Mutex *)(this + 0xd0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(n) != nullptr");
}

