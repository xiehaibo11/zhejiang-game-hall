
/* fairygui::GComponent::getTransitionAt(int) const */

undefined8 __thiscall fairygui::GComponent::getTransitionAt(GComponent *this,int param_1)

{
                    /* try { // try from 00a71cfc to 00b71d13 has its CatchHandler @ 00a720b8 */
  return *(undefined8 *)(*(long *)(this + 0x210) + (long)param_1 * 8);
}

