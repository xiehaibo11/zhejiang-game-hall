
/* fairygui::GTextField::setProp(fairygui::ObjectPropID, cocos2d::Value const&) */

void __thiscall fairygui::GTextField::setProp(GTextField *this,int param_2,Value *param_3)

{
  Color3B *this_00;
  long lVar1;
  undefined2 uVar2;
  Color3B CVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined2 local_48;
  Color3B local_46;
  undefined2 local_40;
  Color3B local_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == 8) {
    iVar5 = cocos2d::Value::asInt(param_3);
    lVar7 = (**(code **)(*(long *)this + 0xd0))(this);
    if (*(float *)(lVar7 + 0x18) == (float)iVar5) goto LAB_00a8c110;
    *(float *)(lVar7 + 0x18) = (float)iVar5;
  }
  else {
    if (param_2 == 3) {
      uVar4 = cocos2d::Value::asUnsignedInt(param_3);
      uVar6 = ToolSet::intToColor(uVar4);
      local_46 = SUB81((ulong)uVar6 >> 0x10,0);
      local_48 = (undefined2)uVar6;
      lVar7 = (**(code **)(*(long *)this + 0xd0))(this);
      this_00 = (Color3B *)(lVar7 + 0x38);
      uVar8 = cocos2d::Color3B::operator!=(this_00,(Color3B *)&local_48);
      uVar2 = local_48;
      CVar3 = local_46;
    }
    else {
      if (param_2 != 2) {
        GObject::setProp(this);
        goto LAB_00a8c110;
      }
      uVar4 = cocos2d::Value::asUnsignedInt(param_3);
      uVar6 = ToolSet::intToColor(uVar4);
      local_3e = SUB81((ulong)uVar6 >> 0x10,0);
      local_40 = (undefined2)uVar6;
      lVar7 = (**(code **)(*(long *)this + 0xd0))(this);
      this_00 = (Color3B *)(lVar7 + 0x1c);
      uVar8 = cocos2d::Color3B::operator!=(this_00,(Color3B *)&local_40);
      uVar2 = local_40;
      CVar3 = local_3e;
    }
    if ((uVar8 & 1) == 0) goto LAB_00a8c110;
    this_00[2] = CVar3;
    *(undefined2 *)this_00 = uVar2;
  }
  (**(code **)(*(long *)this + 0xd8))(this);
LAB_00a8c110:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

