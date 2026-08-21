
/* fairygui::GTweener::_reset() */

void __thiscall fairygui::GTweener::_reset(GTweener *this)

{
  long lVar1;
  GTweener *pGVar2;
  code *pcVar3;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(Ref **)(this + 0x90) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x90));
  }
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  cocos2d::Value::operator=((Value *)(this + 200),(char *)0x0);
  pGVar2 = *(GTweener **)(this + 0x170);
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  if (this + 0x150 == pGVar2) {
    pcVar3 = *(code **)(*(long *)pGVar2 + 0x20);
LAB_00ac1eac:
    (*pcVar3)();
  }
  else if (pGVar2 != (GTweener *)0x0) {
    pcVar3 = *(code **)(*(long *)pGVar2 + 0x28);
    goto LAB_00ac1eac;
  }
  pGVar2 = *(GTweener **)(this + 0x170);
  if (pGVar2 == (GTweener *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (this + 0x150 == pGVar2) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pGVar2 + 0x18))(pGVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pGVar2 + 0x10))();
  }
  FUN_00ac2190(alStack_70,this + 0xf0);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00ac1f2c:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00ac1f2c;
  }
  pGVar2 = *(GTweener **)(this + 0x110);
  if (pGVar2 == (GTweener *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (this + 0xf0 == pGVar2) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pGVar2 + 0x18))(pGVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pGVar2 + 0x10))();
  }
  FUN_00ac2190(alStack_70,this + 0x120);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00ac1fa8:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00ac1fa8;
  }
  pGVar2 = *(GTweener **)(this + 0x1a0);
  *(undefined8 *)(this + 0x1a0) = 0;
  if (this + 0x180 == pGVar2) {
    pcVar3 = *(code **)(*(long *)pGVar2 + 0x20);
  }
  else {
    if (pGVar2 == (GTweener *)0x0) goto LAB_00ac1fdc;
    pcVar3 = *(code **)(*(long *)pGVar2 + 0x28);
  }
  (*pcVar3)();
LAB_00ac1fdc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

