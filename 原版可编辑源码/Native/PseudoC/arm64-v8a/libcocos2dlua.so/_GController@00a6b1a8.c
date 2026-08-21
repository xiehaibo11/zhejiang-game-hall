
/* fairygui::GController::~GController() */

void __thiscall fairygui::GController::~GController(GController *this)

{
  long *plVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long *plVar6;
  
  plVar6 = *(long **)(this + 0xa8);
  plVar1 = *(long **)(this + 0xb0);
  *(undefined ***)this = &PTR__GController_016a4d48;
  if (plVar6 != plVar1) {
    do {
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 8))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar1 != plVar6);
    plVar6 = *(long **)(this + 0xa8);
  }
  if (plVar6 != (long *)0x0) {
    *(long **)(this + 0xb0) = plVar6;
    operator_delete(plVar6);
  }
  pbVar5 = *(byte **)(this + 0x90);
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = *(byte **)(this + 0x98);
    pbVar3 = pbVar5;
    if (pbVar4 != pbVar5) {
      bVar2 = pbVar4[-0x18];
      pbVar3 = pbVar4 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        if (pbVar5 == pbVar3) break;
        bVar2 = pbVar3[-0x18];
        pbVar4 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
      pbVar3 = *(byte **)(this + 0x90);
    }
    *(byte **)(this + 0x98) = pbVar5;
    operator_delete(pbVar3);
  }
  pbVar5 = *(byte **)(this + 0x78);
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = *(byte **)(this + 0x80);
    pbVar3 = pbVar5;
    if (pbVar4 != pbVar5) {
      bVar2 = pbVar4[-0x18];
      pbVar3 = pbVar4 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        if (pbVar5 == pbVar3) break;
        bVar2 = pbVar3[-0x18];
        pbVar4 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
      pbVar3 = *(byte **)(this + 0x78);
    }
    *(byte **)(this + 0x80) = pbVar5;
    operator_delete(pbVar3);
  }
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  UIEventDispatcher::~UIEventDispatcher((UIEventDispatcher *)this);
  return;
}

