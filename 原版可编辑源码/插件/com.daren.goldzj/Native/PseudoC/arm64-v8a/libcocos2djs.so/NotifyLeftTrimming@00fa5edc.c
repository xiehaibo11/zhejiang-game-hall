
/* v8::internal::IncrementalMarking::NotifyLeftTrimming(v8::internal::HeapObject,
   v8::internal::HeapObject) */

void __thiscall
v8::internal::IncrementalMarking::NotifyLeftTrimming
          (IncrementalMarking *this,long param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar7 = param_3 - (param_3 & 0xfffffffffffc0000);
  puVar1 = (uint *)(*(long *)((param_3 & 0xfffffffffffc0000) + 0x10) + (uVar7 >> 7 & 0x1ffffff) * 4)
  ;
  uVar8 = (uint)(1L << (uVar7 >> 2 & 0x1f));
  if ((this[0x5f] != (IncrementalMarking)0x0) && ((*puVar1 & uVar8) != 0)) {
    uVar3 = uVar8 << 1;
    bVar6 = uVar3 == 0;
    if (bVar6) {
      uVar3 = 1;
    }
    if ((puVar1[bVar6] & uVar3) != 0) {
      return;
    }
  }
  MarkBlackAndVisitObjectDueToLayoutChange(this,param_2);
  if (param_2 + 3 == param_3 - 1) {
    uVar8 = uVar8 << 1;
    bVar6 = uVar8 == 0;
    puVar2 = puVar1;
    if (bVar6) {
      uVar8 = 1;
      puVar2 = puVar1 + 1;
    }
    while (uVar3 = puVar1[bVar6], (uVar8 & (uVar3 ^ 0xffffffff)) != 0) {
      while (*puVar2 == uVar3) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar3 | uVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          return;
        }
      }
      ClearExclusiveLocal();
    }
  }
  else {
    while (uVar3 = *puVar1, (uVar8 & (uVar3 ^ 0xffffffff)) != 0) {
      while (*puVar1 == uVar3) {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *puVar1 = uVar3 | uVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          uVar8 = uVar8 << 1;
          bVar6 = uVar8 == 0;
          puVar2 = puVar1;
          if (bVar6) {
            uVar8 = 1;
            puVar2 = puVar1 + 1;
          }
          do {
            uVar3 = puVar1[bVar6];
            if ((uVar8 & (uVar3 ^ 0xffffffff)) == 0) {
              return;
            }
            while (*puVar2 == uVar3) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar3 | uVar8;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                return;
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
      }
      ClearExclusiveLocal();
    }
  }
  return;
}

