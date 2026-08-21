
/* v8::internal::compiler::Node::AppendInput(v8::internal::Zone*, v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::Node::AppendInput(Node *this,Zone *param_1,Node *param_2)

{
  uint uVar1;
  Node *pNVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  Node *pNVar9;
  Node *pNVar10;
  Node *pNVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  
  uVar17 = *(uint *)(this + 0x14);
  uVar7 = (ulong)(uVar17 >> 0x18) & 0xf;
  uVar6 = (uint)uVar7;
  if (uVar6 < uVar17 >> 0x1c) {
    uVar1 = uVar6 * 0x1000000 + 0x1000000;
    pNVar9 = this + 0x20;
    *(uint *)(this + 0x14) = uVar1 | uVar17 & 0xf0ffffff;
    pNVar11 = pNVar9;
    if ((~uVar1 & 0xf000000) == 0) {
      pNVar11 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    *(Node **)(pNVar11 + uVar7 * 8) = param_2;
    if ((~*(uint *)(this + 0x14) & 0xf000000) == 0) {
      this = *(Node **)pNVar9;
    }
    pNVar9 = this + (long)(int)~uVar6 * 0x18;
    *(uint *)(pNVar9 + 0x10) = uVar6 << 1 | 1;
    *(undefined8 *)pNVar9 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(pNVar9 + 8) = 0;
    if (*(long *)(param_2 + 0x18) != 0) {
      *(Node **)(*(long *)(param_2 + 0x18) + 8) = pNVar9;
    }
    *(Node **)(param_2 + 0x18) = pNVar9;
  }
  else {
    if ((~uVar17 & 0xf000000) == 0) {
      uVar7 = (ulong)*(uint *)(*(long *)(this + 0x20) + 8);
    }
    uVar17 = (uint)uVar7;
    iVar5 = uVar17 * 2;
    if (uVar6 == 0xf) {
      puVar8 = *(undefined8 **)(this + 0x20);
      if (*(int *)((long)puVar8 + 0xc) <= (int)uVar17) {
        lVar13 = *(long *)(param_1 + 0x10);
        iVar12 = iVar5 + 3;
        uVar3 = (long)iVar12 << 5 | 0x10;
        if ((ulong)(*(long *)(param_1 + 0x18) - lVar13) < uVar3) {
          lVar13 = Zone::NewExpand(param_1,uVar3);
        }
        else {
          *(ulong *)(param_1 + 0x10) = lVar13 + uVar3;
        }
        pNVar10 = this + 0x20;
        puVar8 = (undefined8 *)(lVar13 + (long)iVar12 * 0x18);
        *(undefined4 *)(puVar8 + 1) = 0;
        *(int *)((long)puVar8 + 0xc) = iVar12;
        *puVar8 = this;
        pNVar11 = this;
        pNVar9 = pNVar10;
        if ((~*(uint *)(this + 0x14) & 0xf000000) == 0) {
          pNVar11 = *(Node **)pNVar10;
          pNVar9 = *(Node **)pNVar10 + 0x10;
        }
        if (0 < (int)uVar17) {
          iVar12 = 0;
          lVar13 = 0;
          plVar14 = puVar8 + 2;
          do {
            *(int *)((long)puVar8 + lVar13 + -8) = iVar12;
            lVar15 = *(long *)pNVar9;
            if (lVar15 == 0) {
              *plVar14 = 0;
            }
            else {
              *(undefined8 *)pNVar9 = 0;
              pNVar2 = pNVar11 + lVar13 + -0x10;
              puVar4 = (undefined8 *)(lVar15 + 0x18);
              if (*(undefined8 **)pNVar2 != (undefined8 *)0x0) {
                puVar4 = *(undefined8 **)pNVar2;
              }
              *puVar4 = *(undefined8 *)(pNVar2 + -8);
              if (*(long *)(pNVar2 + -8) != 0) {
                *(undefined8 *)(*(long *)(pNVar2 + -8) + 8) =
                     *(undefined8 *)(pNVar11 + lVar13 + -0x10);
              }
              *plVar14 = lVar15;
              lVar16 = (long)puVar8 + lVar13 + -0x18;
              *(undefined8 *)((long)puVar8 + lVar13 + -0x18) = *(undefined8 *)(lVar15 + 0x18);
              *(undefined8 *)((long)puVar8 + lVar13 + -0x10) = 0;
              if (*(long *)(lVar15 + 0x18) != 0) {
                *(long *)(*(long *)(lVar15 + 0x18) + 8) = lVar16;
              }
              *(long *)(lVar15 + 0x18) = lVar16;
            }
            pNVar9 = pNVar9 + 8;
            plVar14 = plVar14 + 1;
            lVar13 = lVar13 + -0x18;
            uVar6 = (int)uVar7 - 1;
            uVar7 = (ulong)uVar6;
            iVar12 = iVar12 + 2;
          } while (uVar6 != 0);
        }
        *(uint *)(puVar8 + 1) = uVar17;
        *(undefined8 **)pNVar10 = puVar8;
      }
    }
    else {
      lVar13 = *(long *)(param_1 + 0x10);
      iVar12 = iVar5 + 3;
      uVar3 = (long)iVar12 << 5 | 0x10;
      if ((ulong)(*(long *)(param_1 + 0x18) - lVar13) < uVar3) {
        lVar13 = Zone::NewExpand(param_1,uVar3);
      }
      else {
        *(ulong *)(param_1 + 0x10) = lVar13 + uVar3;
      }
      puVar8 = (undefined8 *)(lVar13 + (long)iVar12 * 0x18);
      *(undefined4 *)(puVar8 + 1) = 0;
      *(int *)((long)puVar8 + 0xc) = iVar12;
      *puVar8 = this;
      if ((~*(uint *)(this + 0x14) & 0xf000000) == 0) {
        pNVar11 = *(Node **)(this + 0x20);
        pNVar9 = pNVar11 + 0x10;
      }
      else {
        pNVar9 = this + 0x20;
        pNVar11 = this;
      }
      if (0 < (int)uVar17) {
        iVar12 = 0;
        lVar13 = 0;
        plVar14 = puVar8 + 2;
        do {
          *(int *)((long)puVar8 + lVar13 + -8) = iVar12;
          lVar15 = *(long *)pNVar9;
          if (lVar15 == 0) {
            *plVar14 = 0;
          }
          else {
            *(undefined8 *)pNVar9 = 0;
            pNVar10 = pNVar11 + lVar13 + -0x10;
            puVar4 = (undefined8 *)(lVar15 + 0x18);
            if (*(undefined8 **)pNVar10 != (undefined8 *)0x0) {
              puVar4 = *(undefined8 **)pNVar10;
            }
            *puVar4 = *(undefined8 *)(pNVar10 + -8);
            if (*(long *)(pNVar10 + -8) != 0) {
              *(undefined8 *)(*(long *)(pNVar10 + -8) + 8) =
                   *(undefined8 *)(pNVar11 + lVar13 + -0x10);
            }
            *plVar14 = lVar15;
            lVar16 = (long)puVar8 + lVar13 + -0x18;
            *(undefined8 *)((long)puVar8 + lVar13 + -0x18) = *(undefined8 *)(lVar15 + 0x18);
            *(undefined8 *)((long)puVar8 + lVar13 + -0x10) = 0;
            if (*(long *)(lVar15 + 0x18) != 0) {
              *(long *)(*(long *)(lVar15 + 0x18) + 8) = lVar16;
            }
            *(long *)(lVar15 + 0x18) = lVar16;
          }
          pNVar9 = pNVar9 + 8;
          plVar14 = plVar14 + 1;
          lVar13 = lVar13 + -0x18;
          uVar6 = (int)uVar7 - 1;
          uVar7 = (ulong)uVar6;
          iVar12 = iVar12 + 2;
        } while (uVar6 != 0);
      }
      *(uint *)(puVar8 + 1) = uVar17;
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 0xf000000;
      *(undefined8 **)(this + 0x20) = puVar8;
    }
    pNVar11 = this + 0x20;
    *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
    pNVar9 = pNVar11;
    if ((~*(uint *)(this + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar11 + 0x10);
    }
    *(Node **)(pNVar9 + (long)(int)uVar17 * 8) = param_2;
    if ((~*(uint *)(this + 0x14) & 0xf000000) == 0) {
      this = *(Node **)pNVar11;
    }
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","Use::InputIndexField::is_valid(input_count)");
    }
    uVar17 = ~uVar17;
    *(int *)(this + (long)(int)uVar17 * 0x18 + 0x10) = iVar5;
    pNVar9 = this + (long)(int)uVar17 * 0x18;
    *(undefined8 *)pNVar9 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(this + (long)(int)uVar17 * 0x18 + 8) = 0;
    if (*(long *)(param_2 + 0x18) != 0) {
      *(Node **)(*(long *)(param_2 + 0x18) + 8) = pNVar9;
    }
    *(Node **)(param_2 + 0x18) = pNVar9;
  }
  return;
}

