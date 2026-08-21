
/* fairygui::GComponent::applyAllControllers() */

void __thiscall fairygui::GComponent::applyAllControllers(GComponent *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  GController *this_00;
  long lVar5;
  
  puVar2 = *(undefined8 **)(this + 0x200);
  for (puVar1 = *(undefined8 **)(this + 0x1f8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    lVar4 = *(long *)(this + 0x1e0);
                    /* try { // try from 00a71be4 to 00b71bfb has its CatchHandler @ 00a720e8 */
    this_00 = (GController *)*puVar1;
    *(GController **)(this + 0x278) = this_00;
    if (0 < *(long *)(this + 0x1e8) - lVar4) {
      lVar5 = 0;
      do {
        plVar3 = *(long **)(lVar4 + lVar5 * 8);
                    /* try { // try from 00a71c08 to 00b71c1f has its CatchHandler @ 00a720bc */
        (**(code **)(*plVar3 + 0x78))(plVar3,this_00);
        lVar4 = *(long *)(this + 0x1e0);
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(long *)(this + 0x1e8) - lVar4 >> 3);
    }
    *(undefined8 *)(this + 0x278) = 0;
    GController::runActions(this_00);
  }
                    /* try { // try from 00a71c2c to 00b71c43 has its CatchHandler @ 00a72094 */
  return;
}

