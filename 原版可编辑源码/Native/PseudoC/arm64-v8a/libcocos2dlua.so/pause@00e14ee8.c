
/* cocos2d::extension::ScrollView::pause(cocos2d::Ref*) */

void cocos2d::extension::ScrollView::pause(Ref *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  (**(code **)(**(long **)(param_1 + 0x340) + 0x3d0))();
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x340) + 0x240))();
  puVar1 = (undefined8 *)plVar2[1];
  for (puVar3 = (undefined8 *)*plVar2; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*(long *)*puVar3 + 0x3d0))();
  }
  return;
}

