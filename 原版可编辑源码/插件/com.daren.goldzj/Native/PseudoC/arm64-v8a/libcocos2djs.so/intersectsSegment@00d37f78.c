
/* dragonBones::PolygonBoundingBoxData::intersectsSegment(float, float, float, float,
   dragonBones::Point*, dragonBones::Point*, dragonBones::Point*) */

void __thiscall
dragonBones::PolygonBoundingBoxData::intersectsSegment
          (PolygonBoundingBoxData *this,float param_1,float param_2,float param_3,float param_4,
          Point *param_5,Point *param_6,Point *param_7)

{
  int iVar1;
  
  iVar1 = RectangleBoundingBoxData::rectangleIntersectsSegment
                    (param_1,param_2,param_3,param_4,*(float *)(this + 0x20),*(float *)(this + 0x24)
                     ,*(float *)(this + 0x20) + *(float *)(this + 0x18),
                     *(float *)(this + 0x24) + *(float *)(this + 0x1c),(Point *)0x0,(Point *)0x0,
                     (Point *)0x0);
  if (iVar1 != 0) {
    polygonIntersectsSegment
              (param_1,param_2,param_3,param_4,(vector *)(this + 0x28),param_5,param_6,param_7);
    return;
  }
  return;
}

