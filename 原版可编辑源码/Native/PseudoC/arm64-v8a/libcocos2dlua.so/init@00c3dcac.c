
/* cocostudio::Tween::init(cocostudio::Bone*) */

undefined8 __thiscall cocostudio::Tween::init(Tween *this,Bone *param_1)

{
  FrameData *pFVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  pFVar1 = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (pFVar1 != (FrameData *)0x0) {
    FrameData::FrameData(pFVar1);
  }
  *(FrameData **)(this + 0x68) = pFVar1;
  pFVar1 = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (pFVar1 != (FrameData *)0x0) {
    FrameData::FrameData(pFVar1);
  }
  *(FrameData **)(this + 0x78) = pFVar1;
  *(Bone **)(this + 0x80) = param_1;
  lVar2 = (**(code **)(*(long *)param_1 + 0x5c8))(param_1);
  *(long *)(this + 0x60) = lVar2;
  *(undefined4 *)(lVar2 + 0x74) = 0xffffffff;
  lVar2 = (**(code **)(**(long **)(this + 0x80) + 0x570))();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    plVar3 = (long *)(**(code **)(**(long **)(this + 0x80) + 0x570))();
    uVar4 = (**(code **)(*plVar3 + 0x588))();
  }
  *(undefined8 *)(this + 0xa0) = uVar4;
  return 1;
}

