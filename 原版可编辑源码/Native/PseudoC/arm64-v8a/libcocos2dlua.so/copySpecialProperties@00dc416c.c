
/* cocos2d::ui::AbstractCheckButton::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall
cocos2d::ui::AbstractCheckButton::copySpecialProperties(AbstractCheckButton *this,Widget *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_1 != (Widget *)0x0) &&
     (lVar1 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar1 != 0)) {
    uVar2 = (**(code **)(**(long **)(lVar1 + 0x4f0) + 0x5b0))();
    (**(code **)(**(long **)(this + 0x4f0) + 0x598))(*(long **)(this + 0x4f0),uVar2);
    (**(code **)(*(long *)this + 0x690))(this);
    uVar2 = (**(code **)(**(long **)(lVar1 + 0x4f8) + 0x5b0))();
    (**(code **)(**(long **)(this + 0x4f8) + 0x598))(*(long **)(this + 0x4f8),uVar2);
    (**(code **)(*(long *)this + 0x698))(this);
    uVar2 = (**(code **)(**(long **)(lVar1 + 0x500) + 0x5b0))();
    (**(code **)(**(long **)(this + 0x500) + 0x598))(*(long **)(this + 0x500),uVar2);
    (**(code **)(*(long *)this + 0x6a0))(this);
    uVar2 = (**(code **)(**(long **)(lVar1 + 0x508) + 0x5b0))();
    (**(code **)(**(long **)(this + 0x508) + 0x598))(*(long **)(this + 0x508),uVar2);
    (**(code **)(*(long *)this + 0x6a8))(this);
    uVar2 = (**(code **)(**(long **)(lVar1 + 0x510) + 0x5b0))();
    (**(code **)(**(long **)(this + 0x510) + 0x598))(*(long **)(this + 0x510),uVar2);
    (**(code **)(*(long *)this + 0x6b0))(this);
    (**(code **)(*(long *)this + 0x680))(this,*(undefined1 *)(lVar1 + 0x518));
    *(undefined8 *)(this + 0x530) = *(undefined8 *)(lVar1 + 0x530);
    *(undefined4 *)(this + 0x538) = *(undefined4 *)(lVar1 + 0x538);
    this[0x519] = *(AbstractCheckButton *)(lVar1 + 0x519);
    this[0x51a] = *(AbstractCheckButton *)(lVar1 + 0x51a);
    this[0x51b] = *(AbstractCheckButton *)(lVar1 + 0x51b);
  }
  return;
}

