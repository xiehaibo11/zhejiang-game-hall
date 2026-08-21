
/* cocos2d::Label::setFontAtlas(cocos2d::FontAtlas*, bool, bool) */

void __thiscall
cocos2d::Label::setFontAtlas(Label *this,FontAtlas *param_1,bool param_2,bool param_3)

{
  undefined4 uVar1;
  FontAtlas *pFVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_1 != (FontAtlas *)0x0) {
    this[0x39c] = (Label)0x0;
  }
  pFVar2 = *(FontAtlas **)(this + 0x3d0);
  if (pFVar2 != param_1) {
    if (param_1 != (FontAtlas *)0x0) {
      Ref::retain((Ref *)param_1);
      pFVar2 = *(FontAtlas **)(this + 0x3d0);
    }
    if (pFVar2 != (FontAtlas *)0x0) {
      puVar4 = *(undefined8 **)(this + 0x3d8);
      puVar6 = *(undefined8 **)(this + 0x3e0);
      if (puVar4 != puVar6) {
        do {
          puVar5 = puVar4 + 1;
          Ref::release((Ref *)*puVar4);
          puVar4 = puVar5;
        } while (puVar6 != puVar5);
        puVar4 = *(undefined8 **)(this + 0x3d8);
        pFVar2 = *(FontAtlas **)(this + 0x3d0);
      }
      *(undefined8 **)(this + 0x3e0) = puVar4;
      FontAtlasCache::releaseFontAtlas(pFVar2);
    }
    *(FontAtlas **)(this + 0x3d0) = param_1;
    if (*(long *)(this + 0x408) == 0) {
      plVar3 = (long *)Sprite::create();
      *(long **)(this + 0x408) = plVar3;
      (**(code **)(*plVar3 + 0x4e0))(plVar3,this[0x63d]);
      Ref::retain(*(Ref **)(this + 0x408));
      (**(code **)(**(long **)(this + 0x408) + 0x148))
                (*(long **)(this + 0x408),&Vec2::ANCHOR_TOP_LEFT);
      param_1 = *(FontAtlas **)(this + 0x3d0);
    }
    if (param_1 != (FontAtlas *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0x78);
      this[0x30c] = (Label)0x1;
      this[0x39c] = (Label)0x0;
      *(undefined4 *)(this + 0x424) = uVar1;
    }
    this[0x60c] = (Label)param_2;
    this[0x60d] = (Label)param_3;
    if (*(int *)(this + 0x308) != 0) {
      *(undefined4 *)(this + 0x49c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00f0ad20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x600))(this);
      return;
    }
  }
  return;
}

