
/* cocos2d::PUBaseColliderTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUBaseColliderTranslator::translateChildProperty
          (PUBaseColliderTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  PUAbstractNode PVar4;
  size_t sVar5;
  long lVar6;
  size_t sVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  PUAbstractNode *pPVar11;
  long lVar12;
  char *pcVar13;
  PUAbstractNode *pPVar14;
  PUBaseCollider *this_00;
  size_t sVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 local_84;
  ulong local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  PVar4 = param_2[0x38];
  uVar17 = (ulong)((byte)PVar4 >> 1);
  this_00 = *(PUBaseCollider **)(*(long *)(param_2 + 0x28) + 0x30);
  sVar2 = uVar17;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar15 = (ulong)(token[0x1608] >> 1);
  if ((token[0x1608] & 1) != 0) {
    sVar15 = token._5648_8_;
  }
  if (sVar2 == sVar15) {
    pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar4 & 1) == 0) {
      pPVar14 = param_2 + 0x39;
    }
    pPVar11 = (PUAbstractNode *)(token + 0x1609);
    if ((token[0x1608] & 1) != 0) {
      pPVar11 = (PUAbstractNode *)token._5656_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar14 = param_2 + 0x39;
        uVar10 = uVar17;
        do {
          if (*pPVar14 != *pPVar11) goto LAB_00e22774;
          uVar10 = uVar10 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar11 = pPVar11 + 1;
        } while (uVar10 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0)) goto LAB_00e22774;
    lVar12 = 0x1608;
LAB_00e22880:
    uVar17 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,token + lVar12,0);
    uVar9 = 0;
    if ((uVar17 & 1) == 0) goto LAB_00e22e48;
    local_80 = local_80 & 0xffffffff00000000;
    uVar17 = PUScriptTranslator::getFloat
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(float *)&local_80);
    if ((uVar17 & 1) == 0) {
LAB_00e22e44:
      uVar9 = 0;
      goto LAB_00e22e48;
    }
    PUBaseCollider::setFriction(this_00,(float)local_80);
  }
  else {
LAB_00e22774:
    sVar15 = (ulong)(token[0x1650] >> 1);
    if ((token[0x1650] & 1) != 0) {
      sVar15 = token._5720_8_;
    }
    if (sVar2 == sVar15) {
      pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar4 & 1) == 0) {
        pPVar14 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x1651);
      if ((token[0x1650] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._5728_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar14 = param_2 + 0x39;
          uVar10 = uVar17;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_00e22804;
            uVar10 = uVar10 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar10 != 0);
        }
      }
      else {
                    /* try { // try from 00e227f4 to 00f22837 has its CatchHandler @ 00e227f4
                       catch() { ... } // from try @ 00e227f4 with catch @ 00e227f4
                       catch() { ... } // from try @ 00e22848 with catch @ 00e227f4
                       catch() { ... } // from try @ 00e22c8c with catch @ 00e227f4 */
        if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0)) goto LAB_00e22804;
      }
      lVar12 = 0x1650;
      goto LAB_00e22880;
    }
LAB_00e22804:
    sVar15 = (ulong)(token[0x1620] >> 1);
    if ((token[0x1620] & 1) != 0) {
      sVar15 = token._5672_8_;
    }
    if (sVar2 == sVar15) {
      pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* try { // try from 00e22838 to 00f22847 has its CatchHandler @ 00e22d58 */
      if (((byte)PVar4 & 1) == 0) {
        pPVar14 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x1621);
      if ((token[0x1620] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._5680_8_;
      }
                    /* try { // try from 00e22848 to 00f22acf has its CatchHandler @ 00e227f4 */
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar14 = param_2 + 0x39;
          uVar10 = uVar17;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_00e228dc;
            uVar10 = uVar10 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar10 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e228dc;
      lVar12 = 0x1620;
LAB_00e229e8:
      uVar17 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,token + lVar12,0);
      uVar9 = 0;
      if ((uVar17 & 1) == 0) goto LAB_00e22e48;
      local_80 = local_80 & 0xffffffff00000000;
      uVar17 = PUScriptTranslator::getFloat
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(float *)&local_80)
      ;
      if ((uVar17 & 1) != 0) {
        PUBaseCollider::setBouncyness(this_00,(float)local_80);
        goto LAB_00e22a30;
      }
      goto LAB_00e22e44;
    }
LAB_00e228dc:
    sVar15 = (ulong)(token[0x1668] >> 1);
    if ((token[0x1668] & 1) != 0) {
      sVar15 = token._5744_8_;
    }
    if (sVar2 == sVar15) {
      pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar4 & 1) == 0) {
        pPVar14 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x1669);
      if ((token[0x1668] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._5752_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar14 = param_2 + 0x39;
          uVar10 = uVar17;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_00e2296c;
            uVar10 = uVar10 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar10 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e2296c;
      lVar12 = 0x1668;
      goto LAB_00e229e8;
    }
LAB_00e2296c:
    sVar15 = (ulong)(token[0x1638] >> 1);
    if ((token[0x1638] & 1) != 0) {
      sVar15 = token._5696_8_;
    }
    if (sVar2 != sVar15) {
LAB_00e22a48:
      sVar15 = (ulong)(token[0x1680] >> 1);
      if ((token[0x1680] & 1) != 0) {
        sVar15 = token._5768_8_;
      }
      if (sVar2 == sVar15) {
        pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar4 & 1) == 0) {
          pPVar14 = param_2 + 0x39;
        }
        pPVar11 = (PUAbstractNode *)(token + 0x1681);
        if ((token[0x1680] & 1) != 0) {
          pPVar11 = (PUAbstractNode *)token._5776_8_;
        }
        if (((byte)PVar4 & 1) == 0) {
          if (sVar2 != 0) {
            pPVar14 = param_2 + 0x39;
            uVar10 = uVar17;
            do {
              if (*pPVar14 != *pPVar11) goto LAB_00e22ad0;
              uVar10 = uVar10 - 1;
              pPVar14 = pPVar14 + 1;
              pPVar11 = pPVar11 + 1;
            } while (uVar10 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0))
        goto LAB_00e22ad0;
        goto LAB_00e22b44;
      }
LAB_00e22ad0:
                    /* try { // try from 00e22ad0 to 00f22af7 has its CatchHandler @ 00e22d54 */
      sVar15 = (ulong)(token[0x1698] >> 1);
      if ((token[0x1698] & 1) != 0) {
        sVar15 = token._5792_8_;
      }
      if (sVar2 != sVar15) goto LAB_00e22e44;
      pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar4 & 1) == 0) {
        pPVar14 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x1699);
      if ((token[0x1698] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._5800_8_;
      }
                    /* try { // try from 00e22b14 to 00f22b1f has its CatchHandler @ 00e22d3c */
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar14 = param_2 + 0x39;
          do {
            if (*pPVar14 != *pPVar11) goto LAB_00e22e44;
            uVar17 = uVar17 - 1;
            pPVar14 = pPVar14 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar17 != 0);
        }
      }
      else {
                    /* try { // try from 00e22c1c to 00f22c23 has its CatchHandler @ 00e22d50 */
        if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0)) goto LAB_00e22e44;
      }
      uVar17 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,0x178a728,4);
      if ((uVar17 & 1) == 0) goto LAB_00e22e44;
      local_78 = 0;
      local_70 = (char *)0x0;
      local_80 = 0;
      uVar10 = PUScriptTranslator::getString
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                          (basic_string *)&local_80);
      uVar17 = local_80;
      uVar16 = local_80 & 0xff;
                    /* try { // try from 00e22c5c to 00f22c73 has its CatchHandler @ 00e22d6c */
      if ((uVar10 & 1) == 0) goto LAB_00e22e38;
      sVar15 = local_80 >> 1 & 0x7f;
      sVar2 = sVar15;
      if ((local_80 & 1) != 0) {
        sVar2 = local_78;
      }
                    /* try { // try from 00e22c84 to 00f22c8b has its CatchHandler @ 00e22d50 */
      sVar5 = (ulong)(token[0x16b0] >> 1);
      if ((token[0x16b0] & 1) != 0) {
        sVar5 = token._5816_8_;
      }
                    /* try { // try from 00e22c8c to 00f22d87 has its CatchHandler @ 00e227f4 */
      if (sVar2 == sVar5) {
        pcVar13 = (char *)((ulong)&local_80 | 1);
        pcVar3 = pcVar13;
        if ((local_80 & 1) != 0) {
          pcVar3 = local_70;
        }
        pcVar1 = token + 0x16b1;
        if ((token[0x16b0] & 1) != 0) {
          pcVar1 = (char *)token._5824_8_;
        }
        sVar5 = sVar15;
        sVar7 = sVar2;
        if ((local_80 & 1) == 0) {
          while (sVar7 != 0) {
            if (*pcVar13 != *pcVar1) goto LAB_00e22dc0;
            pcVar13 = pcVar13 + 1;
            pcVar1 = pcVar1 + 1;
            sVar5 = sVar5 - 1;
            sVar7 = sVar5;
          }
        }
        else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
        goto LAB_00e22dc0;
        local_84 = 1;
                    /* try { // try from 00e22e84 to 00f22e93 has its CatchHandler @ 00e234e4 */
        PUBaseCollider::setCollisionType(this_00,(CollisionType *)&local_84);
        goto LAB_00e22eb4;
      }
LAB_00e22dc0:
      sVar5 = (ulong)(token[0x16c8] >> 1);
      if ((token[0x16c8] & 1) != 0) {
        sVar5 = token._5840_8_;
      }
      if (sVar2 != sVar5) goto LAB_00e22e38;
      pcVar13 = (char *)((ulong)&local_80 | 1);
      pcVar3 = pcVar13;
      if ((uVar17 & 1) != 0) {
        pcVar3 = local_70;
      }
      pcVar1 = token + 0x16c9;
      if ((token[0x16c8] & 1) != 0) {
        pcVar1 = (char *)token._5848_8_;
      }
      if ((uVar17 & 1) == 0) {
        while (sVar2 != 0) {
          if (*pcVar13 != *pcVar1) goto LAB_00e22e44;
          pcVar13 = pcVar13 + 1;
          pcVar1 = pcVar1 + 1;
          sVar15 = sVar15 - 1;
          sVar2 = sVar15;
        }
LAB_00e22ea0:
        local_84 = 2;
        PUBaseCollider::setCollisionType(this_00,(CollisionType *)&local_84);
        goto LAB_00e22eb4;
      }
      if ((sVar2 == 0) || (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 == 0)) goto LAB_00e22ea0;
LAB_00e22e3c:
      operator_delete(local_70);
      goto LAB_00e22e44;
    }
    pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar4 & 1) == 0) {
      pPVar14 = param_2 + 0x39;
    }
    pPVar11 = (PUAbstractNode *)(token + 0x1639);
    if ((token[0x1638] & 1) != 0) {
      pPVar11 = (PUAbstractNode *)token._5704_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar14 = param_2 + 0x39;
        uVar10 = uVar17;
        do {
          if (*pPVar14 != *pPVar11) goto LAB_00e22a48;
          uVar10 = uVar10 - 1;
          pPVar14 = pPVar14 + 1;
          pPVar11 = pPVar11 + 1;
        } while (uVar10 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,pPVar11,sVar2), iVar8 != 0)) goto LAB_00e22a48;
LAB_00e22b44:
    uVar17 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,0x178a6c8,4);
    if ((uVar17 & 1) == 0) goto LAB_00e22e44;
    local_78 = 0;
    local_70 = (char *)0x0;
    local_80 = 0;
                    /* try { // try from 00e22b74 to 00f22b7b has its CatchHandler @ 00e22d54 */
    uVar10 = PUScriptTranslator::getString
                       (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                        (basic_string *)&local_80);
    uVar17 = local_80;
    uVar16 = local_80 & 0xff;
    if ((uVar10 & 1) == 0) {
LAB_00e22e38:
      if ((uVar16 & 1) != 0) goto LAB_00e22e3c;
      goto LAB_00e22e44;
    }
    sVar15 = local_80 >> 1 & 0x7f;
    sVar2 = sVar15;
    if ((local_80 & 1) != 0) {
      sVar2 = local_78;
    }
    sVar5 = (ulong)(token[0x16f8] >> 1);
    if ((token[0x16f8] & 1) != 0) {
      sVar5 = token._5888_8_;
    }
    if (sVar2 == sVar5) {
      pcVar13 = (char *)((ulong)&local_80 | 1);
      pcVar3 = pcVar13;
      if ((local_80 & 1) != 0) {
        pcVar3 = local_70;
      }
      pcVar1 = token + 0x16f9;
      if ((token[0x16f8] & 1) != 0) {
        pcVar1 = (char *)token._5896_8_;
      }
      sVar5 = sVar15;
      sVar7 = sVar2;
      if ((local_80 & 1) == 0) {
        while (sVar7 != 0) {
          if (*pcVar13 != *pcVar1) goto LAB_00e22cfc;
          pcVar13 = pcVar13 + 1;
          pcVar1 = pcVar1 + 1;
          sVar5 = sVar5 - 1;
          sVar7 = sVar5;
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0)) goto LAB_00e22cfc;
      local_84 = 0;
      PUBaseCollider::setIntersectionType(this_00,(IntersectionType *)&local_84);
    }
    else {
LAB_00e22cfc:
      sVar5 = (ulong)(token[0x1710] >> 1);
      if ((token[0x1710] & 1) != 0) {
        sVar5 = token._5912_8_;
      }
      if (sVar2 != sVar5) goto LAB_00e22e38;
      pcVar13 = (char *)((ulong)&local_80 | 1);
      pcVar3 = pcVar13;
                    /* catch() { ... } // from try @ 00e22b14 with catch @ 00e22d3c */
      if ((uVar17 & 1) != 0) {
        pcVar3 = local_70;
      }
      pcVar1 = token + 0x1711;
      if ((token[0x1710] & 1) != 0) {
        pcVar1 = (char *)token._5920_8_;
      }
      if ((uVar17 & 1) == 0) {
        while (sVar2 != 0) {
                    /* catch() { ... } // from try @ 00e22c1c with catch @ 00e22d50
                       catch() { ... } // from try @ 00e22c84 with catch @ 00e22d50 */
                    /* catch() { ... } // from try @ 00e22ad0 with catch @ 00e22d54
                       catch() { ... } // from try @ 00e22b74 with catch @ 00e22d54 */
                    /* catch() { ... } // from try @ 00e22838 with catch @ 00e22d58 */
          if (*pcVar13 != *pcVar1) goto LAB_00e22e44;
          pcVar13 = pcVar13 + 1;
          pcVar1 = pcVar1 + 1;
          sVar15 = sVar15 - 1;
                    /* catch() { ... } // from try @ 00e22c5c with catch @ 00e22d6c */
          sVar2 = sVar15;
        }
      }
      else {
                    /* try { // try from 00e22d88 to 00f22e6b has its CatchHandler @ 00e22d88
                       catch() { ... } // from try @ 00e22d88 with catch @ 00e22d88
                       catch() { ... } // from try @ 00e22fdc with catch @ 00e22d88
                       catch() { ... } // from try @ 00e23444 with catch @ 00e22d88 */
        if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0)) goto LAB_00e22e3c;
      }
      local_84 = 1;
      PUBaseCollider::setIntersectionType(this_00,(IntersectionType *)&local_84);
    }
LAB_00e22eb4:
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
LAB_00e22a30:
  uVar9 = 1;
LAB_00e22e48:
  if (*(long *)(lVar6 + 0x28) == local_68) {
                    /* try { // try from 00e22e6c to 00f22e7b has its CatchHandler @ 00e234fc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

