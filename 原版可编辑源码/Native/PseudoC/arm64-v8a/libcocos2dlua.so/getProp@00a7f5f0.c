
/* fairygui::GLoader::getProp(fairygui::ObjectPropID) */

void fairygui::GLoader::getProp(Value *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 local_30;
  undefined1 local_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(param_3) {
  case 2:
                    /* try { // try from 00a7f638 to 00b7f68b has its CatchHandler @ 00a7f638
                       catch() { ... } // from try @ 00a7f638 with catch @ 00a7f638
                       catch() { ... } // from try @ 00a7f730 with catch @ 00a7f638
                       catch() { ... } // from try @ 00a7f790 with catch @ 00a7f638 */
    puVar3 = (undefined2 *)(**(code **)(**(long **)(param_2 + 0x220) + 0x4b0))();
    local_2e = *(undefined1 *)(puVar3 + 1);
    local_30 = *puVar3;
    uVar2 = ToolSet::colorToInt((Color3B *)&local_30);
    cocos2d::Value::Value(param_1,uVar2);
    break;
  default:
    GObject::getProp(param_1);
    break;
  case 4:
    cocos2d::Value::Value(param_1,*(bool *)(param_2 + 0x214));
    break;
  case 5:
    iVar4 = *(int *)(param_2 + 0x218);
    goto LAB_00a7f6ac;
  case 7:
    if (*(long *)(param_2 + 0x230) != 0) {
                    /* try { // try from 00a7f68c to 00b7f6c7 has its CatchHandler @ 00a7f7d0 */
      cocos2d::Value::Value(param_1,*(float *)(*(long *)(param_2 + 0x230) + 0x68));
      break;
    }
    iVar4 = 1;
LAB_00a7f6ac:
    cocos2d::Value::Value(param_1,iVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a7f6d4 to 00b7f72f has its CatchHandler @ 00a7f7d4 */
  __stack_chk_fail();
}

