
/* btTriangleShape::isInside(btVector3 const&, float) const */

undefined8 __thiscall
btTriangleShape::isInside(btTriangleShape *this,btVector3 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  
  fVar1 = *(float *)(this + 0x58) - *(float *)(this + 0x48);
  fVar3 = *(float *)(this + 0x68) - *(float *)(this + 0x48);
  fVar2 = *(float *)(this + 0x5c) - *(float *)(this + 0x4c);
  fVar5 = *(float *)(this + 0x60) - *(float *)(this + 0x50);
  fVar4 = *(float *)(this + 0x6c) - *(float *)(this + 0x4c);
  fVar6 = *(float *)(this + 0x70) - *(float *)(this + 0x50);
  fVar7 = fVar2 * fVar6 - fVar5 * fVar4;
  fVar5 = fVar5 * fVar3 - fVar1 * fVar6;
  fVar3 = fVar1 * fVar4 - fVar2 * fVar3;
  fVar2 = fVar3 * fVar3 + fVar7 * fVar7 + fVar5 * fVar5;
  fVar1 = SQRT(fVar2);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
  fVar1 = 1.0 / fVar1;
  fVar7 = fVar1 * fVar7;
  fVar5 = fVar1 * fVar5;
  fVar1 = fVar1 * fVar3;
  fVar2 = (fVar1 * *(float *)(param_1 + 8) +
          *(float *)param_1 * fVar7 + *(float *)(param_1 + 4) * fVar5) -
          (fVar7 * *(float *)(this + 0x48) + fVar5 * *(float *)(this + 0x4c) +
          fVar1 * *(float *)(this + 0x50));
  fVar3 = -param_2;
  if ((fVar3 <= fVar2) && (fVar2 <= param_2)) {
    (**(code **)(*(long *)this + 0xd0))(this,0,&local_70,&local_80);
    fVar6 = fVar1 * (fStack_7c - fStack_6c) - fVar5 * (local_78 - local_68);
    fVar8 = fVar7 * (local_78 - local_68) - fVar1 * (local_80 - local_70);
    fVar9 = fVar5 * (local_80 - local_70) - fVar7 * (fStack_7c - fStack_6c);
    fVar4 = fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8;
    fVar2 = SQRT(fVar4);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar4);
    }
    fVar2 = 1.0 / fVar2;
    if (fVar3 <= (fVar9 * fVar2 * *(float *)(param_1 + 8) +
                 *(float *)param_1 * fVar2 * fVar6 + *(float *)(param_1 + 4) * fVar2 * fVar8) -
                 (fVar2 * fVar6 * local_70 + fVar2 * fVar8 * fStack_6c + fVar9 * fVar2 * local_68))
    {
      (**(code **)(*(long *)this + 0xd0))(this,1,&local_70,&local_80);
      fVar6 = fVar1 * (fStack_7c - fStack_6c) - fVar5 * (local_78 - local_68);
      fVar8 = fVar7 * (local_78 - local_68) - fVar1 * (local_80 - local_70);
      fVar9 = fVar5 * (local_80 - local_70) - fVar7 * (fStack_7c - fStack_6c);
      fVar4 = fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8;
      fVar2 = SQRT(fVar4);
      if (NAN(fVar2)) {
        fVar2 = sqrtf(fVar4);
      }
      fVar2 = 1.0 / fVar2;
      if (fVar3 <= (fVar9 * fVar2 * *(float *)(param_1 + 8) +
                   *(float *)param_1 * fVar2 * fVar6 + *(float *)(param_1 + 4) * fVar2 * fVar8) -
                   (fVar2 * fVar6 * local_70 + fVar2 * fVar8 * fStack_6c + fVar9 * fVar2 * local_68)
         ) {
        (**(code **)(*(long *)this + 0xd0))(this,2,&local_70,&local_80);
        fVar6 = fVar1 * (fStack_7c - fStack_6c) - fVar5 * (local_78 - local_68);
        fVar4 = fVar7 * (local_78 - local_68) - fVar1 * (local_80 - local_70);
        fVar5 = fVar5 * (local_80 - local_70) - fVar7 * (fStack_7c - fStack_6c);
        fVar2 = fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4;
        fVar1 = SQRT(fVar2);
        if (NAN(fVar1)) {
          fVar1 = sqrtf(fVar2);
        }
        fVar1 = 1.0 / fVar1;
        if (fVar3 <= (fVar5 * fVar1 * *(float *)(param_1 + 8) +
                     *(float *)param_1 * fVar1 * fVar6 + *(float *)(param_1 + 4) * fVar1 * fVar4) -
                     (fVar1 * fVar6 * local_70 + fVar1 * fVar4 * fStack_6c +
                     fVar5 * fVar1 * local_68)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

