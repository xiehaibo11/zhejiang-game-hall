
/* fairygui::GLoader3D::getProp(fairygui::ObjectPropID) */

void fairygui::GLoader3D::getProp(Value *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined2 local_30;
  undefined1 local_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(param_3) {
  case 2:
    local_2e = *(undefined1 *)(param_2 + 0x252);
    local_30 = *(undefined2 *)(param_2 + 0x250);
    uVar2 = ToolSet::colorToInt((Color3B *)&local_30);
    cocos2d::Value::Value(param_1,uVar2);
    break;
  default:
    GObject::getProp(param_1);
    break;
  case 4:
    cocos2d::Value::Value(param_1,*(bool *)(param_2 + 0x210));
    break;
  case 5:
    iVar3 = *(int *)(param_2 + 0x214);
    goto LAB_00a80a08;
  case 7:
    iVar3 = 1;
LAB_00a80a08:
    cocos2d::Value::Value(param_1,iVar3);
  }
                    /* try { // try from 00a80a28 to 00b80a77 has its CatchHandler @ 00a80a28
                       catch() { ... } // from try @ 00a80a28 with catch @ 00a80a28
                       catch() { ... } // from try @ 00a80ac4 with catch @ 00a80a28
                       catch() { ... } // from try @ 00a80b08 with catch @ 00a80a28 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

