
/* cocostudio::ColliderDetector::addContourDataList(cocos2d::Vector<cocostudio::ContourData*>&) */

void __thiscall
cocostudio::ColliderDetector::addContourDataList(ColliderDetector *this,Vector *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (puVar2 = *(undefined8 **)param_1; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    addContourData(this,(ContourData *)*puVar2);
  }
  return;
}

