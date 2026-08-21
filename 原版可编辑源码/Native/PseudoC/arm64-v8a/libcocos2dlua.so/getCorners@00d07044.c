
/* cocos2d::OBB::getCorners(cocos2d::Vec3*) const */

void __thiscall cocos2d::OBB::getCorners(OBB *this,Vec3 *param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  
  fVar1 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0x38);
  fVar7 = *(float *)(this + 0x44);
  fVar4 = *(float *)(this + 0x50);
  *(ulong *)param_1 =
       CONCAT44(((float)((ulong)*(undefined8 *)this >> 0x20) -
                (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20)) +
                (float)((ulong)*(undefined8 *)(this + 0x3c) >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20),
                ((float)*(undefined8 *)this - (float)*(undefined8 *)(this + 0x30)) +
                (float)*(undefined8 *)(this + 0x3c) + (float)*(undefined8 *)(this + 0x48));
  *(float *)(param_1 + 8) = (fVar1 - fVar3) + fVar7 + fVar4;
  fVar1 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0x38);
  fVar7 = *(float *)(this + 0x44);
  fVar4 = *(float *)(this + 0x50);
  *(ulong *)(param_1 + 0xc) =
       CONCAT44((((float)((ulong)*(undefined8 *)this >> 0x20) -
                 (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20)) -
                (float)((ulong)*(undefined8 *)(this + 0x3c) >> 0x20)) +
                (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20),
                (((float)*(undefined8 *)this - (float)*(undefined8 *)(this + 0x30)) -
                (float)*(undefined8 *)(this + 0x3c)) + (float)*(undefined8 *)(this + 0x48));
  *(float *)(param_1 + 0x14) = ((fVar1 - fVar3) - fVar7) + fVar4;
  fVar1 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0x38);
  fVar7 = *(float *)(this + 0x44);
  fVar4 = *(float *)(this + 0x50);
  *(ulong *)(param_1 + 0x18) =
       CONCAT44((((float)((ulong)*(undefined8 *)this >> 0x20) +
                 (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20)) -
                (float)((ulong)*(undefined8 *)(this + 0x3c) >> 0x20)) +
                (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20),
                (((float)*(undefined8 *)this + (float)*(undefined8 *)(this + 0x30)) -
                (float)*(undefined8 *)(this + 0x3c)) + (float)*(undefined8 *)(this + 0x48));
  *(float *)(param_1 + 0x20) = ((fVar1 + fVar3) - fVar7) + fVar4;
  fVar1 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0x38);
  fVar7 = *(float *)(this + 0x44);
  fVar4 = *(float *)(this + 0x50);
  *(ulong *)(param_1 + 0x24) =
       CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0x3c) >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20),
                (float)*(undefined8 *)this + (float)*(undefined8 *)(this + 0x30) +
                (float)*(undefined8 *)(this + 0x3c) + (float)*(undefined8 *)(this + 0x48));
  *(float *)(param_1 + 0x2c) = fVar1 + fVar3 + fVar7 + fVar4;
  fVar1 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0x38);
  fVar7 = *(float *)(this + 0x44);
  fVar4 = *(float *)(this + 0x50);
  *(ulong *)(param_1 + 0x30) =
       CONCAT44(((float)((ulong)*(undefined8 *)this >> 0x20) +
                 (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20) +
                (float)((ulong)*(undefined8 *)(this + 0x3c) >> 0x20)) -
                (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20),
                ((float)*(undefined8 *)this + (float)*(undefined8 *)(this + 0x30) +
                (float)*(undefined8 *)(this + 0x3c)) - (float)*(undefined8 *)(this + 0x48));
  *(float *)(param_1 + 0x38) = (fVar1 + fVar3 + fVar7) - fVar4;
  uVar2 = *(undefined8 *)(this + 4);
  uVar5 = *(undefined8 *)(this + 0x34);
  uVar8 = *(undefined8 *)(this + 0x40);
  uVar6 = *(undefined8 *)(this + 0x4c);
  *(float *)(param_1 + 0x3c) =
       ((*(float *)this + *(float *)(this + 0x30)) - *(float *)(this + 0x3c)) -
       *(float *)(this + 0x48);
  *(ulong *)(param_1 + 0x40) =
       CONCAT44((((float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar5 >> 0x20)) -
                (float)((ulong)uVar8 >> 0x20)) - (float)((ulong)uVar6 >> 0x20),
                (((float)uVar2 + (float)uVar5) - (float)uVar8) - (float)uVar6);
  fVar1 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0x38);
  fVar7 = *(float *)(this + 0x44);
  fVar4 = *(float *)(this + 0x50);
  *(ulong *)(param_1 + 0x48) =
       CONCAT44((((float)((ulong)*(undefined8 *)this >> 0x20) -
                 (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20)) -
                (float)((ulong)*(undefined8 *)(this + 0x3c) >> 0x20)) -
                (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20),
                (((float)*(undefined8 *)this - (float)*(undefined8 *)(this + 0x30)) -
                (float)*(undefined8 *)(this + 0x3c)) - (float)*(undefined8 *)(this + 0x48));
  *(float *)(param_1 + 0x50) = ((fVar1 - fVar3) - fVar7) - fVar4;
  fVar1 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0x38);
  fVar7 = *(float *)(this + 0x44);
  fVar4 = *(float *)(this + 0x50);
  *(ulong *)(param_1 + 0x54) =
       CONCAT44((((float)((ulong)*(undefined8 *)this >> 0x20) -
                 (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20)) +
                (float)((ulong)*(undefined8 *)(this + 0x3c) >> 0x20)) -
                (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20),
                (((float)*(undefined8 *)this - (float)*(undefined8 *)(this + 0x30)) +
                (float)*(undefined8 *)(this + 0x3c)) - (float)*(undefined8 *)(this + 0x48));
  *(float *)(param_1 + 0x5c) = ((fVar1 - fVar3) + fVar7) - fVar4;
  return;
}

