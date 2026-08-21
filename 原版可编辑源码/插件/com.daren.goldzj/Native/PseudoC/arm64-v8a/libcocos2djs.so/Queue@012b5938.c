
/* v8::internal::compiler::CFGBuilder::Queue(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::CFGBuilder::Queue(CFGBuilder *this,Node *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  Zone *this_00;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (*(uint *)(param_1 + 0x10) <= *(uint *)(this + 0x18)) {
    BuildBlocks(this,param_1);
    lVar3 = *(long *)(this + 0x28);
    uVar1 = 0;
    if (*(long *)(this + 0x30) - lVar3 != 0) {
      uVar1 = (*(long *)(this + 0x30) - lVar3) * 0x40 - 1;
    }
    uVar7 = *(long *)(this + 0x58) + *(long *)(this + 0x50);
    if (uVar1 == uVar7) {
      std::__ndk1::
      deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  *)(this + 0x20));
      lVar3 = *(long *)(this + 0x28);
      uVar7 = *(long *)(this + 0x50) + *(long *)(this + 0x58);
    }
    *(Node **)(*(long *)(lVar3 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) = param_1;
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
    *(int *)(param_1 + 0x10) = *(int *)(this + 0x18) + 1;
    puVar5 = *(undefined8 **)(this + 0x78);
    if (puVar5 == *(undefined8 **)(this + 0x80)) {
      lVar3 = (long)puVar5 - *(long *)(this + 0x70) >> 3;
      uVar1 = lVar3 + 1;
      if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = (long)*(undefined8 **)(this + 0x80) - *(long *)(this + 0x70);
      uVar7 = lVar4 >> 2;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      if (0x7fffffe < (ulong)(lVar4 >> 3)) {
        uVar1 = 0xfffffff;
      }
      if (uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        this_00 = *(Zone **)(this + 0x88);
        uVar7 = uVar1 * 8;
        lVar4 = *(long *)(this_00 + 0x10);
        if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar4) ||
            uVar7 - (*(long *)(this_00 + 0x18) - lVar4) == 0) {
          *(ulong *)(this_00 + 0x10) = lVar4 + uVar7;
        }
        else {
          lVar4 = Zone::NewExpand(this_00,uVar7);
        }
      }
      puVar5 = (undefined8 *)(lVar4 + lVar3 * 8);
      puVar6 = puVar5 + 1;
      *puVar5 = param_1;
      puVar2 = *(undefined8 **)(this + 0x70);
      puVar8 = *(undefined8 **)(this + 0x78);
      while (puVar8 != puVar2) {
        puVar8 = puVar8 + -1;
        puVar5 = puVar5 + -1;
        *puVar5 = *puVar8;
      }
      *(undefined8 **)(this + 0x70) = puVar5;
      *(undefined8 **)(this + 0x78) = puVar6;
      *(ulong *)(this + 0x80) = lVar4 + uVar1 * 8;
    }
    else {
      *puVar5 = param_1;
      *(long *)(this + 0x78) = *(long *)(this + 0x78) + 8;
    }
  }
  return;
}

