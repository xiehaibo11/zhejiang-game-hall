
/* v8::internal::Factory::TryNewFixedArray(int, v8::internal::AllocationType) */

Factory * __thiscall
v8::internal::Factory::TryNewFixedArray(Factory *this,uint param_1,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  Factory *pFVar6;
  ulong *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  
  if (param_1 == 0) {
    pFVar6 = this + 0x168;
  }
  else {
    iVar1 = param_1 * 4 + 8;
    uVar5 = Heap::AllocateRaw((Heap *)(this + 0x8850),iVar1,param_3,1,0);
    if ((uVar5 & 1) == 0) {
      pFVar6 = (Factory *)0x0;
    }
    else {
      if ((0x20000 < iVar1) && (FLAG_use_marking_progress_bar != '\0')) {
        puVar7 = (ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        uVar9 = *puVar7;
        uVar8 = (uint)uVar9;
        while ((uVar8 >> 8 & 1) == 0) {
          while (*puVar7 == uVar9) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
            if (bVar4) {
              *puVar7 = uVar9 | 0x100;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_00f6c574;
          }
          ClearExclusiveLocal();
          uVar9 = *puVar7;
          uVar8 = (uint)uVar9;
        }
      }
LAB_00f6c574:
      *(undefined4 *)(uVar5 - 1) = *(undefined4 *)(this + 0xe0);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pFVar6 = *(Factory **)(this + 0x95a0);
        if (pFVar6 == *(Factory **)(this + 0x95a8)) {
          pFVar6 = (Factory *)HandleScope::Extend((Isolate *)this);
        }
        *(Factory **)(this + 0x95a0) = pFVar6 + 8;
        *(ulong *)pFVar6 = uVar5;
      }
      else {
        pFVar6 = (Factory *)
                 CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
        uVar5 = *(ulong *)pFVar6;
      }
      *(uint *)(uVar5 + 3) = param_1 << 1;
      lVar10 = *(long *)pFVar6;
      uVar2 = *(undefined4 *)(this + 0xa0);
      uVar5 = (ulong)(int)param_1;
      if (param_1 < 8) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar5 & 0xfffffffffffffff8;
        puVar14 = (undefined8 *)(lVar10 + 0x17);
        uVar9 = uVar13;
        do {
          puVar14[-1] = CONCAT44(uVar2,uVar2);
          puVar14[-2] = CONCAT44(uVar2,uVar2);
          puVar14[1] = CONCAT44(uVar2,uVar2);
          *puVar14 = CONCAT44(uVar2,uVar2);
          uVar9 = uVar9 - 8;
          puVar14 = puVar14 + 4;
        } while (uVar9 != 0);
        if (uVar13 == uVar5) {
          return pFVar6;
        }
      }
      lVar12 = uVar5 - uVar13;
      puVar11 = (undefined4 *)(lVar10 + 7 + uVar13 * 4);
      do {
        lVar12 = lVar12 + -1;
        *puVar11 = uVar2;
        puVar11 = puVar11 + 1;
      } while (lVar12 != 0);
    }
  }
  return pFVar6;
}

