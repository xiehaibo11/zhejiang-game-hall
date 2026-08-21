
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::CopyForChange() */

void __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::CopyForChange(BasicBlockUpdater *this)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  BasicBlock *this_00;
  long lVar5;
  long lVar6;
  Zone *this_01;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  BasicBlockUpdater *pBVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  lVar5 = *(long *)(this + 0x10);
  plVar10 = *(long **)(lVar5 + 0x60);
  plVar3 = *(long **)(lVar5 + 0x68);
  if (plVar10 != plVar3) {
    do {
      lVar12 = *plVar10;
      lVar5 = *(long *)(lVar12 + 0x88) - *(long *)(lVar12 + 0x80);
      if (lVar5 != 0) {
        uVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar12 + 0x80) + uVar13 * 8) == *(long *)(this + 0x10)) {
            plVar2 = *(long **)(this + 0x60);
            if (plVar2 < *(long **)(this + 0x68)) {
              *plVar2 = lVar12;
              plVar2[1] = uVar13;
              *(long *)(this + 0x60) = *(long *)(this + 0x60) + 0x10;
            }
            else {
              lVar5 = (long)plVar2 - *(long *)(this + 0x58) >> 4;
              uVar1 = lVar5 + 1;
              if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar6 = (long)*(long **)(this + 0x68) - *(long *)(this + 0x58);
              uVar9 = lVar6 >> 3;
              if (uVar1 <= uVar9) {
                uVar1 = uVar9;
              }
              if (0x3fffffe < (ulong)(lVar6 >> 4)) {
                uVar1 = 0x7ffffff;
              }
              if (uVar1 == 0) {
                lVar6 = 0;
              }
              else {
                this_01 = *(Zone **)(this + 0x70);
                uVar9 = uVar1 * 0x10;
                lVar6 = *(long *)(this_01 + 0x10);
                if (uVar9 < (ulong)(*(long *)(this_01 + 0x18) - lVar6) ||
                    uVar9 - (*(long *)(this_01 + 0x18) - lVar6) == 0) {
                  *(ulong *)(this_01 + 0x10) = lVar6 + uVar9;
                }
                else {
                  lVar6 = Zone::NewExpand(this_01,uVar9);
                }
              }
              plVar2 = (long *)(lVar6 + lVar5 * 0x10);
              *plVar2 = lVar12;
              plVar2[1] = uVar13;
              lVar5 = *(long *)(this + 0x58);
              plVar4 = plVar2;
              for (lVar12 = *(long *)(this + 0x60); lVar12 != lVar5; lVar12 = lVar12 + -0x10) {
                lVar14 = *(long *)(lVar12 + -0x10);
                plVar4[-1] = *(long *)(lVar12 + -8);
                plVar4[-2] = lVar14;
                plVar4 = plVar4 + -2;
              }
              *(long **)(this + 0x58) = plVar4;
              *(long **)(this + 0x60) = plVar2 + 2;
              *(ulong *)(this + 0x68) = lVar6 + uVar1 * 0x10;
            }
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulong)(lVar5 >> 3));
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar3);
    lVar5 = *(long *)(this + 0x10);
  }
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(lVar5 + 0x34);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(lVar5 + 0x38);
  uVar8 = *(undefined8 *)(lVar5 + 0x40);
  *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x38) = uVar8;
  uVar8 = *(undefined8 *)(lVar5 + 0x48);
  *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this + 0x40) = uVar8;
  uVar8 = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(this + 0x48) = uVar8;
  pBVar11 = this + 0x18;
  std::__ndk1::
  vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>::
  insert<std::__ndk1::__wrap_iter<v8::internal::compiler::Node**>>
            ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
              *)(*(long *)(this + 0x10) + 0x40),*(undefined8 *)(*(long *)(this + 0x10) + 0x40),
             *(undefined8 *)(this + 0x38),*(long *)pBVar11);
  puVar7 = *(undefined8 **)pBVar11;
  if (puVar7 != *(undefined8 **)(this + 0x20)) {
    do {
      Schedule::SetBlockForNode(*(Schedule **)(this + 0x28),(BasicBlock *)0x0,(Node *)*puVar7);
      puVar7 = (undefined8 *)(*(long *)(this + 0x18) + 8);
      *(undefined8 **)(this + 0x18) = puVar7;
    } while (puVar7 != *(undefined8 **)(this + 0x20));
  }
  this_00 = *(BasicBlock **)(this + 0x10);
  if (*(int *)(this_00 + 0x34) != 1) {
    Schedule::SetBlockForNode
              (*(Schedule **)(this + 0x28),(BasicBlock *)0x0,*(Node **)(this_00 + 0x38));
    this_00 = *(BasicBlock **)(this + 0x10);
  }
  BasicBlock::set_control_input(this_00,(Node *)0x0);
  BasicBlock::set_control(*(BasicBlock **)(this + 0x10),0);
  *(undefined8 *)(*(long *)(this + 0x10) + 0x68) = *(undefined8 *)(*(long *)(this + 0x10) + 0x60);
  *(undefined4 *)(this + 0x98) = 1;
  *(long *)pBVar11 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  return;
}

