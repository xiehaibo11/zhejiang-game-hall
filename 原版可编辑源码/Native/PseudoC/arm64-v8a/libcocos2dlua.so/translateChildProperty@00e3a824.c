
/* cocos2d::PUOnCountObserverTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUOnCountObserverTranslator::translateChildProperty
          (PUOnCountObserverTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUAbstractNode *__s2;
  undefined4 uVar11;
  ulong uVar12;
  char *pcVar13;
  PUAbstractNode *pPVar14;
  long lVar15;
  size_t sVar16;
  long lVar17;
  uint local_74;
  ulong local_70;
  size_t local_68;
  char *local_60;
  long local_58;
  
                    /* try { // try from 00e3a824 to 00f3a82b has its CatchHandler @ 00e3a8d8 */
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  PVar4 = param_2[0x38];
                    /* try { // try from 00e3a864 to 00f3a873 has its CatchHandler @ 00e3a918 */
  uVar12 = (ulong)((byte)PVar4 >> 1);
                    /* try { // try from 00e3a874 to 00f3a9a7 has its CatchHandler @ 00e3a79c */
  sVar2 = uVar12;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar16 = (ulong)(token[0x1f68] >> 1);
  if ((token[0x1f68] & 1) != 0) {
    sVar16 = token._8048_8_;
  }
  if (sVar2 == sVar16) {
    pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
    lVar17 = *(long *)(*(long *)(param_2 + 0x28) + 0x30);
    if (((byte)PVar4 & 1) == 0) {
      pPVar14 = param_2 + 0x39;
    }
    __s2 = (PUAbstractNode *)(token + 0x1f69);
    if ((token[0x1f68] & 1) != 0) {
      __s2 = (PUAbstractNode *)token._8056_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar14 = param_2 + 0x39;
        do {
                    /* catch() { ... } // from try @ 00e3a824 with catch @ 00e3a8d8 */
          if (*pPVar14 != *__s2) goto LAB_00e3ab2c;
          uVar12 = uVar12 - 1;
          pPVar14 = pPVar14 + 1;
                    /* catch() { ... } // from try @ 00e3a814 with catch @ 00e3a8e8 */
          __s2 = __s2 + 1;
        } while (uVar12 != 0);
      }
    }
    else {
                    /* catch() { ... } // from try @ 00e3a804 with catch @ 00e3a8f8 */
      if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,__s2,sVar2), iVar8 != 0)) goto LAB_00e3ab2c;
    }
                    /* catch() { ... } // from try @ 00e3a7f4 with catch @ 00e3a908 */
                    /* catch() { ... } // from try @ 00e3a864 with catch @ 00e3a918 */
    uVar12 = PUScriptTranslator::passValidatePropertyNumberOfValues
                       ((PUScriptTranslator *)this,param_1,(PUPropertyAbstractNode *)param_2,
                        (basic_string *)(token + 0x1f68),2);
    if ((uVar12 & 1) != 0) {
      local_68 = 0;
      local_60 = (char *)0x0;
      local_70 = 0;
      local_74 = 0;
      lVar15 = *(long *)(param_2 + 0x60);
      uVar9 = PUScriptTranslator::getString
                        (*(PUAbstractNode **)(lVar15 + 0x10),(basic_string *)&local_70);
      uVar12 = local_70;
      if ((uVar9 & 1) != 0) {
        sVar16 = local_70 >> 1 & 0x7f;
        sVar2 = sVar16;
        if ((local_70 & 1) != 0) {
          sVar2 = local_68;
        }
        sVar5 = (ulong)(token[0x300] >> 1);
        if ((token[0x300] & 1) != 0) {
          sVar5 = token._776_8_;
        }
        if (sVar2 == sVar5) {
          pcVar13 = (char *)((ulong)&local_70 | 1);
          pcVar3 = pcVar13;
          if ((local_70 & 1) != 0) {
            pcVar3 = local_60;
          }
          pcVar1 = token + 0x301;
          if ((token[0x300] & 1) != 0) {
            pcVar1 = (char *)token._784_8_;
          }
          sVar5 = sVar16;
          sVar7 = sVar2;
          if ((local_70 & 1) == 0) {
            while (sVar7 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3aa60 with catch @ 00e3a9a8
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3aac0 with catch @ 00e3a9a8
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3aad0 with catch @ 00e3a9a8
                        */
              if (*pcVar13 != *pcVar1) goto LAB_00e3a9d4;
              pcVar13 = pcVar13 + 1;
              pcVar1 = pcVar1 + 1;
              sVar5 = sVar5 - 1;
              sVar7 = sVar5;
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
          goto LAB_00e3a9d4;
          *(undefined4 *)(lVar17 + 0xac) = 0;
        }
        else {
LAB_00e3a9d4:
          sVar5 = (ulong)(token[0x318] >> 1);
          if ((token[0x318] & 1) != 0) {
            sVar5 = token._800_8_;
          }
          if (sVar2 == sVar5) {
                    /* try { // try from 00e3a9f4 to 00f3a9f7 has its CatchHandler @ 00e3aa94 */
            pcVar13 = (char *)((ulong)&local_70 | 1);
            pcVar3 = pcVar13;
            if ((uVar12 & 1) != 0) {
              pcVar3 = local_60;
            }
            pcVar1 = token + 0x319;
            if ((token[0x318] & 1) != 0) {
              pcVar1 = (char *)token._808_8_;
            }
            sVar5 = sVar16;
            sVar7 = sVar2;
            if ((uVar12 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e3aa5c;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                    /* try { // try from 00e3aa3c to 00f3aa5f has its CatchHandler @ 00e3aa9c */
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e3aa5c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3aabc with catch @ 00e3aac8
                        */
            uVar11 = 2;
                    /* try { // try from 00e3aacc to 00f3aacf has its CatchHandler @ 00e3aad8 */
          }
          else {
LAB_00e3aa5c:
                    /* try { // try from 00e3aa60 to 00f3aabb has its CatchHandler @ 00e3a9a8 */
            sVar5 = (ulong)(token[0x330] >> 1);
            if ((token[0x330] & 1) != 0) {
              sVar5 = token._824_8_;
            }
            if (sVar2 != sVar5) goto LAB_00e3aae8;
            pcVar13 = (char *)((ulong)&local_70 | 1);
            pcVar3 = pcVar13;
            if ((uVar12 & 1) != 0) {
              pcVar3 = local_60;
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3a9f4 with catch @ 00e3aa94
                        */
            pcVar1 = token + 0x331;
            if ((token[0x330] & 1) != 0) {
              pcVar1 = (char *)token._832_8_;
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3aa3c with catch @ 00e3aa9c
                        */
            if ((uVar12 & 1) == 0) {
              while (sVar2 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e3aae8;
                pcVar13 = pcVar13 + 1;
                    /* try { // try from 00e3aabc to 00f3aabf has its CatchHandler @ 00e3aac8 */
                pcVar1 = pcVar1 + 1;
                sVar16 = sVar16 - 1;
                    /* try { // try from 00e3aac0 to 00f3aacb has its CatchHandler @ 00e3a9a8 */
                sVar2 = sVar16;
              }
            }
            else {
                    /* try { // try from 00e3aad0 to 00f3aadb has its CatchHandler @ 00e3a9a8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3aacc with catch @ 00e3aad8
                        */
              if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
              goto LAB_00e3aae8;
            }
            uVar11 = 1;
          }
          *(undefined4 *)(lVar17 + 0xac) = uVar11;
        }
LAB_00e3aae8:
        uVar12 = PUScriptTranslator::getUInt
                           (*(PUAbstractNode **)(*(long *)(lVar15 + 8) + 0x10),&local_74);
        if ((uVar12 & 1) != 0) {
          *(uint *)(lVar17 + 0xa8) = local_74;
          if ((local_70 & 1) != 0) {
            operator_delete(local_60);
          }
          uVar10 = 1;
          goto LAB_00e3ab30;
        }
      }
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
    }
  }
LAB_00e3ab2c:
                    /* try { // try from 00e3ab2c to 00f3abbf has its CatchHandler @ 00e3ab2c
                       catch() { ... } // from try @ 00e3ab2c with catch @ 00e3ab2c
                       catch() { ... } // from try @ 00e3abcc with catch @ 00e3ab2c */
  uVar10 = 0;
LAB_00e3ab30:
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

