
/* cocos2d::PUScriptTranslator::getVector4(std::__ndk1::__list_const_iterator<cocos2d::PUAbstractNode*,
   void*>, std::__ndk1::__list_const_iterator<cocos2d::PUAbstractNode*, void*>, cocos2d::Vec4*, int)
    */

void __thiscall
cocos2d::PUScriptTranslator::getVector4
          (undefined8 param_1,long param_2,long param_3,undefined4 *param_4,uint param_5)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char *__s;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = 0;
  if ((param_2 != param_3) && (0 < (int)param_5)) {
    uVar6 = 0;
    do {
      local_6c = 0;
      lVar4 = *(long *)(param_2 + 0x10);
      if (*(int *)(lVar4 + 0x24) != 1) {
LAB_00e471a0:
        bVar2 = false;
        goto LAB_00e471a4;
      }
      if ((*(byte *)(lVar4 + 0x38) & 1) == 0) {
        __s = (char *)(lVar4 + 0x39);
      }
      else {
        __s = *(char **)(lVar4 + 0x48);
      }
      iVar3 = sscanf(__s,"%f",&local_6c);
      if (iVar3 + 1U < 2) goto LAB_00e471a0;
      puVar5 = param_4;
      switch(uVar6) {
      case 0:
        break;
      case 1:
        puVar5 = param_4 + 1;
        break;
      case 2:
        puVar5 = param_4 + 2;
        break;
      case 3:
        puVar5 = param_4 + 3;
        break;
      default:
        goto switchD_00e47150_default;
      }
      *puVar5 = local_6c;
switchD_00e47150_default:
      param_2 = *(long *)(param_2 + 8);
      uVar6 = uVar6 + 1;
    } while ((param_2 != param_3) && ((int)uVar6 < (int)param_5));
  }
  bVar2 = 3 < uVar6 || uVar6 == param_5;
LAB_00e471a4:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}

