
/* cocos2d::PUMaterialTextureUnitTranslator::translate(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUMaterialTextureUnitTranslator::translate
          (PUMaterialTextureUnitTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t sVar1;
  byte bVar2;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  undefined4 uVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  void *pvVar15;
  long lVar16;
  ulong uVar17;
  size_t sVar18;
  PUAbstractNode *pPVar19;
  ulong local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pPVar19 = *(PUAbstractNode **)(param_2 + 0xb8);
  if (pPVar19 != param_2 + 0xb0) {
    lVar12 = *(long *)(*(long *)(param_2 + 0x28) + 0x30);
    pcVar14 = (char *)((ulong)&local_80 | 1);
    do {
      lVar16 = *(long *)(pPVar19 + 0x10);
      if (*(int *)(lVar16 + 0x24) != 3) goto LAB_00e509a8;
      bVar2 = *(byte *)(lVar16 + 0x38);
      uVar17 = (ulong)(bVar2 >> 1);
      sVar1 = uVar17;
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(lVar16 + 0x40);
      }
      sVar18 = (ulong)(DAT_0178f028 >> 1);
      if ((DAT_0178f028 & 1) != 0) {
        sVar18 = DAT_0178f030;
      }
      if (sVar1 == sVar18) {
        pvVar15 = *(void **)(lVar16 + 0x48);
        if ((bVar2 & 1) == 0) {
          pvVar15 = (void *)(lVar16 + 0x39);
        }
        pcVar10 = &DAT_0178f029;
        if ((DAT_0178f028 & 1) != 0) {
          pcVar10 = DAT_0178f038;
        }
        if ((bVar2 & 1) == 0) {
          if (sVar1 != 0) {
            pcVar13 = (char *)(lVar16 + 0x39);
            uVar9 = uVar17;
            do {
              if (*pcVar13 != *pcVar10) goto LAB_00e50a54;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar13 + 1;
              pcVar10 = pcVar10 + 1;
            } while (uVar9 != 0);
          }
        }
        else if ((sVar1 != 0) && (iVar8 = memcmp(pvVar15,pcVar10,sVar1), iVar8 != 0))
        goto LAB_00e50a54;
        if (*(long *)(lVar16 + 0x68) == 0) goto LAB_00e509a8;
        local_78 = 0;
        local_70 = (char *)0x0;
        local_80 = 0;
        uVar7 = PUScriptTranslator::getString
                          (*(PUAbstractNode **)(*(long *)(lVar16 + 0x60) + 0x10),
                           (basic_string *)&local_80);
        uVar17 = local_80;
        if (((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar12 + 0xb0) !=
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80) && (((uVar7 ^ 1) & 1) == 0)) {
          pcVar10 = pcVar14;
          uVar17 = local_80 >> 1 & 0x7f;
          if ((local_80 & 1) != 0) {
            pcVar10 = local_70;
            uVar17 = local_78;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(lVar12 + 0xb0),pcVar10,uVar17);
          uVar17 = local_80;
        }
joined_r0x00e50d4c:
        if ((uVar17 & 1) != 0) {
LAB_00e509a0:
          operator_delete(local_70);
        }
      }
      else {
LAB_00e50a54:
        sVar18 = (ulong)(DAT_0178f040 >> 1);
        if ((DAT_0178f040 & 1) != 0) {
          sVar18 = DAT_0178f048;
        }
        if (sVar1 == sVar18) {
          pvVar15 = *(void **)(lVar16 + 0x48);
          if ((bVar2 & 1) == 0) {
            pvVar15 = (void *)(lVar16 + 0x39);
          }
          pcVar10 = &DAT_0178f041;
          if ((DAT_0178f040 & 1) != 0) {
            pcVar10 = DAT_0178f050;
          }
          if ((bVar2 & 1) == 0) {
            if (sVar1 != 0) {
              pcVar13 = (char *)(lVar16 + 0x39);
              do {
                if (*pcVar13 != *pcVar10) goto LAB_00e509a8;
                uVar17 = uVar17 - 1;
                pcVar13 = pcVar13 + 1;
                pcVar10 = pcVar10 + 1;
              } while (uVar17 != 0);
            }
          }
          else if ((sVar1 != 0) && (iVar8 = memcmp(pvVar15,pcVar10,sVar1), iVar8 != 0))
          goto LAB_00e509a8;
          uVar17 = PUScriptTranslator::passValidateProperty
                             ((PUScriptTranslator *)this,param_1,lVar16,&DAT_0178f040,4);
          if ((uVar17 & 1) != 0) {
            local_78 = 0;
            local_70 = (char *)0x0;
            local_80 = 0;
            uVar9 = PUScriptTranslator::getString
                              (*(PUAbstractNode **)(*(long *)(lVar16 + 0x60) + 0x10),
                               (basic_string *)&local_80);
            uVar17 = local_80;
            if ((uVar9 & 1) == 0) goto joined_r0x00e50d4c;
            sVar18 = local_80 >> 1 & 0x7f;
            sVar1 = sVar18;
            if ((local_80 & 1) != 0) {
              sVar1 = local_78;
            }
            sVar3 = (ulong)(DAT_0178f178 >> 1);
            if ((DAT_0178f178 & 1) != 0) {
              sVar3 = DAT_0178f180;
            }
            if (sVar1 == sVar3) {
              pcVar10 = pcVar14;
              if ((local_80 & 1) != 0) {
                pcVar10 = local_70;
              }
              pcVar13 = &DAT_0178f179;
              if ((DAT_0178f178 & 1) != 0) {
                pcVar13 = DAT_0178f188;
              }
              pcVar5 = pcVar14;
              sVar3 = sVar18;
              sVar6 = sVar1;
              if ((local_80 & 1) == 0) {
                while (sVar6 != 0) {
                  if (*pcVar5 != *pcVar13) goto LAB_00e50c1c;
                  pcVar13 = pcVar13 + 1;
                  sVar3 = sVar3 - 1;
                  pcVar5 = pcVar5 + 1;
                  sVar6 = sVar3;
                }
              }
              else if ((sVar1 != 0) && (iVar8 = memcmp(pcVar10,pcVar13,sVar1), iVar8 != 0))
              goto LAB_00e50c1c;
              uVar11 = 0x812f;
LAB_00e50d44:
              *(undefined4 *)(lVar12 + 200) = uVar11;
              goto joined_r0x00e50d4c;
            }
LAB_00e50c1c:
            sVar3 = (ulong)(DAT_0178f160 >> 1);
            if ((DAT_0178f160 & 1) != 0) {
              sVar3 = DAT_0178f168;
            }
            if (sVar1 == sVar3) {
              pcVar10 = pcVar14;
              if ((uVar17 & 1) != 0) {
                pcVar10 = local_70;
              }
              pcVar13 = &DAT_0178f161;
              if ((DAT_0178f160 & 1) != 0) {
                pcVar13 = DAT_0178f170;
              }
              pcVar5 = pcVar14;
              sVar3 = sVar18;
              sVar6 = sVar1;
              if ((uVar17 & 1) == 0) {
                while (sVar6 != 0) {
                  if (*pcVar5 != *pcVar13) goto LAB_00e50cbc;
                  pcVar13 = pcVar13 + 1;
                  sVar3 = sVar3 - 1;
                  pcVar5 = pcVar5 + 1;
                  sVar6 = sVar3;
                }
              }
              else if ((sVar1 != 0) && (iVar8 = memcmp(pcVar10,pcVar13,sVar1), iVar8 != 0))
              goto LAB_00e50cbc;
              uVar11 = 0x2901;
              goto LAB_00e50d44;
            }
LAB_00e50cbc:
            sVar3 = (ulong)(DAT_0178f190 >> 1);
            if ((DAT_0178f190 & 1) != 0) {
              sVar3 = DAT_0178f198;
            }
            if (sVar1 != sVar3) goto joined_r0x00e50d4c;
            pcVar10 = pcVar14;
            if ((uVar17 & 1) != 0) {
              pcVar10 = local_70;
            }
            pcVar13 = &DAT_0178f191;
            if ((DAT_0178f190 & 1) != 0) {
              pcVar13 = DAT_0178f1a0;
            }
            pcVar5 = pcVar14;
            if ((uVar17 & 1) == 0) {
              while (sVar1 != 0) {
                if (*pcVar5 != *pcVar13) goto LAB_00e509a8;
                pcVar13 = pcVar13 + 1;
                sVar18 = sVar18 - 1;
                pcVar5 = pcVar5 + 1;
                sVar1 = sVar18;
              }
LAB_00e50d64:
              *(undefined4 *)(lVar12 + 200) = 0x8370;
              goto joined_r0x00e50d4c;
            }
            if ((sVar1 == 0) || (iVar8 = memcmp(pcVar10,pcVar13,sVar1), iVar8 == 0))
            goto LAB_00e50d64;
            goto LAB_00e509a0;
          }
        }
      }
LAB_00e509a8:
      pPVar19 = *(PUAbstractNode **)(pPVar19 + 8);
    } while (pPVar19 != param_2 + 0xb0);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

