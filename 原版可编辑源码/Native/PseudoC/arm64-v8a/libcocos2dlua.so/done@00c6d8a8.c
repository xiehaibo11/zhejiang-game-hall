
/* cocostudio::TriggerObj::done() */

void __thiscall cocostudio::TriggerObj::done(TriggerObj *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (this[0x5c] != (TriggerObj)0x0) {
    puVar1 = *(undefined8 **)(this + 0x48);
    for (puVar2 = *(undefined8 **)(this + 0x40); puVar2 != puVar1; puVar2 = puVar2 + 1) {
      (**(code **)(*(long *)*puVar2 + 0x18))();
    }
  }
  return;
}

