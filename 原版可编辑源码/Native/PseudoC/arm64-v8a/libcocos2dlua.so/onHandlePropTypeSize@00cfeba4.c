
/* cocosbuilder::ScrollViewLoader::onHandlePropTypeSize(cocos2d::Node*, cocos2d::Node*, char const*,
   cocos2d::Size, cocosbuilder::CCBReader*) */

void __thiscall
cocosbuilder::ScrollViewLoader::onHandlePropTypeSize
          (ScrollViewLoader *this,ScrollView *param_1,undefined8 param_2,char *param_3,Size *param_5
          ,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  Size aSStack_68 [8];
  Size aSStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = strcmp(param_3,"contentSize");
  if (iVar2 == 0) {
    cocos2d::Size::Size(aSStack_60,param_5);
    cocos2d::extension::ScrollView::setViewSize(param_1,aSStack_60);
  }
  else {
    cocos2d::Size::Size(aSStack_68,param_5);
    NodeLoader::onHandlePropTypeSize(this,param_1,param_2,param_3,aSStack_68,param_6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

