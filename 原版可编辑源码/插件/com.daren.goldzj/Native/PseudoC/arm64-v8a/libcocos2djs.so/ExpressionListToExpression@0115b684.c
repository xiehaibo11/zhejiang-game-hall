
/* v8::internal::Parser::ExpressionListToExpression(v8::internal::ScopedList<v8::internal::Expression*,
   void*> const&) */

undefined4 * __thiscall
v8::internal::Parser::ExpressionListToExpression(Parser *this,ScopedList *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  Zone *pZVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar11 = *(long *)(param_1 + 8);
  puVar14 = *(undefined4 **)(**(long **)param_1 + lVar11 * 8);
  iVar7 = (int)(*(long *)(param_1 + 0x10) - lVar11);
  puVar2 = puVar14;
  if (iVar7 != 1) {
    if (iVar7 == 2) {
      pZVar5 = *(Zone **)(this + 0x68);
      puVar13 = *(undefined4 **)(**(long **)param_1 + lVar11 * 8 + 8);
      puVar2 = *(undefined4 **)(pZVar5 + 0x10);
      uVar1 = *puVar13;
      if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar2) < 0x18) {
        puVar2 = (undefined4 *)Zone::NewExpand(pZVar5,0x18);
      }
      else {
        *(undefined4 **)(pZVar5 + 0x10) = puVar2 + 6;
      }
      *(undefined4 **)(puVar2 + 2) = puVar14;
      *(undefined4 **)(puVar2 + 4) = puVar13;
      *puVar2 = uVar1;
      puVar2[1] = 0xf1a;
    }
    else {
      pZVar5 = *(Zone **)(this + 0x68);
      lVar11 = (*(long *)(param_1 + 0x10) - lVar11 << 0x20) + -0x100000000;
      puVar2 = *(undefined4 **)(pZVar5 + 0x10);
      if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar2) < 0x30) {
        puVar2 = (undefined4 *)Zone::NewExpand(pZVar5,0x30);
      }
      else {
        *(undefined4 **)(pZVar5 + 0x10) = puVar2 + 0xc;
      }
      pZVar5 = *(Zone **)(this + 0x68);
      uVar1 = *puVar14;
      *(undefined4 **)(puVar2 + 2) = puVar14;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(Zone **)(puVar2 + 10) = pZVar5;
      *puVar2 = uVar1;
      puVar2[1] = 0xf1b;
      if (lVar11 == 0) {
        puVar10 = (undefined8 *)0x0;
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3 = *(undefined8 **)(pZVar5 + 0x10);
        uVar4 = lVar11 >> 0x1c;
        if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar3) < uVar4) {
          puVar3 = (undefined8 *)Zone::NewExpand(pZVar5,uVar4);
        }
        else {
          *(ulong *)(pZVar5 + 0x10) = (long)puVar3 + uVar4;
        }
        lVar15 = *(long *)(puVar2 + 4);
        puVar10 = puVar3 + (lVar11 >> 0x20) * 2;
        puVar8 = puVar3;
        for (lVar11 = *(long *)(puVar2 + 6); lVar11 != lVar15; lVar11 = lVar11 + -0x10) {
          uVar16 = *(undefined8 *)(lVar11 + -0x10);
          puVar8[-1] = *(undefined8 *)(lVar11 + -8);
          puVar8[-2] = uVar16;
          puVar8 = puVar8 + -2;
        }
        *(undefined8 **)(puVar2 + 4) = puVar8;
        *(undefined8 **)(puVar2 + 6) = puVar3;
        *(undefined8 **)(puVar2 + 8) = puVar10;
      }
      lVar11 = *(long *)(param_1 + 8);
      if (1 < *(int *)(param_1 + 0x10) - (int)lVar11) {
        lVar15 = 1;
        while( true ) {
          puVar14 = *(undefined4 **)(**(long **)param_1 + (lVar11 + lVar15) * 8);
          uVar1 = *puVar14;
          if (puVar3 < puVar10) {
            *puVar3 = puVar14;
            *(undefined4 *)(puVar3 + 1) = uVar1;
            puVar3 = (undefined8 *)(*(long *)(puVar2 + 6) + 0x10);
            *(undefined8 **)(puVar2 + 6) = puVar3;
          }
          else {
            lVar11 = (long)puVar3 - *(long *)(puVar2 + 4) >> 4;
            uVar4 = lVar11 + 1;
            if (uVar4 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar6 = (long)puVar10 - *(long *)(puVar2 + 4);
            uVar9 = lVar6 >> 3;
            if (uVar4 <= uVar9) {
              uVar4 = uVar9;
            }
            if (0x3fffffe < (ulong)(lVar6 >> 4)) {
              uVar4 = 0x7ffffff;
            }
            if (uVar4 == 0) {
              lVar6 = 0;
            }
            else {
              pZVar5 = *(Zone **)(puVar2 + 10);
              uVar9 = uVar4 * 0x10;
              lVar6 = *(long *)(pZVar5 + 0x10);
              if (uVar9 < (ulong)(*(long *)(pZVar5 + 0x18) - lVar6) ||
                  uVar9 - (*(long *)(pZVar5 + 0x18) - lVar6) == 0) {
                *(ulong *)(pZVar5 + 0x10) = lVar6 + uVar9;
              }
              else {
                lVar6 = Zone::NewExpand(pZVar5,uVar9);
              }
            }
            puVar10 = (undefined8 *)(lVar6 + lVar11 * 0x10);
            *puVar10 = puVar14;
            *(undefined4 *)(puVar10 + 1) = uVar1;
            lVar11 = *(long *)(puVar2 + 4);
            puVar3 = puVar10 + 2;
            for (lVar12 = *(long *)(puVar2 + 6); lVar12 != lVar11; lVar12 = lVar12 + -0x10) {
              uVar16 = *(undefined8 *)(lVar12 + -0x10);
              puVar10[-1] = *(undefined8 *)(lVar12 + -8);
              puVar10[-2] = uVar16;
              puVar10 = puVar10 + -2;
            }
            *(undefined8 **)(puVar2 + 4) = puVar10;
            *(undefined8 **)(puVar2 + 6) = puVar3;
            *(ulong *)(puVar2 + 8) = lVar6 + uVar4 * 0x10;
          }
          lVar11 = *(long *)(param_1 + 8);
          lVar15 = lVar15 + 1;
          if (*(int *)(param_1 + 0x10) - (int)lVar11 <= lVar15) break;
          puVar10 = *(undefined8 **)(puVar2 + 8);
        }
      }
    }
  }
  return puVar2;
}

