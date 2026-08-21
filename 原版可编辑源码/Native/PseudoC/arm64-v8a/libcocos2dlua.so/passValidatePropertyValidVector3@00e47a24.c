
/* cocos2d::PUScriptTranslator::passValidatePropertyValidVector3(cocos2d::PUScriptCompiler*,
   cocos2d::PUPropertyAbstractNode*) */

void __thiscall
cocos2d::PUScriptTranslator::passValidatePropertyValidVector3
          (PUScriptTranslator *this,PUScriptCompiler *param_1,PUPropertyAbstractNode *param_2)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  char *__s;
  long lVar5;
  Vec3 *pVVar6;
  PUPropertyAbstractNode *pPVar7;
  uint uVar8;
  Vec3 local_68 [8];
  Vec3 aVStack_60 [4];
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  Vec3::Vec3(local_68);
  pPVar7 = *(PUPropertyAbstractNode **)(param_2 + 0x60);
  if (param_2 + 0x58 == pPVar7) {
LAB_00e47b20:
    bVar3 = false;
  }
  else {
    uVar8 = 0xffffffff;
    do {
      local_5c = 0;
      lVar5 = *(long *)(pPVar7 + 0x10);
      if (*(int *)(lVar5 + 0x24) != 1) goto LAB_00e47b20;
      if ((*(byte *)(lVar5 + 0x38) & 1) == 0) {
        __s = (char *)(lVar5 + 0x39);
      }
      else {
        __s = *(char **)(lVar5 + 0x48);
      }
      iVar4 = sscanf(__s,"%f",&local_5c);
      if (iVar4 + 1U < 2) goto LAB_00e47b20;
      if (uVar8 == 0xffffffff) {
        pVVar6 = local_68;
LAB_00e47af0:
        *(undefined4 *)pVVar6 = local_5c;
      }
      else {
        pVVar6 = aVStack_60;
        if ((uVar8 == 1) || (pVVar6 = (Vec3 *)((ulong)local_68 | 4), uVar8 == 0)) goto LAB_00e47af0;
      }
      uVar1 = uVar8 + 2;
      uVar8 = uVar8 + 1;
    } while ((uVar1 < 3) &&
            (pPVar7 = *(PUPropertyAbstractNode **)(pPVar7 + 8), param_2 + 0x58 != pPVar7));
    bVar3 = 1 < uVar8;
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar3);
  }
  return;
}

