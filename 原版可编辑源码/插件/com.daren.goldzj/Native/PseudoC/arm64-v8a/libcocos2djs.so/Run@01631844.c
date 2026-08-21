
/* v8::internal::compiler::FrameElider::Run() */

void __thiscall v8::internal::compiler::FrameElider::Run(FrameElider *this)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar10;
  
  plVar4 = (long *)**(long **)(*(long *)this + 0x10);
  plVar1 = (long *)(*(long **)(*(long *)this + 0x10))[1];
  if (plVar4 != plVar1) {
    do {
      lVar5 = *plVar4;
      if (*(char *)(lVar5 + 0x7c) == '\0') {
        iVar2 = *(int *)(lVar5 + 0x70);
        if (iVar2 < *(int *)(lVar5 + 0x74)) {
          uVar6 = *(long *)(*(long *)this + 0xb0) + (long)iVar2;
          lVar7 = (long)*(int *)(lVar5 + 0x74) - (long)iVar2;
          do {
            puVar8 = *(uint **)(*(long *)(*(long *)(*(long *)this + 0x88) +
                                         (uVar6 >> 6 & 0x3fffffffffffff8)) + (uVar6 & 0x1ff) * 8);
            if ((*(byte *)((long)puVar8 + 7) >> 6 & 1) != 0) {
LAB_01631874:
              *(undefined1 *)(lVar5 + 0x7c) = 1;
              break;
            }
            uVar3 = *puVar8;
            uVar12 = uVar3 & 0x1ff;
            if ((((uVar12 == 0x16) || ((uVar3 >> 0xe & 7) - 3 < 2)) || (uVar12 == 0x1e)) ||
               (uVar12 == 0x18)) goto LAB_01631874;
            lVar7 = lVar7 + -1;
            uVar6 = uVar6 + 1;
          } while (lVar7 != 0);
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
    do {
      do {
        puVar9 = (undefined8 *)**(long **)(*(long *)this + 0x10);
        puVar11 = (undefined8 *)(*(long **)(*(long *)this + 0x10))[1];
        if (puVar9 == puVar11) goto LAB_01631974;
        uVar12 = 0;
        do {
          puVar10 = puVar9 + 1;
          uVar3 = PropagateIntoBlock(this,(InstructionBlock *)*puVar9);
          uVar12 = uVar12 | uVar3;
          puVar9 = puVar10;
        } while (puVar11 != puVar10);
      } while ((uVar12 & 1) != 0);
      puVar9 = (undefined8 *)**(long **)(*(long *)this + 0x10);
      puVar11 = (undefined8 *)(*(long **)(*(long *)this + 0x10))[1];
      if (puVar11 == puVar9) break;
      uVar12 = 0;
      do {
        puVar11 = puVar11 + -1;
        uVar3 = PropagateIntoBlock(this,(InstructionBlock *)*puVar11);
        uVar12 = uVar12 | uVar3;
      } while (puVar9 != puVar11);
    } while ((uVar12 & 1) != 0);
  }
LAB_01631974:
  MarkDeConstruction(this);
  return;
}

