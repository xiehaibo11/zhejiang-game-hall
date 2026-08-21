
/* cocos2d::PUBeamRender::clone() */

PURender * __thiscall cocos2d::PUBeamRender::clone(PUBeamRender *this)

{
  PUBeamRender PVar1;
  PURender *pPVar2;
  long *plVar3;
  
  pPVar2 = (PURender *)create((basic_string *)(this + 0x70));
  PURender::copyAttributesTo((PURender *)this,pPVar2);
  PVar1 = this[0xe0];
  plVar3 = *(long **)(pPVar2 + 0xa0);
  *(PUBeamRender *)(pPVar2 + 0xe0) = PVar1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x60))(plVar3,PVar1 != (PUBeamRender)0x0);
    (**(code **)(**(long **)(pPVar2 + 0xa0) + 0x30))
              (*(long **)(pPVar2 + 0xa0),pPVar2[0xe0] == (PURender)0x0);
  }
  *(undefined8 *)(pPVar2 + 0xe8) = *(undefined8 *)(this + 0xe8);
  *(undefined8 *)(pPVar2 + 0xf0) = *(undefined8 *)(this + 0xf0);
  *(undefined8 *)(pPVar2 + 0xf8) = *(undefined8 *)(this + 0xf8);
  *(PUBeamRender *)(pPVar2 + 0x100) = this[0x100];
  *(undefined4 *)(pPVar2 + 0x104) = *(undefined4 *)(this + 0x104);
  return pPVar2;
}

