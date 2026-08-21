
/* cocos2d::ui::Slider::~Slider() */

void __thiscall cocos2d::ui::Slider::~Slider(Slider *this)

{
  Slider SVar1;
  Slider *pSVar2;
  code *pcVar3;
  
  *(undefined8 *)(this + 0x590) = 0;
  *(undefined ***)this = &PTR__Slider_016e0760;
  *(undefined ***)(this + 0x318) = &PTR__Slider_016e0df0;
  *(undefined8 *)(this + 0x5a0) = 0;
  *(undefined8 *)(this + 0x598) = 0;
  if (((byte)this[0x658] & 1) == 0) {
    if (((byte)this[0x640] & 1) == 0) goto LAB_00dcb980;
LAB_00dcb9d0:
    operator_delete(*(void **)(this + 0x650));
    if (((byte)this[0x628] & 1) != 0) goto LAB_00dcb9e0;
LAB_00dcb988:
    if (((byte)this[0x610] & 1) == 0) goto LAB_00dcb990;
LAB_00dcb9f0:
    operator_delete(*(void **)(this + 0x620));
    SVar1 = this[0x5f8];
  }
  else {
    operator_delete(*(void **)(this + 0x668));
                    /* try { // try from 00dcb9cc to 00ecba3b has its CatchHandler @ 00dccbac */
    if (((byte)this[0x640] & 1) != 0) goto LAB_00dcb9d0;
LAB_00dcb980:
    if (((byte)this[0x628] & 1) == 0) goto LAB_00dcb988;
LAB_00dcb9e0:
    operator_delete(*(void **)(this + 0x638));
    if (((byte)this[0x610] & 1) != 0) goto LAB_00dcb9f0;
LAB_00dcb990:
    SVar1 = this[0x5f8];
  }
  if (((byte)SVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x608));
  }
  pSVar2 = *(Slider **)(this + 0x5d0);
  if (this + 0x5b0 == pSVar2) {
    pcVar3 = *(code **)(*(long *)pSVar2 + 0x20);
  }
  else {
    if (pSVar2 == (Slider *)0x0) goto LAB_00dcba10;
    pcVar3 = *(code **)(*(long *)pSVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00dcba10:
  Widget::~Widget((Widget *)this);
  return;
}

