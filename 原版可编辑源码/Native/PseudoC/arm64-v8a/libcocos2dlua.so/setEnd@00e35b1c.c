
/* cocos2d::PULineEmitter::setEnd(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PULineEmitter::setEnd(PULineEmitter *this,Vec3 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1fc) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x204) = uVar1;
  uVar3 = *(undefined8 *)(this + 0x1fc);
  fVar5 = *(float *)(this + 0x204);
  fVar2 = (float)uVar3;
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  *(ulong *)(this + 0x22c) =
       CONCAT44(fVar4 * (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20),
                fVar2 * (float)*(undefined8 *)(this + 0x68));
  *(float *)(this + 0x234) = fVar5 * *(float *)(this + 0x70);
  *(float *)(this + 0x224) = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5);
  return;
}

