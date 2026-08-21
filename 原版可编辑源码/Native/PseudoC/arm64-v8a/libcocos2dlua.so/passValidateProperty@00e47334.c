
/* cocos2d::PUScriptTranslator::passValidateProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUPropertyAbstractNode*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::PUScriptTranslator::ValidationType) */

ulong __thiscall
cocos2d::PUScriptTranslator::passValidateProperty
          (PUScriptTranslator *this,PUScriptCompiler *param_1,PUPropertyAbstractNode *param_2,
          undefined8 param_4,undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  char *__format;
  ulong uVar5;
  long lVar6;
  PUPropertyAbstractNode *pPVar7;
  uint uVar8;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)(param_2 + 0x68);
  if (uVar5 == 0) goto LAB_00e47544;
  switch(param_5) {
  case 0:
    if (1 < uVar5) goto LAB_00e47544;
    local_4c = 0;
    uVar5 = 0;
    lVar6 = *(long *)(*(long *)(param_2 + 0x60) + 0x10);
    if (*(int *)(lVar6 + 0x24) == 1) {
      if ((*(byte *)(lVar6 + 0x38) & 1) == 0) {
        pcVar4 = (char *)(lVar6 + 0x39);
        __format = "%f";
      }
      else {
        pcVar4 = *(char **)(lVar6 + 0x48);
        __format = "%f";
      }
LAB_00e475bc:
      local_4c = 0;
      iVar3 = sscanf(pcVar4,__format,&local_4c);
      uVar5 = (ulong)(1 < iVar3 + 1U);
    }
    break;
  case 1:
    if (1 < uVar5) goto LAB_00e47544;
    uVar5 = (ulong)(*(int *)(*(long *)(*(long *)(param_2 + 0x60) + 0x10) + 0x24) == 1);
    break;
  case 2:
    if (1 < uVar5) goto LAB_00e47544;
    local_4c = 0;
    uVar5 = 0;
    lVar6 = *(long *)(*(long *)(param_2 + 0x60) + 0x10);
    if (*(int *)(lVar6 + 0x24) == 1) {
      if ((*(byte *)(lVar6 + 0x38) & 1) == 0) {
        pcVar4 = (char *)(lVar6 + 0x39);
        __format = "%u";
      }
      else {
        pcVar4 = *(char **)(lVar6 + 0x48);
        __format = "%u";
      }
      goto LAB_00e475bc;
    }
    break;
  case 3:
    if (1 < uVar5) goto LAB_00e47544;
    local_4c = 0;
    uVar5 = 0;
    lVar6 = *(long *)(*(long *)(param_2 + 0x60) + 0x10);
    if (*(int *)(lVar6 + 0x24) == 1) {
      if ((*(byte *)(lVar6 + 0x38) & 1) == 0) {
        pcVar4 = (char *)(lVar6 + 0x39);
      }
      else {
        pcVar4 = *(char **)(lVar6 + 0x48);
      }
      __format = "%d";
      goto LAB_00e475bc;
    }
    break;
  case 4:
    uVar5 = (ulong)(uVar5 < 2);
    break;
  case 5:
    if (uVar5 < 3) {
      pPVar7 = *(PUPropertyAbstractNode **)(param_2 + 0x60);
      if (param_2 + 0x58 != pPVar7) {
        uVar8 = 1;
        do {
          local_4c = 0;
          lVar6 = *(long *)(pPVar7 + 0x10);
          if (*(int *)(lVar6 + 0x24) != 1) goto LAB_00e47544;
          if ((*(byte *)(lVar6 + 0x38) & 1) == 0) {
            pcVar4 = (char *)(lVar6 + 0x39);
          }
          else {
            pcVar4 = *(char **)(lVar6 + 0x48);
          }
          iVar3 = sscanf(pcVar4,"%f",&local_4c);
          if (iVar3 + 1U < 2) goto LAB_00e47544;
          uVar1 = uVar8 + 1;
        } while ((uVar8 < 2) &&
                (pPVar7 = *(PUPropertyAbstractNode **)(pPVar7 + 8), uVar8 = uVar1,
                param_2 + 0x58 != pPVar7));
        uVar5 = (ulong)(uVar1 != 2);
        break;
      }
    }
    goto LAB_00e47544;
  case 6:
    if (uVar5 < 4) {
      uVar5 = passValidatePropertyValidVector3(this,param_1,param_2);
LAB_00e4752c:
      if (*(long *)(lVar2 + 0x28) == local_48) {
        return (ulong)((uint)uVar5 & 1);
      }
      goto LAB_00e4758c;
    }
    goto LAB_00e47544;
  case 7:
    if (uVar5 < 5) {
      uVar5 = passValidatePropertyValidVector4(this,param_1,param_2);
      goto LAB_00e4752c;
    }
    goto LAB_00e47544;
  case 8:
    uVar5 = (ulong)(uVar5 - 3 < 2);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return uVar5;
    }
    goto LAB_00e4758c;
  case 9:
    if (uVar5 < 5) {
      uVar5 = passValidatePropertyValidQuaternion(this,param_1,param_2);
      goto LAB_00e4752c;
    }
LAB_00e47544:
    uVar5 = 0;
    break;
  default:
    uVar5 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar5;
  }
LAB_00e4758c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

