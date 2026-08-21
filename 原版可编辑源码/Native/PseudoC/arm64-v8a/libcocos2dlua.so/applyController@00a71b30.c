
/* fairygui::GComponent::applyController(fairygui::GController*) */

void __thiscall fairygui::GComponent::applyController(GComponent *this,GController *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(this + 0x1e0);
                    /* try { // try from 00a71b44 to 00b71b5b has its CatchHandler @ 00a72118 */
  *(GController **)(this + 0x278) = param_1;
  if (0 < *(long *)(this + 0x1e8) - lVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(long **)(lVar2 + lVar3 * 8);
                    /* try { // try from 00a71b68 to 00b71b7f has its CatchHandler @ 00a720ec */
      (**(code **)(*plVar1 + 0x78))(plVar1,param_1);
      lVar2 = *(long *)(this + 0x1e0);
      lVar3 = lVar3 + 1;
                    /* try { // try from 00a71b84 to 00b71bb3 has its CatchHandler @ 00a720e0 */
    } while (lVar3 < *(long *)(this + 0x1e8) - lVar2 >> 3);
  }
  *(undefined8 *)(this + 0x278) = 0;
  GController::runActions(param_1);
  return;
}

