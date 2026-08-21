
/* v8::internal::compiler::DecompressionOptimizer::MarkNodeInputs(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::DecompressionOptimizer::MarkNodeInputs
          (DecompressionOptimizer *this,Node *param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  Node *pNVar9;
  uint uVar10;
  ulong uVar11;
  Node *pNVar12;
  long lVar13;
  long lVar14;
  
  lVar8 = *(long *)param_1;
  uVar10 = (uint)*(ushort *)(lVar8 + 0x10);
  if (*(ushort *)(lVar8 + 0x10) < 0x1ac) {
    if ((0x28 < uVar10 - 0x128) || ((1L << ((ulong)(uVar10 - 0x128) & 0x3f) & 0x1e800000009U) == 0))
    {
      if (uVar10 - 0x29 < 3) {
        if (0 < *(int *)(lVar8 + 0x14)) {
          lVar8 = 0;
          do {
            pNVar12 = param_1 + 0x20;
            if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
              pNVar12 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
            }
            MaybeMarkAndQueueForRevisit(this,*(undefined8 *)(pNVar12 + lVar8 * 8),1);
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(*(long *)param_1 + 0x14));
        }
        goto LAB_0169f458;
      }
      if (uVar10 == 0x23) {
        iVar1 = 0;
        if (*(uint *)(this + 0x18) <= *(uint *)(param_1 + 0x10)) {
          iVar1 = *(uint *)(param_1 + 0x10) - *(uint *)(this + 0x18);
        }
        if (0 < *(int *)(lVar8 + 0x14)) {
          lVar8 = 0;
          do {
            pNVar12 = param_1 + 0x20;
            if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
              pNVar12 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
            }
            MaybeMarkAndQueueForRevisit(this,*(undefined8 *)(pNVar12 + lVar8 * 8),iVar1);
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(*(long *)param_1 + 0x14));
        }
        goto LAB_0169f458;
      }
      goto switchD_0169f1bc_caseD_1d0;
    }
    pNVar12 = param_1 + 0x20;
    pNVar9 = pNVar12;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar12 + 0x10);
    }
    MaybeMarkAndQueueForRevisit(this,*(undefined8 *)pNVar9,1);
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar12 = (Node *)(*(long *)pNVar12 + 0x10);
    }
    uVar6 = *(undefined8 *)(pNVar12 + 8);
LAB_0169f1e0:
    uVar7 = 1;
LAB_0169f454:
    MaybeMarkAndQueueForRevisit(this,uVar6,uVar7);
  }
  else {
    switch(uVar10) {
    case 0x1cf:
    case 0x1d1:
      pNVar12 = param_1 + 0x20;
      if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
        pNVar12 = (Node *)(*(long *)pNVar12 + 0x10);
      }
      uVar6 = *(undefined8 *)pNVar12;
      goto LAB_0169f1e0;
    case 0x1e8:
    case 0x1f0:
switchD_0169f1bc_caseD_1e8:
      uVar10 = *(uint *)(param_1 + 0x14);
      pNVar12 = param_1 + 0x20;
      pNVar9 = pNVar12;
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar9 = (Node *)(*(long *)pNVar12 + 0x10);
      }
      lVar8 = *(long *)pNVar9;
      uVar3 = *(uint *)(this + 0x18);
      uVar4 = 0;
      if (uVar3 <= *(uint *)(lVar8 + 0x10)) {
        uVar4 = *(uint *)(lVar8 + 0x10) - uVar3;
      }
      if ((uVar4 & 0xff) < 2) {
        *(uint *)(lVar8 + 0x10) = uVar3 + 2;
        lVar13 = *(long *)(this + 0x28);
        uVar2 = 0;
        if (*(long *)(this + 0x30) - lVar13 != 0) {
          uVar2 = (*(long *)(this + 0x30) - lVar13) * 0x40 - 1;
        }
        uVar11 = *(long *)(this + 0x58) + *(long *)(this + 0x50);
        if (uVar2 == uVar11) {
          std::__ndk1::
          deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                      *)(this + 0x20));
          lVar13 = *(long *)(this + 0x28);
          uVar11 = *(long *)(this + 0x50) + *(long *)(this + 0x58);
        }
        *(long *)(*(long *)(lVar13 + (uVar11 >> 6 & 0x3fffffffffffff8)) + (uVar11 & 0x1ff) * 8) =
             lVar8;
        *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
        uVar10 = *(uint *)(param_1 + 0x14);
      }
      pNVar9 = pNVar12;
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar9 = (Node *)(*(long *)pNVar12 + 0x10);
      }
      lVar8 = *(long *)(pNVar9 + 8);
      uVar3 = *(uint *)(this + 0x18);
      uVar4 = 0;
      if (uVar3 <= *(uint *)(lVar8 + 0x10)) {
        uVar4 = *(uint *)(lVar8 + 0x10) - uVar3;
      }
      if ((uVar4 & 0xff) < 2) {
        *(uint *)(lVar8 + 0x10) = uVar3 + 2;
        lVar13 = *(long *)(this + 0x28);
        uVar2 = 0;
        if (*(long *)(this + 0x30) - lVar13 != 0) {
          uVar2 = (*(long *)(this + 0x30) - lVar13) * 0x40 - 1;
        }
        uVar11 = *(long *)(this + 0x58) + *(long *)(this + 0x50);
        if (uVar2 == uVar11) {
          std::__ndk1::
          deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                      *)(this + 0x20));
          lVar13 = *(long *)(this + 0x28);
          uVar11 = *(long *)(this + 0x50) + *(long *)(this + 0x58);
        }
        *(long *)(*(long *)(lVar13 + (uVar11 >> 6 & 0x3fffffffffffff8)) + (uVar11 & 0x1ff) * 8) =
             lVar8;
        *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
        uVar10 = *(uint *)(param_1 + 0x14);
      }
      if ((~uVar10 & 0xf000000) == 0) {
        pNVar12 = (Node *)(*(long *)pNVar12 + 0x10);
      }
      uVar6 = *(undefined8 *)(pNVar12 + 0x10);
      pcVar5 = (char *)StoreRepresentationOf(*(Operator **)param_1);
      uVar7 = 1;
      if (1 < (byte)(*pcVar5 - 7U) && *pcVar5 != '\x06') {
        uVar7 = 2;
      }
      goto LAB_0169f454;
    default:
      if (uVar10 == 0x1ac) goto switchD_0169f1bc_caseD_1e8;
    case 0x1d0:
    case 0x1d2:
    case 0x1d3:
    case 0x1d4:
    case 0x1d5:
    case 0x1d6:
    case 0x1d7:
    case 0x1d8:
    case 0x1d9:
    case 0x1da:
    case 0x1db:
    case 0x1dc:
    case 0x1dd:
    case 0x1de:
    case 0x1df:
    case 0x1e0:
    case 0x1e1:
    case 0x1e2:
    case 0x1e3:
    case 0x1e4:
    case 0x1e5:
    case 0x1e6:
    case 0x1e7:
    case 0x1e9:
    case 0x1ea:
    case 0x1eb:
    case 0x1ec:
    case 0x1ed:
    case 0x1ee:
    case 0x1ef:
switchD_0169f1bc_caseD_1d0:
      if (0 < *(int *)(lVar8 + 0x14)) {
        lVar13 = 0;
        do {
          pNVar12 = param_1 + 0x20;
          if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
            pNVar12 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
          }
          lVar14 = *(long *)(pNVar12 + lVar13 * 8);
          uVar4 = *(uint *)(this + 0x18);
          uVar10 = 0;
          if (uVar4 <= *(uint *)(lVar14 + 0x10)) {
            uVar10 = *(uint *)(lVar14 + 0x10) - uVar4;
          }
          if ((uVar10 & 0xff) < 2) {
            *(uint *)(lVar14 + 0x10) = uVar4 + 2;
            lVar8 = *(long *)(this + 0x28);
            uVar2 = 0;
            if (*(long *)(this + 0x30) - lVar8 != 0) {
              uVar2 = (*(long *)(this + 0x30) - lVar8) * 0x40 - 1;
            }
            uVar11 = *(long *)(this + 0x58) + *(long *)(this + 0x50);
            if (uVar2 == uVar11) {
              std::__ndk1::
              deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
              ::__add_back_capacity
                        ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                          *)(this + 0x20));
              lVar8 = *(long *)(this + 0x28);
              uVar11 = *(long *)(this + 0x50) + *(long *)(this + 0x58);
            }
            *(long *)(*(long *)(lVar8 + (uVar11 >> 6 & 0x3fffffffffffff8)) + (uVar11 & 0x1ff) * 8) =
                 lVar14;
            *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
            lVar8 = *(long *)param_1;
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(lVar8 + 0x14));
      }
    }
  }
LAB_0169f458:
  pNVar12 = param_1 + 0x20;
  lVar8 = (long)*(int *)(*(long *)param_1 + 0x14);
  while( true ) {
    uVar10 = *(uint *)(param_1 + 0x14) & 0xf000000;
    if (uVar10 == 0xf000000) {
      uVar4 = *(uint *)(*(long *)pNVar12 + 8);
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
    }
    if ((int)uVar4 <= lVar8) break;
    pNVar9 = pNVar12;
    if (uVar10 == 0xf000000) {
      pNVar9 = (Node *)(*(long *)pNVar12 + 0x10);
    }
    MaybeMarkAndQueueForRevisit(this,*(undefined8 *)(pNVar9 + lVar8 * 8),1);
    lVar8 = lVar8 + 1;
  }
  return;
}

