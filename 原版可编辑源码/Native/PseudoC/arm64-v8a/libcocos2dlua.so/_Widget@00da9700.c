
/* cocos2d::ui::Widget::~Widget() */

void __thiscall cocos2d::ui::Widget::~Widget(Widget *this)

{
  Widget *pWVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__Widget_016d8710;
  *(undefined ***)(this + 0x318) = &PTR__Widget_016d8da0;
  cleanupWidget(this);
  if (((byte)this[0x4d8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x4e8));
  }
  if (((byte)this[0x4c0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x4d0));
  }
  pWVar1 = *(Widget **)(this + 0x4b0);
  if (this + 0x490 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00da9774:
    (*pcVar2)();
  }
  else if (pWVar1 != (Widget *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00da9774;
  }
  pWVar1 = *(Widget **)(this + 0x480);
  if (this + 0x460 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00da97a0:
    (*pcVar2)();
  }
  else if (pWVar1 != (Widget *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00da97a0;
  }
  pWVar1 = *(Widget **)(this + 0x450);
  if (this + 0x430 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00da97cc:
    (*pcVar2)();
  }
  else if (pWVar1 != (Widget *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00da97cc;
  }
  Map<int,cocos2d::ui::LayoutParameter*>::~Map
            ((Map<int,cocos2d::ui::LayoutParameter*> *)(this + 1000));
  pWVar1 = *(Widget **)(this + 0x370);
  if (this + 0x350 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00da9800:
    (*pcVar2)();
  }
  else if (pWVar1 != (Widget *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00da9800;
  }
  pWVar1 = *(Widget **)(this + 0x340);
  if (this + 800 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
  }
  else {
    if (pWVar1 == (Widget *)0x0) goto LAB_00da9830;
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00da9830:
  ProtectedNode::~ProtectedNode((ProtectedNode *)this);
  return;
}

