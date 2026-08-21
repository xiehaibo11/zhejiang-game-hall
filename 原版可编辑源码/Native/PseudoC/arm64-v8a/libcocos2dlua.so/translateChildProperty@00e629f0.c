
/* cocos2d::PUDoEnableComponentEventHandlerTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUDoEnableComponentEventHandlerTranslator::translateChildProperty
          (PUDoEnableComponentEventHandlerTranslator *this,PUScriptCompiler *param_1,
          PUAbstractNode *param_2)

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
  bool local_8c [4];
  ulong local_88;
  ulong local_80;
  char *local_78;
  ulong local_70;
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  PVar4 = param_2[0x38];
  uVar12 = (ulong)((byte)PVar4 >> 1);
  sVar2 = uVar12;
  if (((byte)PVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x40);
  }
  sVar16 = (ulong)(token[0x2058] >> 1);
  if ((token[0x2058] & 1) != 0) {
    sVar16 = token._8288_8_;
  }
  if (sVar2 == sVar16) {
    pPVar14 = *(PUAbstractNode **)(param_2 + 0x48);
    lVar17 = *(long *)(*(long *)(param_2 + 0x28) + 0x30);
    if (((byte)PVar4 & 1) == 0) {
      pPVar14 = param_2 + 0x39;
    }
    __s2 = (PUAbstractNode *)(token + 0x2059);
    if ((token[0x2058] & 1) != 0) {
      __s2 = (PUAbstractNode *)token._8296_8_;
    }
    if (((byte)PVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pPVar14 = param_2 + 0x39;
        do {
          if (*pPVar14 != *__s2) goto LAB_00e62e1c;
          uVar12 = uVar12 - 1;
          pPVar14 = pPVar14 + 1;
          __s2 = __s2 + 1;
        } while (uVar12 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar8 = memcmp(pPVar14,__s2,sVar2), iVar8 != 0)) goto LAB_00e62e1c;
    uVar12 = PUScriptTranslator::passValidatePropertyNumberOfValues
                       ((PUScriptTranslator *)this,param_1,(PUPropertyAbstractNode *)param_2,
                        (basic_string *)(token + 0x2058),3);
    if ((uVar12 & 1) != 0) {
      local_68 = 0;
      local_60 = (char *)0x0;
      local_78 = (char *)0x0;
      local_70 = 0;
      local_88 = 0;
      local_80 = 0;
      local_8c[0] = true;
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
        sVar5 = (ulong)(token[0x2070] >> 1);
        if ((token[0x2070] & 1) != 0) {
          sVar5 = token._8312_8_;
        }
        if (sVar2 == sVar5) {
          pcVar13 = (char *)((ulong)&local_70 | 1);
          pcVar3 = pcVar13;
          if ((local_70 & 1) != 0) {
            pcVar3 = local_60;
          }
          pcVar1 = token + 0x2071;
          if ((token[0x2070] & 1) != 0) {
            pcVar1 = (char *)token._8320_8_;
          }
          sVar5 = sVar16;
          sVar7 = sVar2;
          if ((local_70 & 1) == 0) {
            while (sVar7 != 0) {
              if (*pcVar13 != *pcVar1) goto LAB_00e62bb4;
              pcVar13 = pcVar13 + 1;
              pcVar1 = pcVar1 + 1;
              sVar5 = sVar5 - 1;
              sVar7 = sVar5;
            }
          }
          else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
          goto LAB_00e62bb4;
          uVar11 = 3;
LAB_00e62d70:
          *(undefined4 *)(lVar17 + 0x88) = uVar11;
        }
        else {
LAB_00e62bb4:
          sVar5 = (ulong)(token[0x2088] >> 1);
          if ((token[0x2088] & 1) != 0) {
            sVar5 = token._8336_8_;
          }
          if (sVar2 == sVar5) {
            pcVar13 = (char *)((ulong)&local_70 | 1);
            pcVar3 = pcVar13;
            if ((uVar12 & 1) != 0) {
              pcVar3 = local_60;
            }
            pcVar1 = token + 0x2089;
            if ((token[0x2088] & 1) != 0) {
              pcVar1 = (char *)token._8344_8_;
            }
            sVar5 = sVar16;
            sVar7 = sVar2;
            if ((uVar12 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e62c48;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e62c48;
            uVar11 = 4;
            goto LAB_00e62d70;
          }
LAB_00e62c48:
          sVar5 = (ulong)(token[0x20b8] >> 1);
          if ((token[0x20b8] & 1) != 0) {
            sVar5 = token._8384_8_;
          }
          if (sVar2 == sVar5) {
            pcVar13 = (char *)((ulong)&local_70 | 1);
            pcVar3 = pcVar13;
            if ((uVar12 & 1) != 0) {
              pcVar3 = local_60;
            }
            pcVar1 = token + 0x20b9;
            if ((token[0x20b8] & 1) != 0) {
              pcVar1 = (char *)token._8392_8_;
            }
            sVar5 = sVar16;
            sVar7 = sVar2;
            if ((uVar12 & 1) == 0) {
              while (sVar7 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e62cdc;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar5 = sVar5 - 1;
                sVar7 = sVar5;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e62cdc;
            uVar11 = 5;
            goto LAB_00e62d70;
          }
LAB_00e62cdc:
          sVar5 = (ulong)(token[0x20a0] >> 1);
          if ((token[0x20a0] & 1) != 0) {
            sVar5 = token._8360_8_;
          }
          if (sVar2 == sVar5) {
            pcVar13 = (char *)((ulong)&local_70 | 1);
            pcVar3 = pcVar13;
            if ((uVar12 & 1) != 0) {
              pcVar3 = local_60;
            }
            pcVar1 = token + 0x20a1;
            if ((token[0x20a0] & 1) != 0) {
              pcVar1 = (char *)token._8368_8_;
            }
            if ((uVar12 & 1) == 0) {
              while (sVar2 != 0) {
                if (*pcVar13 != *pcVar1) goto LAB_00e62d74;
                pcVar13 = pcVar13 + 1;
                pcVar1 = pcVar1 + 1;
                sVar16 = sVar16 - 1;
                sVar2 = sVar16;
              }
            }
            else if ((sVar2 != 0) && (iVar8 = memcmp(pcVar3,pcVar1,sVar2), iVar8 != 0))
            goto LAB_00e62d74;
            uVar11 = 2;
            goto LAB_00e62d70;
          }
        }
LAB_00e62d74:
        lVar15 = *(long *)(lVar15 + 8);
        uVar12 = PUScriptTranslator::getString
                           (*(PUAbstractNode **)(lVar15 + 0x10),(basic_string *)&local_88);
        if ((uVar12 & 1) != 0) {
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (lVar17 + 0x70) !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_88) {
            uVar12 = local_88 >> 1 & 0x7f;
            pcVar13 = (char *)((ulong)&local_88 | 1);
            if ((local_88 & 1) != 0) {
              uVar12 = local_80;
              pcVar13 = local_78;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(lVar17 + 0x70),pcVar13,uVar12);
          }
          uVar12 = PUScriptTranslator::getBoolean
                             (*(PUAbstractNode **)(*(long *)(lVar15 + 8) + 0x10),local_8c);
          if ((uVar12 & 1) != 0) {
            *(bool *)(lVar17 + 0x8c) = local_8c[0];
            if ((local_88 & 1) != 0) {
              operator_delete(local_78);
            }
            if ((local_70 & 1) != 0) {
              operator_delete(local_60);
            }
            uVar10 = 1;
            goto LAB_00e62e20;
          }
        }
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
    }
  }
LAB_00e62e1c:
  uVar10 = 0;
LAB_00e62e20:
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

