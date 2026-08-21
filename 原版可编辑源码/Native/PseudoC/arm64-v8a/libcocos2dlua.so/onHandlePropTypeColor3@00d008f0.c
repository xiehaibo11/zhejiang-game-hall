
/* cocosbuilder::LayerGradientLoader::onHandlePropTypeColor3(cocos2d::Node*, cocos2d::Node*, char
   const*, cocos2d::Color3B, cocosbuilder::CCBReader*) */

void __thiscall
cocosbuilder::LayerGradientLoader::onHandlePropTypeColor3
          (LayerGradientLoader *this,Color3B *param_1,undefined8 param_2,char *param_3,ulong param_5
          ,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  undefined2 local_60;
  undefined1 local_5e;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_5e = (undefined1)(param_5 >> 0x10);
  local_60 = (undefined2)param_5;
  iVar2 = strcmp(param_3,"startColor");
  if (iVar2 == 0) {
    cocos2d::LayerGradient::setStartColor(param_1);
  }
  else {
    iVar2 = strcmp(param_3,"endColor");
    if (iVar2 == 0) {
      cocos2d::LayerGradient::setEndColor((LayerGradient *)param_1,(Color3B *)&local_60);
    }
    else {
      NodeLoader::onHandlePropTypeColor3(this,param_1,param_2,param_3,param_5 & 0xffffff,param_6);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

