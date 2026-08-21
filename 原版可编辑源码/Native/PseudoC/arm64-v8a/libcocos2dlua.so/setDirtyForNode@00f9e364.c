
/* cocos2d::EventDispatcher::setDirtyForNode(cocos2d::Node*) */

void __thiscall cocos2d::EventDispatcher::setDirtyForNode(EventDispatcher *this,Node *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  EventDispatcher *pEVar3;
  __tree_node_base *p_Var4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  EventDispatcher *pEVar13;
  EventDispatcher *pEVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  
  uVar5 = *(ulong *)(this + 0x80);
  if (uVar5 != 0) {
    uVar7 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar16 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar8 = (uVar7 ^ (ulong)param_1 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar9 = uVar5 - 1 & uVar8;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    plVar10 = *(long **)(*(long *)(this + 0x78) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      do {
        uVar11 = plVar10[1];
        if (uVar11 == uVar8) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9e220 with catch @ 00f9e414
                        */
          if ((Node *)plVar10[2] == param_1) {
            pEVar13 = this + 0x128;
            pEVar3 = *(EventDispatcher **)(this + 0x128);
            if (*(EventDispatcher **)(this + 0x128) != (EventDispatcher *)0x0) goto LAB_00f9e468;
            lVar6 = *(long *)pEVar13;
                    /* try { // try from 00f9e4a8 to 0109e7c7 has its CatchHandler @ 00f9e4a8
                       catch() { ... } // from try @ 00f9e4a8 with catch @ 00f9e4a8
                       catch() { ... } // from try @ 00f9e84c with catch @ 00f9e4a8 */
            pEVar14 = pEVar13;
            goto joined_r0x00f9e4b8;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar11 = uVar11 & uVar5 - 1;
          }
          else if (uVar5 <= uVar11) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar11 / uVar5;
            }
            uVar11 = uVar11 - uVar2 * uVar5;
          }
          if (uVar11 != uVar9) break;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9e2cc with catch @ 00f9e41c
                        */
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  goto LAB_00f9e504;
  while (pEVar13 = pEVar14, pEVar3 = *(EventDispatcher **)pEVar14,
        *(EventDispatcher **)pEVar14 != (EventDispatcher *)0x0) {
LAB_00f9e468:
    pEVar14 = pEVar3;
    if (*(Node **)(pEVar14 + 0x20) <= param_1) {
      if (param_1 <= *(Node **)(pEVar14 + 0x20)) break;
      pEVar13 = pEVar14 + 8;
      pEVar3 = *(EventDispatcher **)pEVar13;
      if (*(EventDispatcher **)pEVar13 == (EventDispatcher *)0x0) break;
      goto LAB_00f9e468;
    }
  }
  lVar6 = *(long *)pEVar13;
joined_r0x00f9e4b8:
  if (lVar6 == 0) {
    p_Var4 = operator_new(0x28);
    *(Node **)(p_Var4 + 0x20) = param_1;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *(EventDispatcher **)(p_Var4 + 0x10) = pEVar14;
    *(__tree_node_base **)pEVar13 = p_Var4;
    if (**(long **)(this + 0x120) != 0) {
      *(long *)(this + 0x120) = **(long **)(this + 0x120);
      p_Var4 = *(__tree_node_base **)pEVar13;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x128),p_Var4);
    *(long *)(this + 0x130) = *(long *)(this + 0x130) + 1;
  }
LAB_00f9e504:
  plVar10 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  puVar1 = (undefined8 *)plVar10[1];
  for (puVar12 = (undefined8 *)*plVar10; puVar12 != puVar1; puVar12 = puVar12 + 1) {
    setDirtyForNode(this,(Node *)*puVar12);
  }
  return;
}

