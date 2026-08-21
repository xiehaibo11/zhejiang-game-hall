
/* fairygui::GComponent::removeChild(fairygui::GObject*) */

void __thiscall fairygui::GComponent::removeChild(GComponent *this,GObject *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(this + 0x1e0);
  puVar3 = *(undefined8 **)(this + 0x1e8);
  if (puVar3 != puVar2) {
    puVar4 = puVar2;
    if ((GObject *)*puVar2 != param_1) {
      do {
        if (puVar3 + -1 == puVar4) {
          return;
        }
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 1;
      } while ((GObject *)*puVar1 != param_1);
    }
    if ((puVar4 != puVar3) && ((int)((ulong)((long)puVar4 - (long)puVar2) >> 3) != -1)) {
                    /* WARNING: Could not recover jumptable at 0x00a70ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0xb8))();
      return;
    }
  }
  return;
}

