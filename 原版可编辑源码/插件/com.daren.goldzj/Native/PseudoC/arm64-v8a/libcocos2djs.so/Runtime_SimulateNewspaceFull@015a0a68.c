
/* v8::internal::Runtime_SimulateNewspaceFull(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_SimulateNewspaceFull(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  NewSpace *this;
  undefined8 uVar12;
  ulong local_70;
  PauseAllocationObserversScope aPStack_68 [8];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar11 = FUN_015a0c24(param_1,param_2,param_3);
    return uVar11;
  }
  pIVar1 = param_3 + 0x8938;
  uVar11 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  this = *(NewSpace **)pIVar1;
  pIVar2 = param_3 + 0x8908;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pIVar2,0x10);
    if (bVar5) {
      *(long *)pIVar2 = *(long *)pIVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    PauseAllocationObserversScope::PauseAllocationObserversScope
              (aPStack_68,(Heap *)(param_3 + 0x8850));
    for (iVar7 = *(int *)(*(long *)(*(long *)pIVar1 + 0x160) + 0x28) -
                 *(int *)(*(long *)pIVar1 + 0x68); 0 < iVar7; iVar7 = iVar7 - iVar8) {
      iVar6 = iVar7 + -8;
      iVar8 = iVar7 + -5;
      if (-1 < iVar6) {
        iVar8 = iVar6;
      }
      if (iVar6 < 4) {
        Heap::CreateFillerObjectAt
                  ((Heap *)(param_3 + 0x8850),*(undefined8 *)(*(long *)pIVar1 + 0x68),iVar7,1,1);
        break;
      }
      iVar8 = iVar8 >> 2;
      if (0x7ffd < iVar8) {
        iVar8 = 0x7ffe;
      }
      puVar10 = (ulong *)Factory::NewFixedArray((Factory *)param_3,iVar8,0);
      local_70 = *puVar10;
      iVar8 = HeapObject::SizeFromMap
                        ((HeapObject *)&local_70,
                         local_70 & 0xffffffff00000000 | (ulong)*(uint *)(local_70 - 1));
    }
    PauseAllocationObserversScope::~PauseAllocationObserversScope(aPStack_68);
    uVar9 = NewSpace::AddFreshPage(this);
    if ((uVar9 & 1) == 0) {
      uVar12 = *(undefined8 *)(param_3 + 0xa0);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pIVar2,0x10);
        if (bVar5) {
          *(long *)pIVar2 = *(long *)pIVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (param_3 != (Isolate *)0x0) {
        *(undefined8 *)(param_3 + 0x95a0) = uVar11;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar3) {
          *(long *)(param_3 + 0x95a8) = lVar3;
          HandleScope::DeleteExtensions(param_3);
        }
      }
      return uVar12;
    }
  } while( true );
}

