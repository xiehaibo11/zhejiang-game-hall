
/* fairygui::Transition::onTweenComplete(fairygui::GTweener*) */

void __thiscall fairygui::Transition::onTweenComplete(Transition *this,GTweener *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x88);
                    /* catch() { ... } // from try @ 00a99ca8 with catch @ 00a99fe8
                       catch() { ... } // from try @ 00a99fcc with catch @ 00a99fe8 */
                    /* catch() { ... } // from try @ 00a99c88 with catch @ 00a99fec */
  *(undefined8 *)(lVar2 + 0x80) = 0;
                    /* catch() { ... } // from try @ 00a99b6c with catch @ 00a99ff0
                       catch() { ... } // from try @ 00a99fb4 with catch @ 00a99ff0 */
                    /* catch() { ... } // from try @ 00a99c6c with catch @ 00a99ff4 */
                    /* catch() { ... } // from try @ 00a99b50 with catch @ 00a99ff8 */
  *(int *)(this + 100) = *(int *)(this + 100) + -1;
  if (((*(int *)(param_1 + 0x1b4) == 1) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) &&
     (plVar1 = *(long **)(lVar2 + 0x60), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x30))();
  }
  checkAllComplete(this);
  return;
}

