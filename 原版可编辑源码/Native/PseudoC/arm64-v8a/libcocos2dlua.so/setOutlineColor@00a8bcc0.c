
/* fairygui::GTextField::setOutlineColor(cocos2d::Color3B const&) */

void __thiscall fairygui::GTextField::setOutlineColor(GTextField *this,Color3B *param_1)

{
  undefined2 uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = (**(code **)(*(long *)this + 0xd0))();
  uVar3 = cocos2d::Color3B::operator!=((Color3B *)(lVar2 + 0x38),param_1);
  if ((uVar3 & 1) != 0) {
    uVar1 = *(undefined2 *)param_1;
    *(Color3B *)(lVar2 + 0x3a) = param_1[2];
    *(undefined2 *)(lVar2 + 0x38) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00a8bd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0xd8))(this);
    return;
  }
  return;
}

