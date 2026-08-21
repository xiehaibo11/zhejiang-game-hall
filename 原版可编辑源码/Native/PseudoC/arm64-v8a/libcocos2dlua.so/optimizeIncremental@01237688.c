
/* btDbvt::optimizeIncremental(int) */

void __thiscall btDbvt::optimizeIncremental(btDbvt *this,int param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  btDbvt *pbVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_1 < 0) {
    param_1 = *(int *)(this + 0x14);
  }
  if ((0 < param_1) && (puVar11 = *(undefined8 **)this, puVar11 != (undefined8 *)0x0)) {
    while( true ) {
      plVar4 = puVar11 + 6;
      if (*plVar4 != 0) {
        uVar2 = 0;
        do {
          puVar3 = (undefined8 *)puVar11[4];
          if (puVar11 < puVar3) {
            puVar6 = (undefined8 *)puVar3[6];
            lVar8 = puVar3[4];
            uVar5 = (ulong)(puVar6 != puVar11);
            lVar7 = puVar3[uVar5 + 5];
            pbVar10 = this;
            if (lVar8 != 0) {
              pbVar10 = (btDbvt *)
                        (lVar8 + (ulong)(*(undefined8 **)(lVar8 + 0x30) == puVar3) * 8 + 0x28);
            }
            *(undefined8 **)pbVar10 = puVar11;
            *(undefined8 **)(lVar7 + 0x20) = puVar11;
            puVar3[4] = puVar11;
            puVar11[4] = lVar8;
            plVar9 = puVar11 + 5;
            puVar3[5] = *plVar9;
            puVar3[6] = *plVar4;
            *(undefined8 **)(*plVar9 + 0x20) = puVar3;
            *(undefined8 **)(*plVar4 + 0x20) = puVar3;
            plVar9[puVar6 == puVar11] = (long)puVar3;
            plVar9[uVar5] = lVar7;
            uVar14 = puVar3[3];
            uVar1 = puVar3[2];
            uVar15 = puVar3[1];
            uVar12 = *puVar3;
            uVar13 = puVar11[2];
            puVar3[3] = puVar11[3];
            puVar3[2] = uVar13;
            uVar13 = *puVar11;
            puVar3[1] = puVar11[1];
            *puVar3 = uVar13;
            puVar11[3] = uVar14;
            puVar11[2] = uVar1;
            puVar11[1] = uVar15;
            *puVar11 = uVar12;
            puVar11 = puVar3;
          }
          puVar11 = (undefined8 *)puVar11[(ulong)(*(uint *)(this + 0x18) >> uVar2 & 1) + 5];
          uVar2 = (ulong)((int)uVar2 + 1U & 0x1f);
          plVar4 = puVar11 + 6;
        } while (*plVar4 != 0);
      }
      lVar7 = FUN_01237c10(this,puVar11);
      if (lVar7 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)this;
      }
      FUN_01237914(this,uVar1,puVar11);
      param_1 = param_1 + -1;
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
      if (param_1 == 0) break;
      puVar11 = *(undefined8 **)this;
    }
  }
  return;
}

