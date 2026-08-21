
/* v8::internal::RegExpCharacterClass::ToNode(v8::internal::RegExpCompiler*,
   v8::internal::RegExpNode*) */

TextNode * __thiscall
v8::internal::RegExpCharacterClass::ToNode
          (RegExpCharacterClass *this,RegExpCompiler *param_1,RegExpNode *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  TextNode *pTVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ZoneList *pZVar7;
  ZoneList *pZVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  void *pvVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  Zone *pZVar17;
  long lVar18;
  ZoneList *pZVar19;
  ulong uVar20;
  uint uVar21;
  RegExpCompiler *pRVar22;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 **local_1c0;
  undefined1 auStack_1b8 [64];
  undefined1 *local_178;
  undefined1 *puStack_170;
  undefined1 **local_168;
  undefined1 auStack_160 [64];
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 **local_110;
  undefined1 auStack_108 [64];
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  long *local_b8;
  undefined1 auStack_b0 [64];
  long local_70 [2];
  
  lVar3 = tpidr_el0;
  local_70[0] = *(long *)(lVar3 + 0x28);
  if (*(ZoneList **)(this + 8) == (ZoneList *)0x0) {
    pZVar17 = *(Zone **)(param_1 + 0x448);
LAB_01534e98:
    pZVar19 = *(ZoneList **)(pZVar17 + 0x10);
    lVar16 = *(long *)(pZVar17 + 0x18);
    if ((ulong)(lVar16 - (long)pZVar19) < 0x10) {
      pZVar19 = (ZoneList *)Zone::NewExpand(pZVar17,0x10);
      pZVar7 = *(ZoneList **)(pZVar17 + 0x10);
      lVar16 = *(long *)(pZVar17 + 0x18);
    }
    else {
      pZVar7 = pZVar19 + 0x10;
      *(ZoneList **)(pZVar17 + 0x10) = pZVar7;
    }
    if ((ulong)(lVar16 - (long)pZVar7) < 0x10) {
      pZVar7 = (ZoneList *)Zone::NewExpand(pZVar17,0x10);
    }
    else {
      *(ZoneList **)(pZVar17 + 0x10) = pZVar7 + 0x10;
    }
    *(ZoneList **)pZVar19 = pZVar7;
    *(undefined8 *)(pZVar19 + 8) = 2;
    *(ZoneList **)(this + 8) = pZVar19;
    CharacterRange::AddClassEscape((char)this[0x10],pZVar19,pZVar17);
    pZVar19 = *(ZoneList **)(this + 8);
    if (((byte)this[0x18] >> 4 & 1) == 0) goto LAB_01534ef4;
LAB_01534da8:
    pRVar22 = param_1 + 0x448;
    if ((param_1[0x30] != (RegExpCompiler)0x0) || ((*(uint *)(this + 0x1c) >> 1 & 1) != 0))
    goto LAB_01534ef4;
    pZVar7 = pZVar19;
    if ((*(uint *)(this + 0x1c) & 1) != 0) {
      pZVar7 = *(ZoneList **)(pZVar17 + 0x10);
      lVar16 = *(long *)(pZVar17 + 0x18);
      if ((ulong)(lVar16 - (long)pZVar7) < 0x10) {
        pZVar7 = (ZoneList *)Zone::NewExpand(pZVar17,0x10);
        pZVar8 = *(ZoneList **)(pZVar17 + 0x10);
        lVar16 = *(long *)(pZVar17 + 0x18);
      }
      else {
        pZVar8 = pZVar7 + 0x10;
        *(ZoneList **)(pZVar17 + 0x10) = pZVar8;
      }
      if ((ulong)(lVar16 - (long)pZVar8) < 0x10) {
        pZVar8 = (ZoneList *)Zone::NewExpand(pZVar17,0x10);
      }
      else {
        *(ZoneList **)(pZVar17 + 0x10) = pZVar8 + 0x10;
      }
      *(ZoneList **)pZVar7 = pZVar8;
      *(undefined8 *)(pZVar7 + 8) = 2;
      CharacterRange::Negate(pZVar19,pZVar7,pZVar17);
    }
    if (*(int *)(pZVar7 + 0xc) == 0) {
      this = *(RegExpCharacterClass **)(pZVar17 + 0x10);
      if ((ulong)(*(long *)(pZVar17 + 0x18) - (long)this) < 0x20) {
        this = (RegExpCharacterClass *)Zone::NewExpand(pZVar17,0x20);
      }
      else {
        *(RegExpCharacterClass **)(pZVar17 + 0x10) = this + 0x20;
      }
      *(undefined2 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined ***)this = &PTR__RegExpTree_01cc7550;
      *(ZoneList **)(this + 8) = pZVar7;
      if (*(int *)(pZVar7 + 0xc) == 0) {
        uVar15 = *(uint *)(pZVar7 + 8);
        if ((int)uVar15 < 1) {
          pvVar13 = *(void **)(pZVar17 + 0x10);
          uVar1 = uVar15 << 1 | 1;
          uVar20 = -(ulong)((uVar15 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          if ((ulong)(*(long *)(pZVar17 + 0x18) - (long)pvVar13) < uVar20) {
            pvVar13 = (void *)Zone::NewExpand(pZVar17,uVar20);
          }
          else {
            *(ulong *)(pZVar17 + 0x10) = (long)pvVar13 + uVar20;
          }
          uVar15 = *(uint *)(pZVar7 + 0xc);
          if (0 < (int)uVar15) {
            MemCopy(pvVar13,*(void **)pZVar7,(ulong)uVar15 << 3);
            uVar15 = *(uint *)(pZVar7 + 0xc);
          }
          puVar9 = (undefined8 *)((long)pvVar13 + (long)(int)uVar15 * 8);
          *(void **)pZVar7 = pvVar13;
          *(uint *)(pZVar7 + 8) = uVar1;
          *(uint *)(pZVar7 + 0xc) = uVar15 + 1;
        }
        else {
          puVar9 = *(undefined8 **)pZVar7;
          *(undefined4 *)(pZVar7 + 0xc) = 1;
        }
        *puVar9 = 0x10ffff00000000;
        *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) ^ 1;
      }
      goto LAB_01534ef4;
    }
    if (*(short *)(this + 0x10) == 0x2a) {
      pZVar17 = *(Zone **)pRVar22;
      puVar9 = *(undefined8 **)(pZVar17 + 0x10);
      lVar16 = *(long *)(pZVar17 + 0x18);
      if ((ulong)(lVar16 - (long)puVar9) < 0x10) {
        puVar9 = (undefined8 *)Zone::NewExpand(pZVar17,0x10);
        puVar10 = *(undefined8 **)(pZVar17 + 0x10);
        lVar16 = *(long *)(pZVar17 + 0x18);
      }
      else {
        puVar10 = puVar9 + 2;
        *(undefined8 **)(pZVar17 + 0x10) = puVar10;
      }
      if ((ulong)(lVar16 - (long)puVar10) < 8) {
        puVar10 = (undefined8 *)Zone::NewExpand(pZVar17,8);
      }
      else {
        *(undefined8 **)(pZVar17 + 0x10) = puVar10 + 1;
      }
      *puVar9 = puVar10;
      puVar9[1] = 0x100000001;
      *puVar10 = 0xffff00000000;
      pTVar4 = (TextNode *)TextNode::CreateForCharacterRanges(pZVar17,puVar9,0,param_2,0);
      if (*(long *)(lVar3 + 0x28) == local_70[0]) {
        return pTVar4;
      }
      goto LAB_015355d0;
    }
    pTVar4 = *(TextNode **)(pZVar17 + 0x10);
    if ((ulong)(*(long *)(pZVar17 + 0x18) - (long)pTVar4) < 0x48) {
      pTVar4 = (TextNode *)Zone::NewExpand(pZVar17,0x48);
    }
    else {
      *(TextNode **)(pZVar17 + 0x10) = pTVar4 + 0x48;
    }
    *(undefined8 *)(pTVar4 + 0x10) = 0;
    *(undefined8 *)(pTVar4 + 0x18) = 0;
    *(undefined8 *)(pTVar4 + 0x28) = 0;
    *(Zone **)(pTVar4 + 0x30) = pZVar17;
    *(undefined8 *)(pTVar4 + 0x20) = 0;
    *(undefined ***)pTVar4 = &PTR__RegExpNode_01cc8800;
    *(undefined8 *)(pTVar4 + 8) = 0;
    plVar11 = *(long **)(pZVar17 + 0x10);
    lVar16 = *(long *)(pZVar17 + 0x18);
    if ((ulong)(lVar16 - (long)plVar11) < 0x10) {
      plVar11 = (long *)Zone::NewExpand(pZVar17,0x10);
      plVar12 = *(long **)(pZVar17 + 0x10);
      lVar16 = *(long *)(pZVar17 + 0x18);
    }
    else {
      plVar12 = plVar11 + 2;
      *(long **)(pZVar17 + 0x10) = plVar12;
    }
    if ((ulong)(lVar16 - (long)plVar12) < 0x20) {
      plVar12 = (long *)Zone::NewExpand(pZVar17,0x20);
    }
    else {
      *(long **)(pZVar17 + 0x10) = plVar12 + 4;
    }
    *plVar11 = (long)plVar12;
    local_b8 = local_70;
    plVar11[1] = 2;
    *(long **)(pTVar4 + 0x38) = plVar11;
    *(undefined2 *)(pTVar4 + 0x40) = 0;
    local_1d0 = auStack_1b8;
    puStack_1c8 = auStack_1b8;
    local_1c0 = &local_178;
    local_178 = auStack_160;
    puStack_170 = auStack_160;
    local_168 = &local_120;
    local_120 = auStack_108;
    puStack_118 = auStack_108;
    local_110 = &local_c8;
    local_c8 = auStack_b0;
    puStack_c0 = auStack_b0;
    if (0 < *(int *)(pZVar7 + 0xc)) {
      lVar16 = 0;
      do {
        UnicodeRangeSplitter::AddRange
                  ((UnicodeRangeSplitter *)&local_1d0,*(undefined8 *)(*(long *)pZVar7 + lVar16 * 8))
        ;
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(pZVar7 + 0xc));
    }
    lVar16 = FUN_01539310(&local_1d0,*(undefined8 *)pRVar22);
    if (lVar16 != 0) {
      uVar5 = TextNode::CreateForCharacterRanges
                        (*(undefined8 *)(param_1 + 0x448),lVar16,param_1[0x34],param_2,0);
      ChoiceNode::AddAlternative(pTVar4,uVar5,0);
    }
    pZVar19 = (ZoneList *)FUN_01539310(&local_c8,*(undefined8 *)pRVar22);
    if (pZVar19 != (ZoneList *)0x0) {
      uVar5 = *(undefined8 *)pRVar22;
      CharacterRange::Canonicalize(pZVar19);
      if (0 < *(int *)(pZVar19 + 0xc)) {
        lVar18 = 0;
        lVar16 = 0;
        do {
          uVar2 = *(uint *)(*(long *)pZVar19 + lVar18);
          uVar15 = ((uint *)(*(long *)pZVar19 + lVar18))[1];
          uVar1 = uVar2 & 0x3ff | 0xffffdc00;
          uVar2 = uVar2 + 0xf0000 >> 10 & 0x3ff | 0xffffd800;
          uVar20 = (ulong)uVar2;
          uVar21 = uVar15 + 0xf0000 >> 10 & 0x3ff | 0xffffd800;
          uVar15 = uVar15 & 0x3ff;
          if (uVar2 == uVar21) {
            uVar14 = uVar20 & 0xffff | (uVar20 & 0xffff) << 0x20;
            uVar20 = (ulong)uVar1 & 0xffff | (ulong)(uVar15 | 0xdc00) << 0x20;
LAB_01535128:
            uVar6 = TextNode::CreateForSurrogatePair(uVar5,uVar14,uVar20,param_1[0x34],param_2,0);
            ChoiceNode::AddAlternative(pTVar4,uVar6,0);
          }
          else {
            if (uVar1 != 0xffffdc00) {
              uVar6 = TextNode::CreateForSurrogatePair
                                (uVar5,uVar20 & 0xffff | (uVar20 & 0xffff) << 0x20,
                                 (ulong)uVar1 & 0xffff | 0xdfff00000000,param_1[0x34],param_2,0);
              ChoiceNode::AddAlternative(pTVar4,uVar6,0);
              uVar20 = (ulong)(uVar2 + 1);
            }
            if ((uVar15 | 0xffffdc00) != 0xffffdfff) {
              uVar6 = TextNode::CreateForSurrogatePair
                                (uVar5,(ulong)uVar21 & 0xffff | ((ulong)uVar21 & 0xffff) << 0x20,
                                 (ulong)(uVar15 | 0xdc00) << 0x20 | 0xdc00,param_1[0x34],param_2,0);
              ChoiceNode::AddAlternative(pTVar4,uVar6,0);
              uVar21 = uVar21 - 1;
            }
            if (((uint)uVar20 & 0xffff) <= (uVar21 & 0xffff)) {
              uVar14 = uVar20 & 0xffff | (ulong)(uVar21 & 0xffff) << 0x20;
              uVar20 = 0xdfff0000dc00;
              goto LAB_01535128;
            }
          }
          lVar16 = lVar16 + 1;
          lVar18 = lVar18 + 8;
        } while (lVar16 < *(int *)(pZVar19 + 0xc));
      }
    }
    lVar16 = FUN_01539310(&local_178,*(undefined8 *)pRVar22);
    if (lVar16 != 0) {
      pZVar17 = *(Zone **)pRVar22;
      puVar9 = *(undefined8 **)(pZVar17 + 0x10);
      lVar18 = *(long *)(pZVar17 + 0x18);
      if ((ulong)(lVar18 - (long)puVar9) < 0x10) {
        puVar9 = (undefined8 *)Zone::NewExpand(pZVar17,0x10);
        puVar10 = *(undefined8 **)(pZVar17 + 0x10);
        lVar18 = *(long *)(pZVar17 + 0x18);
      }
      else {
        puVar10 = puVar9 + 2;
        *(undefined8 **)(pZVar17 + 0x10) = puVar10;
      }
      if ((ulong)(lVar18 - (long)puVar10) < 8) {
        puVar10 = (undefined8 *)Zone::NewExpand(pZVar17,8);
      }
      else {
        *(undefined8 **)(pZVar17 + 0x10) = puVar10 + 1;
      }
      *puVar9 = puVar10;
      puVar9[1] = 0x100000001;
      *puVar10 = 0xdfff0000dc00;
      if (param_1[0x34] == (RegExpCompiler)0x0) {
        uVar5 = FUN_01539638(param_1,lVar16,puVar9,param_2,0,0);
      }
      else {
        uVar5 = FUN_015394a0(param_1,puVar9,lVar16,param_2,1,0);
      }
      ChoiceNode::AddAlternative(pTVar4,uVar5,0);
    }
    lVar16 = FUN_01539310(&local_120,*(undefined8 *)pRVar22);
    if (lVar16 != 0) {
      pZVar17 = *(Zone **)pRVar22;
      puVar9 = *(undefined8 **)(pZVar17 + 0x10);
      lVar18 = *(long *)(pZVar17 + 0x18);
      if ((ulong)(lVar18 - (long)puVar9) < 0x10) {
        puVar9 = (undefined8 *)Zone::NewExpand(pZVar17,0x10);
        puVar10 = *(undefined8 **)(pZVar17 + 0x10);
        lVar18 = *(long *)(pZVar17 + 0x18);
      }
      else {
        puVar10 = puVar9 + 2;
        *(undefined8 **)(pZVar17 + 0x10) = puVar10;
      }
      if ((ulong)(lVar18 - (long)puVar10) < 8) {
        puVar10 = (undefined8 *)Zone::NewExpand(pZVar17,8);
      }
      else {
        *(undefined8 **)(pZVar17 + 0x10) = puVar10 + 1;
      }
      *puVar9 = puVar10;
      puVar9[1] = 0x100000001;
      *puVar10 = 0xdbff0000d800;
      if (param_1[0x34] == (RegExpCompiler)0x0) {
        uVar5 = FUN_015394a0(param_1,puVar9,lVar16,param_2,0,0);
      }
      else {
        uVar5 = FUN_01539638(param_1,lVar16,puVar9,param_2,1,0);
      }
      ChoiceNode::AddAlternative(pTVar4,uVar5,0);
    }
    if (local_c8 != auStack_b0) {
      free(local_c8);
    }
    if (local_120 != auStack_108) {
      free(local_120);
    }
    if (local_178 != auStack_160) {
      free(local_178);
    }
    if (local_1d0 != auStack_1b8) {
      free(local_1d0);
    }
  }
  else {
    CharacterRange::Canonicalize(*(ZoneList **)(this + 8));
    pZVar19 = *(ZoneList **)(this + 8);
    pZVar17 = *(Zone **)(param_1 + 0x448);
    if (pZVar19 == (ZoneList *)0x0) goto LAB_01534e98;
    if (((byte)this[0x18] >> 4 & 1) != 0) goto LAB_01534da8;
LAB_01534ef4:
    pTVar4 = *(TextNode **)(pZVar17 + 0x10);
    if ((ulong)(*(long *)(pZVar17 + 0x18) - (long)pTVar4) < 0x50) {
      pTVar4 = (TextNode *)Zone::NewExpand(pZVar17,0x50);
    }
    else {
      *(TextNode **)(pZVar17 + 0x10) = pTVar4 + 0x50;
    }
    TextNode::TextNode(pTVar4,this,(bool)param_1[0x34],param_2);
  }
  if (*(long *)(lVar3 + 0x28) == local_70[0]) {
    return pTVar4;
  }
LAB_015355d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

