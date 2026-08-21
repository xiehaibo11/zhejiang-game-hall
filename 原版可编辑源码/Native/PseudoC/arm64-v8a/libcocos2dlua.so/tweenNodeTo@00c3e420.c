
/* cocostudio::Tween::tweenNodeTo(float, cocostudio::FrameData*) */

FrameData * __thiscall cocostudio::Tween::tweenNodeTo(Tween *this,float param_1,FrameData *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  
  if (param_2 == (FrameData *)0x0) {
    param_2 = *(FrameData **)(this + 0x60);
  }
  lVar1 = *(long *)(this + 0x68);
  lVar2 = *(long *)(this + 0x78);
  fVar5 = 0.0;
  if (*(char *)(lVar1 + 0x70) != '\0') {
    fVar5 = param_1;
  }
  *(ulong *)(param_2 + 0x24) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x24) >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar2 + 0x24) >> 0x20) * fVar5,
                (float)*(undefined8 *)(lVar1 + 0x24) + (float)*(undefined8 *)(lVar2 + 0x24) * fVar5)
  ;
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  *(ulong *)(param_2 + 0x38) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20) * fVar5,
                (float)*(undefined8 *)(lVar1 + 0x38) + (float)*(undefined8 *)(lVar2 + 0x38) * fVar5)
  ;
  *(ulong *)(param_2 + 0x30) =
       CONCAT44((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar3 >> 0x20) * fVar5,
                (float)uVar4 + (float)uVar3 * fVar5);
  (**(code **)(**(long **)(this + 0x80) + 0x538))(*(long **)(this + 0x80),1);
  if ((param_2 != (FrameData *)0x0) && (*(char *)(*(long *)(this + 0x78) + 0x44) != '\0')) {
    (**(code **)(*(long *)this + 0xe8))(fVar5,this,param_2);
  }
  return param_2;
}

