
/* cocostudio::WidgetReader::beginSetBasicProperties(cocos2d::ui::Widget*) */

void __thiscall
cocostudio::WidgetReader::beginSetBasicProperties(WidgetReader *this,Widget *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined2 local_40;
  WidgetReader local_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined8 *)(**(code **)(*(long *)param_1 + 0xb0))(param_1);
  *(undefined8 *)(this + 0xf0) = *puVar3;
  cocos2d::Color3B::Color3B((Color3B *)&local_40,0xff,0xff,0xff);
  *(undefined2 *)(this + 0xe8) = local_40;
  this[0xea] = local_3e;
  (**(code **)(*(long *)param_1 + 0x4c0))(param_1,this + 0xe8);
  uVar2 = (**(code **)(*(long *)param_1 + 0x480))(param_1);
  *(uint *)(this + 0xec) = uVar2 & 0xff;
  puVar3 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x150))(param_1);
  *(undefined8 *)(this + 0xfc) = *puVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

