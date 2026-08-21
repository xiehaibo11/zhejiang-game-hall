
/* v8::internal::String::MakeThin(v8::internal::Isolate*, v8::internal::String) */

void __thiscall v8::internal::String::MakeThin(String *this,long param_1,ulong param_3)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auStack_38 [8];
  
  uVar10 = *(ulong *)this;
  uVar12 = uVar10 & 0xffffffff00000000 | 7;
  if ((0x3f < *(ushort *)(uVar12 + *(uint *)(uVar10 - 1))) ||
     ((*(ushort *)(uVar12 + *(uint *)(uVar10 - 1)) & 7) != 2)) goto LAB_01134478;
  uVar6 = param_3 & 0xffffffff00000000;
  uVar8 = uVar6 | 7;
  if ((*(ushort *)(uVar8 + *(uint *)(param_3 - 1)) < 0x40) &&
     (((*(ushort *)(uVar8 + *(uint *)(param_3 - 1)) & 7) == 2 &&
      ((*(byte *)(uVar8 + *(uint *)(param_3 - 1)) >> 3 & 1) != 0)))) {
    plVar11 = *(long **)(uVar10 + 0xb);
    if (*(long **)(param_3 + 0xb) != (long *)0x0) {
      if (*(long **)(param_3 + 0xb) == plVar11) goto LAB_01134478;
      lVar7 = 1;
      if ((*(byte *)(uVar12 + *(uint *)(uVar10 - 1)) & 8) == 0) {
        lVar7 = 2;
      }
      lVar7 = lVar7 * *(int *)(uVar10 + 7);
      plVar11 = (long *)(uVar10 & 0xfffffffffffc0000 | 0xd0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 - lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar9 = *(long *)((uVar10 & 0xfffffffffffc0000) + 0x58);
      plVar11 = (long *)(*(long *)(lVar9 + 0x30) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 - lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar11 = (long *)(*(long *)(lVar9 + 0x40) + 0xa0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 - lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_01134460;
    }
    *(long **)(param_3 + 0xb) = plVar11;
    if (plVar11 != (long *)0x0) {
      if ((*(byte *)((uVar6 | *(uint *)(param_3 - 1)) + 7) >> 4 & 1) == 0) {
        uVar5 = (**(code **)(**(long **)(param_3 + 0xb) + 0x30))();
        *(undefined8 *)(param_3 + 0x13) = uVar5;
      }
      lVar7 = (**(code **)(*plVar11 + 0x38))(plVar11);
joined_r0x011346d8:
      if (lVar7 != 0) {
        Heap::UpdateExternalString((Heap *)(param_1 + 0x8850),param_3,0,lVar7);
      }
    }
LAB_011346f0:
    lVar7 = 1;
    if ((*(ushort *)(uVar12 + *(uint *)(uVar10 - 1)) & 8) == 0) {
      lVar7 = 2;
    }
    Heap::UpdateExternalString((Heap *)(param_1 + 0x8850),uVar10,lVar7 * *(int *)(uVar10 + 7),0);
  }
  else {
    if ((*(ushort *)(uVar8 + *(uint *)(param_3 - 1)) < 0x40) &&
       (((*(ushort *)(uVar8 + *(uint *)(param_3 - 1)) & 7) == 2 &&
        ((*(byte *)(uVar8 + *(uint *)(param_3 - 1)) >> 3 & 1) == 0)))) {
      plVar11 = *(long **)(uVar10 + 0xb);
      if (*(long **)(param_3 + 0xb) == (long *)0x0) {
        *(long **)(param_3 + 0xb) = plVar11;
        if (plVar11 != (long *)0x0) {
          if ((*(byte *)((uVar6 | *(uint *)(param_3 - 1)) + 7) >> 4 & 1) == 0) {
            uVar5 = (**(code **)(**(long **)(param_3 + 0xb) + 0x30))();
            *(undefined8 *)(param_3 + 0x13) = uVar5;
          }
          lVar7 = (**(code **)(*plVar11 + 0x38))(plVar11);
          lVar7 = lVar7 << 1;
          goto joined_r0x011346d8;
        }
        goto LAB_011346f0;
      }
      if (*(long **)(param_3 + 0xb) == plVar11) goto LAB_01134478;
      lVar7 = 1;
      if ((*(byte *)(uVar12 + *(uint *)(uVar10 - 1)) & 8) == 0) {
        lVar7 = 2;
      }
      lVar7 = lVar7 * *(int *)(uVar10 + 7);
      plVar11 = (long *)(uVar10 & 0xfffffffffffc0000 | 0xd0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 - lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar9 = *(long *)((uVar10 & 0xfffffffffffc0000) + 0x58);
      plVar11 = (long *)(*(long *)(lVar9 + 0x30) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 - lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar11 = (long *)(*(long *)(lVar9 + 0x40) + 0xa0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 - lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      lVar7 = 1;
      if ((*(byte *)(uVar12 + *(uint *)(uVar10 - 1)) & 8) == 0) {
        lVar7 = 2;
      }
      lVar7 = lVar7 * *(int *)(uVar10 + 7);
      plVar11 = (long *)(uVar10 & 0xfffffffffffc0000 | 0xd0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 - lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar9 = *(long *)((uVar10 & 0xfffffffffffc0000) + 0x58);
      plVar11 = (long *)(*(long *)(lVar9 + 0x30) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 - lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar11 = (long *)(*(long *)(lVar9 + 0x40) + 0xa0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 - lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
LAB_01134460:
    if (*(long **)(uVar10 + 0xb) == (long *)0x0) goto LAB_01134478;
    (**(code **)(**(long **)(uVar10 + 0xb) + 0x18))();
  }
  *(undefined8 *)(uVar10 + 0xb) = 0;
LAB_01134478:
  uVar10 = *(ulong *)this;
  uVar1 = *(ushort *)((uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1)) + 7);
  iVar4 = HeapObject::SizeFromMap
                    ((HeapObject *)this,uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 - 1));
  Heap::NotifyObjectLayoutChange((Heap *)(param_1 + 0x8850),*(undefined8 *)this,auStack_38,1);
  uVar10 = *(ulong *)this;
  lVar7 = 0x2f8;
  if ((*(byte *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) & 8) != 0) {
    lVar7 = 0x150;
  }
  uVar12 = *(ulong *)(param_1 + lVar7);
  if ((int)uVar12 == 0) {
    *(undefined4 *)(uVar10 - 1) = 0;
  }
  else {
    Heap::VerifyObjectLayoutChange((Heap *)(uVar10 & 0xffffffff00000000 | 0x8850),uVar10,uVar12);
    *(int *)(*(long *)this + -1) = (int)uVar12;
    if (((uVar12 & 1) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(*(undefined8 *)this,0,uVar12);
    }
  }
  uVar10 = *(ulong *)this;
  *(int *)(uVar10 + 0xb) = (int)param_3;
  if ((param_3 & 1) != 0) {
    uVar12 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0xb,param_3);
      uVar12 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0xb,param_3);
    }
  }
  if (iVar4 + -0x10 != 0) {
    Heap::CreateFillerObjectAt
              ((Heap *)(param_1 + 0x8850),uVar10 + 0xf,iVar4 + -0x10,uVar1 & 1 ^ 1,1);
  }
  return;
}

