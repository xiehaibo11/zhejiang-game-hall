
/* non-virtual thunk to cocostudio::WidgetReader::~WidgetReader() */

void __thiscall cocostudio::WidgetReader::~WidgetReader(WidgetReader *this)

{
  WidgetReader *pWVar1;
  code *pcVar2;
  
  *(undefined ***)(this + -0x30) = &PTR__WidgetReader_016ce900;
  pWVar1 = *(WidgetReader **)(this + 0x90);
  *(undefined ***)this = &PTR__WidgetReader_016ce980;
  *(undefined ***)(this + -8) = &PTR__WidgetReader_016ce950;
  if (this + 0x70 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00cdaf10:
    (*pcVar2)();
  }
  else if (pWVar1 != (WidgetReader *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00cdaf10;
  }
  pWVar1 = *(WidgetReader **)(this + 0x60);
  if (this + 0x40 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00cdaf3c:
    (*pcVar2)();
  }
  else if (pWVar1 != (WidgetReader *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00cdaf3c;
  }
  pWVar1 = *(WidgetReader **)(this + 0x30);
  if (this + 0x10 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
  }
  else {
    if (pWVar1 == (WidgetReader *)0x0) goto LAB_00cdaf6c;
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00cdaf6c:
  cocos2d::Ref::~Ref((Ref *)(this + -0x30));
  return;
}

