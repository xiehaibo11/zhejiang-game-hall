
/* cocos2d::PUBeamRender::copyAttributesTo(cocos2d::PUBeamRender*) */

void __thiscall cocos2d::PUBeamRender::copyAttributesTo(PUBeamRender *this,PUBeamRender *param_1)

{
  PUBeamRender PVar1;
  long *plVar2;
  
  PURender::copyAttributesTo((PURender *)this,(PURender *)param_1);
  PVar1 = this[0xe0];
  plVar2 = *(long **)(param_1 + 0xa0);
  param_1[0xe0] = PVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,PVar1 != (PUBeamRender)0x0);
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x30))
              (*(long **)(param_1 + 0xa0),param_1[0xe0] == (PUBeamRender)0x0);
  }
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(this + 0xe8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(this + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(this + 0xf8);
  param_1[0x100] = this[0x100];
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(this + 0x104);
  return;
}

