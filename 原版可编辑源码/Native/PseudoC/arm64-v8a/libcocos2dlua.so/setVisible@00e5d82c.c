
/* cocos2d::PURibbonTrailVisualData::setVisible(bool) */

void __thiscall
cocos2d::PURibbonTrailVisualData::setVisible(PURibbonTrailVisualData *this,bool param_1)

{
  if (param_1) {
    if (this[0x30] == (PURibbonTrailVisualData)0x0) {
      (**(code **)(**(long **)(this + 0x38) + 0xe0))
                (*(long **)(this + 0x38),*(undefined8 *)(this + 0x28));
      this[0x30] = (PURibbonTrailVisualData)0x1;
    }
  }
  else if (this[0x30] != (PURibbonTrailVisualData)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 0xe8))
              (*(long **)(this + 0x38),*(undefined8 *)(this + 0x28));
    this[0x30] = (PURibbonTrailVisualData)0x0;
  }
  return;
}

