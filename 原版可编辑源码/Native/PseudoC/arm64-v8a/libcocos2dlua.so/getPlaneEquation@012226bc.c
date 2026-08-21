
/* btBoxShape::getPlaneEquation(btVector4&, int) const */

void __thiscall btBoxShape::getPlaneEquation(btBoxShape *this,btVector4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  if ((uint)param_2 < 6) {
    fVar4 = *(float *)(this + 0x28);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xbf800000;
    switch(param_2) {
    case 0:
      uVar1 = 0;
      uVar2 = 0;
      uVar3 = 0x3f800000;
      break;
    case 2:
      uVar3 = 0;
      uVar2 = 0;
      uVar1 = 0x3f800000;
      fVar4 = *(float *)(this + 0x2c);
      break;
    case 3:
      uVar3 = 0;
      uVar2 = 0;
      uVar1 = 0xbf800000;
      fVar4 = *(float *)(this + 0x2c);
      break;
    case 4:
      uVar3 = 0;
      uVar1 = 0;
      uVar2 = 0x3f800000;
      fVar4 = *(float *)(this + 0x30);
      break;
    case 5:
      uVar3 = 0;
      uVar1 = 0;
      uVar2 = 0xbf800000;
      fVar4 = *(float *)(this + 0x30);
    }
    *(undefined4 *)param_1 = uVar3;
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(float *)(param_1 + 0xc) = -fVar4;
  }
  return;
}

