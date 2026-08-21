
/* fairygui::GTextField::getProp(fairygui::ObjectPropID) */

void fairygui::GTextField::getProp(Value *param_1,long *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_30;
  undefined1 local_2e;
  long local_28;
  Color3B *pCVar4;
  
                    /* try { // try from 00a8bf1c to 00b8bf4b has its CatchHandler @ 00a8be94 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 == 8) {
    lVar3 = (**(code **)(*param_2 + 0xd0))();
    cocos2d::Value::Value(param_1,*(float *)(lVar3 + 0x18));
  }
  else {
    if (param_3 == 3) {
      lVar3 = (**(code **)(*param_2 + 0xd0))();
      local_36 = *(undefined1 *)(lVar3 + 0x3a);
      local_38 = *(undefined2 *)(lVar3 + 0x38);
      pCVar4 = (Color3B *)&local_38;
    }
    else {
                    /* try { // try from 00a8bf4c to 00b8bf5f has its CatchHandler @ 00a8bfa0 */
      if (param_3 != 2) {
        GObject::getProp(param_1);
        goto LAB_00a8bfcc;
      }
      lVar3 = (**(code **)(*param_2 + 0xd0))();
      local_2e = *(undefined1 *)(lVar3 + 0x1e);
                    /* try { // try from 00a8bf60 to 00b8bfbb has its CatchHandler @ 00a8be94 */
      local_30 = *(undefined2 *)(lVar3 + 0x1c);
      pCVar4 = (Color3B *)&local_30;
    }
    uVar2 = ToolSet::colorToInt(pCVar4);
                    /* catch() { ... } // from try @ 00a8bee4 with catch @ 00a8bfa0
                       catch() { ... } // from try @ 00a8bf4c with catch @ 00a8bfa0 */
    cocos2d::Value::Value(param_1,uVar2);
  }
LAB_00a8bfcc:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

