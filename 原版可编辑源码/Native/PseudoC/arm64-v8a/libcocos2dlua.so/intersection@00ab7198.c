
/* fairygui::ToolSet::intersection(cocos2d::Rect const&, cocos2d::Rect const&) */

void __thiscall fairygui::ToolSet::intersection(ToolSet *this,Rect *param_1,Rect *param_2)

{
  Rect *pRVar1;
  Rect *in_x8;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* try { // try from 00ab71e8 to 00bb71ef has its CatchHandler @ 00ab7214 */
  if ((((*(float *)(this + 8) != 0.0) && (*(float *)(this + 0xc) != 0.0)) &&
      (*(float *)(param_1 + 8) != 0.0)) && (*(float *)(param_1 + 0xc) != 0.0)) {
                    /* catch() { ... } // from try @ 00ab6e8c with catch @ 00ab7218
                       catch() { ... } // from try @ 00ab7174 with catch @ 00ab7218 */
                    /* catch() { ... } // from try @ 00ab6fe0 with catch @ 00ab721c
                       catch() { ... } // from try @ 00ab718c with catch @ 00ab721c */
    fVar2 = (float)cocos2d::Rect::getMinX((Rect *)this);
    fVar5 = (float)cocos2d::Rect::getMinX((Rect *)param_1);
    pRVar1 = (Rect *)this;
    if (fVar2 <= fVar5) {
      pRVar1 = (Rect *)param_1;
    }
    fVar2 = (float)cocos2d::Rect::getMinX(pRVar1);
                    /* try { // try from 00ab7238 to 00bb7283 has its CatchHandler @ 00ab7238
                       catch() { ... } // from try @ 00ab7238 with catch @ 00ab7238
                       catch() { ... } // from try @ 00ab7420 with catch @ 00ab7238
                       catch() { ... } // from try @ 00ab74bc with catch @ 00ab7238 */
    fVar5 = (float)cocos2d::Rect::getMaxX((Rect *)this);
    fVar3 = (float)cocos2d::Rect::getMaxX((Rect *)param_1);
    pRVar1 = (Rect *)this;
    if (fVar3 <= fVar5) {
      pRVar1 = (Rect *)param_1;
    }
    fVar5 = (float)cocos2d::Rect::getMaxX(pRVar1);
    fVar3 = (float)cocos2d::Rect::getMinY((Rect *)this);
    fVar6 = (float)cocos2d::Rect::getMinY((Rect *)param_1);
    pRVar1 = (Rect *)this;
    if (fVar3 <= fVar6) {
      pRVar1 = (Rect *)param_1;
    }
    fVar3 = (float)cocos2d::Rect::getMinY(pRVar1);
                    /* try { // try from 00ab7284 to 00bb7297 has its CatchHandler @ 00ab7510 */
    fVar6 = (float)cocos2d::Rect::getMaxY((Rect *)this);
    fVar4 = (float)cocos2d::Rect::getMaxY((Rect *)param_1);
                    /* try { // try from 00ab729c to 00bb72a7 has its CatchHandler @ 00ab750c */
    if (fVar4 <= fVar6) {
      this = (ToolSet *)param_1;
    }
    fVar6 = (float)cocos2d::Rect::getMaxY((Rect *)this);
                    /* try { // try from 00ab72ac to 00bb72b3 has its CatchHandler @ 00ab7508 */
    if ((fVar2 <= fVar5) && (fVar3 <= fVar6)) {
      fVar5 = fVar5 - fVar2;
      fVar6 = fVar6 - fVar3;
      goto LAB_00ab7200;
    }
  }
  fVar2 = 0.0;
  fVar3 = 0.0;
                    /* try { // try from 00ab71f4 to 00bb71fb has its CatchHandler @ 00ab7210 */
  fVar5 = 0.0;
  fVar6 = 0.0;
                    /* try { // try from 00ab71fc to 00bb7237 has its CatchHandler @ 00ab6e40 */
LAB_00ab7200:
                    /* catch() { ... } // from try @ 00ab7124 with catch @ 00ab7210
                       catch() { ... } // from try @ 00ab71f4 with catch @ 00ab7210 */
                    /* catch() { ... } // from try @ 00ab6fac with catch @ 00ab7214
                       catch() { ... } // from try @ 00ab71e8 with catch @ 00ab7214 */
  cocos2d::Rect::Rect(in_x8,fVar2,fVar3,fVar5,fVar6);
  return;
}

