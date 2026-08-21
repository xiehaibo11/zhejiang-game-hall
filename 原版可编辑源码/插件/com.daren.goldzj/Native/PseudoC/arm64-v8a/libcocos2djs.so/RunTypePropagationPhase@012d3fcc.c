
/* v8::internal::compiler::RepresentationSelector::RunTypePropagationPhase() */

void __thiscall
v8::internal::compiler::RepresentationSelector::RunTypePropagationPhase
          (RepresentationSelector *this)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  Node *pNVar14;
  ulong uVar15;
  undefined8 uVar16;
  Node *pNVar17;
  Node *pNVar18;
  long *plVar19;
  NodeInfo *pNVar20;
  
  if (FLAG_trace_representation != '\0') {
    PrintF("--{Type propagation phase}--\n");
  }
  puVar7 = *(undefined1 **)(this + 0x18);
  puVar2 = *(undefined1 **)(this + 0x20);
  *(undefined4 *)(this + 0x78) = 1;
  if (puVar7 != puVar2) {
    uVar4 = (ulong)(puVar2 + (-0x28 - (long)puVar7)) / 0x28 + 1;
    if (1 < uVar4) {
      uVar15 = uVar4 & 0xffffffffffffffe;
      puVar10 = puVar7 + uVar15 * 0x28;
      uVar9 = uVar15;
      do {
        *puVar7 = 0;
        puVar7[0x28] = 0;
        uVar9 = uVar9 - 2;
        puVar7 = puVar7 + 0x50;
      } while (uVar9 != 0);
      puVar7 = puVar10;
      if (uVar4 == uVar15) goto LAB_012d4084;
    }
    do {
      puVar10 = puVar7 + 0x28;
      *puVar7 = 0;
      puVar7 = puVar10;
    } while (puVar2 != puVar10);
  }
LAB_012d4084:
  lVar3 = *(long *)(this + 0xe0);
  uVar16 = *(undefined8 *)(**(long **)this + 0x10);
  uVar4 = 0;
  if (*(long *)(this + 0xe8) - lVar3 != 0) {
    uVar4 = (*(long *)(this + 0xe8) - lVar3) * 0x20 - 1;
  }
  uVar9 = *(long *)(this + 0x110) + *(long *)(this + 0x108);
  if (uVar4 == uVar9) {
    std::__ndk1::
    deque<v8::internal::compiler::RepresentationSelector::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RepresentationSelector::NodeState>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::RepresentationSelector::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RepresentationSelector::NodeState>>
                *)(this + 0xd8));
    lVar3 = *(long *)(this + 0xe0);
    uVar9 = *(long *)(this + 0x108) + *(long *)(this + 0x110);
  }
  puVar8 = (undefined8 *)
           (*(long *)(lVar3 + (uVar9 >> 5 & 0x7fffffffffffff8)) + (uVar9 & 0xff) * 0x10);
  *puVar8 = uVar16;
  *(undefined4 *)(puVar8 + 1) = 0;
  *(long *)(this + 0x110) = *(long *)(this + 0x110) + 1;
  *(undefined1 *)
   (*(long *)(this + 0x18) +
   ((ulong)*(uint *)(*(long *)(**(long **)this + 0x10) + 0x14) & 0xffffff) * 0x28) = 1;
  lVar3 = *(long *)(this + 0x110);
  if (lVar3 != 0) {
    do {
      uVar4 = (lVar3 + *(long *)(this + 0x108)) - 1;
      lVar11 = *(long *)(*(long *)(this + 0xe0) + (uVar4 >> 5 & 0x7fffffffffffff8));
      lVar13 = (uVar4 & 0xff) * 0x10;
      piVar5 = (int *)(lVar11 + lVar13 + 8);
      lVar3 = (long)*piVar5;
      pNVar18 = *(Node **)(lVar11 + lVar13);
      pNVar17 = pNVar18 + 0x20;
      do {
        uVar1 = *(uint *)(pNVar18 + 0x14) & 0xf000000;
        if (uVar1 == 0xf000000) {
          if ((int)lVar3 < *(int *)(*(long *)pNVar17 + 8)) goto LAB_012d41c8;
LAB_012d41e0:
          lVar11 = *(long *)(this + 0xe8);
          lVar13 = *(long *)(this + 0x110);
          lVar3 = 0;
          if (lVar11 - *(long *)(this + 0xe0) != 0) {
            lVar3 = (lVar11 - *(long *)(this + 0xe0)) * 0x20 + -1;
          }
          *(long *)(this + 0x110) = lVar13 + -1;
          if (0x1ff < (lVar3 - (lVar13 + *(long *)(this + 0x108))) + 1U) {
            puVar8 = *(undefined8 **)(lVar11 + -8);
            if ((*(long *)(this + 0x120) == 0) || (*(ulong *)(*(long *)(this + 0x120) + 8) < 0x101))
            {
              puVar8[1] = 0x100;
              *puVar8 = *(undefined8 *)(this + 0x120);
              lVar11 = *(long *)(this + 0xe8);
              *(undefined8 **)(this + 0x120) = puVar8;
            }
            *(long *)(this + 0xe8) = lVar11 + -8;
          }
          uVar1 = *(uint *)(pNVar18 + 0x14);
          lVar3 = *(long *)(this + 0x18);
          pNVar20 = (NodeInfo *)(lVar3 + ((ulong)uVar1 & 0xffffff) * 0x28);
          *pNVar20 = (NodeInfo)0x2;
          uVar4 = UpdateFeedbackType(this,pNVar18);
          if (FLAG_trace_representation != '\0') {
            PrintF(" visit #%d: %s\n",(ulong)(*(uint *)(pNVar18 + 0x14) & 0xffffff),
                   *(undefined8 *)(*(long *)pNVar18 + 8));
          }
          VisitNode(this,pNVar18,*(undefined8 *)(lVar3 + ((ulong)uVar1 & 0xffffff) * 0x28 + 4),0);
          if (FLAG_trace_representation != '\0') {
            PrintF("  ==> output ");
          }
          PrintOutputInfo(this,pNVar20);
          if (FLAG_trace_representation != '\0') {
            PrintF("\n");
          }
          if ((uVar4 & 1) != 0) {
            for (plVar19 = *(long **)(pNVar18 + 0x18); plVar19 != (long *)0x0;
                plVar19 = (long *)*plVar19) {
              puVar8 = plVar19 + (ulong)(*(uint *)(plVar19 + 2) >> 1) * 3 + 3;
              if ((*(uint *)(plVar19 + 2) & 1) == 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
              pcVar6 = (char *)(*(long *)(this + 0x18) +
                               ((ulong)*(uint *)((long)puVar8 + 0x14) & 0xffffff) * 0x28);
              if (*pcVar6 == '\x02') {
                *pcVar6 = '\x03';
                lVar3 = *(long *)(this + 0x90);
                uVar4 = 0;
                if (*(long *)(this + 0x98) - lVar3 != 0) {
                  uVar4 = (*(long *)(this + 0x98) - lVar3) * 0x40 - 1;
                }
                uVar9 = *(long *)(this + 0xc0) + *(long *)(this + 0xb8);
                if (uVar4 == uVar9) {
                  std::__ndk1::
                  deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  ::__add_back_capacity
                            ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                              *)(this + 0x88));
                  lVar3 = *(long *)(this + 0x90);
                  uVar9 = *(long *)(this + 0xb8) + *(long *)(this + 0xc0);
                }
                *(undefined8 **)
                 (*(long *)(lVar3 + (uVar9 >> 6 & 0x3fffffffffffff8)) + (uVar9 & 0x1ff) * 8) =
                     puVar8;
                *(long *)(this + 0xc0) = *(long *)(this + 0xc0) + 1;
              }
            }
          }
          lVar3 = *(long *)(this + 0x110);
          goto joined_r0x012d4428;
        }
        if ((int)(*(uint *)(pNVar18 + 0x14) >> 0x18 & 0xf) <= (int)lVar3) goto LAB_012d41e0;
LAB_012d41c8:
        pNVar14 = pNVar17;
        if (uVar1 == 0xf000000) {
          pNVar14 = (Node *)(*(long *)pNVar17 + 0x10);
        }
        lVar13 = *(long *)(pNVar14 + lVar3 * 8);
        lVar11 = *(long *)(this + 0x18);
        lVar3 = lVar3 + 1;
        uVar1 = *(uint *)(lVar13 + 0x14);
        *piVar5 = (int)lVar3;
        pcVar6 = (char *)(lVar11 + ((ulong)uVar1 & 0xffffff) * 0x28);
      } while (*pcVar6 != '\0');
      *pcVar6 = '\x01';
      lVar3 = *(long *)(this + 0xe0);
      lVar11 = *(long *)(this + 0xe8);
      uVar4 = 0;
      if (lVar11 - lVar3 != 0) {
        uVar4 = (lVar11 - lVar3) * 0x20 - 1;
      }
      uVar9 = *(long *)(this + 0x110) + *(long *)(this + 0x108);
      if (uVar4 == uVar9) {
        std::__ndk1::
        deque<v8::internal::compiler::RepresentationSelector::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RepresentationSelector::NodeState>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::RepresentationSelector::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::RepresentationSelector::NodeState>>
                    *)(this + 0xd8));
        lVar3 = *(long *)(this + 0xe0);
        lVar11 = *(long *)(this + 0xe8);
        uVar9 = *(long *)(this + 0x108) + *(long *)(this + 0x110);
      }
      if (lVar11 == lVar3) {
        plVar19 = (long *)0x0;
      }
      else {
        plVar19 = (long *)(*(long *)(lVar3 + (uVar9 >> 5 & 0x7fffffffffffff8)) +
                          (uVar9 & 0xff) * 0x10);
      }
      *plVar19 = lVar13;
      *(undefined4 *)(plVar19 + 1) = 0;
      lVar3 = *(long *)(this + 0x110) + 1;
      *(long *)(this + 0x110) = lVar3;
joined_r0x012d4428:
    } while (lVar3 != 0);
  }
  lVar3 = *(long *)(this + 0xc0);
  if (lVar3 != 0) {
    do {
      uVar4 = *(ulong *)(this + 0xb8);
      puVar8 = *(undefined8 **)(this + 0x90);
      pNVar17 = *(Node **)(*(long *)((long)puVar8 + (uVar4 >> 6 & 0x3fffffffffffff8)) +
                          (uVar4 & 0x1ff) * 8);
      uVar4 = uVar4 + 1;
      *(ulong *)(this + 0xb8) = uVar4;
      *(long *)(this + 0xc0) = lVar3 + -1;
      if (0x3ff < uVar4) {
        puVar12 = (undefined8 *)*puVar8;
        if ((*(long *)(this + 0xd0) == 0) || (*(ulong *)(*(long *)(this + 0xd0) + 8) < 0x201)) {
          puVar12[1] = 0x200;
          *puVar12 = *(undefined8 *)(this + 0xd0);
          puVar8 = *(undefined8 **)(this + 0x90);
          uVar4 = *(ulong *)(this + 0xb8);
          *(undefined8 **)(this + 0xd0) = puVar12;
        }
        *(undefined8 **)(this + 0x90) = puVar8 + 1;
        *(ulong *)(this + 0xb8) = uVar4 - 0x200;
      }
      uVar1 = *(uint *)(pNVar17 + 0x14);
      lVar3 = *(long *)(this + 0x18);
      pNVar20 = (NodeInfo *)(lVar3 + ((ulong)uVar1 & 0xffffff) * 0x28);
      *pNVar20 = (NodeInfo)0x2;
      uVar4 = UpdateFeedbackType(this,pNVar17);
      if (FLAG_trace_representation != '\0') {
        PrintF(" visit #%d: %s\n",(ulong)(*(uint *)(pNVar17 + 0x14) & 0xffffff),
               *(undefined8 *)(*(long *)pNVar17 + 8));
      }
      VisitNode(this,pNVar17,*(undefined8 *)(lVar3 + ((ulong)uVar1 & 0xffffff) * 0x28 + 4),0);
      if (FLAG_trace_representation != '\0') {
        PrintF("  ==> output ");
      }
      PrintOutputInfo(this,pNVar20);
      if (FLAG_trace_representation != '\0') {
        PrintF("\n");
      }
      if ((uVar4 & 1) != 0) {
        for (plVar19 = *(long **)(pNVar17 + 0x18); plVar19 != (long *)0x0;
            plVar19 = (long *)*plVar19) {
          puVar8 = plVar19 + (ulong)(*(uint *)(plVar19 + 2) >> 1) * 3 + 3;
          if ((*(uint *)(plVar19 + 2) & 1) == 0) {
            puVar8 = (undefined8 *)*puVar8;
          }
          pcVar6 = (char *)(*(long *)(this + 0x18) +
                           ((ulong)*(uint *)((long)puVar8 + 0x14) & 0xffffff) * 0x28);
          if (*pcVar6 == '\x02') {
            *pcVar6 = '\x03';
            lVar3 = *(long *)(this + 0x90);
            uVar4 = 0;
            if (*(long *)(this + 0x98) - lVar3 != 0) {
              uVar4 = (*(long *)(this + 0x98) - lVar3) * 0x40 - 1;
            }
            uVar9 = *(long *)(this + 0xc0) + *(long *)(this + 0xb8);
            if (uVar4 == uVar9) {
              std::__ndk1::
              deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
              ::__add_back_capacity
                        ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                          *)(this + 0x88));
              lVar3 = *(long *)(this + 0x90);
              uVar9 = *(long *)(this + 0xb8) + *(long *)(this + 0xc0);
            }
            *(undefined8 **)
             (*(long *)(lVar3 + (uVar9 >> 6 & 0x3fffffffffffff8)) + (uVar9 & 0x1ff) * 8) = puVar8;
            *(long *)(this + 0xc0) = *(long *)(this + 0xc0) + 1;
          }
        }
      }
      lVar3 = *(long *)(this + 0xc0);
    } while (lVar3 != 0);
  }
  return;
}

