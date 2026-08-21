
/* cocos2d::extension::ScrollView::resume(cocos2d::Ref*) */

void cocos2d::extension::ScrollView::resume(Ref *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 00e14f5c to 00f14f67 has its CatchHandler @ 00e15204 */
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x340) + 0x240))();
  puVar1 = (undefined8 *)plVar2[1];
                    /* try { // try from 00e14f74 to 00f14f7f has its CatchHandler @ 00e151ec */
  for (puVar3 = (undefined8 *)*plVar2; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (**(code **)(*(long *)*puVar3 + 0x3c8))();
  }
                    /* try { // try from 00e14f94 to 00f14f9f has its CatchHandler @ 00e151dc */
                    /* WARNING: Could not recover jumptable at 0x00e14fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x340) + 0x3c8))();
  return;
}

