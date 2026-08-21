
/* cocosbuilder::MenuItemLoader::onHandlePropTypeBlock(cocos2d::Node*, cocos2d::Node*, char const*,
   cocosbuilder::BlockData*, cocosbuilder::CCBReader*) */

void cocosbuilder::MenuItemLoader::onHandlePropTypeBlock
               (Node *param_1,Node *param_2,char *param_3,BlockData *param_4,CCBReader *param_5)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = strcmp((char *)param_4,"block");
  if (iVar2 == 0) {
    if (param_5 != (CCBReader *)0x0) {
      uStack_80 = *(undefined8 *)(param_5 + 8);
      local_88 = *(undefined8 *)param_5;
      local_78 = *(undefined8 *)(param_5 + 0x10);
      local_90 = &PTR_FUN_016d1d18;
      local_70 = (long *)&local_90;
      cocos2d::MenuItem::setCallback((MenuItem *)param_2,(function *)&local_90);
      if (&local_90 == (undefined ***)local_70) {
        pcVar3 = *(code **)(*local_70 + 0x20);
      }
      else {
        if (local_70 == (long *)0x0) goto LAB_00d00f4c;
        pcVar3 = *(code **)(*local_70 + 0x28);
      }
      (*pcVar3)();
    }
  }
  else {
    NodeLoader::onHandlePropTypeBlock(param_1,param_2,param_3,param_4,param_5);
  }
LAB_00d00f4c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

