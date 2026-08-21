
/* v8::internal::compiler::LoadElimination::UpdateStateForPhi(v8::internal::compiler::LoadElimination::AbstractState
   const*, v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

AbstractState * __thiscall
v8::internal::compiler::LoadElimination::UpdateStateForPhi
          (LoadElimination *this,AbstractState *param_1,Node *param_2,Node *param_3)

{
  Node *pNVar1;
  short sVar2;
  long lVar3;
  AbstractState *pAVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  Node *pNVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  Node *pNVar15;
  uint uVar16;
  ulong uVar17;
  
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    uVar16 = *(uint *)(*(long *)(param_3 + 0x20) + 8);
  }
  else {
    uVar16 = *(uint *)(param_3 + 0x14) >> 0x18 & 0xf;
  }
  lVar3 = NodeProperties::GetEffectInput(param_2,0);
  uVar5 = (ulong)*(uint *)(lVar3 + 0x14) & 0xffffff;
  if (uVar5 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3)) {
    lVar3 = *(long *)(*(long *)(this + 0x10) + uVar5 * 8);
  }
  else {
    lVar3 = 0;
  }
  pNVar1 = param_3 + 0x20;
  pNVar8 = pNVar1;
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  if (*(long *)(lVar3 + 0x208) != 0) {
    while( true ) {
      plVar9 = *(long **)pNVar8;
      sVar2 = *(short *)(*plVar9 + 0x10);
      if (((sVar2 != 0x28) && (sVar2 != 0xde)) && (sVar2 != 0x3a)) break;
      pNVar8 = (Node *)(plVar9 + 4);
      uVar14 = *(uint *)((long)plVar9 + 0x14) >> 0x18 & 0xf;
      pNVar15 = pNVar8;
      if (uVar14 == 0xf) {
        uVar14 = *(uint *)(*(long *)pNVar8 + 8);
        pNVar15 = (Node *)(*(long *)pNVar8 + 0x10);
      }
      if ((0 < (int)uVar14) && (*(long *)pNVar15 == 0)) break;
      if ((~*(uint *)((long)plVar9 + 0x14) & 0xf000000) == 0) {
        pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
      }
    }
    plVar6 = (long *)(*(long *)(lVar3 + 0x208) + 8);
    plVar13 = (long *)*plVar6;
    plVar10 = plVar6;
    if (plVar13 != (long *)0x0) {
      do {
        if ((long *)plVar13[4] >= plVar9) {
          plVar10 = plVar13;
        }
        plVar13 = (long *)plVar13[(long *)plVar13[4] < plVar9];
      } while (plVar13 != (long *)0x0);
      if ((plVar10 != plVar6) && ((long *)plVar10[4] <= plVar9)) {
        uVar5 = plVar10[5];
        if (1 < (int)(uVar16 - 1)) {
          uVar17 = 1;
          do {
            lVar3 = NodeProperties::GetEffectInput(param_2,(int)uVar17);
            uVar7 = (ulong)*(uint *)(lVar3 + 0x14) & 0xffffff;
            if (uVar7 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 3)) {
              lVar3 = *(long *)(*(long *)(this + 0x10) + uVar7 * 8);
            }
            else {
              lVar3 = 0;
            }
            pNVar8 = pNVar1;
            if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
              pNVar8 = (Node *)(*(long *)pNVar1 + 0x10);
            }
            if (*(long *)(lVar3 + 0x208) == 0) {
              return param_1;
            }
            pNVar8 = pNVar8 + uVar17 * 8;
            while( true ) {
              plVar9 = *(long **)pNVar8;
              sVar2 = *(short *)(*plVar9 + 0x10);
              if (((sVar2 != 0x28) && (sVar2 != 0xde)) && (sVar2 != 0x3a)) break;
              pNVar8 = (Node *)(plVar9 + 4);
              uVar14 = *(uint *)((long)plVar9 + 0x14) >> 0x18 & 0xf;
              pNVar15 = pNVar8;
              if (uVar14 == 0xf) {
                uVar14 = *(uint *)(*(long *)pNVar8 + 8);
                pNVar15 = (Node *)(*(long *)pNVar8 + 0x10);
              }
              if ((0 < (int)uVar14) && (*(long *)pNVar15 == 0)) break;
              if ((~*(uint *)((long)plVar9 + 0x14) & 0xf000000) == 0) {
                pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
              }
            }
            plVar6 = (long *)(*(long *)(lVar3 + 0x208) + 8);
            plVar13 = (long *)*plVar6;
            plVar10 = plVar6;
            if (plVar13 == (long *)0x0) {
              return param_1;
            }
            do {
              if ((long *)plVar13[4] >= plVar9) {
                plVar10 = plVar13;
              }
              plVar13 = (long *)plVar13[(long *)plVar13[4] < plVar9];
            } while (plVar13 != (long *)0x0);
            if (plVar10 == plVar6) {
              return param_1;
            }
            if (plVar9 < (long *)plVar10[4]) {
              return param_1;
            }
            uVar7 = plVar10[5];
            if (uVar7 != uVar5) {
              if ((uVar5 & 3) != 2) {
                return param_1;
              }
              if ((uVar7 & 3) != 2) {
                return param_1;
              }
              lVar3 = *(long *)(uVar7 + 6) - *(long *)(uVar7 - 2);
              uVar11 = lVar3 >> 3;
              if (uVar11 != *(long *)(uVar5 + 6) - *(long *)(uVar5 - 2) >> 3) {
                return param_1;
              }
              if (lVar3 != 0) {
                uVar12 = 0;
                do {
                  if (uVar11 == uVar12) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  if (*(long *)(*(long *)(uVar7 - 2) + uVar12 * 8) !=
                      *(long *)(*(long *)(uVar5 - 2) + uVar12 * 8)) {
                    return param_1;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar11);
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar16 - 1);
        }
        pAVar4 = (AbstractState *)
                 AbstractState::SetMaps(param_1,param_3,uVar5,*(undefined8 *)(this + 0x28));
        return pAVar4;
      }
    }
  }
  return param_1;
}

