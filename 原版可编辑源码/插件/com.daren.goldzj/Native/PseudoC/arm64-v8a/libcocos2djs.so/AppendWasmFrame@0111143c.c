
/* v8::internal::FrameArray::AppendWasmFrame(v8::internal::Handle<v8::internal::FrameArray>,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, int, v8::internal::wasm::WasmCode*, int,
   int) */

ulong * v8::internal::FrameArray::AppendWasmFrame
                  (ulong *param_1,ulong *param_2,int param_3,long param_4,int param_5,int param_6)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  __shared_weak_count *p_Var4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  __shared_weak_count *this;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  Isolate *pIVar16;
  ulong uVar17;
  __shared_weak_count *local_70;
  __shared_weak_count *local_68;
  
  iVar5 = *(int *)(*param_1 + 7) >> 1;
  iVar1 = iVar5 + 1;
  uVar7 = iVar1 * 6 | 1;
  iVar6 = *(int *)(*param_1 + 3) >> 1;
  iVar11 = uVar7 - iVar6;
  pIVar16 = (Isolate *)((ulong)*(uint *)((long)param_2 + 4) << 0x20);
  if (iVar11 != 0 && iVar6 <= (int)uVar7) {
    if ((int)uVar7 < 0) {
      uVar7 = uVar7 + 1;
    }
    iVar6 = (int)uVar7 >> 1;
    if (iVar6 < 3) {
      iVar6 = 2;
    }
    param_1 = (ulong *)Factory::CopyFixedArrayAndGrow(pIVar16,param_1,iVar11 + iVar6);
  }
  if (param_4 == 0) {
    pIVar16 = pIVar16 + 0xa0;
  }
  else {
    uVar12 = *param_2 & 0xffffffff00000000;
    puVar13 = *(undefined8 **)
               (*(long *)((uVar12 | *(uint *)((uVar12 | *(uint *)(*param_2 + 0x6f)) + 0xb)) + 3) +
               0x18);
    uVar8 = *puVar13;
    lVar14 = puVar13[1];
    if (lVar14 != 0) {
      plVar2 = (long *)(lVar14 + 8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar10) {
          *plVar2 = *plVar2 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    local_68 = operator_new(0x30);
    *(undefined8 *)(local_68 + 0x10) = 0;
    *(undefined ***)local_68 = &PTR____shared_ptr_emplace_01cb4dd8;
    *(undefined8 *)(local_68 + 8) = 0;
    local_70 = local_68 + 0x18;
    *(long *)local_70 = param_4;
    piVar3 = (int *)(param_4 + 0x8c);
    *(undefined8 *)(local_68 + 0x20) = uVar8;
    *(long *)(local_68 + 0x28) = lVar14;
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar10) {
        *piVar3 = *piVar3 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    pIVar16 = (Isolate *)
              Managed<v8::internal::wasm::GlobalWasmCodeRef>::FromSharedPtr
                        (pIVar16,0,(shared_ptr *)&local_70);
    this = local_68;
    if (local_68 != (__shared_weak_count *)0x0) {
      p_Var4 = local_68 + 8;
      do {
        lVar14 = *(long *)p_Var4;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(p_Var4,0x10);
        if (bVar10) {
          *(long *)p_Var4 = lVar14 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
    }
  }
  uVar17 = *param_1;
  uVar12 = *param_2;
  uVar7 = iVar5 * 0x18 | 4;
  *(int *)(uVar17 + (long)(int)uVar7 + 7) = (int)uVar12;
  if ((uVar12 & 1) != 0) {
    uVar15 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
    lVar14 = uVar17 + (long)(int)uVar7 + 7;
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,lVar14,uVar12);
      uVar15 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,lVar14,uVar12);
    }
  }
  *(int *)(*param_1 + ((long)(int)(uVar7 + 4) | 7U)) = param_3 << 1;
  uVar17 = *param_1;
  uVar12 = *(ulong *)pIVar16;
  lVar14 = uVar17 + (long)(int)(uVar7 + 8);
  *(int *)(lVar14 + 7) = (int)uVar12;
  if ((uVar12 & 1) != 0) {
    uVar15 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
    lVar14 = lVar14 + 7;
    if (((uint)uVar15 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar17,lVar14,uVar12);
      uVar15 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar15 & 0x18) != 0) && ((*(byte *)((uVar17 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar17,lVar14,uVar12);
    }
  }
  *(int *)(*param_1 + ((long)(int)(uVar7 + 0xc) | 7U)) = param_5 << 1;
  *(int *)(*param_1 + (long)(int)(uVar7 + 0x10) + 7) = param_6 << 1;
  *(int *)(*param_1 + 7) = iVar1 * 2;
  return param_1;
}

