
/* cocos2d::renderer::Model::setEffect(cocos2d::renderer::EffectVariant*) */

void __thiscall cocos2d::renderer::Model::setEffect(Model *this,EffectVariant *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x48);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(EffectVariant **)(this + 0x48) = param_1;
    if (param_1 != (EffectVariant *)0x0) {
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

