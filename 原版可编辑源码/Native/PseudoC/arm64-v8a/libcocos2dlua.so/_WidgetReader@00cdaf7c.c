
/* cocostudio::WidgetReader::~WidgetReader() */

void __thiscall cocostudio::WidgetReader::~WidgetReader(WidgetReader *this)

{
  WidgetReader *pWVar1;
  code *pcVar2;
  
  pWVar1 = *(WidgetReader **)(this + 0xc0);
  *(undefined ***)this = &PTR__WidgetReader_016ce900;
  *(undefined ***)(this + 0x30) = &PTR__WidgetReader_016ce980;
  *(undefined ***)(this + 0x28) = &PTR__WidgetReader_016ce950;
  if (this + 0xa0 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00cdafd8:
    (*pcVar2)();
  }
  else if (pWVar1 != (WidgetReader *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00cdafd8;
  }
  pWVar1 = *(WidgetReader **)(this + 0x90);
  if (this + 0x70 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00cdb004:
    (*pcVar2)();
  }
  else if (pWVar1 != (WidgetReader *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00cdb004;
  }
  pWVar1 = *(WidgetReader **)(this + 0x60);
  if (this + 0x40 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
  }
  else {
    if (pWVar1 == (WidgetReader *)0x0) goto LAB_00cdb034;
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00cdb034:
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

