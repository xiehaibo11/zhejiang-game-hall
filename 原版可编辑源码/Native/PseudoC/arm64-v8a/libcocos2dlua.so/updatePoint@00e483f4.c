
/* cocos2d::PUSimpleSpline::updatePoint(unsigned short, cocos2d::Vec3 const&) */

void __thiscall
cocos2d::PUSimpleSpline::updatePoint(PUSimpleSpline *this,ushort param_1,Vec3 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_2;
  puVar1 = (undefined8 *)(*(long *)(this + 8) + (ulong)param_1 * 0xc);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 8);
  *puVar1 = uVar2;
  if (*this != (PUSimpleSpline)0x0) {
    recalcTangents(this);
    return;
  }
  return;
}

