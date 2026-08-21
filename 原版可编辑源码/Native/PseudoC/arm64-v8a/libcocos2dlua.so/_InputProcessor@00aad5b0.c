
/* fairygui::InputProcessor::~InputProcessor() */

void __thiscall fairygui::InputProcessor::~InputProcessor(InputProcessor *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  EventDispatcher *pEVar3;
  InputProcessor *pIVar4;
  void *pvVar5;
  code *pcVar6;
  TouchInfo *this_00;
  
  pEVar3 = (EventDispatcher *)(**(code **)(**(long **)(*(long *)(this + 0x30) + 0xa8) + 0x388))();
  cocos2d::EventDispatcher::removeEventListener(pEVar3,*(EventListener **)this);
  pEVar3 = (EventDispatcher *)(**(code **)(**(long **)(*(long *)(this + 0x30) + 0xa8) + 0x388))();
  cocos2d::EventDispatcher::removeEventListener(pEVar3,*(EventListener **)(this + 0x10));
  if (*(Ref **)this != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)this);
    *(undefined8 *)this = 0;
  }
  if (*(Ref **)(this + 8) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  if (*(Ref **)(this + 0x10) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  puVar2 = *(undefined8 **)(this + 0x20);
  for (puVar1 = *(undefined8 **)(this + 0x18); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    this_00 = (TouchInfo *)*puVar1;
    if (this_00 != (TouchInfo *)0x0) {
      TouchInfo::~TouchInfo(this_00);
      operator_delete(this_00);
    }
  }
  InputEvent::~InputEvent((InputEvent *)(this + 0x70));
  pIVar4 = *(InputProcessor **)(this + 0x60);
  if (this + 0x40 == pIVar4) {
    pcVar6 = *(code **)(*(long *)pIVar4 + 0x20);
  }
  else {
    if (pIVar4 == (InputProcessor *)0x0) goto LAB_00aad698;
    pcVar6 = *(code **)(*(long *)pIVar4 + 0x28);
  }
  (*pcVar6)();
LAB_00aad698:
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar5;
    operator_delete(pvVar5);
    return;
  }
  return;
}

