
/* dragonBones::RectangleBoundingBoxData::intersectsSegment(float, float, float, float,
   dragonBones::Point*, dragonBones::Point*, dragonBones::Point*) */

void __thiscall
dragonBones::RectangleBoundingBoxData::intersectsSegment
          (RectangleBoundingBoxData *this,float param_1,float param_2,float param_3,float param_4,
          Point *param_5,Point *param_6,Point *param_7)

{
  rectangleIntersectsSegment
            (param_1,param_2,param_3,param_4,*(float *)(this + 0x18) * -0.5,
             *(float *)(this + 0x1c) * -0.5,*(float *)(this + 0x18) * 0.5,
             *(float *)(this + 0x1c) * 0.5,param_5,param_6,param_7);
  return;
}

