
/* v8::internal::ProfilerEventsProcessor::CodeEventHandler(v8::internal::CodeEventsContainer const&)
    */

void __thiscall
v8::internal::ProfilerEventsProcessor::CodeEventHandler
          (ProfilerEventsProcessor *this,CodeEventsContainer *param_1)

{
  ProfilerEventsProcessor *pPVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar4 = *(uint *)param_1;
  if (6 < uVar4) {
    return;
  }
  if ((1 << (ulong)(uVar4 & 0x1f) & 0x4eU) == 0) {
    if (uVar4 != 4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar8 = *(ulong *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x28);
    pPVar1 = this + 0x168;
    do {
      iVar3 = *(int *)pPVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pPVar1,0x10);
      if (bVar6) {
        *(int *)pPVar1 = iVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(int *)(param_1 + 4) = iVar3 + 1;
    puVar7 = Malloced::operator_new((Malloced *)0x48,(ulong)param_1);
    *(undefined4 *)puVar7 = 0;
    puVar7[8] = 0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      uVar13 = *(undefined8 *)(param_1 + 8);
      uVar12 = *(undefined8 *)param_1;
      uVar15 = *(undefined8 *)(param_1 + 0x18);
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      puVar7[5] = *(undefined8 *)(param_1 + 0x28);
      puVar7[4] = uVar9;
      puVar7[7] = uVar11;
      puVar7[6] = uVar10;
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      puVar7[3] = uVar15;
      puVar7[2] = uVar14;
      base::Mutex::Lock((Mutex *)(this + 0xd0));
      *(undefined8 **)(*(long *)(this + 0x100) + 0x40) = puVar7;
      *(undefined8 **)(this + 0x100) = puVar7;
      base::Mutex::Unlock((Mutex *)(this + 0xd0));
      AddDeoptStack(this,uVar8,iVar2);
      return;
    }
  }
  else {
    pPVar1 = this + 0x168;
    do {
      iVar2 = *(int *)pPVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pPVar1,0x10);
      if (bVar6) {
        *(int *)pPVar1 = iVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(int *)(param_1 + 4) = iVar2 + 1;
    puVar7 = Malloced::operator_new((Malloced *)0x48,(ulong)param_1);
    *(undefined4 *)puVar7 = 0;
    puVar7[8] = 0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      uVar13 = *(undefined8 *)(param_1 + 8);
      uVar12 = *(undefined8 *)param_1;
      uVar15 = *(undefined8 *)(param_1 + 0x18);
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      puVar7[5] = *(undefined8 *)(param_1 + 0x28);
      puVar7[4] = uVar9;
      puVar7[7] = uVar11;
      puVar7[6] = uVar10;
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      puVar7[3] = uVar15;
      puVar7[2] = uVar14;
      base::Mutex::Lock((Mutex *)(this + 0xd0));
      *(undefined8 **)(*(long *)(this + 0x100) + 0x40) = puVar7;
      *(undefined8 **)(this + 0x100) = puVar7;
      base::Mutex::Unlock((Mutex *)(this + 0xd0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(n) != nullptr");
}

