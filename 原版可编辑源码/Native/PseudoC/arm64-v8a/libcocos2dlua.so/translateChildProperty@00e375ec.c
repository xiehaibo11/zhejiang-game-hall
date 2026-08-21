
/* cocos2d::PUMeshSurfaceEmitterTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUMeshSurfaceEmitterTranslator::translateChildProperty
          (PUMeshSurfaceEmitterTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  PUAbstractNode PVar4;
  size_t sVar5;
  long lVar6;
  size_t sVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  PUAbstractNode *pPVar11;
  char *pcVar12;
  PUAbstractNode *pPVar13;
  PUMeshSurfaceEmitter *this_00;
  size_t sVar14;
  ulong uVar15;
  ulong local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 00e37618 to 00f37623 has its CatchHandler @ 00e37af0 */
  PVar4 = param_2[0x38];
  uVar15 = (ulong)((byte)PVar4 >> 1);
  this_00 = *(PUMeshSurfaceEmitter **)(*(long *)(param_2 + 0x28) + 0x30);
  sVar2 = uVar15;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar14 = (ulong)(token[0x288] >> 1);
  if ((token[0x288] & 1) != 0) {
    sVar14 = token._656_8_;
  }
  if (sVar2 == sVar14) {
    pPVar13 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar4 & 1) == 0) {
      pPVar13 = param_2 + 0x39;
    }
    pPVar11 = (PUAbstractNode *)(token + 0x289);
    if ((token[0x288] & 1) != 0) {
      pPVar11 = (PUAbstractNode *)token._664_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar13 = param_2 + 0x39;
        uVar9 = uVar15;
        do {
                    /* try { // try from 00e37698 to 00f3769f has its CatchHandler @ 00e37ae8 */
          if (*pPVar13 != *pPVar11) goto LAB_00e376c8;
                    /* try { // try from 00e376a4 to 00f376af has its CatchHandler @ 00e37ae0 */
          uVar9 = uVar9 - 1;
          pPVar13 = pPVar13 + 1;
          pPVar11 = pPVar11 + 1;
        } while (uVar9 != 0);
      }
    }
    else {
                    /* try { // try from 00e376b8 to 00f376c7 has its CatchHandler @ 00e37ac8 */
      if ((sVar2 != 0) && (iVar8 = memcmp(pPVar13,pPVar11,sVar2), iVar8 != 0)) goto LAB_00e376c8;
    }
    uVar15 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,0x1789318,4);
    if ((uVar15 & 1) != 0) {
      local_78 = 0;
      local_70 = (char *)0x0;
      local_80 = 0;
                    /* try { // try from 00e37768 to 00f37773 has its CatchHandler @ 00e37a70 */
      uVar9 = PUScriptTranslator::getString
                        (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                         (basic_string *)&local_80);
      uVar15 = local_80;
      if ((uVar9 & 1) != 0) {
        PUMeshSurfaceEmitter::setMeshName(this_00,(basic_string *)&local_80,true);
LAB_00e37860:
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        uVar10 = 1;
        goto LAB_00e37c0c;
      }
joined_r0x00e37bfc:
      if ((uVar15 & 1) != 0) {
LAB_00e37c00:
        operator_delete(local_70);
      }
    }
  }
  else {
LAB_00e376c8:
    sVar14 = (ulong)(token[0x1410] >> 1);
    if ((token[0x1410] & 1) != 0) {
      sVar14 = token._5144_8_;
    }
    if (sVar2 == sVar14) {
      pPVar13 = *(PUAbstractNode **)(param_2 + 0x48);
                    /* try { // try from 00e376f4 to 00f376ff has its CatchHandler @ 00e37aa0 */
      if (((byte)PVar4 & 1) == 0) {
        pPVar13 = param_2 + 0x39;
      }
      pPVar11 = (PUAbstractNode *)(token + 0x1411);
      if ((token[0x1410] & 1) != 0) {
        pPVar11 = (PUAbstractNode *)token._5152_8_;
      }
      if (((byte)PVar4 & 1) == 0) {
        if (sVar2 != 0) {
          pPVar13 = param_2 + 0x39;
          uVar9 = uVar15;
          do {
            if (*pPVar13 != *pPVar11) goto LAB_00e3779c;
            uVar9 = uVar9 - 1;
            pPVar13 = pPVar13 + 1;
            pPVar11 = pPVar11 + 1;
          } while (uVar9 != 0);
        }
      }
      else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar13,pPVar11,sVar2), iVar8 != 0))
      goto LAB_00e3779c;
      uVar15 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,0x178a4a0,4);
      if ((uVar15 & 1) != 0) {
        local_78 = 0;
        local_70 = (char *)0x0;
        local_80 = 0;
                    /* try { // try from 00e3783c to 00f3785b has its CatchHandler @ 00e37b0c */
        uVar9 = PUScriptTranslator::getString
                          (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                           (basic_string *)&local_80);
        uVar15 = local_80;
        if ((uVar9 & 1) != 0) {
          PUMeshSurfaceEmitter::setMeshName(this_00,(basic_string *)&local_80,true);
          goto LAB_00e37860;
        }
        goto joined_r0x00e37bfc;
      }
    }
    else {
LAB_00e3779c:
      sVar14 = (ulong)(token[0x1428] >> 1);
      if ((token[0x1428] & 1) != 0) {
        sVar14 = token._5168_8_;
      }
                    /* try { // try from 00e377bc to 00f3780f has its CatchHandler @ 00e37b0c */
      if (sVar2 == sVar14) {
        pPVar13 = *(PUAbstractNode **)(param_2 + 0x48);
        if (((byte)PVar4 & 1) == 0) {
          pPVar13 = param_2 + 0x39;
        }
        pPVar11 = (PUAbstractNode *)(token + 0x1429);
        if ((token[0x1428] & 1) != 0) {
          pPVar11 = (PUAbstractNode *)token._5176_8_;
        }
        if (((byte)PVar4 & 1) == 0) {
          if (sVar2 != 0) {
            pPVar13 = param_2 + 0x39;
            uVar9 = uVar15;
            do {
              if (*pPVar13 != *pPVar11) goto LAB_00e37894;
              uVar9 = uVar9 - 1;
              pPVar13 = pPVar13 + 1;
              pPVar11 = pPVar11 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar13,pPVar11,sVar2), iVar8 != 0))
        goto LAB_00e37894;
        uVar15 = PUScriptTranslator::passValidateProperty
                           ((PUScriptTranslator *)this,param_1,param_2,0x178a4b8,4);
                    /* try { // try from 00e37924 to 00f3793b has its CatchHandler @ 00e37a40 */
        if ((uVar15 & 1) != 0) {
          local_78 = 0;
          local_70 = (char *)0x0;
          local_80 = 0;
                    /* try { // try from 00e3793c to 00f37a27 has its CatchHandler @ 00e3756c */
          uVar9 = PUScriptTranslator::getString
                            (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                             (basic_string *)&local_80);
          uVar15 = local_80;
          if ((uVar9 & 1) == 0) goto joined_r0x00e37bfc;
          sVar14 = local_80 >> 1 & 0x7f;
          sVar2 = sVar14;
          if ((local_80 & 1) != 0) {
            sVar2 = local_78;
          }
          sVar5 = (ulong)(token[0x1458] >> 1);
          if ((token[0x1458] & 1) != 0) {
            sVar5 = token._5216_8_;
          }
          if (sVar2 == sVar5) {
            pcVar12 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar12;
            if ((local_80 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x1459;
            if ((token[0x1458] & 1) != 0) {
              pcVar1 = (char *)token._5224_8_;
            }
            sVar5 = sVar14;
            sVar7 = sVar2;
            if ((local_80 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar12 != *pcVar1) goto LAB_00e37a4c;
                pcVar12 = pcVar12 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else {
                    /* catch() { ... } // from try @ 00e37924 with catch @ 00e37a40 */
              if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
              goto LAB_00e37a4c;
            }
                    /* catch() { ... } // from try @ 00e376b8 with catch @ 00e37ac8 */
            PUMeshSurfaceEmitter::setDistribution(this_00,4);
            goto LAB_00e37860;
          }
LAB_00e37a4c:
          sVar5 = (ulong)(token[0x1470] >> 1);
          if ((token[0x1470] & 1) != 0) {
            sVar5 = token._5240_8_;
          }
          if (sVar2 == sVar5) {
                    /* catch() { ... } // from try @ 00e37768 with catch @ 00e37a70 */
            pcVar12 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar12;
            if ((uVar15 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x1471;
            if ((token[0x1470] & 1) != 0) {
              pcVar1 = (char *)token._5248_8_;
            }
            sVar5 = sVar14;
            sVar7 = sVar2;
            if ((uVar15 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar12 != *pcVar1) goto LAB_00e37ae8;
                pcVar12 = pcVar12 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else {
                    /* catch() { ... } // from try @ 00e376a4 with catch @ 00e37ae0 */
              if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
              goto LAB_00e37ae8;
            }
            PUMeshSurfaceEmitter::setDistribution(this_00,1);
            goto LAB_00e37860;
          }
LAB_00e37ae8:
                    /* catch() { ... } // from try @ 00e37698 with catch @ 00e37ae8 */
                    /* catch() { ... } // from try @ 00e37618 with catch @ 00e37af0 */
                    /* catch() { ... } // from try @ 00e37810 with catch @ 00e37afc */
          sVar5 = (ulong)(token[0x1488] >> 1);
          if ((token[0x1488] & 1) != 0) {
            sVar5 = token._5264_8_;
          }
          if (sVar2 == sVar5) {
                    /* catch() { ... } // from try @ 00e377bc with catch @ 00e37b0c
                       catch() { ... } // from try @ 00e3783c with catch @ 00e37b0c */
            pcVar12 = (char *)((ulong)&local_80 | 1);
            pcVar3 = pcVar12;
            if ((uVar15 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x1489;
            if ((token[0x1488] & 1) != 0) {
              pcVar1 = (char *)token._5272_8_;
            }
            sVar5 = sVar14;
            sVar7 = sVar2;
            if ((uVar15 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar12 != *pcVar1) goto LAB_00e37b84;
                pcVar12 = pcVar12 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e37b84;
                    /* try { // try from 00e37c40 to 00f37c4b has its CatchHandler @ 00e3973c */
            PUMeshSurfaceEmitter::setDistribution(this_00,2);
          }
          else {
LAB_00e37b84:
            sVar5 = (ulong)(token[0x14a0] >> 1);
            if ((token[0x14a0] & 1) != 0) {
              sVar5 = token._5288_8_;
            }
            if (sVar2 != sVar5) goto joined_r0x00e37bfc;
            pcVar12 = (char *)((ulong)&local_80 | 1);
                    /* catch() { ... } // from try @ 00e37d40 with catch @ 00e37bc0
                       catch() { ... } // from try @ 00e3822c with catch @ 00e37bc0
                       catch() { ... } // from try @ 00e38910 with catch @ 00e37bc0
                       catch() { ... } // from try @ 00e38bb0 with catch @ 00e37bc0
                       catch() { ... } // from try @ 00e38f1c with catch @ 00e37bc0
                       catch() { ... } // from try @ 00e39068 with catch @ 00e37bc0
                       catch() { ... } // from try @ 00e39354 with catch @ 00e37bc0
                       catch() { ... } // from try @ 00e395bc with catch @ 00e37bc0
                       catch() { ... } // from try @ 00e395c8 with catch @ 00e37bc0 */
            pcVar3 = pcVar12;
            if ((uVar15 & 1) != 0) {
              pcVar3 = local_70;
            }
            pcVar1 = token + 0x14a1;
            if ((token[0x14a0] & 1) != 0) {
              pcVar1 = (char *)token._5296_8_;
            }
            if ((uVar15 & 1) == 0) {
              while (sVar2 != 0) {
                if (*pcVar12 != *pcVar1) goto LAB_00e37c08;
                pcVar12 = pcVar12 + 1;
                pcVar1 = pcVar1 + 1;
                sVar14 = sVar14 - 1;
                sVar2 = sVar14;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e37c00;
            PUMeshSurfaceEmitter::setDistribution(this_00,0);
          }
          goto LAB_00e37860;
        }
      }
      else {
LAB_00e37894:
        sVar14 = (ulong)(token[0x1440] >> 1);
        if ((token[0x1440] & 1) != 0) {
          sVar14 = token._5192_8_;
        }
        if (sVar2 == sVar14) {
          pPVar13 = *(PUAbstractNode **)(param_2 + 0x48);
          if (((byte)PVar4 & 1) == 0) {
            pPVar13 = param_2 + 0x39;
          }
          pPVar11 = (PUAbstractNode *)(token + 0x1441);
          if ((token[0x1440] & 1) != 0) {
            pPVar11 = (PUAbstractNode *)token._5200_8_;
          }
          if (((byte)PVar4 & 1) == 0) {
            if (sVar2 != 0) {
              pPVar13 = param_2 + 0x39;
              do {
                if (*pPVar13 != *pPVar11) goto LAB_00e37c08;
                uVar15 = uVar15 - 1;
                    /* try { // try from 00e378f8 to 00f378ff has its CatchHandler @ 00e37a2c */
                pPVar13 = pPVar13 + 1;
                pPVar11 = pPVar11 + 1;
                    /* try { // try from 00e37900 to 00f37923 has its CatchHandler @ 00e3756c */
              } while (uVar15 != 0);
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar13,pPVar11,sVar2), iVar8 != 0))
          goto LAB_00e37c08;
          uVar15 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,param_2,0x178a4d0,6);
          if ((uVar15 & 1) != 0) {
            Vec3::Vec3((Vec3 *)&local_80);
            uVar15 = PUScriptTranslator::getVector3
                               ((PUScriptTranslator *)this,*(undefined8 *)(param_2 + 0x60),
                                param_2 + 0x58,&local_80,3);
            if ((uVar15 & 1) != 0) {
                    /* try { // try from 00e37a28 to 00f37a2b has its CatchHandler @ 00e37a2c */
                    /* catch() { ... } // from try @ 00e378f8 with catch @ 00e37a2c
                       catch() { ... } // from try @ 00e37a28 with catch @ 00e37a2c
                       try { // try from 00e37a2c to 00f37bbf has its CatchHandler @ 00e3756c */
                    /* catch() { ... } // from try @ 00e37878 with catch @ 00e37a30 */
              PUMeshSurfaceEmitter::setScale(this_00,(Vec3 *)&local_80);
              uVar10 = 1;
              goto LAB_00e37c0c;
            }
          }
        }
      }
    }
  }
LAB_00e37c08:
  uVar10 = 0;
LAB_00e37c0c:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

