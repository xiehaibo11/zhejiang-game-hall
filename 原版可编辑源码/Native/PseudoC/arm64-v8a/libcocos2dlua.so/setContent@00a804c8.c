
/* fairygui::GLoader3D::setContent(cocos2d::Node*) */

void __thiscall fairygui::GLoader3D::setContent(GLoader3D *this,Node *param_1)

{
  setURL(this,(basic_string *)&cocos2d::STD_STRING_EMPTY);
  *(Node **)(this + 0x260) = param_1;
  if (param_1 != (Node *)0x0) {
    cocos2d::Ref::retain((Ref *)param_1);
                    /* WARNING: Could not recover jumptable at 0x00a80510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 600) + 0x208))(*(long **)(this + 600),param_1);
    return;
  }
  return;
}

