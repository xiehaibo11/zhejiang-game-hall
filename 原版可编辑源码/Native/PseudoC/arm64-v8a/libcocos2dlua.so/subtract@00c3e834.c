
/* cocostudio::BaseData::subtract(cocostudio::BaseData*, cocostudio::BaseData*, bool) */

void __thiscall
cocostudio::BaseData::subtract(BaseData *this,BaseData *param_1,BaseData *param_2,bool param_3)

{
  BaseData BVar1;
  float fVar2;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar3;
  
  *(ulong *)(this + 0x24) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 0x24) >> 0x20),
                (float)*(undefined8 *)(param_2 + 0x24) - (float)*(undefined8 *)(param_1 + 0x24));
  fVar2 = (float)*(undefined8 *)(param_2 + 0x30) - (float)*(undefined8 *)(param_1 + 0x30);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  uVar3 = CONCAT44(fVar4,fVar2);
  *(ulong *)(this + 0x38) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
                (float)*(undefined8 *)(param_2 + 0x38) - (float)*(undefined8 *)(param_1 + 0x38));
  *(ulong *)(this + 0x30) = uVar3;
  if (((this[0x44] == (BaseData)0x0) && (param_1[0x44] == (BaseData)0x0)) &&
     (param_2[0x44] == (BaseData)0x0)) {
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    BVar1 = (BaseData)0x0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    BVar1 = (BaseData)0x1;
    *(ulong *)(this + 0x50) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) -
                  (int)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20),
                  (int)*(undefined8 *)(param_2 + 0x50) - (int)*(undefined8 *)(param_1 + 0x50));
    *(ulong *)(this + 0x48) =
         CONCAT44((int)((ulong)uVar5 >> 0x20) - (int)((ulong)uVar6 >> 0x20),(int)uVar5 - (int)uVar6)
    ;
  }
  this[0x44] = BVar1;
  if (param_3) {
    if (3.1415927 < fVar2) {
      fVar2 = fVar2 + -6.2831855;
      uVar3 = (ulong)(uint)fVar2;
      *(float *)(this + 0x30) = fVar2;
    }
    if (fVar2 < -3.1415927) {
      fVar2 = (float)uVar3 + 6.2831855;
      uVar3 = (ulong)(uint)fVar2;
      *(float *)(this + 0x30) = fVar2;
    }
    if (3.1415927 < fVar4) {
      fVar4 = fVar4 + -6.2831855;
      *(float *)(this + 0x34) = fVar4;
    }
    if (fVar4 < -3.1415927) {
      fVar4 = fVar4 + 6.2831855;
      *(float *)(this + 0x34) = fVar4;
    }
  }
  if (*(float *)(param_2 + 0x40) != 0.0) {
    fVar2 = *(float *)(param_2 + 0x40) * 3.1415927;
    fVar2 = fVar2 + fVar2;
    *(float *)(this + 0x30) = fVar2 + (float)uVar3;
    *(float *)(this + 0x34) = fVar4 - fVar2;
  }
  return;
}

