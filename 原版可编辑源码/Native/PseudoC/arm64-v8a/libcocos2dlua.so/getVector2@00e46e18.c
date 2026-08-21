
/* cocos2d::PUScriptTranslator::getVector2(std::__ndk1::__list_const_iterator<cocos2d::PUAbstractNode*,
   void*>, std::__ndk1::__list_const_iterator<cocos2d::PUAbstractNode*, void*>, cocos2d::Vec2*, int)
    */

void __thiscall
cocos2d::PUScriptTranslator::getVector2
          (undefined8 param_1,long param_2,long param_3,undefined4 *param_4,uint param_5)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char *__s;
  long lVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar6 = 0;
  if ((param_2 != param_3) && (0 < (int)param_5)) {
    uVar6 = 0;
    do {
      local_5c = 0;
      lVar4 = *(long *)(param_2 + 0x10);
      if (*(int *)(lVar4 + 0x24) != 1) {
LAB_00e46f08:
        bVar2 = false;
        goto LAB_00e46f0c;
      }
      if ((*(byte *)(lVar4 + 0x38) & 1) == 0) {
                    /* catch() { ... } // from try @ 00e46d28 with catch @ 00e46e94 */
        __s = (char *)(lVar4 + 0x39);
      }
      else {
        __s = *(char **)(lVar4 + 0x48);
      }
      iVar3 = sscanf(__s,"%f",&local_5c);
      if (iVar3 + 1U < 2) goto LAB_00e46f08;
      puVar5 = param_4;
      if ((uVar6 == 0) || (puVar5 = param_4 + 1, uVar6 == 1)) {
        *puVar5 = local_5c;
      }
      param_2 = *(long *)(param_2 + 8);
      uVar6 = uVar6 + 1;
    } while ((param_2 != param_3) && ((int)uVar6 < (int)param_5));
  }
                    /* try { // try from 00e46ef0 to 00f46f67 has its CatchHandler @ 00e46ef0
                       catch() { ... } // from try @ 00e46ef0 with catch @ 00e46ef0
                       catch() { ... } // from try @ 00e46f98 with catch @ 00e46ef0 */
  bVar2 = 1 < uVar6 || uVar6 == param_5;
LAB_00e46f0c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}

