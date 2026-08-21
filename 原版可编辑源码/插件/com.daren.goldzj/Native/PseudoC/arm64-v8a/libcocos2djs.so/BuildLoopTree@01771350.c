
/* v8::internal::compiler::LoopFinder::BuildLoopTree(v8::internal::compiler::Graph*,
   v8::internal::TickCounter*, v8::internal::Zone*) */

LoopTree *
v8::internal::compiler::LoopFinder::BuildLoopTree(Graph *param_1,TickCounter *param_2,Zone *param_3)

{
  int iVar1;
  Zone *pZVar2;
  LoopTree *pLVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  LoopFinderImpl aLStack_140 [16];
  long *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  long local_118;
  long local_108;
  long local_e8;
  long local_d8;
  long local_d0;
  long local_b8;
  long local_b0;
  long local_98;
  long local_90;
  
  pZVar2 = *(Zone **)param_1;
  pLVar3 = *(LoopTree **)(pZVar2 + 0x10);
  if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)pLVar3) < 0x88) {
    pLVar3 = (LoopTree *)Zone::NewExpand(pZVar2,0x88);
  }
  else {
    *(LoopTree **)(pZVar2 + 0x10) = pLVar3 + 0x88;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar8 = (ulong)iVar1;
  pZVar2 = *(Zone **)param_1;
  *(undefined8 *)(pLVar3 + 0x10) = 0;
  *(undefined8 *)(pLVar3 + 0x18) = 0;
  *(undefined8 *)(pLVar3 + 0x30) = 0;
  *(undefined8 *)(pLVar3 + 0x38) = 0;
  *(undefined8 *)(pLVar3 + 0x50) = 0;
  *(undefined8 *)(pLVar3 + 0x58) = 0;
  *(Zone **)pLVar3 = pZVar2;
  *(undefined8 *)(pLVar3 + 8) = 0;
  *(Zone **)(pLVar3 + 0x20) = pZVar2;
  *(undefined8 *)(pLVar3 + 0x28) = 0;
  *(Zone **)(pLVar3 + 0x40) = pZVar2;
  *(undefined8 *)(pLVar3 + 0x48) = 0;
  *(Zone **)(pLVar3 + 0x60) = pZVar2;
  if (iVar1 != 0) {
    if ((uVar8 >> 0x1d & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar4 = *(undefined4 **)(pZVar2 + 0x10);
    uVar5 = ((long)(uVar8 << 0x20) >> 0x1e) + 7U & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(pZVar2 + 0x18) - (long)puVar4) < uVar5) {
      puVar4 = (undefined4 *)Zone::NewExpand(pZVar2,uVar5);
    }
    else {
      *(ulong *)(pZVar2 + 0x10) = (long)puVar4 + uVar5;
    }
    *(undefined4 **)(pLVar3 + 0x58) = puVar4 + uVar8;
    *(undefined4 **)(pLVar3 + 0x48) = puVar4;
    *(undefined4 **)(pLVar3 + 0x50) = puVar4;
    do {
      *puVar4 = 0xffffffff;
      uVar8 = uVar8 - 1;
      puVar4 = (undefined4 *)(*(long *)(pLVar3 + 0x50) + 4);
      *(undefined4 **)(pLVar3 + 0x50) = puVar4;
    } while (uVar8 != 0);
  }
  *(undefined8 *)(pLVar3 + 0x68) = 0;
  *(undefined8 *)(pLVar3 + 0x70) = 0;
  *(undefined8 *)(pLVar3 + 0x78) = 0;
  *(Zone **)(pLVar3 + 0x80) = pZVar2;
  LoopFinderImpl::LoopFinderImpl(aLStack_140,param_1,pLVar3,param_2,param_3);
  LoopFinderImpl::PropagateBackward(aLStack_140);
  LoopFinderImpl::PropagateForward(aLStack_140);
  LoopFinderImpl::FinishLoopTree(aLStack_140);
  if (FLAG_trace_turbo_loop != '\0') {
    LoopFinderImpl::Print(aLStack_140);
  }
  if (local_98 != 0) {
    local_90 = local_98;
  }
  if (local_b8 != 0) {
    local_b0 = local_b8;
  }
  if (local_d8 != 0) {
    local_d0 = local_d8;
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
  ::clear((__deque_base<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
           *)&local_130);
  if (local_128 == local_120) {
LAB_01771508:
    if (((local_130 != (long *)0x0) && (0xf < (ulong)(local_118 - (long)local_130))) &&
       ((uVar8 = local_118 - (long)local_130 >> 3, local_108 == 0 ||
        (*(ulong *)(local_108 + 8) <= uVar8)))) {
      local_130[1] = uVar8;
      *local_130 = local_108;
    }
    return pLVar3;
  }
  plVar7 = (long *)*local_128;
  plVar6 = (long *)local_e8;
  if (local_e8 != 0) goto LAB_017714d8;
  do {
    plVar6 = plVar7;
    plVar6[1] = 0x200;
    *plVar6 = local_e8;
    local_e8 = (long)plVar6;
    do {
      local_128 = local_128 + 1;
      if (local_120 == local_128) goto LAB_01771508;
      plVar7 = (long *)*local_128;
      if (plVar6 == (long *)0x0) break;
LAB_017714d8:
    } while (0x200 < *(ulong *)((long)plVar6 + 8));
  } while( true );
}

