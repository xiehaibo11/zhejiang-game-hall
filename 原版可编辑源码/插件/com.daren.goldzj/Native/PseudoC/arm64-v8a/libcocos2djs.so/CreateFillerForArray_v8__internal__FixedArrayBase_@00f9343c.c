
/* void 
   v8::internal::Heap::CreateFillerForArray<v8::internal::FixedArrayBase>(v8::internal::FixedArrayBase,
   int, int) */

void __thiscall
v8::internal::Heap::CreateFillerForArray<v8::internal::FixedArrayBase>
          (Heap *this,ulong param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  long *plVar16;
  void *__s;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong local_28;
  
  if (param_4 == 0) {
    return;
  }
  local_28 = param_2;
  iVar8 = HeapObject::SizeFromMap
                    ((HeapObject *)&local_28,
                     param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1));
  uVar11 = *(ulong *)((local_28 & 0xfffffffffffc0000) + 8);
  lVar10 = (long)(local_28 - 1) + (long)iVar8;
  __s = (void *)(lVar10 - (int)param_4);
  if (((uVar11 & 0x18) == 0) &&
     (uVar12 = local_28 & 0xffffffff00000000 | 7,
     *(short *)(uVar12 + *(uint *)(local_28 - 1)) != 0x85)) {
    bVar7 = *(short *)(uVar12 + *(uint *)(local_28 - 1)) == 0x87;
  }
  else {
    bVar7 = true;
  }
  if (((uint)uVar11 >> 5 & 1) == 0) {
    uVar11 = CreateFillerObjectAt(this,__s,param_4,bVar7,1);
    if ((*(char *)(*(long *)(this + 0x828) + 0x5f) != '\0') &&
       (uVar12 = uVar11 - (uVar11 & 0xfffffffffffc0000),
       (*(uint *)(*(long *)((uVar11 & 0xfffffffffffc0000) + 0x10) + (uVar12 >> 7 & 0x1ffffff) * 4)
        >> (ulong)((uint)(uVar12 >> 2) & 0x1f) & 1) != 0)) {
      iVar8 = (int)((ulong)__s & 0xfffffffffffc0000);
      uVar6 = (int)__s - iVar8;
      uVar2 = (uint)((int)lVar10 - iVar8) >> 2;
      if (uVar6 >> 2 < uVar2) {
        lVar10 = *(long *)(((ulong)__s & 0xfffffffffffc0000) + 0x10);
        uVar2 = uVar2 - 1;
        uVar3 = uVar6 >> 7;
        uVar4 = uVar2 >> 5;
        iVar8 = 1 << (ulong)(uVar6 >> 2 & 0x1f);
        uVar2 = 1 << (ulong)(uVar2 & 0x1f);
        if (uVar3 == uVar4) {
          uVar2 = uVar2 - iVar8 | uVar2;
          puVar1 = (uint *)(lVar10 + (ulong)uVar3 * 4);
          while (uVar6 = *puVar1, (uVar6 & uVar2) != 0) {
            while (*puVar1 == uVar6) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar6 & ~uVar2;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00f9366c;
            }
            ClearExclusiveLocal();
          }
        }
        else {
          puVar1 = (uint *)(lVar10 + (ulong)uVar3 * 4);
          while (uVar6 = *puVar1, (uVar6 & -iVar8) != 0) {
            while (*puVar1 == uVar6) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar6 & iVar8 - 1U;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00f935fc;
            }
            ClearExclusiveLocal();
          }
LAB_00f935fc:
          if (uVar3 + 1 < uVar4) {
            lVar13 = (ulong)(uVar3 + 1) - 1;
            lVar14 = lVar13 - (ulong)uVar4;
            puVar15 = (undefined4 *)(lVar10 + lVar13 * 4);
            do {
              lVar14 = lVar14 + 1;
              puVar15 = puVar15 + 1;
              *puVar15 = 0;
            } while (lVar14 != -1);
          }
          uVar2 = uVar2 - 1 | uVar2;
          puVar1 = (uint *)(lVar10 + (ulong)uVar4 * 4);
          while (uVar6 = *puVar1, (uVar6 & uVar2) != 0) {
            while (*puVar1 == uVar6) {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar7) {
                *puVar1 = uVar6 & ~uVar2;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00f9366c;
            }
            ClearExclusiveLocal();
          }
        }
LAB_00f9366c:
        DataMemoryBarrier(2,3);
      }
    }
  }
  else if (bVar7 == false && 3 < param_4) {
    memset(__s,0,(long)(int)param_4 & 0xfffffffffffffffc);
  }
  *(uint *)(local_28 + 3) = *(uint *)(local_28 + 3) + param_3 * -2 & 0xfffffffe;
  puVar18 = *(undefined8 **)(this + 0xc10);
  for (puVar17 = *(undefined8 **)(this + 0xc08); puVar17 != puVar18; puVar17 = puVar17 + 1) {
    plVar16 = (long *)*puVar17;
    lVar10 = local_28 - 1;
    uVar9 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_28,
                       local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 - 1));
    (**(code **)(*plVar16 + 0x10))(plVar16,lVar10,uVar9);
  }
  return;
}

