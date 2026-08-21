
/* fairygui::GRichTextField::hitTest(cocos2d::Vec2 const&, cocos2d::Camera const*) */

void __thiscall
fairygui::GRichTextField::hitTest(GRichTextField *this,Vec2 *param_1,Camera *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)(this + 0x200) + 0x318);
  plVar1 = *(long **)(*(long *)(this + 0x200) + 0x310);
  do {
    if (plVar1 == plVar3) {
      GObject::hitTest(this,(Camera *)param_1);
      return;
    }
    lVar2 = (**(code **)(**(long **)(*plVar1 + 0x18) + 0x48))
                      (*(long **)(*plVar1 + 0x18),param_1,param_2);
    plVar1 = plVar1 + 1;
  } while (lVar2 == 0);
  return;
}

