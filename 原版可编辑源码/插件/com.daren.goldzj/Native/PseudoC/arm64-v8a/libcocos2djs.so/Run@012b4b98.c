
/* v8::internal::compiler::ScheduleEarlyNodeVisitor::Run(v8::internal::ZoneVector<v8::internal::compiler::Node*>*)
    */

void __thiscall
v8::internal::compiler::ScheduleEarlyNodeVisitor::Run
          (ScheduleEarlyNodeVisitor *this,ZoneVector *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = *(undefined8 **)param_1;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar8 != puVar1) {
    lVar3 = *(long *)(this + 0x48);
    do {
      lVar2 = *(long *)(this + 0x18);
      uVar9 = *puVar8;
      uVar6 = 0;
      if (*(long *)(this + 0x20) - lVar2 != 0) {
        uVar6 = (*(long *)(this + 0x20) - lVar2) * 0x40 - 1;
      }
      uVar4 = lVar3 + *(long *)(this + 0x40);
      if (uVar6 == uVar4) {
        std::__ndk1::
        deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                    *)(this + 0x10));
        lVar2 = *(long *)(this + 0x18);
        uVar4 = *(long *)(this + 0x40) + *(long *)(this + 0x48);
      }
      *(undefined8 *)(*(long *)(lVar2 + (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8) =
           uVar9;
      lVar3 = *(long *)(this + 0x48);
      *(long *)(this + 0x48) = lVar3 + 1;
      if (lVar3 != -1) {
        do {
          TickCounter::DoTick(*(TickCounter **)(*(long *)this + 0xe8));
          VisitNode(this,*(Node **)(*(long *)(*(long *)(this + 0x18) +
                                             (*(ulong *)(this + 0x40) >> 6 & 0x3fffffffffffff8)) +
                                   (*(ulong *)(this + 0x40) & 0x1ff) * 8));
          puVar5 = *(undefined8 **)(this + 0x18);
          uVar6 = *(long *)(this + 0x40) + 1;
          lVar3 = *(long *)(this + 0x48) + -1;
          *(ulong *)(this + 0x40) = uVar6;
          *(long *)(this + 0x48) = lVar3;
          if (0x3ff < uVar6) {
            puVar7 = (undefined8 *)*puVar5;
            if ((*(long *)(this + 0x58) == 0) || (*(ulong *)(*(long *)(this + 0x58) + 8) < 0x201)) {
              puVar7[1] = 0x200;
              *puVar7 = *(undefined8 *)(this + 0x58);
              puVar5 = *(undefined8 **)(this + 0x18);
              uVar6 = *(ulong *)(this + 0x40);
              lVar3 = *(long *)(this + 0x48);
              *(undefined8 **)(this + 0x58) = puVar7;
            }
            *(undefined8 **)(this + 0x18) = puVar5 + 1;
            *(ulong *)(this + 0x40) = uVar6 - 0x200;
          }
        } while (lVar3 != 0);
      }
      puVar8 = puVar8 + 1;
      lVar3 = 0;
    } while (puVar8 != puVar1);
  }
  return;
}

