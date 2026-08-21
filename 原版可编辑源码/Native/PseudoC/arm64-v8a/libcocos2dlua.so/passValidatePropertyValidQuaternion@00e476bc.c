
/* cocos2d::PUScriptTranslator::passValidatePropertyValidQuaternion(cocos2d::PUScriptCompiler*,
   cocos2d::PUPropertyAbstractNode*) */

bool __thiscall
cocos2d::PUScriptTranslator::passValidatePropertyValidQuaternion
          (PUScriptTranslator *this,PUScriptCompiler *param_1,PUPropertyAbstractNode *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *__s;
  long lVar4;
  Quaternion *pQVar5;
  bool bVar6;
  PUPropertyAbstractNode *pPVar7;
  uint uVar8;
  Quaternion aQStack_80 [8];
  undefined4 local_78;
  undefined4 auStack_74 [2];
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  Quaternion::Quaternion(aQStack_80);
  pPVar7 = *(PUPropertyAbstractNode **)(param_2 + 0x60);
  if (param_2 + 0x58 == pPVar7) {
LAB_00e477d4:
    bVar6 = false;
  }
  else {
    uVar8 = 0xffffffff;
    do {
      local_6c = 0;
      lVar4 = *(long *)(pPVar7 + 0x10);
      if (*(int *)(lVar4 + 0x24) != 1) goto LAB_00e477d4;
      if ((*(byte *)(lVar4 + 0x38) & 1) == 0) {
        __s = (char *)(lVar4 + 0x39);
      }
      else {
        __s = *(char **)(lVar4 + 0x48);
      }
      iVar3 = sscanf(__s,"%f",&local_6c);
      if (iVar3 + 1U < 2) goto LAB_00e477d4;
      pQVar5 = (Quaternion *)auStack_74;
      switch(uVar8) {
      case 0:
        pQVar5 = aQStack_80;
        break;
      case 1:
        pQVar5 = (Quaternion *)((ulong)aQStack_80 | 4);
        break;
      case 2:
        pQVar5 = (Quaternion *)&local_78;
        break;
      case 0xffffffff:
        break;
      default:
        goto switchD_00e4778c_default;
      }
      *(undefined4 *)pQVar5 = local_6c;
switchD_00e4778c_default:
      uVar1 = uVar8 + 2;
      uVar8 = uVar8 + 1;
    } while ((uVar1 < 4) &&
            (pPVar7 = *(PUPropertyAbstractNode **)(pPVar7 + 8), param_2 + 0x58 != pPVar7));
    bVar6 = 2 < uVar8;
  }
  Quaternion::~Quaternion(aQStack_80);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}

