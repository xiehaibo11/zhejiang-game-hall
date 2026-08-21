
/* v8::internal::ChoiceNode::FilterOneByte(int) */

ChoiceNode * __thiscall v8::internal::ChoiceNode::FilterOneByte(ChoiceNode *this,int param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ChoiceNode *pCVar5;
  Zone *pZVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  ChoiceNode CVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ChoiceNode *pCVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  CVar10 = this[0x19];
  if ((char)CVar10 < 0) {
    return *(ChoiceNode **)(this + 8);
  }
  if (param_1 < 0) {
    return this;
  }
  if (((uint)(int)(char)CVar10 >> 6 & 1) != 0) {
    return this;
  }
  plVar12 = *(long **)(this + 0x38);
  this[0x19] = (ChoiceNode)((byte)CVar10 | 0x40);
  uVar11 = *(uint *)((long)plVar12 + 0xc);
  if ((int)uVar11 < 1) {
LAB_0153e24c:
    pCVar14 = (ChoiceNode *)0x0;
    CVar10 = (ChoiceNode)((byte)CVar10 | 0xc0);
    this[0x19] = CVar10;
  }
  else {
    plVar1 = (long *)(*plVar12 + 8);
    lVar13 = *plVar1;
    uVar9 = (ulong)uVar11;
    while( true ) {
      if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
        CVar10 = (ChoiceNode)((byte)CVar10 | 0xc0);
        this[0x19] = CVar10;
        *(ChoiceNode **)(this + 8) = this;
        pCVar14 = this;
        goto LAB_0153e25c;
      }
      uVar9 = uVar9 - 1;
      plVar1 = plVar1 + 2;
      if (uVar9 == 0) break;
      lVar13 = *plVar1;
    }
    if ((int)uVar11 < 1) goto LAB_0153e24c;
    lVar15 = (ulong)uVar11 * 0x10;
    lVar13 = 0;
    pCVar14 = (ChoiceNode *)0x0;
    uVar16 = 0;
    while( true ) {
      pCVar5 = (ChoiceNode *)
               (**(code **)(**(long **)(*plVar12 + lVar13) + 0x50))
                         (*(long **)(*plVar12 + lVar13),param_1 + -1);
      if (pCVar5 != (ChoiceNode *)0x0) {
        uVar16 = uVar16 + 1;
        *(ChoiceNode **)(**(long **)(this + 0x38) + lVar13) = pCVar5;
        pCVar14 = pCVar5;
      }
      if (lVar15 + -0x10 == lVar13) break;
      plVar12 = *(long **)(this + 0x38);
      lVar13 = lVar13 + 0x10;
    }
    CVar10 = (ChoiceNode)((byte)this[0x19] | 0x80);
    this[0x19] = CVar10;
    if (1 < (int)uVar16) {
      *(ChoiceNode **)(this + 8) = this;
      pCVar14 = this;
      if (uVar16 != uVar11) {
        pZVar6 = *(Zone **)(this + 0x30);
        plVar12 = *(long **)(pZVar6 + 0x10);
        if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)plVar12) < 0x10) {
          plVar12 = (long *)Zone::NewExpand(pZVar6,0x10);
        }
        else {
          *(long **)(pZVar6 + 0x10) = plVar12 + 2;
        }
        pZVar6 = *(Zone **)(this + 0x30);
        uVar9 = (ulong)uVar16 * 0x10;
        lVar13 = *(long *)(pZVar6 + 0x10);
        if (uVar9 < (ulong)(*(long *)(pZVar6 + 0x18) - lVar13) ||
            uVar9 - (*(long *)(pZVar6 + 0x18) - lVar13) == 0) {
          *(ulong *)(pZVar6 + 0x10) = lVar13 + uVar9;
        }
        else {
          lVar13 = Zone::NewExpand(pZVar6,uVar9);
        }
        *plVar12 = lVar13;
        *(uint *)(plVar12 + 1) = uVar16;
        *(undefined4 *)((long)plVar12 + 0xc) = 0;
        if (0 < (int)uVar11) {
          lVar13 = 0;
          do {
            lVar7 = (**(code **)(**(long **)(**(long **)(this + 0x38) + lVar13) + 0x50))
                              (*(long **)(**(long **)(this + 0x38) + lVar13),param_1 + -1);
            if (lVar7 != 0) {
              *(long *)(**(long **)(this + 0x38) + lVar13) = lVar7;
              uVar11 = *(uint *)(plVar12 + 1);
              iVar2 = *(int *)((long)plVar12 + 0xc);
              lVar7 = **(long **)(this + 0x38);
              if (iVar2 < (int)uVar11) {
                *(int *)((long)plVar12 + 0xc) = iVar2 + 1;
                puVar3 = (undefined8 *)(lVar7 + lVar13);
                uVar17 = *puVar3;
                puVar4 = (undefined8 *)(*plVar12 + (long)iVar2 * 0x10);
                puVar4[1] = puVar3[1];
                *puVar4 = uVar17;
              }
              else {
                puVar3 = (undefined8 *)(lVar7 + lVar13);
                uVar18 = puVar3[1];
                uVar17 = *puVar3;
                pZVar6 = *(Zone **)(this + 0x30);
                uVar16 = uVar11 << 1 | 1;
                pvVar8 = *(void **)(pZVar6 + 0x10);
                uVar9 = -(ulong)((uVar11 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                        (ulong)uVar16 << 4;
                if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pvVar8) < uVar9) {
                  pvVar8 = (void *)Zone::NewExpand(pZVar6,uVar9);
                }
                else {
                  *(ulong *)(pZVar6 + 0x10) = (long)pvVar8 + uVar9;
                }
                uVar11 = *(uint *)((long)plVar12 + 0xc);
                if (0 < (int)uVar11) {
                  MemCopy(pvVar8,(void *)*plVar12,(ulong)uVar11 << 4);
                  uVar11 = *(uint *)((long)plVar12 + 0xc);
                }
                *plVar12 = (long)pvVar8;
                *(uint *)(plVar12 + 1) = uVar16;
                *(uint *)((long)plVar12 + 0xc) = uVar11 + 1;
                puVar3 = (undefined8 *)((long)pvVar8 + (long)(int)uVar11 * 0x10);
                puVar3[1] = uVar18;
                *puVar3 = uVar17;
              }
            }
            lVar13 = lVar13 + 0x10;
          } while (lVar15 - lVar13 != 0);
        }
        CVar10 = this[0x19];
        *(long **)(this + 0x38) = plVar12;
      }
      goto LAB_0153e25c;
    }
  }
  *(ChoiceNode **)(this + 8) = pCVar14;
LAB_0153e25c:
  this[0x19] = (ChoiceNode)((byte)CVar10 & 0xbf);
  return pCVar14;
}

