
/* fairygui::GLoader3D::setColor(cocos2d::Color3B const&) */

void __thiscall fairygui::GLoader3D::setColor(GLoader3D *this,Color3B *param_1)

{
  GLoader3D GVar1;
  long *plVar2;
  
  GVar1 = *(GLoader3D *)(param_1 + 2);
  plVar2 = *(long **)(this + 0x260);
  *(undefined2 *)(this + 0x250) = *(undefined2 *)param_1;
  this[0x252] = GVar1;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a803f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x4c0))(plVar2,this + 0x250);
    return;
  }
  return;
}

