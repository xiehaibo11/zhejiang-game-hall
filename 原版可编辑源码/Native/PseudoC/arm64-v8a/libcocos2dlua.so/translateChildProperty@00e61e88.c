
/* cocos2d::PUDoAffectorEventHandlerTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUDoAffectorEventHandlerTranslator::translateChildProperty
          (PUDoAffectorEventHandlerTranslator *this,PUScriptCompiler *param_1,
          PUAbstractNode *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  PUAbstractNode *pPVar7;
  PUAbstractNode *pPVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong local_80;
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar11 = (ulong)((byte)PVar2 >> 1);
  lVar10 = *(long *)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar11;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x2028] >> 1);
  if ((token[0x2028] & 1) != 0) {
    sVar1 = token._8240_8_;
  }
  if (__n == sVar1) {
    pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar8 = param_2 + 0x39;
    }
    pPVar7 = (PUAbstractNode *)(token + 0x2029);
    if ((token[0x2028] & 1) != 0) {
      pPVar7 = (PUAbstractNode *)token._8248_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar8 = param_2 + 0x39;
        uVar9 = uVar11;
        do {
          if (*pPVar8 != *pPVar7) goto LAB_00e61f70;
          uVar9 = uVar9 - 1;
          pPVar8 = pPVar8 + 1;
          pPVar7 = pPVar7 + 1;
        } while (uVar9 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(pPVar8,pPVar7,__n), iVar5 != 0)) goto LAB_00e61f70;
    uVar11 = PUScriptTranslator::passValidateProperty
                       ((PUScriptTranslator *)this,param_1,param_2,0x178b0b8,4);
    if ((uVar11 & 1) != 0) {
      local_78 = 0;
      local_70 = (char *)0x0;
      local_80 = 0;
      uVar11 = PUScriptTranslator::getString
                         (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                          (basic_string *)&local_80);
      if ((uVar11 & 1) != 0) {
        this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (lVar10 + 0x70);
        if (this_00 !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_80) {
          uVar11 = local_80 >> 1 & 0x7f;
          pcVar4 = (char *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            uVar11 = local_78;
            pcVar4 = local_70;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (this_00,pcVar4,uVar11);
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        uVar6 = 1;
        goto LAB_00e620d0;
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
    }
  }
  else {
LAB_00e61f70:
    sVar1 = (ulong)(token[0x2040] >> 1);
    if ((token[0x2040] & 1) != 0) {
      sVar1 = token._8264_8_;
    }
    if (__n == sVar1) {
      pPVar8 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar8 = param_2 + 0x39;
      }
      pPVar7 = (PUAbstractNode *)(token + 0x2041);
      if ((token[0x2040] & 1) != 0) {
        pPVar7 = (PUAbstractNode *)token._8272_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar8 = param_2 + 0x39;
          do {
            if (*pPVar8 != *pPVar7) goto LAB_00e620cc;
            uVar11 = uVar11 - 1;
            pPVar8 = pPVar8 + 1;
            pPVar7 = pPVar7 + 1;
          } while (uVar11 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(pPVar8,pPVar7,__n), iVar5 != 0)) goto LAB_00e620cc;
      uVar11 = PUScriptTranslator::passValidateProperty
                         ((PUScriptTranslator *)this,param_1,param_2,0x178b0d0,1);
      if (((uVar11 & 1) != 0) &&
         (uVar11 = PUScriptTranslator::getBoolean
                             (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                              (bool *)&local_80), (uVar11 & 1) != 0)) {
        uVar6 = 1;
        *(basic_string *)(lVar10 + 0x88) = local_80._0_1_;
        goto LAB_00e620d0;
      }
    }
  }
LAB_00e620cc:
  uVar6 = 0;
LAB_00e620d0:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

