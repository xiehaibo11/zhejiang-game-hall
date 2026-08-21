
/* non-virtual thunk to cocostudio::WidgetReader::~WidgetReader() */

void __thiscall cocostudio::WidgetReader::~WidgetReader(WidgetReader *this)

{
  WidgetReader *pWVar1;
  code *pcVar2;
  
  *(undefined ***)(this + -0x28) = &PTR__WidgetReader_016ce900;
  pWVar1 = *(WidgetReader **)(this + 0x98);
  *(undefined ***)(this + 8) = &PTR__WidgetReader_016ce980;
  *(undefined ***)this = &PTR__WidgetReader_016ce950;
  if (this + 0x78 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00cdae48:
    (*pcVar2)();
  }
  else if (pWVar1 != (WidgetReader *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00cdae48;
  }
  pWVar1 = *(WidgetReader **)(this + 0x68);
  if (this + 0x48 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00cdae74:
    (*pcVar2)();
  }
  else if (pWVar1 != (WidgetReader *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00cdae74;
  }
  pWVar1 = *(WidgetReader **)(this + 0x38);
  if (this + 0x18 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
  }
  else {
    if (pWVar1 == (WidgetReader *)0x0) goto LAB_00cdaea4;
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00cdaea4:
  cocos2d::Ref::~Ref((Ref *)(this + -0x28));
  return;
}

