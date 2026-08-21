
/* cocos2d::ui::Widget::updateSizeAndPosition(cocos2d::Size const&) */

void __thiscall cocos2d::ui::Widget::updateSizeAndPosition(Widget *this,Size *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  Widget *pWVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00daa218 with catch @ 00daa260
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x390) == 1) {
    Size::Size((Size *)&local_40,*(float *)param_1 * *(float *)(this + 0x3a4),
               *(float *)(param_1 + 4) * *(float *)(this + 0x3a8));
    if (this[0x387] == (Widget)0x0) {
      lVar4 = *(long *)this;
      puVar2 = &local_40;
    }
    else {
      (**(code **)(*(long *)this + 0x610))(&uStack_48,this);
      lVar4 = *(long *)this;
      puVar2 = &uStack_48;
    }
    (**(code **)(lVar4 + 0x160))(this,puVar2);
    Size::operator=((Size *)(this + 0x39c),(Size *)&local_40);
  }
  else if (*(int *)(this + 0x390) == 0) {
    if (this[0x387] == (Widget)0x0) {
      lVar4 = *(long *)this;
      pWVar3 = this + 0x39c;
    }
    else {
      (**(code **)(*(long *)this + 0x610))(&local_40,this);
      lVar4 = *(long *)this;
      pWVar3 = (Widget *)&local_40;
    }
    (**(code **)(lVar4 + 0x160))(this,pWVar3);
    fVar5 = 0.0;
    fVar6 = 0.0;
    if (0.0 < *(float *)param_1) {
      fVar6 = *(float *)(this + 0x39c) / *(float *)param_1;
    }
    if (0.0 < *(float *)(param_1 + 4)) {
      fVar5 = *(float *)(this + 0x3a0) / *(float *)(param_1 + 4);
    }
    *(float *)(this + 0x3a4) = fVar6;
    *(float *)(this + 0x3a8) = fVar5;
  }
  puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0xb0))(this);
  local_40 = *puVar2;
  if (*(int *)(this + 0x394) == 1) {
    local_40 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) *
                        (float)((ulong)*(undefined8 *)(this + 0x3ac) >> 0x20),
                        (float)*(undefined8 *)param_1 * (float)*(undefined8 *)(this + 0x3ac));
  }
  else if (*(int *)(this + 0x394) == 0) {
    if ((*(float *)param_1 <= 0.0) || (fVar5 = *(float *)(param_1 + 4), fVar5 <= 0.0)) {
      *(undefined8 *)(this + 0x3ac) = 0;
    }
    else {
      *(float *)(this + 0x3ac) = (float)local_40 / *(float *)param_1;
      *(float *)(this + 0x3b0) = (float)((ulong)local_40 >> 0x20) / fVar5;
    }
  }
  (**(code **)(*(long *)this + 0x98))(this,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

