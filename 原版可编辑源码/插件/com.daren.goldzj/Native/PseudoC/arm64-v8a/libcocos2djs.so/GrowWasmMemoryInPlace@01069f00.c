
/* v8::internal::BackingStore::GrowWasmMemoryInPlace(v8::internal::Isolate*, unsigned long, unsigned
   long) */

undefined8 __thiscall
v8::internal::BackingStore::GrowWasmMemoryInPlace
          (BackingStore *this,Isolate *param_1,ulong param_2,ulong param_3)

{
  BackingStore *pBVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar3 = *(ulong *)(this + 0x10) >> 0x10;
  if (param_3 <= *(ulong *)(this + 0x10) >> 0x10) {
    uVar3 = param_3;
  }
  if (param_2 != 0) {
    if (uVar3 < param_2) {
      return 0;
    }
    pBVar1 = this + 8;
    do {
      while( true ) {
        uVar9 = *(ulong *)pBVar1;
        if (uVar3 - param_2 < uVar9 >> 0x10) {
          return 0;
        }
        lVar8 = ((uVar9 >> 0x10) + param_2) * 0x10000;
        uVar6 = GetPlatformPageAllocator();
        uVar7 = SetPermissions(uVar6,*(undefined8 *)this,lVar8,2);
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        if (*(ulong *)pBVar1 == uVar9) break;
        ClearExclusiveLocal();
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pBVar1,0x10);
      if (bVar5) {
        *(long *)pBVar1 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((byte)this[0x28] & 1) == 0) {
      lVar8 = lVar8 - uVar9;
      lVar2 = *(long *)(param_1 + 0x20) + lVar8;
      *(long *)(param_1 + 0x20) = lVar2;
      if (0x2000000 < lVar2 - *(long *)(param_1 + 0x30)) {
        v8::Isolate::CheckMemoryPressure((Isolate *)param_1);
      }
      if (lVar8 < 0) {
        if (0x4000000 < *(long *)(param_1 + 0x28) + lVar8) {
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar8;
        }
      }
      else if ((lVar8 != 0) && (*(long *)(param_1 + 0x28) < lVar2)) {
        v8::Isolate::ReportExternalAllocationLimitReached((Isolate *)param_1);
      }
    }
  }
  return 1;
}

