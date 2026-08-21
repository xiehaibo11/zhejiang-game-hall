
/* cocos2d::ScriptHandlerMgr::removeObjectHandler(void*, cocos2d::ScriptHandlerMgr::HandlerType) */

void __thiscall
cocos2d::ScriptHandlerMgr::removeObjectHandler(ScriptHandlerMgr *this,ulong param_1,int param_3)

{
  ulong uVar1;
  long *plVar2;
  ScriptHandlerMgr *pSVar3;
  int *piVar4;
  int *piVar5;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ScriptHandlerMgr *pSVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int *piVar6;
  
  if ((param_1 != 0) && (*(long *)(this + 0x18) != 0)) {
    this = this + 0x10;
    pSVar3 = *(ScriptHandlerMgr **)this;
    pSVar12 = this;
    if (pSVar3 != (ScriptHandlerMgr *)0x0) {
      do {
        if (*(ulong *)(pSVar3 + 0x20) >= param_1) {
          pSVar12 = pSVar3;
        }
        pSVar3 = *(ScriptHandlerMgr **)(pSVar3 + (ulong)(*(ulong *)(pSVar3 + 0x20) < param_1) * 8);
      } while (pSVar3 != (ScriptHandlerMgr *)0x0);
      if ((pSVar12 != this) && (*(ulong *)(pSVar12 + 0x20) <= param_1)) {
        for (piVar14 = *(int **)(pSVar12 + 0x28); piVar14 != *(int **)(pSVar12 + 0x30);
            piVar14 = piVar14 + 2) {
          if (*piVar14 == param_3) {
            plVar2 = (long *)LuaEngine::getInstance();
            (**(code **)(*plVar2 + 0x50))(plVar2,piVar14[1]);
            piVar4 = *(int **)(pSVar12 + 0x30);
            piVar5 = piVar14 + 2;
            if (piVar5 == piVar4) goto LAB_008c8524;
            lVar8 = *(long *)(pSVar12 + 0x28);
            lVar10 = (long)piVar14 - lVar8 >> 3;
            uVar1 = ((ulong)((long)piVar4 + ((-2 - lVar10) * 8 - lVar8)) >> 3) + 1;
            piVar13 = piVar14;
            if (uVar1 < 8) goto LAB_008c8514;
            uVar7 = uVar1 & 0x3ffffffffffffff8;
            piVar14 = piVar14 + uVar7 * 2;
            puVar9 = (undefined8 *)(lVar8 + lVar10 * 8 + 0x28);
            uVar11 = uVar7;
            do {
              uVar15 = puVar9[-4];
              uVar16 = puVar9[-2];
              uVar17 = *puVar9;
              uVar18 = puVar9[2];
              uVar11 = uVar11 - 8;
              puVar9[-4] = puVar9[-3];
              puVar9[-5] = uVar15;
              puVar9[-2] = puVar9[-1];
              puVar9[-3] = uVar16;
              *puVar9 = puVar9[1];
              puVar9[-1] = uVar17;
              puVar9[2] = puVar9[3];
              puVar9[1] = uVar18;
              puVar9 = puVar9 + 8;
            } while (uVar11 != 0);
            piVar5 = piVar5 + uVar7 * 2;
            piVar13 = piVar14;
            if (uVar1 != uVar7) {
LAB_008c8514:
              do {
                piVar6 = piVar5 + 2;
                piVar14 = piVar13 + 2;
                *(undefined8 *)piVar13 = *(undefined8 *)piVar5;
                piVar5 = piVar6;
                piVar13 = piVar14;
              } while (piVar4 != piVar6);
            }
LAB_008c8524:
            *(int **)(pSVar12 + 0x30) = piVar14;
            return;
          }
        }
      }
    }
  }
  return;
}

