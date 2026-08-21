
/* spine::SkeletonJson::readCurve(spine::Json*, spine::CurveTimeline*, unsigned long) */

void spine::SkeletonJson::readCurve(Json *param_1,CurveTimeline *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = Json::getItem(param_1,"curve");
  if (lVar2 == 0) {
    return;
  }
  if ((*(int *)(lVar2 + 0x10) == 4) &&
     (iVar1 = strcmp(*(char **)(lVar2 + 0x18),"stepped"), iVar1 == 0)) {
    CurveTimeline::setStepped(param_2,param_3);
    return;
  }
  fVar3 = (float)Json::getFloat(param_1,"curve",0.0);
  fVar4 = (float)Json::getFloat(param_1,"c2",0.0);
  fVar5 = (float)Json::getFloat(param_1,"c3",1.0);
  fVar6 = (float)Json::getFloat(param_1,"c4",1.0);
  CurveTimeline::setCurve(param_2,param_3,fVar3,fVar4,fVar5,fVar6);
  return;
}

