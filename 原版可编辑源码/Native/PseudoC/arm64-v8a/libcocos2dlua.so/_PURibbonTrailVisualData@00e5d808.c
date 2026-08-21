
/* cocos2d::PURibbonTrailVisualData::~PURibbonTrailVisualData() */

void __thiscall
cocos2d::PURibbonTrailVisualData::~PURibbonTrailVisualData(PURibbonTrailVisualData *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

