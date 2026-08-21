
/* v8::internal::compiler::Scheduler::BuildCFG() */

void __thiscall v8::internal::compiler::Scheduler::BuildCFG(Scheduler *this)

{
  undefined8 *puVar1;
  uint uVar2;
  Zone *pZVar3;
  undefined8 *puVar4;
  CFGBuilder *this_00;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  if (FLAG_trace_turbo_scheduler != '\0') {
    PrintF("--- CREATING CFG -------------------------------------------\n");
  }
  pZVar3 = *(Zone **)this;
  puVar4 = *(undefined8 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar4) < 0x38) {
    puVar4 = (undefined8 *)Zone::NewExpand(pZVar3,0x38);
  }
  else {
    *(undefined8 **)(pZVar3 + 0x10) = puVar4 + 7;
  }
  pZVar3 = *(Zone **)this;
  lVar5 = *(long *)(this + 8);
  *puVar4 = pZVar3;
  puVar4[1] = lVar5;
  puVar4[2] = 0x100000000;
  uVar2 = *(uint *)(lVar5 + 0x1c);
  uVar9 = (ulong)uVar2;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = pZVar3;
  if (uVar2 != 0) {
    if (uVar2 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar7 = *(undefined8 **)(pZVar3 + 0x10);
    uVar6 = uVar9 * 8;
    if (uVar6 < (ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar7) ||
        uVar6 - (*(long *)(pZVar3 + 0x18) - (long)puVar7) == 0) {
      *(undefined8 **)(pZVar3 + 0x10) = puVar7 + uVar9;
    }
    else {
      puVar7 = (undefined8 *)Zone::NewExpand(pZVar3,uVar6);
    }
    puVar4[3] = puVar7;
    puVar4[4] = puVar7;
    puVar4[5] = puVar7 + uVar9;
    do {
      *puVar7 = 0;
      uVar9 = uVar9 - 1;
      puVar7 = (undefined8 *)(puVar4[4] + 8);
      puVar4[4] = puVar7;
    } while (uVar9 != 0);
  }
  pZVar3 = *(Zone **)this;
  *(undefined8 **)(this + 0xe0) = puVar4;
  this_00 = *(CFGBuilder **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)this_00) < 0xa8) {
    this_00 = (CFGBuilder *)Zone::NewExpand(pZVar3,0xa8);
  }
  else {
    *(CFGBuilder **)(pZVar3 + 0x10) = this_00 + 0xa8;
  }
  uVar10 = *(undefined8 *)this;
  *(undefined8 *)this_00 = uVar10;
  *(Scheduler **)(this_00 + 8) = this;
  *(undefined8 *)(this_00 + 0x10) = *(undefined8 *)(this + 0x10);
  NodeMarkerBase::NodeMarkerBase((NodeMarkerBase *)(this_00 + 0x18),*(Graph **)(this + 8),2);
  *(undefined8 *)(this_00 + 0x40) = uVar10;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = uVar10;
  *(undefined8 *)(this_00 + 0x88) = uVar10;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(CFGBuilder **)(this + 0xd0) = this_00;
  CFGBuilder::Run(this_00);
  puVar7 = *(undefined8 **)(this + 0x20);
  puVar4 = *(undefined8 **)(this + 0x28);
  uVar9 = *(long *)(*(long *)(this + 0x10) + 0x10) - *(long *)(*(long *)(this + 0x10) + 8) >> 3;
  uVar6 = (ulong)((double)uVar9 * 1.1);
  if ((ulong)(*(long *)(this + 0x30) - (long)puVar7 >> 3) < uVar6) {
    pZVar3 = *(Zone **)(this + 0x38);
    uVar9 = uVar6 * 8;
    lVar5 = *(long *)(pZVar3 + 0x10);
    if (uVar9 < (ulong)(*(long *)(pZVar3 + 0x18) - lVar5) ||
        uVar9 - (*(long *)(pZVar3 + 0x18) - lVar5) == 0) {
      *(ulong *)(pZVar3 + 0x10) = lVar5 + uVar9;
    }
    else {
      lVar5 = Zone::NewExpand(pZVar3,uVar9);
    }
    puVar1 = *(undefined8 **)(this + 0x20);
    puVar8 = *(undefined8 **)(this + 0x28);
    puVar4 = (undefined8 *)(lVar5 + ((long)puVar4 - (long)puVar7 >> 3) * 8);
    puVar7 = puVar4;
    while (puVar8 != puVar1) {
      puVar8 = puVar8 + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *puVar8;
    }
    *(undefined8 **)(this + 0x20) = puVar7;
    *(undefined8 **)(this + 0x28) = puVar4;
    *(ulong *)(this + 0x30) = lVar5 + uVar6 * 8;
    uVar9 = *(long *)(*(long *)(this + 0x10) + 0x10) - *(long *)(*(long *)(this + 0x10) + 8) >> 3;
  }
  uVar6 = (long)puVar4 - (long)puVar7 >> 3;
  if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
    if (uVar9 < uVar6) {
      *(undefined8 **)(this + 0x28) = puVar7 + uVar9;
    }
    return;
  }
  std::__ndk1::
  vector<v8::internal::ZoneVector<v8::internal::compiler::Node*>*,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::compiler::Node*>*>>
  ::__append((vector<v8::internal::ZoneVector<v8::internal::compiler::Node*>*,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::compiler::Node*>*>>
              *)(this + 0x20),uVar9 - uVar6);
  return;
}

